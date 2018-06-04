//
// Created by olavoie on 1/13/18.
//

#include "PositionMode.h"

namespace proc_control {

    PositionMode::PositionMode(const ros::NodeHandlePtr &nh) : nh_(nh), control_auv_("position"), inputData_(nh)  {

        for (int i = 0; i < 6; i++){
            enable_axis_controller_[i] = false;
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

        stability_count_ = 0;
        last_time_                 = std::chrono::steady_clock::now();
        target_reached_time_       = std::chrono::steady_clock::now();
        linear_ask_position_       = Eigen::Vector3d::Zero();
        angular_ask_position_      = Eigen::Vector3d::Zero();
        linear_last_ask_position_  = Eigen::Vector3d::Zero();
        angular_last_ask_position_ = Eigen::Vector3d::Zero();
        position_target_           = Eigen::Vector3d::Zero();
        orientation_target_        = Eigen::Vector3d::Zero();
        world_position_            = Eigen::Vector3d::Zero();
        world_orientation_         = Eigen::Vector3d::Zero();
        isTargetReached_           = {false, false, false, false, false, false};

        linear_trajectory_.ResetSpline();
        angular_trajectory_.ResetSpline();
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
        error_.X = error[X];
        error_.Y = error[Y];
        error_.Z = error[Z];
        error_.PITCH = error[ROLL];
        error_.ROLL = error[PITCH];
        error_.YAW = error[YAW];

        controllerErrorPublisher_.publish(error_);

    }

    void PositionMode::TargetErrorPublisher(EigenVector6d &error) {

        proc_control::PositionTarget error_;
        error_.X = error[X];
        error_.Y = error[Y];
        error_.Z = error[Z];
        error_.PITCH = error[ROLL];
        error_.ROLL = error[PITCH];
        error_.YAW = error[YAW];

        targetErrorPublisher_.publish(error_);

    }

    void PositionMode::CurrentTargetPositionPublisher() {

        proc_control::PositionTarget current_target;

        current_target.X = linear_ask_position_[X];
        current_target.Y = linear_ask_position_[Y];
        current_target.Z = linear_ask_position_[Z];
        current_target.ROLL = angular_ask_position_[X] * RAD_TO_DEGREE;
        current_target.PITCH = angular_ask_position_[Y] * RAD_TO_DEGREE;
        current_target.YAW = angular_ask_position_[Z] * RAD_TO_DEGREE;
        targetPublisher_.publish(current_target);

    }

    void PositionMode::CurrentCommandDebugPublisher(EigenVector6d &command) {

        proc_control::PositionTarget current_command;

        current_command.X = command[X];
        current_command.Y = command[Y];
        current_command.Z = command[Z];
        current_command.ROLL = command[X];
        current_command.PITCH = command[Y];
        current_command.YAW = command[Z];
        commandDebugPublisher_.publish(current_command);

    }

    void PositionMode::CurrentTargetDebugPositionPublisher() {

        proc_control::PositionTarget msg_target;
        msg_target.X = position_target_[0];
        msg_target.Y = position_target_[1];
        msg_target.Z = position_target_[2];
        msg_target.ROLL = orientation_target_[0] * RAD_TO_DEGREE;
        msg_target.PITCH = orientation_target_[1] * RAD_TO_DEGREE;
        msg_target.YAW = orientation_target_[2] * RAD_TO_DEGREE;
        debugTargetPublisher_.publish(msg_target);
    }

    void PositionMode::Process() {

        EigenVector6d local_error = EigenVector6d::Zero();
        EigenVector6d targetError = EigenVector6d::Zero();

        std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();

        UpdateInput();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(now_time - last_time_).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            if (linear_trajectory_.IsSplineCalculated() && isTargetReached_[5])
                position_target_ = linear_trajectory_.ComputeLinearSpline(deltaTime_s);
            if (angular_trajectory_.IsSplineCalculated())
                orientation_target_ = angular_trajectory_.ComputeAngularSpline(deltaTime_s);

            CurrentTargetDebugPositionPublisher();

            local_error = GetLocalError(position_target_, orientation_target_, deltaTime_s);
            LocalErrorPublisher(local_error);

            targetError = GetLocalError(linear_ask_position_, angular_ask_position_, 1);
            TargetErrorPublisher(targetError);

            proc_control::TargetReached msg_target_reached;
            msg_target_reached.target_is_reached = static_cast<unsigned char>(EvaluateTargetReached(targetError) ? 1 : 0);
            targetIsReachedPublisher_.publish(msg_target_reached);


            // Calculate required actuation
            EigenVector6d actuation = EigenVector6d::Zero();
            actuation = control_auv_.GetActuationForError(local_error);

            for (int i = 0; i < 6; i++) {
                if (!enable_axis_controller_[i]) actuation[i] = 0.0f;
            }

            CurrentCommandDebugPublisher(actuation);

            thrusterManager_.Commit(actuation);

        }

        last_time_ = now_time;

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

        target_reached_time_ = std::chrono::steady_clock::now();

        linear_ask_position_ = translation;
        angular_ask_position_ = orientation;

        for (int i = 0; i < 3; i++)
        {
            if (keepTarget[i])
                linear_ask_position_[i] = linear_last_ask_position_[i];
            if (keepTarget[i + 3])
                angular_ask_position_[i] = angular_last_ask_position_[i];
        }

        ComputeTrajectoryFromTarget(linear_ask_position_, angular_ask_position_);

        linear_last_ask_position_ = linear_ask_position_;
        angular_last_ask_position_ = angular_ask_position_;

        CurrentTargetPositionPublisher();
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget) {

        ResetTrajectory();

        target_reached_time_ = std::chrono::steady_clock::now();

        Eigen::Affine3d local_ask_pose_h;

        Eigen::Vector3d world_orientation = world_orientation_;
        Eigen::Vector3d world_position = world_position_;

        for (int j = 0; j < 3; j++) {
            if (keepTarget[j])
                world_position[j] = linear_ask_position_[j];
            if (keepTarget[j+3])
                world_orientation[j] = angular_ask_position_[j];
        }

        Eigen::Affine3d ask_target_h  = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        //std::cout << orientation << std::endl;
        Eigen::Affine3d actual_pose_h = ComputeTransformation_.HomogeneousMatrix(world_orientation, world_position);

        local_ask_pose_h = actual_pose_h * ask_target_h;

        linear_ask_position_  = local_ask_pose_h.translation();
        angular_ask_position_ = local_ask_pose_h.linear().eulerAngles(0, 1, 2);

//        for (int i = 0; i < 3; i++){
//            if (keepTarget[i])
//                linear_ask_position_[i] = linear_last_ask_position_[i];
//            if (keepTarget[i + 3])
//                angular_ask_position_[i] = angular_last_ask_position_[i];
//        }

        ComputeTrajectoryFromTarget(linear_ask_position_, angular_ask_position_);

        linear_last_ask_position_ = linear_ask_position_;
        angular_last_ask_position_ = angular_ask_position_;

        CurrentTargetPositionPublisher();

    }

    PositionMode::EigenVector6d PositionMode::GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, double dt) {

        Eigen::Affine3d local_error_h;

        EigenVector6d local_error = EigenVector6d::Zero();

        UpdateInput();

        Eigen::Affine3d target_h = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actual_pose_h = ComputeTransformation_.HomogeneousMatrix(world_orientation_, world_position_);


        local_error_h = actual_pose_h.inverse() * target_h;

        local_error << local_error_h.translation(), local_error_h.linear().eulerAngles(0, 1, 2) * RAD_TO_DEGREE;

        local_error[ROLL] = 0.0;
        local_error[PITCH] = 0.0;

        return local_error;

    }

    bool PositionMode::EvaluateTargetReached(EigenVector6d &error) {

        bool targetIsReached = false;

        std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(now_time - target_reached_time_).count()) / (double(1E9));

        isTargetReached_ = control_auv_.IsInBoundingBox(error);

        if (isTargetReached_[0] && isTargetReached_[1] && isTargetReached_[2] && isTargetReached_[3] && isTargetReached_[4] && isTargetReached_[5])
        {
            stability_count_++;
        }
        else
        {
            stability_count_ = 0;
        }

        if (stability_count_ > 14 || deltaTime_s > 30.0){
            targetIsReached = true;
            stability_count_ = 0;
        }

        return targetIsReached;

    }


    void PositionMode::UpdateInput() {
        world_position_ = inputData_.GetPositionTranslation();
        world_orientation_ = inputData_.GetPositionOrientation();
    }


    void PositionMode::ComputeTrajectoryFromTarget(Eigen::Vector3d &linear_pose, Eigen::Vector3d &angular_pose) {

        linear_trajectory_.SetSplineParameters(linear_last_ask_position_, linear_pose);
        angular_trajectory_.SetSplineParameters(angular_last_ask_position_, angular_pose);

    }


    bool PositionMode::enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                                    proc_control::EnableControlResponse &response) {

        EigenVector6d actual_pose = EigenVector6d::Zero();

        UpdateInput();
        actual_pose << world_position_, world_orientation_;

        if (request.X != request.DONT_CARE) {
            linear_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.X), actual_pose[X], X);
        }

        if (request.Y != request.DONT_CARE) {
            linear_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.Y), actual_pose[Y], Y);
        }

        if (request.Z != request.DONT_CARE) {
            linear_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.Z), actual_pose[Z], Z);
        }

        if (request.ROLL != request.DONT_CARE) {
            angular_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.ROLL), actual_pose[ROLL], ROLL);
        }

        if (request.PITCH != request.DONT_CARE) {
            angular_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.PITCH), actual_pose[PITCH], PITCH);
        }

        if (request.YAW != request.DONT_CARE) {
            angular_trajectory_.ResetSpline();
            HandleEnableDisableControl(bool(request.YAW), actual_pose[YAW], YAW);
        }

        linear_ask_position_ << actual_pose[X], actual_pose[Y], actual_pose[Z];
        angular_ask_position_ << actual_pose[ROLL], actual_pose[PITCH], actual_pose[YAW];
        CurrentTargetPositionPublisher();

        position_target_    = Eigen::Vector3d::Zero();
        orientation_target_ = Eigen::Vector3d::Zero();

        linear_trajectory_.ResetSpline();
        angular_trajectory_.ResetSpline();

        std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
        ROS_INFO_STREAM("Active control : Position");
        for (int i = 0; i < 6; i++) {
            ROS_INFO_STREAM(tmp[i] + " : " + (enable_axis_controller_[i] ? "true" : "false"));
        }

        return true;
    }


    void PositionMode::HandleEnableDisableControl(bool state, double target, const size_t axis) {

        enable_axis_controller_[axis] = state;
        if (axis < 3) {
            position_target_[axis] = target;
        } else {
            orientation_target_[axis - 3] = target;
        }

        CurrentTargetPositionPublisher();

    }

    void PositionMode::KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in) {

        if(!state_in->state){
            for (int i = 0; i < 6; i++) {
                enable_axis_controller_[i] = false;
            }

            position_target_    = Eigen::Vector3d::Zero();
            orientation_target_ = Eigen::Vector3d::Zero();

            linear_trajectory_.ResetSpline();
            angular_trajectory_.ResetSpline();
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
        linear_ask_position_ = world_position_;
        angular_ask_position_ = world_orientation_;
        linear_last_ask_position_ = world_position_;
        angular_last_ask_position_ = world_orientation_;
        ComputeTrajectoryFromTarget(linear_ask_position_, angular_ask_position_);

        CurrentTargetPositionPublisher();
        return true;
    }

    bool PositionMode::SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                                        proc_control::SetBoundingBoxResponse &response){
        EigenVector6d bbox;
        bbox << request.X, request.Y, request.Z, request.ROLL, request.PITCH, request.YAW;
        control_auv_.SetNewBoundingBox(bbox);
        return true;

    }

    bool PositionMode::ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                                          proc_control::ResetBoundingBoxResponse &response) {
        control_auv_.ResetBoundingBox();
        return true;
    }
}


