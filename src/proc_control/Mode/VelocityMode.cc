//
// Created by olavoie on 1/22/18.
//

#include "VelocityMode.h"

namespace proc_control{

    VelocityMode::VelocityMode(const ros::NodeHandlePtr &nh): nh_(nh), inputData_(nh), control_auv_("velocity") {

        for (int i = 0; i < 6; i++){
            enable_axis_controller_[i] = true;
        }

        enableControllerServer_ = nh_->advertiseService("/proc_control/enable_control",
                                                        &VelocityMode::enableControlServiceCallback, this);
        targetPublisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);

        twist_target_.setZero();

        UpdateInput();

        twist_target_[Z] = world_twist_[Z];
        twist_target_[YAW] = world_twist_[YAW];

        std::cout << "Velocity mode" << std::endl;
    }

    VelocityMode::~VelocityMode(){
        enableControllerServer_.shutdown();
    }

    void VelocityMode::Process(){


        EigenVector6d local_error = EigenVector6d::Zero();

        std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();

        UpdateInput();

        auto diff = now_time - last_time_;

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count()) / (double(1E9));

        if (deltaTime_s > (0.0001f)) {

            local_error = twist_target_ - world_twist_;

            std::cout << local_error << "\n" << std::endl;

            EigenVector6d actuation = EigenVector6d::Zero();
            actuation = control_auv_.GetActuationForError(local_error);

            for (int i = 0; i < 6; i++) {
                if (!enable_axis_controller_[i]) actuation[i] = 0.0;
            }

            std::cout << "axis enabled :" << enable_axis_controller_ << std::endl;

            thruster_manager_.Commit(actuation);

        }

    }

    void VelocityMode::SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        twist_target_ << translation, orientation;

        CurrentTargetVelocityPublisher();

    }

    void VelocityMode::UpdateInput() {
        world_twist_ << inputData_.GetVelocityTranslation(), inputData_.GetVelocityOrientation();
    }

    void VelocityMode::CurrentTargetVelocityPublisher() {

        proc_control::PositionTarget current_target;

        current_target.X = twist_target_[X];
        current_target.Y = twist_target_[Y];
        current_target.Z = twist_target_[Z];
        current_target.ROLL = twist_target_[ROLL] * RAD_TO_DEGREE;
        current_target.PITCH = twist_target_[PITCH] * RAD_TO_DEGREE;
        current_target.YAW = twist_target_[YAW] * RAD_TO_DEGREE;
        targetPublisher_.publish(current_target);

    }

    bool VelocityMode::enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                                    proc_control::EnableControlResponse &response) {

        UpdateInput();

        if (request.X != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.X), X);
        }

        if (request.Y != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.Y), Y);
        }

        if (request.Z != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.Z), Z);
        }

        if (request.ROLL != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.ROLL), ROLL);
        }

        if (request.PITCH != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.PITCH), PITCH);
        }

        if (request.YAW != request.DONT_CARE) {
            HandleEnableDisableControl(bool(request.YAW), YAW);
        }

        std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
        std::cout << "Active control : Velocity \n";
        for (int i = 0; i < 6; i++) {
            std::cout << tmp[i] + " : " + (enable_axis_controller_[i] ? "true" : "false") + "\t";
        }
        std::cout << std::endl;

        return true;
    }

    void VelocityMode::HandleEnableDisableControl(bool state, const size_t axis) {

        enable_axis_controller_[axis] = state;
        if (!enable_axis_controller_[axis]) world_twist_[axis] = 0.0;

    }

}