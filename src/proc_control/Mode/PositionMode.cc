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

    PositionMode::PositionMode(const ros::NodeHandlePtr &nh) : nh_(nh), controlAuv_("position"), inputData_(nh)  {

        for (int i = 0; i < 6; i++){
            enableAxisController_[i] = false;
        }

        killSwitchSubscriber_   = nh_->subscribe("/provider_kill_mission/kill_switch_msg", 100,
                                               &PositionMode::KillMissionCallback, this);

        enableControllerServer_ = nh_->advertiseService("/proc_control/enable_control",
                                                        &PositionMode::enableControlServiceCallback, this);
        enableThrustersServer_  = nh_->advertiseService("/proc_control/enable_thrusters",
                                                         &PositionMode::enableThrustersServerCallback, this);
        clearWayPointServer_    = nh_->advertiseService("/proc_control/clear_waypoint",
                                                    &PositionMode::clearWayPointServiceCallback, this);
        setBoundingBoxServer_   = nh_->advertiseService("/proc_control/set_bounding_box",
                                                     &PositionMode::SetBoundingBoxServiceCallback, this);
        resetBoundingBoxServer_ = nh->advertiseService("/proc_control/reset_bounding_box",
                                                          &PositionMode::ResetBoundingBoxServiceCallback, this);

        controllerErrorPublisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_controller_error", 100);
        targetErrorPublisher_     = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target_error", 100);
        targetPublisher_          = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
        debugTargetPublisher_     = nh_->advertise<proc_control::PositionTarget>("/proc_control/debug_current_target", 100);
        targetIsReachedPublisher_ = nh_->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);
        commandDebugPublisher_    = nh_->advertise<proc_control::PositionTarget>("/proc_control/command_debug", 100);

        stabilityCount_ = 0;
        lastTime_               = std::chrono::steady_clock::now();
        targetReachedTime_      = std::chrono::steady_clock::now();
        linearAskPosition_      = Eigen::Vector3d::Zero();
        angularAskPosition_     = Eigen::Vector3d::Zero();
        linearLastAskPosition_  = Eigen::Vector3d::Zero();
        angularLastAskPosition_ = Eigen::Vector3d::Zero();
        positionTarget_         = Eigen::Vector3d::Zero();
        orientationTarget_      = Eigen::Vector3d::Zero();
        worldPosition_          = Eigen::Vector3d::Zero();
        worldOrientation_       = Eigen::Vector3d::Zero();
        isTargetReached_        = {false, false, false, false, false, false};

        linearTrajectory_.ResetSpline();
        angularTrajectory_.ResetSpline();
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

    void PositionMode::LocalErrorPublisher(EigenVector6d &error) {

        proc_control::PositionTarget error_;
        error_.X     = error[X];
        error_.Y     = error[Y];
        error_.Z     = error[Z];
        error_.PITCH = error[ROLL];
        error_.ROLL  = error[PITCH];
        error_.YAW   = error[YAW];

        controllerErrorPublisher_.publish(error_);

    }

    void PositionMode::TargetErrorPublisher(EigenVector6d &error) {

        proc_control::PositionTarget errorMsg;
        errorMsg.X     = error[X];
        errorMsg.Y     = error[Y];
        errorMsg.Z     = error[Z];
        errorMsg.PITCH = error[ROLL];
        errorMsg.ROLL  = error[PITCH];
        errorMsg.YAW   = error[YAW];

        targetErrorPublisher_.publish(errorMsg);

    }

    void PositionMode::CurrentTargetPositionPublisher() {

        proc_control::PositionTarget currentTargetMsg;

        currentTargetMsg.X     = linearAskPosition_[X];
        currentTargetMsg.Y     = linearAskPosition_[Y];
        currentTargetMsg.Z     = linearAskPosition_[Z];
        currentTargetMsg.ROLL  = angularAskPosition_[X] * RAD_TO_DEGREE;
        currentTargetMsg.PITCH = angularAskPosition_[Y] * RAD_TO_DEGREE;
        currentTargetMsg.YAW   = angularAskPosition_[Z] * RAD_TO_DEGREE;

        targetPublisher_.publish(currentTargetMsg);

    }

    void PositionMode::CurrentCommandDebugPublisher(EigenVector6d &command) {

        proc_control::PositionTarget currentCommandMsg;

        currentCommandMsg.X     = command[X];
        currentCommandMsg.Y     = command[Y];
        currentCommandMsg.Z     = command[Z];
        currentCommandMsg.ROLL  = command[X];
        currentCommandMsg.PITCH = command[Y];
        currentCommandMsg.YAW   = command[Z];

        commandDebugPublisher_.publish(currentCommandMsg);

    }

    void PositionMode::CurrentTargetDebugPositionPublisher() {

        proc_control::PositionTarget targetMsg;
        targetMsg.X     = positionTarget_[0];
        targetMsg.Y     = positionTarget_[1];
        targetMsg.Z     = positionTarget_[2];
        targetMsg.ROLL  = orientationTarget_[0] * RAD_TO_DEGREE;
        targetMsg.PITCH = orientationTarget_[1] * RAD_TO_DEGREE;
        targetMsg.YAW   = orientationTarget_[2] * RAD_TO_DEGREE;
        debugTargetPublisher_.publish(targetMsg);
    }

    void PositionMode::Process() {

        EigenVector6d localError = EigenVector6d::Zero();
        EigenVector6d targetError = EigenVector6d::Zero();

        std::chrono::steady_clock::time_point timeNow = std::chrono::steady_clock::now();

        UpdateInput();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(timeNow - lastTime_).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            if (linearTrajectory_.IsSplineCalculated() && isTargetReached_[5])
                positionTarget_ = linearTrajectory_.ComputeLinearSpline(deltaTime_s);
            if (angularTrajectory_.IsSplineCalculated())
                orientationTarget_ = angularTrajectory_.ComputeAngularSpline(deltaTime_s);

            CurrentTargetDebugPositionPublisher();

            localError = GetLocalError(positionTarget_, orientationTarget_);
            LocalErrorPublisher(localError);

            targetError = GetLocalError(linearAskPosition_, angularAskPosition_);
            TargetErrorPublisher(targetError);

            proc_control::TargetReached msg_target_reached;
            msg_target_reached.target_is_reached = static_cast<unsigned char>(EvaluateTargetReached(targetError) ? 1 : 0);
            targetIsReachedPublisher_.publish(msg_target_reached);


            // Calculate required actuation
            EigenVector6d actuation = EigenVector6d::Zero();
            actuation = controlAuv_.GetActuationForError(localError);

            for (int i = 0; i < 6; i++) {
                if (!enableAxisController_[i]) actuation[i] = 0.0f;
            }

            CurrentCommandDebugPublisher(actuation);

            thrusterManager_.Commit(actuation);

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

        ResetTrajectory();

        targetReachedTime_ = std::chrono::steady_clock::now();

        linearAskPosition_ = translation;
        angularAskPosition_ = orientation;

        for (int i = 0; i < 3; i++)
        {
            if (keepTarget[i] || translation[i] < -200000.0)
                linearAskPosition_[i] = linearLastAskPosition_[i];
            if (keepTarget[i + 3] || orientation[i] < -15.0)
                angularAskPosition_[i] = angularLastAskPosition_[i];
        }

        ComputeTrajectoryFromTarget(linearAskPosition_, angularAskPosition_);

        linearLastAskPosition_  = linearAskPosition_;
        angularLastAskPosition_ = angularAskPosition_;

        CurrentTargetPositionPublisher();
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget)
    {

        ResetTrajectory();

        targetReachedTime_ = std::chrono::steady_clock::now();

        Eigen::Affine3d localAskPoseH;

        Eigen::Vector3d actualOrientation = worldOrientation_;
        Eigen::Vector3d actualPosition    = worldPosition_;

        for (int i = 0; i < 3; i++)
        {
            if (keepTarget[i])
                actualPosition[i]    = linearAskPosition_[i];
            if (keepTarget[i + 3])
                actualOrientation[i] = angularAskPosition_[i];
        }

        Eigen::Affine3d askTargetH  = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actualPoseH = ComputeTransformation_.HomogeneousMatrix(actualOrientation, actualPosition);

        localAskPoseH = actualPoseH * askTargetH;

        linearAskPosition_  = localAskPoseH.translation();
        angularAskPosition_ = localAskPoseH.linear().eulerAngles(0, 1, 2);

        for (int i = 0; i < 3; i++){
            if (translation[i] <= -20000.0)
                linearAskPosition_[i] = linearLastAskPosition_[i];
            if (orientation[i] <= -15.0)
                angularAskPosition_[i] = angularLastAskPosition_[i];
        }

        ComputeTrajectoryFromTarget(linearAskPosition_, angularAskPosition_);

        linearLastAskPosition_  = linearAskPosition_;
        angularLastAskPosition_ = angularAskPosition_;

        CurrentTargetPositionPublisher();

    }

    PositionMode::EigenVector6d PositionMode::GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        Eigen::Affine3d localErrorH;

        EigenVector6d localError = EigenVector6d::Zero();

        UpdateInput();

        Eigen::Affine3d targetH = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actualPoseH = ComputeTransformation_.HomogeneousMatrix(worldOrientation_, worldPosition_);

        localErrorH = actualPoseH.inverse() * targetH;

        localError << localErrorH.translation(), localErrorH.linear().eulerAngles(0, 1, 2) * RAD_TO_DEGREE;

        localError[ROLL] = 0.0;
        localError[PITCH] = 0.0;

        return localError;
    }

    bool PositionMode::EvaluateTargetReached(EigenVector6d &error) {

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


    void PositionMode::UpdateInput() {
        worldPosition_ = inputData_.GetPositionTranslation();
        worldOrientation_ = inputData_.GetPositionOrientation();
    }


    void PositionMode::ComputeTrajectoryFromTarget(Eigen::Vector3d &linear_pose, Eigen::Vector3d &angular_pose) {

        linearTrajectory_.SetSplineParameters(linearLastAskPosition_, linear_pose);
        angularTrajectory_.SetSplineParameters(angularLastAskPosition_, angular_pose);

    }


    bool PositionMode::enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                                    proc_control::EnableControlResponse &response) {

        EigenVector6d actualPose = EigenVector6d::Zero();

        UpdateInput();
        actualPose << worldPosition_, worldOrientation_;

        linearAskPosition_  << actualPose[X], actualPose[Y], actualPose[Z];
        angularAskPosition_ << actualPose[ROLL], actualPose[PITCH], actualPose[YAW];

        linearLastAskPosition_  = linearAskPosition_;
        angularLastAskPosition_ = angularAskPosition_;

        CurrentTargetPositionPublisher();

        linearTrajectory_.ResetSpline();
        angularTrajectory_.ResetSpline();

        if (request.X != request.DONT_CARE) {
            linearTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.X), actualPose[X], X);
        }

        if (request.Y != request.DONT_CARE) {
            linearTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.Y), actualPose[Y], Y);
        }

        if (request.Z != request.DONT_CARE) {
            linearTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.Z), actualPose[Z], Z);
        }

        if (request.ROLL != request.DONT_CARE) {
            angularTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.ROLL), actualPose[ROLL], ROLL);
        }

        if (request.PITCH != request.DONT_CARE) {
            angularTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.PITCH), actualPose[PITCH], PITCH);
        }

        if (request.YAW != request.DONT_CARE) {
            angularTrajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.YAW), actualPose[YAW], YAW);
        }

        std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
        ROS_INFO_STREAM("Active control : Position");
        for (int i = 0; i < 6; i++) {
            ROS_INFO_STREAM(tmp[i] + " : " + (enableAxisController_[i] ? "true" : "false"));
        }

        return true;
    }


    void PositionMode::HandleEnableDisableControl(bool state, double target, const size_t axis) {

        enableAxisController_[axis] = state;
        if (axis < 3) {
            positionTarget_[axis] = target;
        } else {
            orientationTarget_[axis - 3] = target;
        }

        CurrentTargetPositionPublisher();

    }

    void PositionMode::KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in) {

        if(!state_in->state){
            for (int i = 0; i < 6; i++) {
                enableAxisController_[i] = false;
            }

            positionTarget_    = Eigen::Vector3d::Zero();
            orientationTarget_ = Eigen::Vector3d::Zero();

            linearTrajectory_.ResetSpline();
            angularTrajectory_.ResetSpline();
        }

    }

    bool PositionMode::enableThrustersServerCallback(proc_control::EnableThrustersRequest &request,
                                                     proc_control::EnableThrustersResponse &response) {

        this->thrusterManager_.SetEnable(request.isEnable);

        return true;
    }

    bool PositionMode::clearWayPointServiceCallback(proc_control::ClearWaypointRequest &request,
                                                    proc_control::ClearWaypointResponse &response)
    {
        UpdateInput();
        linearAskPosition_ = worldPosition_;
        angularAskPosition_ = worldOrientation_;
        linearLastAskPosition_ = worldPosition_;
        angularLastAskPosition_ = worldOrientation_;
        ComputeTrajectoryFromTarget(linearAskPosition_, angularAskPosition_);

        CurrentTargetPositionPublisher();
        return true;
    }

    bool PositionMode::SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                                        proc_control::SetBoundingBoxResponse &response){
        EigenVector6d bbox;
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


