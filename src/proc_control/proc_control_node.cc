/**
 * \file	proc_control_node.cc
 * \author	Jeremie St-Jules <jeremie.st.jules.prevost@gmail.com>
 * \coauthor Francis Masse <francis.masse05@gmail.com>
 * \date	10/17/16
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. AUV All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. AUV software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. AUV software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. AUV software. If not, see <http://www.gnu.org/licenses/>.
 */

#include "proc_control_node.h"
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Geometry>
#include <proc_control/PositionTarget.h>
#include <proc_control/TargetReached.h>
#include <ldap.h>

namespace proc_control {

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
ProcControlNode::ProcControlNode(const ros::NodeHandlePtr &nh) :
    nh_(nh),
    stability_count_(0) {
  navigation_odom_subscriber_ =
      nh->subscribe("/proc_navigation/odom", 100, &ProcControlNode::OdomCallback, this);
  keypad_subscriber_ =
      nh->subscribe("/provider_keypad/Keypad", 100, &ProcControlNode::KeypadCallback, this);
  target_publisher_ =
      nh->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
  debug_target_publisher_ =
      nh->advertise<proc_control::PositionTarget>("/proc_control/debug_current_target", 100);
  error_publisher_ =
      nh->advertise<proc_control::PositionTarget>("/proc_control/current_error", 100);
  target_is_reached_publisher_ =
      nh->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);
  set_global_target_server_ =
      nh->advertiseService("/proc_control/set_global_target", &ProcControlNode::GlobalTargetServiceCallback, this);
  set_local_target_server_ =
      nh->advertiseService("/proc_control/set_local_target", &ProcControlNode::LocalTargetServiceCallback, this);
  get_target_server_ =
      nh->advertiseService("/proc_control/get_target", &ProcControlNode::GetPositionTargetServiceCallback, this);
  enable_control_server_ =
      nh->advertiseService("/proc_control/enable_control", &ProcControlNode::EnableControlServiceCallback, this);
  enable_thrusters_server_ =
      nh->advertiseService("/proc_control/enable_thrusters", &ProcControlNode::EnableThrusterServiceCallback, this);
  clear_waypoint_server_ =
      nh->advertiseService("/proc_control/clear_waypoint", &ProcControlNode::ClearWaypointServiceCallback, this);
}

//------------------------------------------------------------------------------
//
ProcControlNode::~ProcControlNode() { }

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void ProcControlNode::Control() {
//  printf("Current Position: %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f \n",
//         world_position_[0], world_position_[1], world_position_[2],
//         world_position_[3], world_position_[4], world_position_[5]);
//  printf("Target Position:  %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f \n",
//         targeted_position_[0], targeted_position_[1], targeted_position_[2],
//         targeted_position_[3], targeted_position_[4], targeted_position_[5]);
  std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();
  auto diff = now_time - last_time_;

  double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count())/(double(1E9));

  if(deltaTime_s > (0.0001f) ) {
    proc_control::PositionTarget msg_target;
    msg_target.X = targeted_position_[0];
    msg_target.Y = targeted_position_[1];
    msg_target.Z = targeted_position_[2];
    msg_target.ROLL = targeted_position_[3];
    msg_target.PITCH = targeted_position_[4];
    msg_target.YAW = targeted_position_[5];
    debug_target_publisher_.publish(msg_target);

    if (trajectory_yaw.IsSplineCalculated()) {
      targeted_position_[YAW] = trajectory_yaw.GetPosition(world_position_[YAW], deltaTime_s);
    }

    // Calculate the error
    std::array<double, 6> error;
    for (int i = 0; i < 6; i++) {
      error[i] = targeted_position_[i] - world_position_[i];
      if (!enable_control_[i]) {
        error[i] = 0.0f;
      }
    }

    // Yaw is a special case because it can loop around.
    double error_yaw = targeted_position_[YAW] - world_position_[YAW];
//    if (std::fabs(error_yaw) > 180.0) {
//      error_yaw = std::copysign(360 - std::fabs(error_yaw), -error_yaw);
//    }
    error[YAW] = error_yaw;

    error = GetLocalError(error);

    proc_control::PositionTarget error_;
    error_.X = error[0];
    error_.Y = error[1];
    error_.Z = error[2];
    error_.PITCH = error[3];
    error_.ROLL = error[4];
    error_.YAW = error[5];

    error_publisher_.publish(error_);
  //  printf("Local error: %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f \n",
  //         error[0], error[1], error[2], error[3], error[4], error[5]);

    // Handle the is target reached message
    proc_control::TargetReached msg_target_reached;
    msg_target_reached.target_is_reached = static_cast<unsigned char> (EvaluateTargetReached(error) ? 1 : 0);
    target_is_reached_publisher_.publish(msg_target_reached);

    // Calculate required actuation
    std::array<double, 6> actuation = algorithm_manager_.GetActuationForError(error);
  //  printf("Actuation : %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f \n",
  //         actuation[X], actuation[Y], actuation[Z],
  //         actuation[ROLL], actuation[PITCH], actuation[YAW]);
    std::array<double, 3> actuation_lin = {actuation[X], actuation[Y], actuation[Z]};
    std::array<double, 3> actuation_rot = {actuation[ROLL], actuation[PITCH], actuation[YAW]};
    for (int i = 0; i < 3; i++) {
      if (!enable_control_[i]) {
        actuation_lin[i] = 0.0f;
      }
      if (!enable_control_[i + 3]) {
        actuation_rot[i] = 0.0f;
      }
    }

    // Process the actuation
    std::array<double, 8> thrust_force = thruster_manager_.Commit(actuation_lin, actuation_rot);
  //  printf("Thrust : T1: %10.4f, T2: %10.4f, T3: %10.4f, T4: %10.4f T5: %10.4f, T6: %10.4f, T7: %10.4f, T8: %10.4f \n",
  //         thrust_force[0], thrust_force[1], thrust_force[2], thrust_force[3],
  //         thrust_force[4], thrust_force[5], thrust_force[6], thrust_force[7]);
  }

  last_time_ = now_time;//nowTime;
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::PublishTargetedPosition() {
  proc_control::PositionTarget msg;
  msg.X = targeted_position_[0];
  msg.Y = targeted_position_[1];
  msg.Z = targeted_position_[2];
  msg.ROLL = targeted_position_[3];
  msg.PITCH = targeted_position_[4];
  msg.YAW = targeted_position_[5];
  target_publisher_.publish(msg);
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in) {
  world_position_[0] = odo_in->pose.pose.position.x;
  world_position_[1] = odo_in->pose.pose.position.y;
  world_position_[2] = odo_in->pose.pose.position.z;
  world_position_[3] = odo_in->pose.pose.orientation.x;
  world_position_[4] = odo_in->pose.pose.orientation.y;
  world_position_[5] = odo_in->pose.pose.orientation.z;
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::KeypadCallback(const provider_keypad::Keypad::ConstPtr &keypad_in) {
  targeted_position_[X] += keypad_in->Up;
  targeted_position_[X] -= keypad_in->Down;
  targeted_position_[Y] += keypad_in->Right;
  targeted_position_[Y] -= keypad_in->Left;

  targeted_position_[Z] += keypad_in->Y;
  targeted_position_[Z] -= keypad_in->A;

  targeted_position_[YAW] += (keypad_in->RT / 100);
  targeted_position_[YAW] -= (keypad_in->LT / 100);

  if(targeted_position_[YAW] < 0) {
    targeted_position_[YAW] = 360 + targeted_position_[YAW];
  }

  if(targeted_position_[YAW] >= 360) {
    targeted_position_[YAW] = 360 - targeted_position_[YAW];
  }

  PublishTargetedPosition();
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::GlobalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                                  proc_control::SetPositionTargetResponse &response) {
  targeted_position_[0] = request.X;
  targeted_position_[1] = request.Y;
  targeted_position_[2] = request.Z;
  targeted_position_[3] = request.ROLL;
  targeted_position_[4] = request.PITCH;
  targeted_position_[5] = request.YAW;

  double error_yaw = targeted_position_[YAW] - world_position_[YAW];
  if (std::fabs(error_yaw) > 180.0) {
    error_yaw = fabs(360 - std::fabs(error_yaw));
  } else {
    error_yaw = fabs(error_yaw);
  }

  if (error_yaw > 5) {
    trajectory_yaw.SetTargetPosition(targeted_position_[YAW]);
    trajectory_yaw.CalculateSpline(world_position_[YAW], 0, 0);
  }

//  PublishTargetedPosition();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::GetPositionTargetServiceCallback(proc_control::GetPositionTargetRequest &request,
                                                       proc_control::GetPositionTargetResponse &response) {
  response.X = targeted_position_[X];
  response.Y = targeted_position_[Y];
  response.Z = targeted_position_[Z];
  response.ROLL = targeted_position_[ROLL];
  response.PITCH = targeted_position_[PITCH];
  response.YAW = targeted_position_[YAW];

  PublishTargetedPosition();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::EnableControlServiceCallback(proc_control::EnableControlRequest &request,
                                                   proc_control::EnableControlResponse &response) {
  // If don't care, reuse same value, else check if enable or not.
  enable_control_[0] = (request.X == request.DONT_CARE) ?
                       (enable_control_[0]) : (request.X == request.ENABLE);
  enable_control_[1] = (request.Y == request.DONT_CARE) ?
                       (enable_control_[1]) : (request.Y == request.ENABLE);
  enable_control_[2] = (request.Z == request.DONT_CARE) ?
                       (enable_control_[2]) : (request.Z == request.ENABLE);
  enable_control_[3] = (request.ROLL == request.DONT_CARE) ?
                       (enable_control_[3]) : (request.ROLL == request.ENABLE);
  enable_control_[4] = (request.PITCH == request.DONT_CARE) ?
                       (enable_control_[4]) : (request.PITCH == request.ENABLE);
  enable_control_[5] = (request.YAW == request.DONT_CARE) ? (
      enable_control_[5]) : (request.YAW == request.ENABLE);

  std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
  std::cout << "Active control: ";
  for (int i = 0; i < 6; i++) {
    std::cout << tmp[i] + " : " + (enable_control_[i] ? "true" : "false") + "\t";
  }
  std::cout << std::endl;
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::EnableThrusterServiceCallback(proc_control::EnableThrustersRequest &request,
                                                    proc_control::EnableThrustersResponse &response) {
  this->thruster_manager_.SetEnable(request.isEnable);

  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::ClearWaypointServiceCallback(proc_control::ClearWaypointRequest &request,
                                  proc_control::ClearWaypointResponse &response)
{
  // We simply use the current yaw to rotate the translation into the good world position and add it to the position
  for (int i = 0; i < 3; i++) {
    targeted_position_[i] = world_position_[i];
    targeted_position_[i + 3] = world_position_[i + 3];
  }

  PublishTargetedPosition();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                                 proc_control::SetPositionTargetResponse &response) {
    // We simply use the current yaw to rotate the translation into the good world position and add it to the position
    Eigen::Matrix3d original_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(world_position_[YAW]), 0, 0));
    Eigen::Vector3d translation(request.X, request.Y, request.Z), original_position(world_position_[X],
                                                                                    world_position_[Y],
                                                                                    world_position_[Z]);

    double rot = request.YAW;

    if (rot < 0){

        rot += 360;

    }

    rot += world_position_[YAW];

    Eigen::Vector3d final_pos = original_position + (original_rotation * translation);
    Eigen::Vector3d final_rot(world_position_[ROLL], world_position_[PITCH], fmod(rot, 360.0));

    for (int i = 0; i < 3; i++) {
        targeted_position_[i] = final_pos[i];
        targeted_position_[i + 3] = final_rot[i];
    }

    PublishTargetedPosition();
    return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::EvaluateTargetReached(const std::array<double, 6> &target_error) {
  if (algorithm_manager_.IsInBoundingBox(target_error[X], target_error[Y], target_error[Z], target_error[YAW])) {
    stability_count_++;
  } else {
    stability_count_ = 0;
  }

  return stability_count_ > 14;
}

//-----------------------------------------------------------------------------
//
std::array<double, 6> ProcControlNode::GetLocalError(const std::array<double, 6> &global_error) {

  Eigen::Matrix3d inverse_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(-world_position_[YAW]), 0, 0));

  Eigen::Vector3d go_to_pos(global_error[X], global_error[Y], global_error[Z]);;
  Eigen::Vector3d local_conversion = inverse_rotation * go_to_pos;

  std::array<double, 6> target;
  for (int i = 0; i < 3; i++) {
    target[i] = local_conversion[i];
    target[i + 3] = global_error[i + 3];
  }
  return target;
};

//-----------------------------------------------------------------------------
//
Eigen::Matrix3d ProcControlNode::EulerToRot(const Eigen::Vector3d &vec) {
  Eigen::Matrix3d m;
  m = Eigen::AngleAxisd(vec.x(), Eigen::Vector3d::UnitZ())
      * Eigen::AngleAxisd(vec.y(), Eigen::Vector3d::UnitY())
      * Eigen::AngleAxisd(vec.z(), Eigen::Vector3d::UnitX());
  return m;
}

} // namespace proc_control