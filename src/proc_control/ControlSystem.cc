//
// Created by jeremie on 11/9/16.
//

#include "ControlSystem.h"
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Geometry>
#include <lib_atlas/maths/matrix.h>
#include <proc_control/PositionTarget.h>

ControlSystem::ControlSystem(const ros::NodeHandlePtr &nh):
    atlas::ServiceServerManager<ControlSystem>()
{
  std::string base_node_name ("/proc_control/");
  nav_odometry_subs_ = nh->subscribe("/proc_navigation/odom", 100,
                                     &ControlSystem::OdomCallback, this);
  target_publisher_ = nh->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);

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
  world_position_[3] = atlas::RadianToDegree(odo_in->twist.twist.angular.x);
  world_position_[4] = atlas::RadianToDegree(odo_in->twist.twist.angular.y);
  world_position_[5] = atlas::RadianToDegree(odo_in->twist.twist.angular.z);
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
  Eigen::Matrix3d original_rotation = atlas::EulerToRot(Eigen::Vector3d(0,0,atlas::DegreeToRadian(world_position_[5])));
  Eigen::Vector3d translation(request.X,request.Y,request.Z), original_position(world_position_[0],
                                                                                world_position_[1],
                                                                                world_position_[2]);
  Eigen::Vector3d final_pos = original_position + (original_rotation*translation);

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
  std::array<double,6> error;
  for(int i = 0; i < 6; i++)
  {
    error[i] = targeted_position_[i] - world_position_[i];
    if( !enable_control_[i])
    {
      error[i] = 0.0f;
    }
  }
  std::array<double,6> actuation = algo_manager_.GetActuationForError(error);
  std::array<double, 3> actuation_lin = {actuation[0], actuation[1], actuation[2]};
  std::array<double, 3> actuation_rot = {actuation[3], actuation[4], actuation[5]};

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

  thruster_manager_.Commit(actuation_lin,actuation_rot);

}