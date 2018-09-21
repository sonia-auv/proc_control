/**
 * \file	ControlModeIF.h
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

#ifndef PROC_CONTROL_CONTROLMODEIF_H
#define PROC_CONTROL_CONTROLMODEIF_H

#include <ros/ros.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>
#include <eigen3/Eigen/Eigen>
#include <control_library/ControlInterface.h>
#include <control_library/ControlType.h>

#include "provider_kill_mission/KillSwitchMsg.h"
#include "proc_control/Mode/MsgConverteur.h"
#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/EnableControl.h"
#include "proc_control/EnableThrusters.h"
#include "proc_control/ClearWaypoint.h"
#include "proc_control/PositionTarget.h"
#include "proc_control/TargetReached.h"
#include "proc_control/ControlInput/ControlInput.h"


const double DEGREE_TO_RAD = M_PI / 180.0;
const double RAD_TO_DEGREE = 180.0 / M_PI;

namespace proc_control
{
    class ControlModeIF 
    {
    public:
        
        explicit ControlModeIF(const ros::NodeHandlePtr &nh);
        
        ~ControlModeIF();

        virtual void Process() = 0;
        virtual void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) = 0;
        virtual void SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) = 0;

    private:

        void KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in);
        bool EnableControlServiceCallback(proc_control::EnableControlRequest &request, proc_control::EnableControlResponse &response);
        void HandleEnableDisableControl(int8_t &request, int axis);
        bool EnableThrustersServerCallback(proc_control::EnableThrustersRequest &request, proc_control::EnableThrustersResponse &response);
        bool ClearWayPointServiceCallback(proc_control::ClearWaypointRequest &request, proc_control::ClearWaypointResponse &response);

        ros::NodeHandlePtr nh_;

        proc_control::ControlInput inputData_;

        bool enableThruster_;

    protected:

        void PoseTwistPublisher(const Eigen::VectorXd &pose, const Eigen::VectorXd &twist, ros::Publisher &posePublisher, ros::Publisher &twistPublisher);
        void WrenchPublisher(Eigen::VectorXd &wrench, ros::Publisher &wrenchPublisher);
        control::TrajectoryGeneratorType CreateTrajectoryParameters(const double time, const Eigen::VectorXd &startPose, const Eigen::VectorXd &endPose);
        void UpdateInput();

        std::vector<bool>  isTargetReached_;
        std::vector<bool>  enableAxisController_;

        // Subscriber
        ros::Subscriber killSwitchSubscriber_;
        
        // Publisher
        ros::Publisher targetPublisher_;
        ros::Publisher debugTargetPublisher_;
        ros::Publisher controllerPoseErrorPublisher_;
        ros::Publisher controllerTwistErrorPublisher_;
        ros::Publisher targetErrorPublisher_;
        ros::Publisher targetIsReachedPublisher_;
        ros::Publisher commandDebugPublisher_;

        // Server
        ros::ServiceServer enableControllerServer_;
        ros::ServiceServer enableThrustersServer_;
        ros::ServiceServer clearWayPointServer_;
        ros::ServiceServer resetBoundingBoxServer_;
        ros::ServiceServer setBoundingBoxServer_;

        Eigen::VectorXd desiredPose_;
        Eigen::VectorXd desiredTwist_;
        Eigen::VectorXd desiredAcceleration_;

        Eigen::VectorXd actualPose_;
        Eigen::VectorXd actualTwist_;
        Eigen::VectorXd actualAcceleration_;

        control::ControlInterface trajectoryManager_;
        control::TrajectoryResult trajectoryResult_;
    };

}


#endif //PROC_CONTROL_CONTROLMODEIF_H
