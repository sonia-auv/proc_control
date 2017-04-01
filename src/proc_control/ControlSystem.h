//
// Created by jeremie on 11/9/16.
//

#ifndef PROC_CONTROL_CONTROL_SYSTEM_H
#define PROC_CONTROL_CONTROL_SYSTEM_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>

#include <proc_control/PositionTarget.h>
#include <eigen3/Eigen/Eigen>

#include "proc_control/EnableControl.h"
#include "proc_control/thruster/thruster_manager.h"
#include "proc_control/algorithm/AlgorithmManager.h"
#include "proc_control/SetPositionTarget.h"
#include "proc_control/GetPositionTarget.h"

#define DEGREE_TO_RAD M_PI/180.0f

class ControlSystem {
  public:
  // X Y Z ROLL PITCH YAW
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

  bool EvaluateTargetReached(const std::array<double,6> &target_error);

  std::array<double,6> GetLocalError(const std::array<double,6> &global_error);

  inline double DegreeToRadian(const double &degree) {
    return degree * DEGREE_TO_RAD;
  }

  inline Eigen::Matrix3d EulerToRot(const Eigen::Vector3d &vec) {
    Eigen::Matrix3d m;
    m = Eigen::AngleAxisd(vec.x(), Eigen::Vector3d::UnitZ())
        * Eigen::AngleAxisd(vec.y(), Eigen::Vector3d::UnitY())
        * Eigen::AngleAxisd(vec.z(), Eigen::Vector3d::UnitX());
    return m;
  }


  AlgorithmManager algo_manager_;
  ThrusterManager thruster_manager_;
  ros::Subscriber nav_odometry_subs_, target_odometry_subs_;
  ros::Publisher target_publisher_, target_is_reached_publisher_;
  ros::ServiceServer set_global_target_server_, set_local_target_server_, get_target_server_, enable_control_server_;
  OdometryInfo world_position_ = { {0.0, 0.0, 0.0, 0.0, 0.0, 0.0} };
  OdometryInfo targeted_position_ = { {0.0, 0.0, 0.0, 0.0, 0.0, 0.0} };
  std::array<bool, 6> enable_control_;

  int stability_count_;

};

inline bool ControlSystem::EnableControlServiceCallback(
    proc_control::EnableControlRequest &request,
    proc_control::EnableControlResponse &response) {
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

inline void ControlSystem::PublishTargetedPosition() {
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
