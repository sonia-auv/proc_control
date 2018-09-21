/**
 * \file	PositionMode.cc
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

#include "PositionMode.h"

namespace proc_control {

    PositionMode::PositionMode(const ros::NodeHandlePtr &nh) :
        ControlModeIF(nh),
        nh_(nh),
        controlAuv_("position")
    {
        setBoundingBoxServer_   = nh_->advertiseService("/proc_control/set_bounding_box",
                                                     &PositionMode::SetBoundingBoxServiceCallback, this);
        resetBoundingBoxServer_ = nh->advertiseService("/proc_control/reset_bounding_box",
                                                          &PositionMode::ResetBoundingBoxServiceCallback, this);

        stabilityCount_ = 0;
        lastTime_               = std::chrono::steady_clock::now();
        targetReachedTime_      = std::chrono::steady_clock::now();
        isTargetReached_        = {false, false, false, false, false, false};
    }

    PositionMode::~PositionMode() {

        killSwitchSubscriber_.shutdown();
        enableControllerServer_.shutdown();
        enableThrustersServer_.shutdown();
        clearWayPointServer_.shutdown();
        resetBoundingBoxServer_.shutdown();
        setBoundingBoxServer_.shutdown();
        resetBoundingBoxServer_.shutdown();

    }

    void PositionMode::Process() {

        Eigen::VectorXd localError  = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        Eigen::VectorXd targetError = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        control::TrajectoryResult trajectory;
        trajectory.pose = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        std::chrono::steady_clock::time_point timeNow = std::chrono::steady_clock::now();

        UpdateInput();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(timeNow - lastTime_).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            if (trajectoryManager_.IsTrajectoryComputed())
            {
                trajectory = trajectoryManager_.GetTrajetory();
            }

            //desiredPose_ << positionTarget_, orientationTarget_;
            PoseTwistPublisher(trajectory.pose, desiredTwist_, debugTargetPublisher_, controllerTwistErrorPublisher_);

            localError = GetLocalError(trajectory.pose);
            PoseTwistPublisher(localError, desiredTwist_, controllerPoseErrorPublisher_, controllerTwistErrorPublisher_);

            proc_control::TargetReached msg_target_reached;
            msg_target_reached.target_is_reached = static_cast<unsigned char>(EvaluateTargetReached(targetError) ? 1 : 0);
            targetIsReachedPublisher_.publish(msg_target_reached);


            // Calculate required actuation
            Eigen::VectorXd actuation = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
            actuation = controlAuv_.GetActuationForError(localError);

            for (int i = 0; i < 6; i++) {
                if (!enableAxisController_[i]) actuation[i] = 0.0f;
            }

            WrenchPublisher(actuation, commandDebugPublisher_);

        }

        lastTime_ = timeNow;

    }

    void PositionMode::SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        UpdateInput();
        std::vector<bool> keepTarget = {false, false, false, false, false, false};
        if (isGlobal)
        {
            SetGlobalTarget(translation, orientation, keepTarget);
        }
        else
        {
            SetLocalTarget(translation, orientation, keepTarget);
        }
    }

    void PositionMode::SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation)
    {
        UpdateInput();
        if (isGlobal)
        {
            SetGlobalTarget(translation, orientation, keepTarget);
        }
        else
        {
            SetLocalTarget(translation, orientation, keepTarget);
        }

    }

    void PositionMode::SetGlobalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget)
    {

        trajectoryManager_.ResetTrajectory();

        targetReachedTime_ = std::chrono::steady_clock::now();

        for (int i = 0; i < 3; i++)
        {
            if (!keepTarget[i])
                desiredPose_[i] = translation[i];
            if (!keepTarget[i + 3])
                desiredPose_[i + 3] = orientation[i];
        }

        control::TrajectoryGeneratorType trajectoryParams = CreateTrajectoryParameters(1, actualPose_, desiredPose_);
        trajectoryManager_.GenerateTrajectory(trajectoryParams);

        PoseTwistPublisher(desiredPose_, desiredTwist_, targetPublisher_, controllerTwistErrorPublisher_);
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget)
    {

        trajectoryManager_.ResetTrajectory();

        targetReachedTime_ = std::chrono::steady_clock::now();

        Eigen::Affine3d localAskPoseH;

        Eigen::Vector3d actualPosition    = Eigen::Vector3d::Zero();
        Eigen::Vector3d actualOrientation = Eigen::Vector3d::Zero();
        actualPosition    << actualPose_[0], actualPose_[1], actualPose_[2];
        actualOrientation << actualPose_[3], actualPose_[4], actualPose_[5];

        for (int i = 0; i < 3; i++)
        {
            if (keepTarget[i])
                actualPosition[i]    = desiredPose_[i];
            if (keepTarget[i + 3])
                actualOrientation[i] = desiredPose_[i + 3];
        }

        Eigen::Affine3d askTargetH  = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actualPoseH = ComputeTransformation_.HomogeneousMatrix(actualOrientation, actualPosition);

        localAskPoseH = actualPoseH * askTargetH;

        desiredPose_ << localAskPoseH.translation(), localAskPoseH.linear().eulerAngles(0, 1, 2);

        control::TrajectoryGeneratorType trajectoryParams = CreateTrajectoryParameters(1, actualPose_, desiredPose_);
        trajectoryManager_.GenerateTrajectory(trajectoryParams);

        PoseTwistPublisher(desiredPose_, desiredTwist_, targetPublisher_, controllerTwistErrorPublisher_);
    }

    Eigen::VectorXd PositionMode::GetLocalError(Eigen::VectorXd &pose) {

        Eigen::Affine3d localErrorH;

        Eigen::Vector3d translation       = Eigen::Vector3d::Zero();
        Eigen::Vector3d orientation       = Eigen::Vector3d::Zero();
        Eigen::Vector3d actualPosition    = Eigen::Vector3d::Zero();
        Eigen::Vector3d actualOrientation = Eigen::Vector3d::Zero();

        translation << pose[0], pose[1], pose[2];
        orientation << pose[3], pose[4], pose[5];

        actualPosition << actualPose_[0], actualPose_[1], actualPose_[2];
        actualOrientation << actualPose_[3], actualPose_[4], actualPose_[5];

        Eigen::VectorXd localError = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        UpdateInput();

        Eigen::Affine3d targetH = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actualPoseH = ComputeTransformation_.HomogeneousMatrix(actualOrientation, actualPosition);

        localErrorH = actualPoseH.inverse() * targetH;

        localError << localErrorH.translation(), localErrorH.linear().eulerAngles(0, 1, 2) * RAD_TO_DEGREE;

        localError[ROLL] = 0.0;
        localError[PITCH] = 0.0;

        return localError;
    }

    bool PositionMode::EvaluateTargetReached(Eigen::VectorXd &error) {

        bool targetIsReached = false;

        std::chrono::steady_clock::time_point timeNow = std::chrono::steady_clock::now();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(timeNow - targetReachedTime_).count()) / (double(1E9));

        isTargetReached_ = controlAuv_.IsInBoundingBox(error);

        if (isTargetReached_[0] && isTargetReached_[1] && isTargetReached_[2] && isTargetReached_[3] && isTargetReached_[4] && isTargetReached_[5])
        {
            stabilityCount_++;
        }
        else
        {
            stabilityCount_ = 0;
        }

        if (stabilityCount_ > 14 || deltaTime_s > 30.0){
            targetIsReached = true;
        }

        return targetIsReached;

    }

    bool PositionMode::SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                                        proc_control::SetBoundingBoxResponse &response){
        Eigen::VectorXd bbox;
        bbox << request.X, request.Y, request.Z, request.ROLL, request.PITCH, request.YAW;
        controlAuv_.SetNewBoundingBox(bbox);
        return true;

    }

    bool PositionMode::ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                                          proc_control::ResetBoundingBoxResponse &response) {
        controlAuv_.ResetBoundingBox();
        return true;
    }
}


