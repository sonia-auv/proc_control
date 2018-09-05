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
#include "proc_control/SetBoundingBox.h"
#include "proc_control/ResetBoundingBox.h"

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
        bool SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                           proc_control::SetBoundingBoxResponse &response);
        bool ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                             proc_control::ResetBoundingBoxResponse &response);

        inline void ResetTrajectory();

        void Process() override;

        void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;
        void SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;

        void ComputeTrajectoryFromTarget(Eigen::Vector3d &linear_pose, Eigen::Vector3d &angular_pose);

    private:

        void SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget);

        void SetGlobalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget);

        bool EvaluateTargetReached(EigenVector6d &error);

        void HandleEnableDisableControl(bool state, double target, const size_t axis);

        void LocalErrorPublisher(EigenVector6d &error);
        void TargetErrorPublisher(EigenVector6d &error);
        void CurrentCommandDebugPublisher(EigenVector6d &command);
        void CurrentTargetPositionPublisher();
        void CurrentTargetDebugPositionPublisher();

        void UpdateInput();

        EigenVector6d GetLocalError(Eigen::Vector3d &translation, Eigen::Vector3d &orientation);

        ros::NodeHandlePtr nh_;

        ros::Subscriber killSwitchSubscriber_;

        // Publisher
        ros::Publisher targetPublisher_;
        ros::Publisher debugTargetPublisher_;
        ros::Publisher controllerErrorPublisher_;
        ros::Publisher targetErrorPublisher_;
        ros::Publisher targetIsReachedPublisher_;
        ros::Publisher commandDebugPublisher_;

        ros::ServiceServer enableControllerServer_;
        ros::ServiceServer enableThrustersServer_;
        ros::ServiceServer clearWayPointServer_;
        ros::ServiceServer resetBoundingBoxServer_;
        ros::ServiceServer setBoundingBoxServer_;

        proc_control::ControlAUV controlAuv_;

        proc_control::ControlInput inputData_;

        Eigen::Vector3d linearAskPosition_;
        Eigen::Vector3d angularAskPosition_;
        Eigen::Vector3d linearLastAskPosition_;
        Eigen::Vector3d angularLastAskPosition_;

        Eigen::Matrix<bool, 6, 1> enableAxisController_;

        Eigen::Vector3d positionTarget_;
        Eigen::Vector3d orientationTarget_;

        Eigen::Vector3d worldPosition_;
        Eigen::Vector3d worldOrientation_;

        proc_control::Transformation ComputeTransformation_;

        proc_control::Trajectory linearTrajectory_;
        proc_control::Trajectory angularTrajectory_;

        std::chrono::steady_clock::time_point lastTime_;
        std::chrono::steady_clock::time_point targetReachedTime_;

        int stabilityCount_;

    };

    inline void PositionMode::ResetTrajectory() {
        linearTrajectory_.ResetSpline();
        angularTrajectory_.ResetSpline();
    }

}


#endif //PROC_CONTROL_POSITIONMODE_H
