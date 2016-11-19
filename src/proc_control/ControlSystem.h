//
// Created by jeremie on 11/9/16.
//

#ifndef PROC_CONTROL_CONTROL_SYSTEM_H
#define PROC_CONTROL_CONTROL_SYSTEM_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>


#include <lib_atlas/ros/service_server_manager.h>
#include <proc_control/PositionTarget.h>

#include "proc_control/EnableControl.h"
#include "proc_control/thruster/thruster_manager.h"
#include "proc_control/algorithm/AlgorithmManager.h"
#include "proc_control/SetPositionTarget.h"
#include "proc_control/GetPositionTarget.h"

class ControlSystem : public atlas::ServiceServerManager<ControlSystem> {
  public:
  typedef std::array<double, 6> OdometryInfo;

  ControlSystem(const ros::NodeHandlePtr &nh);

  void Control();

  private:

  void OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in);
  bool EnableControlServiceCallback(proc_control::EnableControlRequest &request,
                                proc_control::EnableControlResponse &response);

  bool GetPositionTargetServiceCallback(proc_control::GetPositionTargetRequest & request,
                                   proc_control::GetPositionTargetResponse & response);

  bool GlobalTargetServiceCallback(proc_control::SetPositionTargetRequest & request,
                                   proc_control::SetPositionTargetResponse & response);
  bool LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                          proc_control::SetPositionTargetResponse &response);
  void PublishTargetedPosition();
  void SetTarget(OdometryInfo &array,
                 double x, double y, double z,
                 double roll, double pitch, double yaw);

  AlgorithmManager algo_manager_;
  ThrusterManager thruster_manager_;
  ros::Subscriber nav_odometry_subs_, target_odometry_subs_;
  ros::Publisher target_publisher_;
  OdometryInfo world_position_, targeted_position_;
  std::array<bool, 6> enable_control_;

};

inline void ControlSystem::SetTarget(OdometryInfo &array_out,
                                     double x, double y, double z,
                                     double roll, double pitch, double yaw)
{

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

inline void ControlSystem::PublishTargetedPosition()
{
  proc_control::PositionTarget msg;
  msg.X = targeted_position_[0];
  msg.Y = targeted_position_[1];
  msg.Z = targeted_position_[2];
  msg.ROLL = targeted_position_[3];
  msg.PITCH = targeted_position_[4];
  msg.YAW = targeted_position_[5];
  target_publisher_.publish(msg);
}
#endif //PROC_CONTROL_CONTROL_SYSTEM_H
