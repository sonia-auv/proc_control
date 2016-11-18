//
// Created by jeremie on 11/9/16.
//

#ifndef PROC_CONTROL_CONTROL_SYSTEM_H
#define PROC_CONTROL_CONTROL_SYSTEM_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>

#include <lib_atlas/ros/service_server_manager.h>

#include "proc_control/EnableControl.h"
#include "proc_control/thruster/thruster_manager.h"
#include "proc_control/algorithm/AlgorithmManager.h"

class ControlSystem : public atlas::ServiceServerManager<ControlSystem> {
  public:
  typedef std::array<double, 3> OdometryInfo;

  ControlSystem(const ros::NodeHandlePtr &nh);

  void Control();

  private:

  void OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in);
  void EnableControlServiceCallback(const proc_control::EnableControlRequest &request,
                                const proc_control::EnableControlResponse &response);
  void GlobalTargetCallback(const nav_msgs::Odometry::ConstPtr &target_in);
  void LocalTargetCallback(const nav_msgs::Odometry::ConstPtr &target_in);

  void SetTarget(OdometryInfo &array,
                 double x, double y, double z,
                 double roll, double pitch, double yaw);

  AlgorithmManager algo_manager_;
  ThrusterManager thruster_manager_;
  ros::Subscriber nav_odometry_subs_, target_odometry_subs_;
  OdometryInfo world_position_, targeted_position_;
  std::array<bool, 6> enable_control_;

};

inline void ControlSystem::SetTarget(OdometryInfo &array_out,
                                     double x, double y, double z,
                                     double roll, double pitch, double yaw)
{
  array_out[0] = x;
  array_out[1] = y;
  array_out[2] = z;
  array_out[3] = roll;
  array_out[4] = pitch;
  array_out[5] = yaw;
}
inline void ControlSystem::EnableControlServiceCallback(
    const proc_control::EnableControlRequest &request,
    const proc_control::EnableControlResponse &response)
{
  std::copy(request.position.begin(), request.position.end(), enable_control_.begin());
  std::copy(request.direction.begin(), request.direction.end(), enable_control_.begin()+3);
}

#endif //PROC_CONTROL_CONTROL_SYSTEM_H
