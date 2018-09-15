/**
 * \file	VelocityMode.h
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
        void SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;

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
