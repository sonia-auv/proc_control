//
// Created by jeremie on 11/9/16.
//

#include "ControlSystem.h"
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Geometry>
#include <lib_atlas/maths/matrix.h>
#include <proc_control/PositionTarget.h>
#include <proc_control/TargetReached.h>

ControlSystem::ControlSystem(const ros::NodeHandlePtr &nh):
    atlas::ServiceServerManager<ControlSystem>(), stability_count_(0)
{
  std::string base_node_name ("/proc_control/");
  nav_odometry_subs_ = nh->subscribe("/proc_navigation/odom", 100,
                                     &ControlSystem::OdomCallback, this);
  target_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
  target_is_reached_publisher_ = nh->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);

  RegisterService<proc_control::SetPositionTarget>(base_node_name + "set_global_target",
                                                   &ControlSystem::GlobalTargetServiceCallback, *this);
  RegisterService<proc_control::SetPositionTarget>(base_node_name + "set_local_target",
                                                   &ControlSystem::LocalTargetServiceCallback, *this);

  RegisterService<proc_control::GetPositionTarget>(base_node_name + "get_target",
                                                   &ControlSystem::GetPositionTargetServiceCallback, *this);

  RegisterService<proc_control::EnableControl>(base_node_name + "enable_control",
                                               &ControlSystem::EnableControlServiceCallback, *this);
}

void ControlSystem::OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in)
{
  world_position_[0] = odo_in->twist.twist.linear.x;
  world_position_[1] = odo_in->twist.twist.linear.y;
  world_position_[2] = odo_in->twist.twist.linear.z;
  world_position_[3] = odo_in->twist.twist.angular.x;
  world_position_[4] = odo_in->twist.twist.angular.y;
  world_position_[5] = odo_in->twist.twist.angular.z;
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

bool ControlSystem::LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                        proc_control::SetPositionTargetResponse &response)
{
  // We simply use the current yaw to rotate the translation into the good world position and add it to the position
  Eigen::Matrix3d original_rotation = atlas::EulerToRot(Eigen::Vector3d(atlas::DegreeToRadian(world_position_[YAW]),0,0));
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

  ROS_INFO("Current Position: %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
            world_position_[0], world_position_[1], world_position_[2],
            world_position_[3], world_position_[4], world_position_[5]);
  ROS_INFO("Target Position:  %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
            targeted_position_[0], targeted_position_[1], targeted_position_[2],
            targeted_position_[3], targeted_position_[4], targeted_position_[5]);

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

  error = GetLocalError(error);

  ROS_INFO("Local error:  %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
           error[0], error[1], error[2], error[3], error[4], error[5]);

  // Handle the is target reached message
  proc_control::TargetReached msg_target_reached;
  msg_target_reached.target_is_reached = static_cast<unsigned char> (EvaluateTargetReached(error) ? 1 : 0);
  target_is_reached_publisher_.publish(msg_target_reached);


  // Calculate required actuation
  std::array<double,6> actuation = algo_manager_.GetActuationForError(error);
  ROS_INFO("Actuation :       %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f",
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
  std::array<double, 6> thrust_force = thruster_manager_.Commit(actuation_lin,actuation_rot);
  ROS_INFO("Thrust :    Port: %10.4f, Startboard: %10.4f, "
               "FrontHeading: %10.4f, BackHeading: %10.4f, "
               "FrontDepth: %10.4f, BackDepth:%10.4f",
           thrust_force[0], thrust_force[1], thrust_force[2],
           thrust_force[3], thrust_force[4], thrust_force[5]);

  ROS_INFO("\n");
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

  Eigen::Matrix3d inverse_rotation = atlas::EulerToRot(Eigen::Vector3d(atlas::DegreeToRadian(-world_position_[YAW]),0,0));

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