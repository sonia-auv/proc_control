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
  bool EnableControlServiceCallback(proc_control::EnableControlRequest &request,
                                proc_control::EnableControlResponse &response);
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

inline bool ControlSystem::EnableControlServiceCallback(
    proc_control::EnableControlRequest &request,
    proc_control::EnableControlResponse &response)
{
  // If don't care, reuse same value, else check if enable or not.
  enable_control_[0] = (request.X == request.DONT_CARE) ? (enable_control_[0]) : (request.X == request.ENABLE);
  enable_control_[1] = (request.Y == request.DONT_CARE) ? (enable_control_[1]) : (request.Y == request.ENABLE);
  enable_control_[2] = (request.Z == request.DONT_CARE) ? (enable_control_[2]) : (request.Z == request.ENABLE);
  enable_control_[3] = (request.ROLL == request.DONT_CARE) ? (enable_control_[3]) : (request.ROLL == request.ENABLE );
  enable_control_[4] = (request.PITCH == request.DONT_CARE) ? (enable_control_[4]) : (request.PITCH == request.ENABLE );
  enable_control_[5] = (request.YAW == request.DONT_CARE) ? (enable_control_[5]) : (request.YAW == request.ENABLE );
  std::vector<std::string> tmp {"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
  std::cout << "Active control: ";
  for(int i = 0; i < 6; i ++)
  {
    std::cout  << tmp[i] + " : " + (enable_control_[i] ? "true":"false") + "\t";
  }
  std::cout << std::endl;
  return true;
}

#endif //PROC_CONTROL_CONTROL_SYSTEM_H
