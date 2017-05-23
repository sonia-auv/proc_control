//
// Created by jeremie on 11/9/16.
//

#include "ControlSystem.h"
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Geometry>
#include <proc_control/PositionTarget.h>
#include <proc_control/TargetReached.h>
#include <ldap.h>

ControlSystem::ControlSystem(const ros::NodeHandlePtr &nh): stability_count_(0)
{
  std::string base_node_name ("/proc_control/");
  nav_odometry_subs_ = nh->subscribe("/proc_navigation/odom", 100,
                                     &ControlSystem::OdomCallback, this);
  keypad_subscriber_ = nh->subscribe("/provider_keypad/Keypad", 100,
                                     &ControlSystem::KeypadCallback, this);
  target_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
  ask_position_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_ask_position", 100);
  target_position_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_target_position", 100);
  error_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_error", 100);
  target_is_reached_publisher_ = nh->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);

  set_global_target_server_ = nh->advertiseService("/proc_control/set_global_target", &ControlSystem::GlobalTargetServiceCallback, this);
//  set_local_target_server_ = nh->advertiseService("/proc_control/set_local_target", &ControlSystem::LocalTargetServiceCallback, this);
  get_target_server_ = nh->advertiseService("/proc_control/get_target", &ControlSystem::GetPositionTargetServiceCallback, this);
  enable_control_server_ = nh->advertiseService("/proc_control/enable_control", &ControlSystem::EnableControlServiceCallback, this);
  enable_thrusters_server_ = nh->advertiseService("/proc_control/enable_thrusters", &ControlSystem::EnableThrusterServiceCallback, this);
}

void ControlSystem::OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in)
{
  world_position_[0] = odo_in->pose.pose.position.x;
  world_position_[1] = odo_in->pose.pose.position.y;
  world_position_[2] = odo_in->pose.pose.position.z;
  world_position_[3] = odo_in->twist.twist.angular.x;
  world_position_[4] = odo_in->twist.twist.angular.y;
  world_position_[5] = odo_in->twist.twist.angular.z;
}

void ControlSystem::KeypadCallback(const provider_keypad::Keypad::ConstPtr &keypad_in)
{
  targeted_position_[X] += keypad_in->Up;
  targeted_position_[X] -= keypad_in->Down;
  targeted_position_[Y] += keypad_in->Right;
  targeted_position_[Y] -= keypad_in->Left;

  targeted_position_[Z] += keypad_in->Y;
  targeted_position_[Z] -= keypad_in->A;

  targeted_position_[YAW] += (keypad_in->RT / 100);
  targeted_position_[YAW] -= (keypad_in->LT / 100);

}

bool ControlSystem::GlobalTargetServiceCallback(proc_control::SetPositionTargetRequest & request,
                                                proc_control::SetPositionTargetResponse & response)
{
  targeted_position_[0] = request.X;
  targeted_position_[1] = request.Y;
  targeted_position_[2] = request.Z;
  targeted_position_[3] = request.ROLL;
  targeted_position_[4] = request.PITCH;
  targeted_position_[5] = request.YAW;
  PublishTargetedPosition();
  return true;
}

bool ControlSystem::GetPositionTargetServiceCallback(proc_control::GetPositionTargetRequest & request,
                                                     proc_control::GetPositionTargetResponse & response)
{
  response.X = targeted_position_[0];
  response.Y = targeted_position_[1];
  response.Z = targeted_position_[2];
  response.ROLL = targeted_position_[3];
  response.PITCH = targeted_position_[4];
  response.YAW = targeted_position_[5];
  PublishTargetedPosition();
  return true;
}

bool ControlSystem::EnableThrusterServiceCallback(proc_control::EnableThrustersRequest &request,
                                                  proc_control::EnableThrustersResponse &response)
{
  this->thruster_manager_.SetEnable(request.isEnable);

  return true;
}

bool ControlSystem::LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                        proc_control::SetPositionTargetResponse &response)
{
  // We simply use the current yaw to rotate the translation into the good world position and add it to the position
  Eigen::Matrix3d original_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(world_position_[YAW]),0,0));
  Eigen::Vector3d translation(request.X,request.Y,request.Z), original_position(world_position_[X],
                                                                                world_position_[Y],
                                                                                world_position_[Z]);

  Eigen::Vector3d final_pos = original_position + (original_rotation * translation);

  for( int i = 0; i < 3; i++)
  {
    targeted_position_[i] = final_pos[i];
    targeted_position_[i+3] = world_position_[i+3];
  }
  PublishTargetedPosition();
  return true;
}

void ControlSystem::Control()
{
  ROS_DEBUG("Current Position: %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
            world_position_[0], world_position_[1], world_position_[2],
            world_position_[3], world_position_[4], world_position_[5]);
  ROS_DEBUG("Target Position:  %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
            targeted_position_[0], targeted_position_[1], targeted_position_[2],
            targeted_position_[3], targeted_position_[4], targeted_position_[5]);

  proc_control::PositionTarget msg_ask_position;
  msg_ask_position.X = world_position_[0];
  msg_ask_position.Y = world_position_[1];
  msg_ask_position.Z = world_position_[2];
  msg_ask_position.ROLL = world_position_[3];
  msg_ask_position.PITCH = world_position_[4];
  msg_ask_position.YAW = world_position_[5];
  ask_position_publisher_.publish(msg_ask_position);

  proc_control::PositionTarget msg_target;
  msg_target.X = targeted_position_[0];
  msg_target.Y = targeted_position_[1];
  msg_target.Z = targeted_position_[2];
  msg_target.ROLL = targeted_position_[3];
  msg_target.PITCH = targeted_position_[4];
  msg_target.YAW = targeted_position_[5];
  target_position_publisher_.publish(msg_target);

  // Calculate the error
  std::array<double,6> error;
  for(int i = 0; i < 6; i++)
  {
    error[i] = targeted_position_[i] - world_position_[i];
    if( !enable_control_[i])
    {
      error[i] = 0.0f;
    }
  }

  // Yaw is a special case because it can loop around.
  double error_yaw = targeted_position_[YAW] - world_position_[YAW];
  if( std::fabs(error_yaw) > 180.0 )
  {
    error_yaw = std::copysign(360 - std::fabs(error_yaw), -error_yaw);
  }
  error[YAW] = error_yaw;

  proc_control::PositionTarget msg_error;
  msg_error.X = error[0];
  msg_error.Y = error[1];
  msg_error.Z = error[2];
  msg_error.ROLL = error[3];
  msg_error.PITCH = error[4];
  msg_error.YAW = error[5];
  target_position_publisher_.publish(msg_error);

  error = GetLocalError(error);

  ROS_DEBUG("Local error:  %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
           error[0], error[1], error[2], error[3], error[4], error[5]);

  // Handle the is target reached message
  proc_control::TargetReached msg_target_reached;
  msg_target_reached.target_is_reached = static_cast<unsigned char> (EvaluateTargetReached(error) ? 1 : 0);
  target_is_reached_publisher_.publish(msg_target_reached);

  // Calculate required actuation
  std::array<double,6> actuation = algo_manager_.GetActuationForError(error);
  ROS_DEBUG("Actuation :       %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
            actuation[X], actuation[Y], actuation[Z],
            actuation[ROLL], actuation[PITCH], actuation[YAW]);
  std::array<double, 3> actuation_lin = {actuation[X], actuation[Y], actuation[Z]};
  std::array<double, 3> actuation_rot = {actuation[ROLL], actuation[PITCH], actuation[YAW]};
  for( int i = 0; i < 3; i++)
  {
    if( !enable_control_[i])
    {
      actuation_lin [i] = 0.0f;
    }
    if( !enable_control_[i+3])
    {
      actuation_rot [i] = 0.0f;
    }
  }

  // Process the actuation
  std::array<double, 8> thrust_force = thruster_manager_.Commit(actuation_lin, actuation_rot);
  ROS_DEBUG("Thrust : T1: %10.4f, T2: %10.4f, T3: %10.4f, T4: %10.4f T5: %10.4f, T6: %10.4f, T7: %10.4f, T8: %10.4f",
           thrust_force[0], thrust_force[1], thrust_force[2], thrust_force[3],
           thrust_force[4], thrust_force[5], thrust_force[6], thrust_force[7]);

  ROS_DEBUG("\n");
}

bool ControlSystem::EvaluateTargetReached(const std::array<double,6> &target_error)
{
  if( algo_manager_.IsInBoundingBox(target_error[X], target_error[Y], target_error[Z], target_error[YAW]) )
  {
    stability_count_++;
  }else{
    stability_count_ = 0;
  }

  return stability_count_ > 14;
}


std::array<double,6> ControlSystem::GetLocalError(const std::array<double,6> &global_error)
{

  Eigen::Matrix3d inverse_rotation = EulerToRot(Eigen::Vector3d(DegreeToRadian(-world_position_[YAW]),0,0));

  Eigen::Vector3d go_to_pos(global_error[X], global_error[Y], global_error[Z]); ;
  Eigen::Vector3d local_conversion = inverse_rotation * go_to_pos;


  std::array<double,6> target ;
  for(int i = 0; i < 3; i++)
  {
    target[i] = local_conversion[i];
    target[i+3] = global_error[i+3];
  }
  return target;
};