/**
 * \file	ControlModeIF.h
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

#ifndef PROC_CONTROL_CONTROLMODEIF_H
#define PROC_CONTROL_CONTROLMODEIF_H

#include <eigen3/Eigen/Eigen>

namespace proc_control{

    class ControlModeIF
    {
    public:

        explicit ControlModeIF() = default;

        virtual ~ControlModeIF() = default;

        virtual void Process() = 0;
        virtual void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) = 0;
        virtual void SetDecoupledTarget(bool isGlobal, std::vector<bool> keepTarget, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) = 0;

    };

}


#endif //PROC_CONTROL_CONTROLMODEIF_H