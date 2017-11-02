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

  for(int i = 0; i < 6; i++) {
    enable_control_[i] = false;
  }

  navigation_odom_subscriber_ =
      nh->subscribe("/proc_navigation/odom", 100, &ProcControlNode::OdomCallback, this);
  keypad_subscriber_ =
      nh->subscribe("/provider_keypad/Keypad", 100, &ProcControlNode::KeypadCallback, this);
    kill_switch_ =
                nh->subscribe("/provider_kill_mission/kill_switch_msg", 100, &ProcControlNode::KillSwitchCallback, this);
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
  set_bounding_box_server_ =
      nh->advertiseService("/proc_control/set_bounding_box", &ProcControlNode::SetBoundingBoxServiceCallback, this);
  reset_bounding_box_server_ =
      nh->advertiseService("/proc_control/reset_bounding_box", &ProcControlNode::ResetBoundingBoxServiceCallback, this);
}

//------------------------------------------------------------------------------
//
ProcControlNode::~ProcControlNode() { }

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void ProcControlNode::Control() {
  std::lock_guard<std::mutex> lock(local_position_mutex);

  std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();
  auto diff = now_time - last_time_;

  double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count())/(double(1E9));

  if(deltaTime_s > (0.0001f) ) {
    if (trajectory_surge.IsSplineCalculated()) {
      targeted_position_[X] = trajectory_surge.GetPosition(deltaTime_s);
    }

    if (trajectory_sway.IsSplineCalculated()) {
      targeted_position_[Y] = trajectory_sway.GetPosition(deltaTime_s);
    }

    if (trajectory_heave.IsSplineCalculated()) {
      targeted_position_[Z] = trajectory_heave.GetPosition(deltaTime_s);
    }

    if (trajectory_yaw.IsSplineCalculated()) {
      targeted_position_[YAW] = trajectory_yaw.GetPosition(deltaTime_s);
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
    if (fabs(targeted_position_[YAW] - world_position_[YAW]) > 180) {
      error[YAW] = fmod(targeted_position_[YAW] + (360 - world_position_[YAW]), 360.0);
      if (error[YAW] > 180) {
        error[YAW] -= 360;
      }
    } else {
      error[YAW] = targeted_position_[YAW] - world_position_[YAW];
    }

    error = GetLocalError(error);

    proc_control::PositionTarget error_;
    error_.X = error[X];
    error_.Y = error[Y];
    error_.Z = error[Z];
    error_.PITCH = error[ROLL];
    error_.ROLL = error[PITCH];
    error_.YAW = error[YAW];

    error_publisher_.publish(error_);

    // Handle the is target reached message
    proc_control::TargetReached msg_target_reached;
    msg_target_reached.target_is_reached = static_cast<unsigned char> (EvaluateTargetReached(asked_position_) ? 1 : 0);
    target_is_reached_publisher_.publish(msg_target_reached);

    // Calculate required actuation
    std::array<double, 6> actuation = control_auv_.GetActuationForError(error);
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
    thruster_manager_.Commit(actuation_lin, actuation_rot);
  }

  proc_control::PositionTarget msg_target;
  msg_target.X = targeted_position_[X];
  msg_target.Y = targeted_position_[Y];
  msg_target.Z = targeted_position_[Z];
  msg_target.ROLL = targeted_position_[ROLL];
  msg_target.PITCH = targeted_position_[PITCH];
  msg_target.YAW = targeted_position_[YAW];
  debug_target_publisher_.publish(msg_target);

  last_time_ = now_time;
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::PublishTargetedPosition() {
  proc_control::PositionTarget msg;
  msg.X = asked_position_[X];
  msg.Y = asked_position_[Y];
  msg.Z = asked_position_[Z];
  msg.ROLL = asked_position_[ROLL];
  msg.PITCH = asked_position_[PITCH];
  msg.YAW = asked_position_[YAW];
  target_publisher_.publish(msg);
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in) {
  std::lock_guard<std::mutex> lock(local_position_mutex);

  world_position_[X] = odo_in->pose.pose.position.x;
  world_position_[Y] = odo_in->pose.pose.position.y;
  world_position_[Z] = odo_in->pose.pose.position.z;
  world_position_[ROLL] = odo_in->pose.pose.orientation.x;
  world_position_[PITCH] = odo_in->pose.pose.orientation.y;
  world_position_[YAW] = odo_in->pose.pose.orientation.z;
}

//-----------------------------------------------------------------------------
//
void ProcControlNode::KeypadCallback(const provider_keypad::Keypad::ConstPtr &keypad_in) {

    if (keypad_in->LB == 1)
        KeypadSetLocal(keypad_in);
    else
        KeypadSetGlobal(keypad_in);

    if (keypad_in->Start){

        for (int i = 0; i < 3; i++) {
            targeted_position_[i] = world_position_[i];
            targeted_position_[i + 3] = world_position_[i + 3];
        }

    }

}

void ProcControlNode::KeypadSetGlobal(const provider_keypad::Keypad::ConstPtr &keypad_in){

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

void ProcControlNode::KeypadSetLocal(const provider_keypad::Keypad::ConstPtr &keypad_in) {

    double x = 0,y = 0,z = 0,yaw = 0;

    if (keypad_in->Up == 1) x = 0.5;
    if (keypad_in->Down == 1) x = -0.5;
    if (keypad_in->Right == 1) y = 0.5;
    if (keypad_in->Left == 1) y = -0.5;
    if (keypad_in->Y == 1) z = 0.5;
    if (keypad_in->A == 1) z = -0.5;
    if (keypad_in->RT == 1) yaw = 100;
    if (keypad_in->LT == 1) yaw = 100;


    // We simply use the current yaw to rotate the translation into the good world position and add it to the position
    Eigen::Matrix3d original_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(world_position_[YAW]), 0, 0));
    Eigen::Vector3d translation(x, y, z), original_position(world_position_[X], world_position_[Y], world_position_[Z]);
    double askedRotation = 0;
    askedRotation = yaw;

    if (askedRotation < 0) {
        askedRotation += 360;
    }
    askedRotation += world_position_[YAW];


    Eigen::Vector3d final_pos = original_position + (original_rotation * translation);
    Eigen::Vector3d final_rot(world_position_[ROLL], world_position_[PITCH], fmod(askedRotation, 360.0));

    for (int i = 0; i < 3; i++){
        targeted_position_[i] = final_pos[i];
        targeted_position_[i+3] = final_rot[i];
    }

    PublishTargetedPosition();
}


void ProcControlNode::KillSwitchCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state) {

    if (!state->state) {
      if(enable_control_[X]) {
        enable_control_[X] = false;
        targeted_position_[X] = 0.0;
        asked_position_[X] = 0.0;
        trajectory_surge.Reset();
      }
      if(enable_control_[Y]) {
        enable_control_[Y] = false;
        targeted_position_[Y] = 0.0;
        asked_position_[Y] = 0.0;
        trajectory_sway.Reset();
      }
      if(enable_control_[Z]) {
        enable_control_[Z] = false;
        targeted_position_[Z] = 0.0;
        asked_position_[Z] = 0.0;
        trajectory_heave.Reset();
      }
      if(enable_control_[ROLL]) {
        enable_control_[ROLL] = false;
        targeted_position_[ROLL] = 0.0;
        asked_position_[ROLL] = 0.0;
      }
      if(enable_control_[PITCH]) {
        enable_control_[PITCH] = false;
        targeted_position_[PITCH] = 0.0;
        asked_position_[PITCH] = 0.0;
      }
      if(enable_control_[YAW]) {
        enable_control_[YAW] = false;
        targeted_position_[YAW] = 0.0;
        asked_position_[YAW] = 0.0;
        trajectory_yaw.Reset();
      }

      PublishTargetedPosition();
    }
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::GlobalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                                  proc_control::SetPositionTargetResponse &response) {
  std::lock_guard<std::mutex> lock(local_position_mutex);

  targeted_position_[X] = request.X;
  targeted_position_[Y] = request.Y;
  targeted_position_[Z] = request.Z;
  targeted_position_[ROLL] = request.ROLL;
  targeted_position_[PITCH] = request.PITCH;
  targeted_position_[YAW] = request.YAW;

  for (int i = 0; i < 6; i++) {
    asked_position_[i] = targeted_position_[i];
  }

  double error_x = targeted_position_[X] - world_position_[X];
  if (std::fabs(error_x) > 0.01) {
    trajectory_surge.SetTargetPosition(targeted_position_[X]);
    trajectory_surge.CalculateSpline(trajectory_surge.GetCurrentPosition(), 0, 0);
  }

  double error_y = targeted_position_[Y] - world_position_[Y];
  if (std::fabs(error_y) > 0.01) {
    trajectory_sway.SetTargetPosition(targeted_position_[Y]);
    trajectory_sway.CalculateSpline(trajectory_sway.GetCurrentPosition(), 0, 0);
  }

  double error_z = targeted_position_[Z] - world_position_[Z];
  if (std::fabs(error_z) > 0.01) {
    trajectory_heave.SetTargetPosition(targeted_position_[Z]);
    trajectory_heave.CalculateSpline(trajectory_heave.GetCurrentPosition(), 0, 0);
  }

  double error_yaw = targeted_position_[YAW] - world_position_[YAW];
  if (std::fabs(error_yaw) > 180.0) {
    error_yaw = fabs(360 - std::fabs(error_yaw));
  } else {
    error_yaw = std::fabs(error_yaw);
  }

  if (error_yaw > 0.5) {
    trajectory_yaw.SetTargetPosition(targeted_position_[YAW]);
    trajectory_yaw.CalculateSpline(trajectory_yaw.GetCurrentPosition(), 0, 0);
  }

  PublishTargetedPosition();
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
  if (request.X != request.DONT_CARE) {
    if (request.X == request.ENABLE) {
      enable_control_[X] = true;
      targeted_position_[X] = world_position_[X];
      asked_position_[X] = world_position_[X];
      trajectory_surge.Reset();
    } else {
      enable_control_[X] = false;
      targeted_position_[X] = 0.0;
      asked_position_[X] = 0.0;
      trajectory_surge.Reset();
    }
  }

  if (request.Y != request.DONT_CARE) {
    if (request.Y == request.ENABLE) {
      enable_control_[Y] = true;
      targeted_position_[Y] = world_position_[Y];
      asked_position_[Y] = world_position_[Y];
      trajectory_sway.Reset();
    } else {
      enable_control_[Y] = false;
      targeted_position_[Y] = 0.0;
      asked_position_[Y] = 0.0;
      trajectory_sway.Reset();
    }
  }

  if (request.Z != request.DONT_CARE) {
    if (request.Z == request.ENABLE) {
      enable_control_[Z] = true;
      targeted_position_[Z] = world_position_[Z];
      asked_position_[Z] = world_position_[Z];
      trajectory_heave.Reset();
    } else {
      enable_control_[Z] = false;
      targeted_position_[Z] = 0.0;
      asked_position_[Z] = 0.0;
      trajectory_heave.Reset();
    }
  }

  if (request.ROLL != request.DONT_CARE) {
    if (request.ROLL == request.ENABLE) {
      enable_control_[ROLL] = true;
      targeted_position_[ROLL] = world_position_[ROLL];
      asked_position_[ROLL] = world_position_[ROLL];
    } else {
      enable_control_[ROLL] = false;
      targeted_position_[ROLL] = 0.0;
      asked_position_[ROLL] = 0.0;
    }
  }

  if (request.PITCH != request.DONT_CARE) {
    if (request.PITCH == request.ENABLE) {
      enable_control_[PITCH] = true;
      targeted_position_[PITCH] = world_position_[PITCH];
      asked_position_[PITCH] = world_position_[PITCH];
    } else {
      enable_control_[PITCH] = false;
      targeted_position_[PITCH] = 0.0;
      asked_position_[PITCH] = 0.0;
    }
  }

  if (request.YAW != request.DONT_CARE) {
    if (request.YAW == request.ENABLE) {
      enable_control_[YAW] = true;
      targeted_position_[YAW] = world_position_[YAW];
      asked_position_[YAW] = world_position_[YAW];
      trajectory_yaw.Reset();
    } else {
      enable_control_[YAW] = false;
      targeted_position_[YAW] = 0.0;
      asked_position_[YAW] = 0.0;
      trajectory_yaw.Reset();
    }
  }

  PublishTargetedPosition();

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

  for (int i = 0; i < 6; i++) {
    asked_position_[i] = targeted_position_[i];
  }

  PublishTargetedPosition();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                   proc_control::SetBoundingBoxResponse &response) {
  std::array<double, 6> NewBBox;
  NewBBox[0] = request.X;
  NewBBox[1] = request.Y;
  NewBBox[2] = request.Z;
  NewBBox[3] = request.ROLL;
  NewBBox[4] = request.PITCH;
  NewBBox[5] = request.YAW;

  control_auv_.SetNewBoundingBox(NewBBox);
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                   proc_control::ResetBoundingBoxResponse &response) {
  control_auv_.ResetBoundingBox();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                                 proc_control::SetPositionTargetResponse &response) {
  std::lock_guard<std::mutex> lock(local_position_mutex);
  // We simply use the current yaw to rotate the translation into the good world position and add it to the position
  Eigen::Matrix3d original_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(world_position_[YAW]), 0, 0));
  Eigen::Vector3d translation(request.X, request.Y, request.Z), original_position(world_position_[X],
                                                                                  world_position_[Y],
                                                                                  world_position_[Z]);
  double askedRotation = 0;

  if (request.YAW > -990.0) {
    printf("Should not pass here with request at -1000 : %f\n", request.YAW);
    askedRotation = request.YAW;

    if (askedRotation < 0) {
        askedRotation += 360;
    }
    askedRotation += world_position_[YAW];
  } else {
    printf("Should pass here with request at -1000 : %f\n", request.YAW);
    askedRotation = asked_position_[YAW];
  }

  Eigen::Vector3d final_pos = original_position + (original_rotation * translation);
  Eigen::Vector3d final_rot(world_position_[ROLL], world_position_[PITCH], fmod(askedRotation, 360.0));

  /*for (int i = 0; i < 3; i++) {
      targeted_position_[i] = final_pos[i];
      targeted_position_[i + 3] = final_rot[i];
  }*/
  if(request.X > -800.0)
    targeted_position_[0] = final_pos[0];
  else
    targeted_position_[0] = asked_position_[0];

  if(request.Y > -800.0)
    targeted_position_[1] = final_pos[1];
  else
    targeted_position_[1] = asked_position_[1];

  if(request.Z > -800.0)
    targeted_position_[2] = final_pos[2];
  else
    targeted_position_[2] = asked_position_[2];

  if(request.ROLL > -800.0)
    targeted_position_[3] = final_rot[0];
  else
    targeted_position_[3] = asked_position_[3];

  if(request.PITCH > -800.0)
    targeted_position_[4] = final_rot[1];
  else
    targeted_position_[4] = asked_position_[4];

  if (request.YAW > -800.0) {
    targeted_position_[5] = final_rot[2];
    printf("What!!! : %f\n", request.YAW);
  } else {
    targeted_position_[5] = asked_position_[5];
  }

  for (int i = 0; i < 6; i++) {
    asked_position_[i] = targeted_position_[i];
  }

  trajectory_surge.SetTargetPosition(targeted_position_[X]);
  trajectory_surge.CalculateSpline(trajectory_surge.GetCurrentPosition(), 0, 0);

  trajectory_sway.SetTargetPosition(targeted_position_[Y]);
  trajectory_sway.CalculateSpline(trajectory_sway.GetCurrentPosition(), 0, 0);

  trajectory_heave.SetTargetPosition(targeted_position_[Z]);
  trajectory_heave.CalculateSpline(trajectory_heave.GetCurrentPosition(), 0, 0);

  trajectory_yaw.SetTargetPosition(targeted_position_[YAW]);
  trajectory_yaw.CalculateSpline(trajectory_yaw.GetCurrentPosition(), 0, 0);

  PublishTargetedPosition();
  return true;
}

//-----------------------------------------------------------------------------
//
bool ProcControlNode::EvaluateTargetReached(const std::array<double, 6> &target_error) {

      std::array<double, 6> error;

      error[0] = target_error[X] - world_position_[X];
      error[1] = target_error[Y] - world_position_[Y];
      error[2] = target_error[Z] - world_position_[Z];
      error[3] = target_error[ROLL] - world_position_[ROLL];
      error[4] = target_error[PITCH] - world_position_[PITCH];
      error[5] = target_error[YAW] - world_position_[YAW];

      if (control_auv_.IsInBoundingBox(error)){
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

  Eigen::Vector3d go_to_pos(global_error[X], global_error[Y], global_error[Z]);
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
