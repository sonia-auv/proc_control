/**
 * \file	ControlModeIF.cc
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	2018
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

#include "ControlModeIF.h"

namespace proc_control
 {
     ControlModeIF::ControlModeIF(const ros::NodeHandlePtr &nh):
        nh_(nh),
        inputData_(nh),
        trajectoryManager_()
     {
         killSwitchSubscriber_   = nh_->subscribe("/provider_kill_mission/kill_switch_msg", 100,
                                                  &ControlModeIF::KillMissionCallback, this);

         enableControllerServer_ = nh_->advertiseService("/proc_control/enable_control",
                                                         &ControlModeIF::EnableControlServiceCallback, this);
         enableThrustersServer_  = nh_->advertiseService("/proc_control/enable_thrusters",
                                                         &ControlModeIF::EnableThrustersServerCallback, this);
         clearWayPointServer_    = nh_->advertiseService("/proc_control/clear_waypoint",
                                                         &ControlModeIF::ClearWayPointServiceCallback, this);

         controllerPoseErrorPublisher_  = nh_->advertise<geometry_msgs::Pose>("/proc_control/current_controller_pose_error", 100);
         controllerTwistErrorPublisher_ = nh_->advertise<geometry_msgs::Twist>("/proc_control/current_controller_twist_error", 100);
         targetErrorPublisher_          = nh_->advertise<geometry_msgs::Pose>("/proc_control/current_target_error", 100);
         targetPublisher_               = nh_->advertise<geometry_msgs::Pose>("/proc_control/current_target", 100);
         debugTargetPublisher_          = nh_->advertise<geometry_msgs::Pose>("/proc_control/debug_current_target", 100);
         commandDebugPublisher_         = nh_->advertise<geometry_msgs::Wrench>("/proc_control/command_debug", 100);
         targetIsReachedPublisher_      = nh_->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);

         enableThruster_       = true;
         enableAxisController_ = {{false, false, false, false, false, false}};

         desiredPose_          = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
         desiredTwist_         = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
         desiredAcceleration_  = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

         actualPose_           = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
         actualTwist_          = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
         actualAcceleration_   = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

         trajectoryManager_.ResetTrajectory();
     }

     ControlModeIF::~ControlModeIF()
     {
         killSwitchSubscriber_.shutdown();
         enableControllerServer_.shutdown();
         enableThrustersServer_.shutdown();
         clearWayPointServer_.shutdown();
         resetBoundingBoxServer_.shutdown();
         setBoundingBoxServer_.shutdown();
         resetBoundingBoxServer_.shutdown();
     }

     void ControlModeIF::UpdateInput()
     {
         actualPose_  << inputData_.GetPosePosition(), inputData_.GetPoseOrientation();
         actualTwist_ << inputData_.GetTwistLinear(), inputData_.GetTwistAngular();
     }

    void ControlModeIF::KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in) {

        if(!state_in->state)
        {
            enableAxisController_ = {{false, false, false, false, false, false}};

            desiredPose_         = actualPose_;
            desiredTwist_        = actualTwist_;
            desiredAcceleration_ = actualAcceleration_;

            trajectoryManager_.ResetTrajectory();
        }

    }

    bool ControlModeIF::EnableControlServiceCallback(proc_control::EnableControlRequest &request, proc_control::EnableControlResponse &response)
    {
        desiredPose_         = actualPose_;
        desiredTwist_        = actualTwist_;
        desiredAcceleration_ = actualAcceleration_;

        trajectoryManager_.ResetTrajectory();

        HandleEnableDisableControl(request.X, 0);
        HandleEnableDisableControl(request.Y, 1);
        HandleEnableDisableControl(request.Z, 2);
        HandleEnableDisableControl(request.Z, 3);
        HandleEnableDisableControl(request.Z, 4);
        HandleEnableDisableControl(request.Z, 5);

        return true;
    }

    void ControlModeIF::HandleEnableDisableControl(int8_t &request, int axis)
    {
         if (request != -1)
         {
             enableAxisController_[axis] = bool(request);
         }
    }

    bool ControlModeIF::EnableThrustersServerCallback(proc_control::EnableThrustersRequest &request, proc_control::EnableThrustersResponse &response)
    {
        enableThruster_ = bool(request.isEnable);

        return true;
    }


    bool ControlModeIF::ClearWayPointServiceCallback(proc_control::ClearWaypointRequest &request, proc_control::ClearWaypointResponse &response)
    {
        desiredPose_         = actualPose_;
        desiredTwist_        = actualTwist_;
        desiredAcceleration_ = actualAcceleration_;

        return true;
    }

    void ControlModeIF::PoseTwistPublisher(const Eigen::VectorXd &pose, const Eigen::VectorXd &twist, ros::Publisher &posePublisher, ros::Publisher &twistPublisher)
    {
        geometry_msgs::Pose poseMsg;
        EigenVectorToPoseMsg(pose, poseMsg);

        geometry_msgs::Twist twistMsg;
        EigenVectorToTwistMsg(twist, twistMsg);

        posePublisher.publish(poseMsg);
        twistPublisher.publish(twistMsg);
    }

    void ControlModeIF::WrenchPublisher(Eigen::VectorXd &wrench, ros::Publisher &wrenchPublisher)
    {
         geometry_msgs::Wrench wrenchMsg;
         EigenVectorToWrenchMsg(wrench, wrenchMsg);

         wrenchPublisher.publish(wrenchMsg);
    }

    control::TrajectoryGeneratorType ControlModeIF::CreateTrajectoryParameters(const double time, const Eigen::VectorXd &startPose, const Eigen::VectorXd &endPose)
    {
        control::TrajectoryGeneratorType trajectoryParams;

        trajectoryParams.time      = time;
        trajectoryParams.startPose = startPose;
        trajectoryParams.endPose   = endPose;

        return trajectoryParams;
    }

 }