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

#ifndef PROC_CONTROL_ROBOT_STATE_H
#define PROC_CONTROL_ROBOT_STATE_H

#include <ros/ros.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>
#include <eigen3/Eigen/Eigen>
#include <control_library/Trajectory/Trajectory.h>
#include <control_library/ControlType.h>

#include "sonia_msgs/KillSwitchMsg.h"
#include "MsgConverteur.h"
#include "proc_control/ControlInput/ControlInput.h"
#include <sonia_msgs/EnableControl.h>
#include <sonia_msgs/EnableThrusters.h>
#include <sonia_msgs/ClearWaypoint.h>
#include <sonia_msgs/PositionTarget.h>
#include <sonia_msgs/TargetReached.h>
#include <sonia_msgs/SetBoundingBox.h>
#include <sonia_msgs/ResetBoundingBox.h>
#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/ParametersManager/BboxParameters.h"


const double DEGREE_TO_RAD = M_PI / 180.0;
const double RAD_TO_DEGREE = 180.0 / M_PI;

namespace proc_control
{
    class RobotState
    {
    public:
        
        RobotState(const ros::NodeHandlePtr &nh);
        
        ~RobotState();

        void PosePublisher(const Eigen::VectorXd &pose, ros::Publisher &posePublisher);
        void TwistPublisher(const Eigen::VectorXd &twist, ros::Publisher &twistPublisher);
        void WrenchPublisher(Eigen::VectorXd &wrench, ros::Publisher &wrenchPublisher);
        void TargetReachedPublisher(const bool isTargetReached);
        control::TrajectoryGeneratorType CreateTrajectoryParameters(const double time, const Eigen::VectorXd &startPose, const Eigen::VectorXd &endPose);
        std::vector<bool> IsInBoundingBox(Eigen::VectorXd const & error);
        void UpdateInput();

        ros::Publisher &GetTargetPublisher()               { return targetPublisher_;}
        ros::Publisher &GetVelocityTargetPublisher()       { return velocityTargetPublisher_;}
        ros::Publisher &GetDebugTargetPublisher()          { return debugTargetPublisher_;}
        ros::Publisher &GetControllerPoseErrorPublisher()  { return controllerPoseErrorPublisher_;}
        ros::Publisher &GetControllerTwistErrorPublisher() { return controllerTwistErrorPublisher_;}
        ros::Publisher &GetTargetErrorPublisher_()         { return targetErrorPublisher_;}
        ros::Publisher &GetCommandDebugPublisher()         { return commandDebugPublisher_;}

        Eigen::VectorXd GetDesiredPose()          { return desiredPose_;}
        Eigen::VectorXd GetDesiredTwist()         { return desiredTwist_;}
        Eigen::VectorXd GetDesiredAccel()         { return desiredAcceleration_;}

        void SetDesiredPose(const Eigen::VectorXd &desiredPose)            {desiredPose_         = desiredPose;}
        void SetDesiredTwist(const Eigen::VectorXd &desiredTwist)          {desiredTwist_        = desiredTwist;}
        void SetDesiredAccel(const Eigen::VectorXd &desiredAcceleration)   {desiredAcceleration_ = desiredAcceleration;}

        Eigen::VectorXd GetActualPose()  { return actualPose_;}
        Eigen::VectorXd GetActualTwist() { return actualTwist_;}
        Eigen::VectorXd GetActualAccel() { return actualAcceleration_;}

        void ControlModeChange();

        std::shared_ptr<control::Trajectory> GetTrajectoryManager() { return trajectoryManager_;}

    private:

        void KillMissionCallback(const sonia_msgs::KillSwitchMsg::ConstPtr &state_in);
        bool EnableControlServiceCallback(sonia_msgs::EnableControlRequest &request, sonia_msgs::EnableControlResponse &response);
        void HandleEnableDisableControl(int8_t &request, int axis);
        bool EnableThrustersServerCallback(sonia_msgs::EnableThrustersRequest &request, sonia_msgs::EnableThrustersResponse &response);
        bool ClearWayPointServiceCallback(sonia_msgs::ClearWaypointRequest &request, sonia_msgs::ClearWaypointResponse &response);
        bool SetBoundingBoxServiceCallback(sonia_msgs::SetBoundingBoxRequest &request, sonia_msgs::SetBoundingBoxResponse &response);
        bool ResetBoundingBoxServiceCallback(sonia_msgs::ResetBoundingBoxRequest &request, sonia_msgs::ResetBoundingBoxResponse &response);

        ros::NodeHandlePtr nh_;

        proc_control::ControlInput inputData_;

        bool enableThruster_;

        std::vector<bool>  isTargetReached_;
        std::vector<bool>  enableAxisController_;

        std::shared_ptr<std::vector<double>> pBbox_;
        BboxParameters bboxParameters_;
        std::vector<double> bbox_;


        // Subscriber
        ros::Subscriber killSwitchSubscriber_;
        
        // Publisher
        ros::Publisher targetPublisher_;
        ros::Publisher velocityTargetPublisher_;
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

        std::shared_ptr<control::Trajectory> trajectoryManager_;
        control::TrajectoryResult trajectoryResult_;
    };

}


#endif //PROC_CONTROL_ROBOT_STATE_H
