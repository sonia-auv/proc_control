//
// Created by olavoie on 1/13/18.
//

#ifndef PROC_CONTROL_POSITIONMODE_H
#define PROC_CONTROL_POSITIONMODE_H

#include <chrono>

#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/trajectory/trajectory.h"
#include "proc_control/Mode/ControlModeIf.h"
#include "proc_control/Transformation/Transformation.h"
#include "proc_control/algorithm/ControlAUV.h"

#include "proc_control/PositionTarget.h"
#include "proc_control/EnableThrusters.h"
#include "proc_control/TargetReached.h"
#include "proc_control/ClearWaypoint.h"

namespace proc_control {

    class PositionMode : public ControlModeIf {
    public:

        typedef Eigen::Matrix<double, 6, 1> EigenVector6d;
        typedef std::array<bool, 2> BestParam;


        PositionMode(const ros::NodeHandlePtr &nh);

        ~PositionMode();


        void KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in);

        bool enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                          proc_control::EnableControlResponse &response);
        bool enableThrustersServerCallback(proc_control::EnableThrustersRequest &request,
                                           proc_control::EnableThrustersResponse &response);
        bool clearWayPointServiceCallback(proc_control::ClearWaypointRequest &request,
                                          proc_control::ClearWaypointResponse &response);

        inline void ResetTrajectory();

        void Process() override;

        void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;

        void ComputeTrajectoryFromTarget(const EigenVector6d &initial_pose, const EigenVector6d &final_pose);

        BestParam SetBestRotationTrajectoryParameters(double delta_angle);

    private:

        void SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        void SetGlobalTarget(Eigen::Vector3d translation, Eigen::Vector3d orientation);

        bool EvaluateTargetReached(EigenVector6d ask_position);

        void HandleEnableDisableControl(bool state, double target, const size_t axis);

        void LocalErrorPublisher(EigenVector6d &error);
        void CurrentTargetPositionPublisher();
        void CurrentTargetDebugPositionPublisher();

        void UpdateInput();

        EigenVector6d GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        ros::NodeHandlePtr nh_;

        ros::Subscriber killSwitchSubscriber_;

        // Publisher
        ros::Publisher targetPublisher_;
        ros::Publisher debugTargetPublisher_;
        ros::Publisher errorPublisher_;
        ros::Publisher targetIsReachedPublisher_;

        ros::ServiceServer enableControllerServer_;
        ros::ServiceServer enableThrustersServer_;
        ros::ServiceServer clearWayPointServer_;

        proc_control::ControlAUV control_auv_;

        proc_control::ControlInput inputData_;

        EigenVector6d ask_position_;
        EigenVector6d last_ask_position_;

        Eigen::Matrix<bool, 6, 1> enable_axis_controller_;

        Eigen::Vector3d position_target_;
        Eigen::Vector3d orientation_target_;

        Eigen::Vector3d world_position_;
        Eigen::Vector3d world_orientation_;

        proc_control::Transformation ComputeTransformation_;

        proc_control::Trajectory trajectory_x_;
        proc_control::Trajectory trajectory_y_;
        proc_control::Trajectory trajectory_z_;
        proc_control::Trajectory trajectory_roll_;
        proc_control::Trajectory trajectory_pitch_;
        proc_control::Trajectory trajectory_yaw_;

        std::chrono::steady_clock::time_point last_time_;

        int stability_count_;

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
