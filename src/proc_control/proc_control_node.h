/**
 * \file	proc_control_node.h
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

#ifndef PROC_CONTROL_CONTROL_SYSTEM_H
#define PROC_CONTROL_CONTROL_SYSTEM_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Pose.h>
#include <provider_keypad/Keypad.h>

#include <proc_control/PositionTarget.h>
#include <eigen3/Eigen/Eigen>
#include <chrono>

#include "proc_control/EnableControl.h"
#include "proc_control/EnableThrusters.h"
#include "proc_control/thruster/thruster_manager.h"
#include "proc_control/SetPositionTarget.h"
#include "proc_control/GetPositionTarget.h"
#include "proc_control/ClearWaypoint.h"
#include "proc_control/SetBoundingBox.h"
#include "proc_control/ResetBoundingBox.h"
#include <provider_kill_mission/KillSwitchMsg.h>

#include "proc_control/trajectory/trajectory.h"
#include "proc_control/algorithm/Control_AUV.h"

#include <mutex>

namespace proc_control {

class ProcControlNode {
 public:
  //==========================================================================
  // C O N S T  ,  T Y P E D E F   A N D   E N U M

  static constexpr double DegreeToRad = M_PI / 180.0f;
  typedef std::array<double, 6> OdometryInfo;

  //==========================================================================
  // P U B L I C   C / D T O R S

  ProcControlNode(const ros::NodeHandlePtr &nh);
  ~ProcControlNode();

  //==========================================================================
  // P U B L I C   M E T H O D S

  void Control();

 private:
  //==========================================================================
  // P R I V A T E   M E T H O D S

  void PublishTargetedPosition();

  void SetTargetCallback(const geometry_msgs::Pose::ConstPtr &target_in);
  void OdomCallback(const nav_msgs::Odometry::ConstPtr &odo_in);
  void KeypadCallback(const provider_keypad::Keypad::ConstPtr &keypad_in);
  void KeypadSetGlobal(const provider_keypad::Keypad::ConstPtr &keypad_in);
  void KeypadSetLocal(const provider_keypad::Keypad::ConstPtr &keypad_in);
  void KillSwitchCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state);
  bool EnableControlServiceCallback(proc_control::EnableControlRequest &request,
                                    proc_control::EnableControlResponse &response);
  bool GetPositionTargetServiceCallback(proc_control::GetPositionTargetRequest &request,
                                        proc_control::GetPositionTargetResponse &response);
  bool GlobalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                   proc_control::SetPositionTargetResponse &response);
  bool LocalTargetServiceCallback(proc_control::SetPositionTargetRequest &request,
                                  proc_control::SetPositionTargetResponse &response);
  bool EnableThrusterServiceCallback(proc_control::EnableThrustersRequest &request,
                                     proc_control::EnableThrustersResponse &response);
  bool ClearWaypointServiceCallback(proc_control::ClearWaypointRequest &request,
                                     proc_control::ClearWaypointResponse &response);
  bool SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                    proc_control::SetBoundingBoxResponse &response);
  bool ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                    proc_control::ResetBoundingBoxResponse &response);

  bool EvaluateTargetReached(const std::array<double, 6> &target_error);

  std::array<double, 6> GetLocalError(const std::array<double, 6> &global_error);

  Eigen::Matrix3d EulerToRot(const Eigen::Vector3d &vec);

  double DegreeToRadian(const double &degree);

  //==========================================================================
  // P R I V A T E   M E M B E R S

  ros::NodeHandlePtr nh_;

  ros::Subscriber navigation_odom_subscriber_;
  ros::Subscriber target_odometry_subscriber_;
  ros::Subscriber keypad_subscriber_;
  ros::Subscriber kill_switch_;

  ros::Publisher target_publisher_;
  ros::Publisher debug_target_publisher_;
  ros::Publisher target_is_reached_publisher_;
  ros::Publisher error_publisher_;

  ros::ServiceServer set_global_target_server_;
  ros::ServiceServer set_local_target_server_;
  ros::ServiceServer get_target_server_;
  ros::ServiceServer enable_control_server_;
  ros::ServiceServer enable_thrusters_server_;
  ros::ServiceServer clear_waypoint_server_;
  ros::ServiceServer set_bounding_box_server_;
  ros::ServiceServer reset_bounding_box_server_;

  proc_control::ThrusterManager thruster_manager_;

  Control_AUV control_auv_;

  OdometryInfo world_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
  OdometryInfo targeted_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
  OdometryInfo last_targeted_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
  OdometryInfo asked_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
  std::array<bool, 6> enable_control_;

  Trajectory trajectory_yaw;
  Trajectory trajectory_surge;
  Trajectory trajectory_sway;
  Trajectory trajectory_heave;

  int stability_count_;
  std::chrono::steady_clock::time_point last_time_;

  mutable std::mutex local_position_mutex;
};

inline double ProcControlNode::DegreeToRadian(const double &degree) {
  return degree * DegreeToRad;
}

} // namespace proc_control

#endif //PROC_CONTROL_CONTROL_SYSTEM_H
