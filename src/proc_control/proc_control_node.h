/**
 * \file	proc_control_node.h
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	10/21/17
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

#ifndef PROC_CONTROL_CONTROL_NODE_H
#define PROC_CONTROL_CONTROL_NODE_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Pose.h>
#include <provider_keypad/Keypad.h>
#include <mutex>

#include <proc_control/PositionTarget.h>
#include <chrono>

#include "proc_control/EnableControl.h"
#include "proc_control/TargetReached.h"
#include "proc_control/ControllerState.h"
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
#include "Transformation/Transformation.h"

namespace proc_control{

    class ProcControlNode{
    public:
        typedef std::array<double, 6> OdomInfo;

        //==============================================================================
        // C / D T O R S   S E C T I O N
        //------------------------------------------------------------------------------

        ProcControlNode(const ros::NodeHandlePtr &nh);

        ~ProcControlNode();

        //==========================================================================
        // P U B L I C   M E T H O D S

        void Control_loop();

        void odometry_callback(const nav_msgs::Odometry::ConstPtr &odom_in);
        void kill_switch_callback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in);
        void compute_spline_from_target(const OdomInfo &initial_pose, const OdomInfo &final_pose);

        inline void reset_trajectory();

        bool set_global_target_position_service_callback(proc_control::SetPositionTargetRequest &request,
                                                         proc_control::SetPositionTargetResponse &response);
        bool set_local_target_position_service_callback(proc_control::SetPositionTargetRequest &request,
                                                        proc_control::SetPositionTargetResponse &response);
        bool set_local_target_velocity_service_callback(proc_control::SetPositionTargetRequest &request,
                                                        proc_control::SetPositionTargetResponse &response);
        bool enable_control_service_callback(proc_control::EnableControlRequest &request,
                                             proc_control::EnableControlResponse &response);
        bool enable_thrusters_server_callback(proc_control::EnableThrustersRequest &request,
                                              proc_control::EnableThrustersResponse &response);

        bool controller_state_service_callback(proc_control::ControllerStateRequest &request,
                                               proc_control::ControllerStateResponse &response);

        bool clear_saypoint_service_callback(proc_control::ClearWaypointRequest &request,
                                             proc_control::ClearWaypointResponse &response);

        bool evaluate_target_reached(const std::array<double, 6> &target_error);

    private:
        //==========================================================================
        // P R I V A T E   M E T H O D S

        void handle_enable_disable_control(bool state, double target, const size_t axis);
        void current_target_position_publisher();
        void current_target_debug_position_publisher();
        void local_error_publisher(std::array<double, 6> error);

        std::array<double, 6> get_local_error(const std::array<double, 6> &target);

        std::array<bool, 2> set_best_rotation_trajectory_parameters(double delta_angle);


        //==========================================================================
        // P R I V A T E   M E M B E R S

        ros::NodeHandlePtr nh_;

        // Subscriber
        ros::Subscriber navigation_odom_subscriber_;
        ros::Subscriber kill_switch_subscriber_;

        // Publisher
        ros::Publisher target_publisher_;
        ros::Publisher debug_target_publisher_;
        ros::Publisher error_publisher_;
        ros::Publisher target_is_reached_publisher_;

        // Server
        ros::ServiceServer set_global_position_target_server_;
        ros::ServiceServer set_local_position_target_server_;
        ros::ServiceServer set_local_velocity_target_server_;
        ros::ServiceServer get_target_server_;
        ros::ServiceServer enable_control_server_;
        ros::ServiceServer controller_state_server_;
        ros::ServiceServer enable_thrusters_server_;
        ros::ServiceServer clear_waypoint_server_;
        ros::ServiceServer set_bounding_box_server_;
        ros::ServiceServer reset_bounding_box_server_;

        // Server Client
        ros::ServiceClient update_controller_state_;

        proc_control::ThrusterManager thruster_manager_;

        proc_control::Control_AUV control_auv_;

        proc_control::Trajectory trajectory_x_;
        proc_control::Trajectory trajectory_y_;
        proc_control::Trajectory trajectory_z_;
        proc_control::Trajectory trajectory_roll_;
        proc_control::Trajectory trajectory_pitch_;
        proc_control::Trajectory trajectory_yaw_;

        OdomInfo world_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo local_velocity_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo target_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo last_target_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo last_target_velocity_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo asked_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo asked_velocity_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        std::array<bool, 6> enable_control_;

        std::chrono::steady_clock::time_point last_time_;

        int stability_count_;

        mutable std::mutex local_position_mutex_;

    };

    inline void ProcControlNode::reset_trajectory() {
        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();
    }


}


#endif //PROC_CONTROL_CONTROL_NODE_H