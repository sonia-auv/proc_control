/**
 * \file	PositionMode.h
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

#ifndef PROC_CONTROL_POSITIONMODE_H
#define PROC_CONTROL_POSITIONMODE_H

#include <chrono>

#include "proc_control/ControlInput/ControlInput.h"
#include "proc_control/trajectory/trajectory.h"
#include "proc_control/Mode/ControlModeIF.h"
#include "proc_control/Transformation/Transformation.h"
#include "proc_control/algorithm/ControlAUV.h"

#include "proc_control/PositionTarget.h"
#include "proc_control/EnableThrusters.h"
#include "proc_control/TargetReached.h"
#include "proc_control/ClearWaypoint.h"
#include "proc_control/SetBoundingBox.h"
#include "proc_control/ResetBoundingBox.h"

namespace proc_control {

    class PositionMode : public ControlModeIF {
    public:

        explicit PositionMode(const ros::NodeHandlePtr &nh);

        ~PositionMode();

        bool SetBoundingBoxServiceCallback(proc_control::SetBoundingBoxRequest &request,
                                           proc_control::SetBoundingBoxResponse &response);
        bool ResetBoundingBoxServiceCallback(proc_control::ResetBoundingBoxRequest &request,
                                             proc_control::ResetBoundingBoxResponse &response);

        void Process() override;

        void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;
        void SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) override;

    private:

        void SetLocalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget);

        void SetGlobalTarget(Eigen::Vector3d &translation, Eigen::Vector3d &orientation, std::vector<bool> keepTarget);

        bool EvaluateTargetReached(Eigen::VectorXd &error);

        Eigen::VectorXd GetLocalError(Eigen::VectorXd &pose);

        ros::NodeHandlePtr nh_;

        ros::ServiceServer resetBoundingBoxServer_;
        ros::ServiceServer setBoundingBoxServer_;

        proc_control::ControlAUV controlAuv_;

        proc_control::Transformation ComputeTransformation_;

        std::chrono::steady_clock::time_point lastTime_;
        std::chrono::steady_clock::time_point targetReachedTime_;

        int stabilityCount_;

    };
}


#endif //PROC_CONTROL_POSITIONMODE_H
