/**
 * \file	proc_control_node.cc
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

#include "proc_control_node.h"


namespace proc_control{

    ProcControlNode::ProcControlNode(const ros::NodeHandlePtr &nh): nh_(nh), controlMode_(nullptr){

        setControlModeServer_ = nh->advertiseService("/proc_control/set_control_mode",
                                                    &ProcControlNode::setControlModeCallback, this);
        setGlobalTargetServer_ =
                nh_->advertiseService("/proc_control/set_global_target",
                                      &ProcControlNode::setGlobalTargetPositionCallback, this);
        setLocalTargetServer_ =
                nh_->advertiseService("/proc_control/set_local_target",
                                      &ProcControlNode::setLocalTargetPositionCallback, this);

        controlMode_ = std::make_shared<proc_control::PositionMode>(nh_);

    }

    ProcControlNode::~ProcControlNode() {

        setControlModeServer_.shutdown();
    }

    //==============================================================================
    // M E T H O D   S E C T I O N
    void ProcControlNode::Control_loop() {

        controlMode_->Process();

    }

    bool ProcControlNode::setControlModeCallback(proc_control::SetControlModeRequest &request,
                                                 proc_control::SetControlModeResponse &response) {

        auto mode = static_cast<int>(request.mode);

        switch (mode){
            case PositionMode_:
                controlMode_ = nullptr;
                controlMode_ = std::make_shared<proc_control::PositionMode>(nh_);
                break;
            case VelocityMode_:
                controlMode_ = nullptr;
                controlMode_ = std::make_shared<proc_control::VelocityMode>(nh_);
                break;
            default :
                controlMode_ = nullptr;
                controlMode_ = std::make_shared<proc_control::PositionMode>(nh_);
        }

        return true;

    }

    bool ProcControlNode::setGlobalTargetPositionCallback(proc_control::SetPositionTargetRequest &request,
                                                          proc_control::SetPositionTargetResponse &response) {

        Eigen::Vector3d target_position;
        Eigen::Vector3d target_orientation;

        target_position[0] = request.X;
        target_position[1] = request.Y;
        target_position[2] = request.Z;

        target_orientation[0] = request.ROLL * DEGREE_TO_RAD;
        target_orientation[1] = request.PITCH * DEGREE_TO_RAD;
        target_orientation[2] = request.YAW * DEGREE_TO_RAD;

        controlMode_->SetTarget(GlobalTarget, target_position, target_orientation);

        return true;
    }

    bool ProcControlNode::setLocalTargetPositionCallback(proc_control::SetPositionTargetRequest &request,
                                                         proc_control::SetPositionTargetResponse &response) {

        Eigen::Vector3d target_position;
        Eigen::Vector3d target_orientation;

        target_position[0] = request.X;
        target_position[1] = request.Y;
        target_position[2] = request.Z;

        target_orientation[0] = request.ROLL * DEGREE_TO_RAD;
        target_orientation[1] = request.PITCH * DEGREE_TO_RAD;
        target_orientation[2] = request.YAW * DEGREE_TO_RAD;

        controlMode_->SetTarget(LocalTarget, target_position, target_orientation);

        return true;

    }

}