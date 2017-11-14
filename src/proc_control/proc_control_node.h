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

        void current_target_position_publisher();

        bool set_global_target_position_callback(proc_control::SetPositionTargetRequest &request, proc_control::SetPositionTargetResponse &response);
        bool set_local_target_position_callback(proc_control::SetPositionTargetRequest &request, proc_control::SetPositionTargetResponse &response);

        bool set_global_target_velocity_callback(proc_control::SetPositionTargetRequest &request, proc_control::SetPositionTargetResponse &response);
        bool set_local_target_velocity_callback(proc_control::SetPositionTargetRequest &request, proc_control::SetPositionTargetResponse &response);



    private:
        //==========================================================================
        // P R I V A T E   M E T H O D S



        //==========================================================================
        // P R I V A T E   M E M B E R S

        ros::NodeHandlePtr nh_;

        // Subscriber
        ros::Subscriber navigation_odom_subscriber_;
        ros::Subscriber kill_switch_subscriber_;

        // Publisher
        ros::Publisher target_publisher_;
        ros::Publisher debug_target_publisher_;
        ros::Publisher target_is_reach_publisher;

        // Server
        ros::ServiceServer set_global_position_target_server_;
        ros::ServiceServer set_local_position_target_server_;
        ros::ServiceServer set_local_velocity_target_server_;
        ros::ServiceServer get_target_server_;
        ros::ServiceServer enable_control_server_;
        ros::ServiceServer enable_thrusters_server_;
        ros::ServiceServer clear_waypoint_server_;
        ros::ServiceServer set_bounding_box_server_;
        ros::ServiceServer reset_bounding_box_server_;

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
        OdomInfo target_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo target_velocity_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo last_target_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};
        OdomInfo asked_position_ = {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}};


        int stability_count_;

        mutable std::mutex local_position_mutex_;

    };

}


#endif //PROC_CONTROL_CONTROL_NODE_H