//
// Created by jeremie on 11/9/16.
//

#include "ControlSystem.h"
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Geometry>
#include <lib_atlas/maths/matrix.h>
#include <proc_control/SetGlobalTarget.h>
#include <proc_control/SetLocalTarget.h>
#include <proc_control/EnableControl.h>

ControlSystem::ControlSystem(const ros::NodeHandlePtr &nh):
    atlas::ServiceServerManager<ControlSystem>()
{
  std::string base_node_name ("/proc_control/");
  nav_odometry_subs_ = nh->subscribe("/proc_navigation/odom", 100,
                                &ControlSystem::OdomCallback, this);
  target_odometry_subs_ = nh->subscribe("/controller_mission/global_target", 100,
                                   &ControlSystem::GlobalTargetCallback, this);
//  RegisterService<proc_control::EnableControl>(base_node_name + "enable_control",
//                               &ControlSystem::EnableControlServiceCallback, *this);



}

void ControlSystem::OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in)
{
  SetTarget(world_position_,
            odo_in->twist.twist.linear.x,
            odo_in->twist.twist.linear.y,
            odo_in->twist.twist.linear.z,
            odo_in->twist.twist.angular.x,
            odo_in->twist.twist.angular.y,
            odo_in->twist.twist.angular.z);
}

void ControlSystem::GlobalTargetCallback(const nav_msgs::Odometry::ConstPtr &target_in)
{
  SetTarget(targeted_position_,
            target_in->twist.twist.linear.x,
            target_in->twist.twist.linear.y,
            target_in->twist.twist.linear.z,
            target_in->twist.twist.angular.x,
            target_in->twist.twist.angular.y,
            target_in->twist.twist.angular.z);
}

void ControlSystem::LocalTargetCallback(const nav_msgs::Odometry::ConstPtr &target_in)
{
//  Eigen::Translation3d target_translation (target_in->twist.twist.linear.x,
//                               target_in->twist.twist.linear.y,
//                               target_in->twist.twist.linear.z);
//  Eigen::Quaterniond target_quat = atlas::EulerToQuat(Eigen::Vector3d (target_in->twist.twist.angular.x,
//                                                                    target_in->twist.twist.angular.y,
//                                                                    target_in->twist.twist.angular.z));
//  Eigen::Transform<double,3,Eigen::Affine> target_position = target_translation * target_quat;
//
//
//  Eigen::Translation3d current_position_linear(world_position_[0],world_position_[1],world_position_[2]);
//  Eigen::Quaterniond current_quat = atlas::EulerToQuat(Eigen::Vector3d (world_position_[3],
//                                                                                 world_position_[4],
//                                                                                 world_position_[5]));
//  Eigen::Transform<double,3,Eigen::Affine> world_position = current_position_linear * current_quat;

}

void ControlSystem::Control()
{
  std::array<double,6> error;
//  std::array<double, 3> linear_target, rotationnal_target;
  for(int i = 0; i < 6; i++)
  {
    error[i] = targeted_position_[i] - world_position_[i];
  }

}