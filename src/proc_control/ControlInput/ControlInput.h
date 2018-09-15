/**
 * \file	ControlInput.h
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

#ifndef PROC_CONTROL_CONTROLINPUT_H
#define PROC_CONTROL_CONTROLINPUT_H

#include <ros/ros.h>
#include <eigen3/Eigen/Eigen>
#include <nav_msgs/Odometry.h>

#include "proc_control/EnableControl.h"
#include "provider_kill_mission/KillSwitchMsg.h"
#include "proc_control/property.h"



namespace proc_control {

    class ControlInput {
    public:

        typedef Eigen::Matrix<double, 6, 1> EigenVector6d;
        const double DEGREE_TO_RAD = M_PI / 180.0;

        //==============================================================================
        // C / D T O R S   S E C T I O N
        //------------------------------------------------------------------------------
        ControlInput(const ros::NodeHandlePtr &nh);
        ~ControlInput();

        //==========================================================================
        // P U B L I C   M E T H O D S

        void OdometryCallback(const nav_msgs::Odometry::ConstPtr &odomIn);

        Eigen::Vector3d GetPositionTranslation() const { return positionTranslation_; };
        Eigen::Vector3d GetVelocityTranslation() const { return velocityTranslation_; };

        Eigen::Vector3d GetPositionOrientation() const { return positionOrientation_; };
        Eigen::Vector3d GetVelocityOrientation() const { return velocityOrientation_; };


    private:

        //==========================================================================
        // P R I V A T E   M E M B E R S

        ros::NodeHandlePtr nh_;

        // Subscriber
        ros::Subscriber navigationOdomSubscriber_;

        Eigen::Vector3d positionTranslation_ = Eigen::Vector3d(0.0, 0.0, 0.0);
        Eigen::Vector3d positionOrientation_ = Eigen::Vector3d(0.0, 0.0, 0.0);

        Eigen::Vector3d velocityTranslation_ = Eigen::Vector3d(0.0, 0.0, 0.0);
        Eigen::Vector3d velocityOrientation_ = Eigen::Vector3d(0.0, 0.0, 0.0);

        EigenVector6d enable_control_;
    };
}


#endif //PROC_CONTROL_CONTROLINPUT_H
