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
                                                     &ProcControlNode::SetControlModeCallback, this);
        setGlobalTargetServer_ =
                nh_->advertiseService("/proc_control/set_global_target",
                                      &ProcControlNode::SetGlobalTargetPositionCallback, this);
        setLocalTargetServer_ =
                nh_->advertiseService("/proc_control/set_local_target",
                                      &ProcControlNode::SetLocalTargetPositionCallback, this);

        setGlobalDecoupledTargetServer_ = nh_->advertiseService("/proc_control/set_global_decoupled_target",
                                                                &ProcControlNode::SetGlobalDecoupledTargetPositionCallback, this);
        setLocalDecoupledTargetServer_ = nh_->advertiseService("/proc_control/set_local_decoupled_target",
                                                                &ProcControlNode::SetLocalDecoupledTargetPositionCallback, this);

        controlMode_ = std::make_shared<proc_control::PositionMode>(nh_);

    }

    ProcControlNode::~ProcControlNode() {

        setControlModeServer_.shutdown();
        setGlobalDecoupledTargetServer_.shutdown();
        setLocalDecoupledTargetServer_.shutdown();
        setGlobalTargetServer_.shutdown();
        setLocalTargetServer_.shutdown();
    }

    //==============================================================================
    // M E T H O D   S E C T I O N
    void ProcControlNode::ControlLoop() {

        controlMode_->Process();

    }

    bool ProcControlNode::SetControlModeCallback(proc_control::SetControlModeRequest &request,
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

    bool ProcControlNode::SetGlobalTargetPositionCallback(proc_control::SetPositionTargetRequest &request,
                                                          proc_control::SetPositionTargetResponse &response) {

        Eigen::Vector3d targetPosition;
        Eigen::Vector3d targetOrientation;

        targetPosition    << request.X, request.Y, request.Z;
        targetOrientation << request.ROLL * DEGREE_TO_RAD, request.PITCH * DEGREE_TO_RAD, request.YAW * DEGREE_TO_RAD;

        controlMode_->SetTarget(GlobalTarget, targetPosition, targetOrientation);

        return true;
    }

    bool ProcControlNode::SetLocalTargetPositionCallback(proc_control::SetPositionTargetRequest &request,
                                                         proc_control::SetPositionTargetResponse &response) {

        Eigen::Vector3d targetPosition ;
        Eigen::Vector3d targetOrientation;

        targetPosition    << request.X, request.Y, request.Z;
        targetOrientation << request.ROLL * DEGREE_TO_RAD, request.PITCH * DEGREE_TO_RAD, request.YAW * DEGREE_TO_RAD;

        controlMode_->SetTarget(LocalTarget, targetPosition, targetOrientation);

        return true;

    }

    bool ProcControlNode::SetGlobalDecoupledTargetPositionCallback(proc_control::SetDecoupledTargetRequest &request,
                                                                   proc_control::SetDecoupledTargetResponse &response)
    {
        Eigen::Vector3d targetPosition;
        Eigen::Vector3d targetOrientation;

        std::vector<bool> keepTarget = {(bool)request.keepX, (bool)request.keepY, (bool)request.keepZ, (bool)request.keepROLL,
                                        (bool)request.keepPITCH, (bool)request.keepYAW};

        targetPosition    << request.X, request.Y, request.Z;
        targetOrientation << request.ROLL * DEGREE_TO_RAD, request.PITCH * DEGREE_TO_RAD, request.YAW * DEGREE_TO_RAD;

        controlMode_->SetDecoupledTarget(GlobalTarget, keepTarget, targetPosition, targetOrientation);

        return true;
    }

    bool ProcControlNode::SetLocalDecoupledTargetPositionCallback(proc_control::SetDecoupledTargetRequest &request,
                                                                  proc_control::SetDecoupledTargetResponse &response)
    {
        Eigen::Vector3d targetPosition;
        Eigen::Vector3d targetOrientation;

        std::vector<bool> keepTarget = {(bool)request.keepX, (bool)request.keepY, (bool)request.keepZ, (bool)request.keepROLL,
                                        (bool)request.keepPITCH, (bool)request.keepYAW};

        targetPosition    << request.X, request.Y, request.Z;
        targetOrientation << request.ROLL * DEGREE_TO_RAD, request.PITCH * DEGREE_TO_RAD, request.YAW * DEGREE_TO_RAD;

        controlMode_->SetDecoupledTarget(LocalTarget, keepTarget, targetPosition, targetOrientation);

        return true;
    }
}