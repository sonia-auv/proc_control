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

        explicit PositionMode(const ros::NodeHandlePtr &nh);

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

        void ComputeTrajectoryFromTarget(Eigen::Vector3d &linear_pose, Eigen::Vector3d &angular_pose);

    private:

        void SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        void SetGlobalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        bool EvaluateTargetReached(EigenVector6d &ask_position);

        void HandleEnableDisableControl(bool state, double target, const size_t axis);

        void LocalErrorPublisher(EigenVector6d &error);
        void CurrentTargetPositionPublisher();
        void CurrentTargetDebugPositionPublisher();

        void UpdateInput();

        EigenVector6d GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, double dt);

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

        Eigen::Vector3d linear_ask_position_;
        Eigen::Vector3d angular_ask_position_;
        Eigen::Vector3d linear_last_ask_position_;
        Eigen::Vector3d angular_last_ask_position_;

        Eigen::Matrix<bool, 6, 1> enable_axis_controller_;

        Eigen::Vector3d position_target_;
        Eigen::Vector3d orientation_target_;

        Eigen::Vector3d world_position_;
        Eigen::Vector3d world_orientation_;

        proc_control::Transformation ComputeTransformation_;

        proc_control::Trajectory linear_trajectory_;
        proc_control::Trajectory angular_trajectory_;

        std::chrono::steady_clock::time_point last_time_;

        int stability_count_;

    };

    inline void PositionMode::ResetTrajectory() {
        linear_trajectory_.ResetSpline();
        angular_trajectory_.ResetSpline();
    }

}


#endif //PROC_CONTROL_POSITIONMODE_H
