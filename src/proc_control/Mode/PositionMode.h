//
// Created by olavoie on 1/13/18.
//

#ifndef PROC_CONTROL_POSITIONMODE_H
#define PROC_CONTROL_POSITIONMODE_H

#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/trajectory/trajectory.h"
#include "proc_control/Mode/ControlModeIf.h"
#include "proc_control/Transformation/Transformation.h"

namespace proc_control {

    class PositionMode : public ControlModeIf {
    public:

        typedef Eigen::Matrix<double, 6, 1> EigenVector6d;
        typedef std::array<bool, 2> BestParam;

        PositionMode(const ros::NodeHandlePtr &nh);

        ~PositionMode() = default;

        inline void ResetTrajectory();

        void Process() override;

        void SetTarget(bool isGlobal, Eigen::Vector3d translation, Eigen::Vector3d orientation) override;

        void ComputeTrajectoryFromTarget(const EigenVector6d &initial_pose, const EigenVector6d &final_pose);

        BestParam SetBestRotationTrajectoryParameters(double delta_angle);

    private:

        void SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        void SetGlobalTarget(Eigen::Vector3d translation, Eigen::Vector3d orientation);

        void UpdateInput();

        proc_control::ControlInput inputData_;

        EigenVector6d ask_position_ = EigenVector6d::Zero();
        EigenVector6d last_ask_position_ = EigenVector6d::Zero();

        Eigen::Vector3d world_position_ = Eigen::Vector3d::Zero();
        Eigen::Vector3d world_orientation_ = Eigen::Vector3d::Zero();

        proc_control::Transformation ComputeTransformation_;

        proc_control::Trajectory trajectory_x_;
        proc_control::Trajectory trajectory_y_;
        proc_control::Trajectory trajectory_z_;
        proc_control::Trajectory trajectory_roll_;
        proc_control::Trajectory trajectory_pitch_;
        proc_control::Trajectory trajectory_yaw_;

    };

    inline void PositionMode::ResetTrajectory() {
        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();
    }

}


#endif //PROC_CONTROL_POSITIONMODE_H
