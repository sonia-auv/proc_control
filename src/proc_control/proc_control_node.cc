/**
 * \file	proc_control_node.cc
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

#include "proc_control_node.h"


namespace proc_control{

    ProcControlNode::ProcControlNode(const ros::NodeHandlePtr &nh): nh_(nh), stability_count_(0)  {

        navigation_odom_subscriber_ = nh_->subscribe("/proc_navigation/odom", 100, &ProcControlNode::odometry_callback, this);
        kill_switch_subscriber_ = nh_->subscribe("/provider_kill_mission/kill_switch_msg", 100, &ProcControlNode::kill_switch_callback, this);

        target_publisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);

        set_global_position_target_server_ =
                nh_->advertiseService("/proc_control/set_global_target", &ProcControlNode::set_global_target_position_callback, this);
        set_local_position_target_server_ =
                nh_->advertiseService("/proc_control/set_local_target", &ProcControlNode::set_local_target_position_callback, this);
        set_local_velocity_target_server_ =
                nh_->advertiseService("/proc_control/set_local_velocity_target", &ProcControlNode::set_global_target_position_callback, this);

    }

    ProcControlNode::~ProcControlNode() {

        navigation_odom_subscriber_.shutdown();
        kill_switch_subscriber_.shutdown();

    }

    void ProcControlNode::Control_loop() {}

    //==============================================================================
    // M E T H O D   S E C T I O N

    //-----------------------------------------------------------------------------
    void ProcControlNode::current_target_position_publisher() {

        proc_control::PositionTarget current_target;

        current_target.X = asked_position_[X];
        current_target.Y = asked_position_[Y];
        current_target.Z = asked_position_[Z];
        current_target.ROLL = asked_position_[ROLL];
        current_target.PITCH = asked_position_[PITCH];
        current_target.YAW = asked_position_[YAW];
        target_publisher_.publish(current_target);

    }

    void ProcControlNode::odometry_callback(const nav_msgs::Odometry::ConstPtr &odom_in) {
        local_position_mutex_.lock();

        world_position_[X] = odom_in->pose.pose.position.x;
        world_position_[Y] = odom_in->pose.pose.position.y;
        world_position_[Z] = odom_in->pose.pose.position.z;
        world_position_[ROLL] = odom_in->pose.pose.orientation.x;
        world_position_[PITCH] = odom_in->pose.pose.orientation.y;
        world_position_[YAW] = odom_in->pose.pose.orientation.z;

        local_velocity_[X] = odom_in->twist.twist.linear.x;
        local_velocity_[Y] = odom_in->twist.twist.linear.y;
        local_velocity_[Z] = odom_in->twist.twist.linear.z;
        local_velocity_[ROLL] = odom_in->twist.twist.angular.x;
        local_velocity_[PITCH] = odom_in->twist.twist.angular.y;
        local_velocity_[YAW] = odom_in->twist.twist.angular.z;

        local_position_mutex_.unlock();

    }

    //-----------------------------------------------------------------------------
    void ProcControlNode::kill_switch_callback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in) {




    }

    bool ProcControlNode::set_global_target_position_callback(proc_control::SetPositionTargetRequest &request,
                                                              proc_control::SetPositionTargetResponse &response) {

        proc_control::SetPositionTargetRequest global_target = request;

        asked_position_[X] = global_target.X;
        asked_position_[Y] = global_target.Y;
        asked_position_[Z] = global_target.Z;
        asked_position_[ROLL] = global_target.ROLL;
        asked_position_[PITCH] = global_target.PITCH;
        asked_position_[YAW] = global_target.YAW;

        last_target_position_ = asked_position_;

        return true;

    }

    bool ProcControlNode::set_local_target_position_callback(proc_control::SetPositionTargetRequest &request,
                                                             proc_control::SetPositionTargetResponse &response) {

        proc_control::SetPositionTargetRequest local_target = request;
        proc_control::Transformation Transform;

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(world_position_[ROLL], world_position_[PITCH], world_position_[YAW]),
                                             Eigen::Vector3d(world_position_[X], world_position_[Y], world_position_[Z]));
        Eigen::Matrix4d world_position_h = Transform.get_homogeneous_matrix();

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(local_target.ROLL, local_target.PITCH, local_target.YAW),
                                             Eigen::Vector3d(local_target.X, local_target.Y, local_target.Z));
        Eigen::Matrix4d target_position_h = Transform.get_homogeneous_matrix();

        Eigen::Matrix4d global_target = world_position_h * target_position_h;

        Transform.compute_position_from_homogeneous_matrix(global_target);

        asked_position_ = Transform.get_position_from_homogeneous_matrix();

        return true;
    }




}