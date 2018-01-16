//
// Created by olavoie on 1/13/18.
//

#include "PositionMode.h"

namespace proc_control{

    PositionMode::PositionMode(const ros::NodeHandlePtr &nh): inputData_(nh) {}

    void PositionMode::Process() {
        float a;

    }

    void PositionMode::SetTarget(bool isGlobal, Eigen::Vector3d translation, Eigen::Vector3d orientation) {

        UpdateInput();

        if (isGlobal){
            SetGlobalTarget(translation, orientation);
        } else{
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
    }

    void PositionMode::SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation) {

        ResetTrajectory();

        Eigen::Affine3d local_ask_pose_h;

        Eigen::Affine3d ask_target_h = ComputeTransformation_.HomogeneousMatrix(orientation, translation);
        Eigen::Affine3d actual_pose_h = ComputeTransformation_.HomogeneousMatrix(world_orientation_, world_position_);

        local_ask_pose_h = actual_pose_h * ask_target_h;

        ask_position_ << local_ask_pose_h.translation(), local_ask_pose_h.linear().eulerAngles(0, 1, 2);

        if (ask_position_[YAW] < 0.0f){
            ask_position_[YAW] = ask_position_[YAW] + 360;
        }

        EigenVector6d actual_position;
        actual_position << world_position_, world_orientation_;

        ComputeTrajectoryFromTarget(actual_position, ask_position_);

        last_ask_position_ = ask_position_;

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
        trajectory_roll_.SetOrientationSplineParameters(last_ask_position_[ROLL], final_pose[ROLL], parameters[0], parameters[1]);
        parameters = SetBestRotationTrajectoryParameters(last_ask_position_[PITCH] - final_pose[PITCH]);
        trajectory_pitch_.SetOrientationSplineParameters(last_ask_position_[PITCH], final_pose[PITCH], parameters[0], parameters[1]);
        parameters = SetBestRotationTrajectoryParameters(last_ask_position_[YAW] - final_pose[YAW]);
        trajectory_yaw_.SetOrientationSplineParameters(last_ask_position_[YAW], final_pose[YAW], parameters[0], parameters[1]);

    }

    std::array<bool, 2> PositionMode::SetBestRotationTrajectoryParameters(double delta_angle) {

        BestParam parameters;

        parameters[0] = false;

        if (fabs(delta_angle) > 180.0) {parameters[0] = true;}

        if (delta_angle < 0.0){
            parameters[1] = true;
        } else{
            parameters[1] = false;
        }

        return parameters;
    }

}


