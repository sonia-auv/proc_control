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

    PositionMode::PositionMode(std::shared_ptr<RobotState> &robotState) :
        ControlModeIF(),
        robotState_(robotState),
        controlAuv_("position"),
        trajectoryManager_(nullptr)
    {
        stabilityCount_ = 0;
        lastTime_               = std::chrono::steady_clock::now();
        targetReachedTime_      = std::chrono::steady_clock::now();
        actualPose_             = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        desiredPose_            = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        trajectoryManager_      = robotState_->GetTrajectoryManager();
    }

    void PositionMode::Process() {

        Eigen::VectorXd localError  = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        Eigen::VectorXd targetError = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        Eigen::VectorXd targetPose  = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        actualPose_ = robotState_->GetActualPose();

        control::TrajectoryResult trajectory;
        trajectory.pose = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        std::chrono::steady_clock::time_point timeNow = std::chrono::steady_clock::now();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(timeNow - lastTime_).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            if (trajectoryManager_->IsTrajectoryComputed())
            {
                trajectory = trajectoryManager_->GetTrajetory();
                targetPose     = trajectory.pose;
            }
            else
            {
                targetPose = actualPose_;
            }

            //desiredPose_ << positionTarget_, orientationTarget_;
            robotState_->PosePublisher(targetPose, robotState_->GetDebugTargetPublisher());

            localError = GetLocalError(targetPose);
            robotState_->PosePublisher(localError * DEGREE_TO_RAD, robotState_->GetControllerPoseErrorPublisher());

            robotState_->TargetReachedPublisher(EvaluateTargetReached(targetError));


            // Calculate required actuation
            Eigen::VectorXd actuation = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
            actuation = controlAuv_.GetActuationForError(localError);

            robotState_->WrenchPublisher(actuation, robotState_->GetCommandDebugPublisher());

        }

        lastTime_ = timeNow;

    }

    void PositionMode::SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation)
    {
        actualPose_ = robotState_->GetActualPose();

        std::vector<bool> keepTarget = {false, false, false, false, false, false};
        if (isGlobal)
        {
            SetGlobalTarget(translation, orientation, keepTarget);
        }
        else
        {
            SetLocalTarget(translation, orientation, keepTarget);
        }
        robotState_->SetDesiredPose(desiredPose_);
    }

    void PositionMode::SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation)
    {
        actualPose_ = robotState_->GetActualPose();

        if (isGlobal)
        {
            SetGlobalTarget(translation, orientation, keepTarget);
        }
        else
        {
            SetLocalTarget(translation, orientation, keepTarget);
        }

        robotState_->SetDesiredPose(desiredPose_);
    }

    void PositionMode::SetGlobalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget)
    {

        trajectoryManager_->ResetTrajectory();

        targetReachedTime_ = std::chrono::steady_clock::now();

        for (size_t i = 0; i < 3; i++)
        {
            if (!keepTarget[i])
                desiredPose_[i] = translation[i];
            if (!keepTarget[i + 3])
                desiredPose_[i + 3] = orientation[i];
        }

        CreateTrajectory(actualPose_, desiredPose_);

        robotState_->PosePublisher(desiredPose_, robotState_->GetTargetPublisher());
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget)
    {

        trajectoryManager_->ResetTrajectory();

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

        CreateTrajectory(actualPose_, desiredPose_);

        robotState_->PosePublisher(desiredPose_, robotState_->GetTargetPublisher());
    }

    void PositionMode::CreateTrajectory(Eigen::VectorXd &actualPose, Eigen::VectorXd &desiredPose)
    {
        control::TrajectoryGeneratorType trajectoryParams = robotState_->CreateTrajectoryParameters(1, actualPose, desiredPose);
        trajectoryManager_->GenerateTrajectory(trajectoryParams);
    }

    Eigen::VectorXd PositionMode::GetLocalError(Eigen::VectorXd &pose)
    {
        Eigen::Affine3d localErrorH;

        Eigen::Vector3d translation       = Eigen::Vector3d::Zero();
        Eigen::Vector3d orientation       = Eigen::Vector3d::Zero();
        Eigen::Vector3d actualPosition    = Eigen::Vector3d::Zero();
        Eigen::Vector3d actualOrientation = Eigen::Vector3d::Zero();

        translation << pose[0], pose[1], pose[2];
        orientation << pose[3], pose[4], pose[5];

        actualPosition << actualPose_[0], actualPose_[1], actualPose_[2];
        actualOrientation << 0, 0, actualPose_[5];

        Eigen::VectorXd localError = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);

        Eigen::Affine3d targetH = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actualPoseH = ComputeTransformation_.HomogeneousMatrix(actualOrientation, actualPosition);

        localErrorH = actualPoseH.inverse() * targetH;

        localError << localErrorH.translation(), localErrorH.linear().eulerAngles(0, 1, 2) * RAD_TO_DEGREE;

        localError[ROLL] = 0.0;
        localError[PITCH] = 0.0;

        return localError;
    }

    bool PositionMode::EvaluateTargetReached(Eigen::VectorXd &error)
    {
        bool targetIsReached = false;

        std::chrono::steady_clock::time_point timeNow = std::chrono::steady_clock::now();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(timeNow - targetReachedTime_).count()) / (double(1E9));

        std::vector<bool>  isTargetReached = controlAuv_.IsInBoundingBox(error);

        if (isTargetReached[0] && isTargetReached[1] && isTargetReached[2] && isTargetReached[3] && isTargetReached[4] && isTargetReached[5])
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
}


