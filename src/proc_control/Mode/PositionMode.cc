//
// Created by olavoie on 1/13/18.
//

#include "PositionMode.h"

namespace proc_control {

    PositionMode::PositionMode(const ros::NodeHandlePtr &nh) : nh_(nh), control_auv_("position"), inputData_(nh)  {

        for (int i = 0; i < 6; i++){
            enable_axis_controller_[i] = false;
        }

        killSwitchSubscriber_ = nh_->subscribe("/provider_kill_mission/kill_switch_msg", 100,
                                               &PositionMode::KillMissionCallback, this);

        enableControllerServer_ = nh_->advertiseService("/proc_control/enable_control",
                                                        &PositionMode::enableControlServiceCallback, this);
        enableThrustersServer_ = nh_->advertiseService("/proc_control/enable_thrusters",
                                                         &PositionMode::enableThrustersServerCallback, this);
        clearWayPointServer_ = nh->advertiseService("/proc_control/clear_waypoint",
                                                    &PositionMode::clearWayPointServiceCallback, this);

        errorPublisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_error", 100);
        targetPublisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
        debugTargetPublisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/debug_current_target", 100);
        targetIsReachedPublisher_ = nh_->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);

        stability_count_ = 0;
        last_time_ = std::chrono::steady_clock::now();
        ask_position_ = EigenVector6d::Zero();
        last_ask_position_ = EigenVector6d::Zero();
        position_target_ = Eigen::Vector3d::Zero();
        orientation_target_ = Eigen::Vector3d::Zero();
        world_position_ = Eigen::Vector3d::Zero();
        world_orientation_ = Eigen::Vector3d::Zero();

        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();

        std::cout << "Position mode" << std::endl;
    }

    PositionMode::~PositionMode() {

        killSwitchSubscriber_.shutdown();
        enableControllerServer_.shutdown();
        enableThrustersServer_.shutdown();
        clearWayPointServer_.shutdown();

    }

    void PositionMode::LocalErrorPublisher(EigenVector6d &error) {

        proc_control::PositionTarget error_;
        error_.X = error[X];
        error_.Y = error[Y];
        error_.Z = error[Z];
        error_.PITCH = error[ROLL];
        error_.ROLL = error[PITCH];
        error_.YAW = error[YAW];

        errorPublisher_.publish(error_);

    }

    void PositionMode::CurrentTargetPositionPublisher() {

        proc_control::PositionTarget current_target;

        current_target.X = ask_position_[X];
        current_target.Y = ask_position_[Y];
        current_target.Z = ask_position_[Z];
        current_target.ROLL = ask_position_[ROLL] * RAD_TO_DEGREE;
        current_target.PITCH = ask_position_[PITCH] * RAD_TO_DEGREE;
        current_target.YAW = ask_position_[YAW] * RAD_TO_DEGREE;
        targetPublisher_.publish(current_target);

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

        std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();

        UpdateInput();

        auto diff = now_time - last_time_;

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            if (trajectory_x_.IsSplineCalculated())
                position_target_[0] = trajectory_x_.ComputeLinearSpline(deltaTime_s);
            if (trajectory_y_.IsSplineCalculated())
                position_target_[1] = trajectory_y_.ComputeLinearSpline(deltaTime_s);
            if (trajectory_z_.IsSplineCalculated())
                position_target_[2] = trajectory_z_.ComputeLinearSpline(deltaTime_s);
            if (trajectory_roll_.IsSplineCalculated())
                orientation_target_[0] = trajectory_roll_.ComputeOrientationSpline(deltaTime_s);
            if (trajectory_pitch_.IsSplineCalculated())
                orientation_target_[1] = trajectory_pitch_.ComputeOrientationSpline(deltaTime_s);
            if (trajectory_yaw_.IsSplineCalculated())
                orientation_target_[2] = trajectory_yaw_.ComputeOrientationSpline(deltaTime_s);

            CurrentTargetDebugPositionPublisher();

            local_error = GetLocalError(position_target_, orientation_target_);
            LocalErrorPublisher(local_error);

            proc_control::TargetReached msg_target_reached;
            msg_target_reached.target_is_reached = static_cast<unsigned char>(EvaluateTargetReached(local_error) ? 1 : 0);
            targetIsReachedPublisher_.publish(msg_target_reached);

            // Calculate required actuation
            EigenVector6d actuation = EigenVector6d::Zero();
            actuation = control_auv_.GetActuationForError(local_error);

            for (int i = 0; i < 6; i++) {
                if (!enable_axis_controller_[i]) actuation[i] = 0.0f;
            }

            thruster_manager_.Commit(actuation);

        }

        last_time_ = now_time;

    }

    void PositionMode::SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        UpdateInput();

        if (isGlobal) {
            SetGlobalTarget(translation, orientation);
        } else {
            SetLocalTarget(translation, orientation);
        }
    }

    void PositionMode::SetGlobalTarget(Eigen::Vector3d translation, Eigen::Vector3d orientation) {

        ResetTrajectory();

        ask_position_ << translation, orientation;

        EigenVector6d actual_position;
        actual_position << world_position_, world_orientation_;

        ComputeTrajectoryFromTarget(actual_position, ask_position_);

        last_ask_position_ = ask_position_;

        CurrentTargetPositionPublisher();
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        ResetTrajectory();

        Eigen::Affine3d local_ask_pose_h;

        Eigen::Affine3d ask_target_h = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actual_pose_h = ComputeTransformation_.HomogeneousMatrix(world_orientation_, world_position_);

        local_ask_pose_h = actual_pose_h * ask_target_h;

        ask_position_ << local_ask_pose_h.translation(), local_ask_pose_h.linear().eulerAngles(0, 1, 2);

        if (ask_position_[YAW] < 0.0f) {
            ask_position_[YAW] = ask_position_[YAW] + (2 * M_PI);
        }

        EigenVector6d actual_position;
        actual_position << world_position_, world_orientation_;

        ComputeTrajectoryFromTarget(actual_position, ask_position_);

        last_ask_position_ = ask_position_;

        CurrentTargetPositionPublisher();

    }

    PositionMode::EigenVector6d PositionMode::GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        Eigen::Affine3d local_error_h;

        EigenVector6d local_error;

        UpdateInput();

        Eigen::Affine3d target_h = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actual_pose_h = ComputeTransformation_.HomogeneousMatrix(world_orientation_, world_position_);

        Eigen::Affine3d world_position_h_inverse = actual_pose_h.inverse();
        local_error_h = world_position_h_inverse * target_h;

        local_error << local_error_h.translation(), local_error_h.linear().eulerAngles(0, 1, 2) * RAD_TO_DEGREE;

        return local_error;

    }

    bool PositionMode::EvaluateTargetReached(EigenVector6d ask_position) {

        EigenVector6d actual_pose = EigenVector6d::Zero();
        EigenVector6d error;

        UpdateInput();
        actual_pose << world_position_, world_orientation_;
        error = ask_position - actual_pose;

        error[0] = ask_position[X] - actual_pose[X];
        error[1] = ask_position[Y] - actual_pose[Y];
        error[2] = ask_position[Z] - actual_pose[Z];
        error[3] = ask_position[ROLL] - actual_pose[ROLL];
        error[4] = ask_position[PITCH] - actual_pose[PITCH];
        error[5] = ask_position[YAW] - actual_pose[YAW];

        if (control_auv_.IsInBoundingBox(error)) {
            stability_count_++;
        } else {
            stability_count_ = 0;
        }

        return stability_count_ > 14;

    }


    void PositionMode::UpdateInput() {
        world_position_ = inputData_.GetPositionTranslation();
        world_orientation_ = inputData_.GetPositionOrientation();
    }


    void PositionMode::ComputeTrajectoryFromTarget(const EigenVector6d &initial_pose, const EigenVector6d &final_pose) {

        BestParam parameters;
        trajectory_x_.SetLinearSplineParameters(last_ask_position_[X], final_pose[X]);
        trajectory_y_.SetLinearSplineParameters(last_ask_position_[Y], final_pose[Y]);
        trajectory_z_.SetLinearSplineParameters(last_ask_position_[Z], final_pose[Z]);
        parameters = SetBestRotationTrajectoryParameters(last_ask_position_[ROLL] - final_pose[ROLL]);
        trajectory_roll_.SetOrientationSplineParameters(last_ask_position_[ROLL], final_pose[ROLL], parameters[0],
                                                        parameters[1]);
        parameters = SetBestRotationTrajectoryParameters(last_ask_position_[PITCH] - final_pose[PITCH]);
        trajectory_pitch_.SetOrientationSplineParameters(last_ask_position_[PITCH], final_pose[PITCH], parameters[0],
                                                         parameters[1]);
        parameters = SetBestRotationTrajectoryParameters(last_ask_position_[YAW] - final_pose[YAW]);
        trajectory_yaw_.SetOrientationSplineParameters(last_ask_position_[YAW], final_pose[YAW], parameters[0],
                                                       parameters[1]);

    }

    PositionMode::BestParam PositionMode::SetBestRotationTrajectoryParameters(double delta_angle) {

        BestParam parameters;

        parameters[0] = false;

        if (fabs(delta_angle) > 180.0) { parameters[0] = true; }

        if (delta_angle < 0.0) {
            parameters[1] = true;
        } else {
            parameters[1] = false;
        }

        return parameters;
    }

    bool PositionMode::enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                                    proc_control::EnableControlResponse &response) {

        EigenVector6d actual_pose = EigenVector6d::Zero();

        UpdateInput();
        actual_pose << world_position_, world_orientation_;

        if (request.X != request.DONT_CARE) {
            trajectory_x_.ResetSpline();
            HandleEnableDisableControl(bool(request.X), actual_pose[X], X);
        }

        if (request.Y != request.DONT_CARE) {
            trajectory_y_.ResetSpline();
            HandleEnableDisableControl(bool(request.Y), actual_pose[Y], Y);
        }

        if (request.Z != request.DONT_CARE) {
            trajectory_z_.ResetSpline();
            HandleEnableDisableControl(bool(request.Z), actual_pose[Z], Z);
        }

        if (request.ROLL != request.DONT_CARE) {
            trajectory_roll_.ResetSpline();
            HandleEnableDisableControl(bool(request.ROLL), actual_pose[ROLL], ROLL);
        }

        if (request.PITCH != request.DONT_CARE) {
            trajectory_pitch_.ResetSpline();
            HandleEnableDisableControl(bool(request.PITCH), actual_pose[PITCH], PITCH);
        }

        if (request.YAW != request.DONT_CARE) {
            trajectory_yaw_.ResetSpline();
            HandleEnableDisableControl(bool(request.YAW), actual_pose[YAW], YAW);
        }

        ask_position_ = actual_pose;
        CurrentTargetPositionPublisher();


        std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
        std::cout << "Active control : Position \n";
        for (int i = 0; i < 6; i++) {
            std::cout << tmp[i] + " : " + (enable_axis_controller_[i] ? "true" : "false") + "\t";
        }
        std::cout << std::endl;

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

        for (int i = 0; i < 6; i++) {
            enable_axis_controller_[i] = false;
        }

        position_target_ = Eigen::Vector3d::Zero();
        orientation_target_ = Eigen::Vector3d::Zero();

        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();
    }

    bool PositionMode::enableThrustersServerCallback(proc_control::EnableThrustersRequest &request,
                                                     proc_control::EnableThrustersResponse &response) {

        this->thruster_manager_.SetEnable(request.isEnable);

        return true;
    }

    bool PositionMode::clearWayPointServiceCallback(proc_control::ClearWaypointRequest &request,
                                                    proc_control::ClearWaypointResponse &response)
    {

        ask_position_ << world_position_, world_orientation_;

        CurrentTargetPositionPublisher();
        return true;
    }
}


