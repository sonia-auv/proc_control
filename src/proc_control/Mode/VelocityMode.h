//
// Created by olavoie on 1/22/18.
//

#ifndef PROC_CONTROL_VELOCITYMODE_H
#define PROC_CONTROL_VELOCITYMODE_H

#include <chrono>

#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/Mode/ControlModeIf.h"
#include "proc_control/algorithm/ControlAUV.h"
#include "proc_control/PositionTarget.h"


namespace proc_control{

    class VelocityMode : public ControlModeIf {
    public:

        typedef Eigen::Matrix<double, 6, 1> EigenVector6d;

        VelocityMode(const ros::NodeHandlePtr &nh);
        ~VelocityMode();

        void Process() override;
        void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;

        bool enableControlServiceCallback(proc_control::EnableControlRequest &request,
                                          proc_control::EnableControlResponse &response);

        void KillMissionCallback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in);

    private:

        void UpdateInput();
        void HandleEnableDisableControl(bool state, const size_t axis);

        void CurrentTargetVelocityPublisher();

        ros::NodeHandlePtr nh_;

        ros::Subscriber killSwitchSubscriber_;

        ros::Publisher targetPublisher_;

        ros::ServiceServer enableControllerServer_;

        proc_control::ControlInput inputData_;

        EigenVector6d twist_target_;
        EigenVector6d world_twist_;

        proc_control::ControlAUV control_auv_;

        Eigen::Matrix<bool, 6, 1> enable_axis_controller_;

        std::chrono::steady_clock::time_point last_time_;

    };

}



#endif //PROC_CONTROL_VELOCITYMODE_H
