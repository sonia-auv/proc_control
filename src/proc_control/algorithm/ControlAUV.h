/**
 * \file	Control_AUV.h
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

#ifndef PROC_CONTROL_CONTROL_AUV_H
#define PROC_CONTROL_CONTROL_AUV_H

#include <eigen3/Eigen/Eigen>
#include <iostream>

#include "AxisController.h"

namespace proc_control{

    class ControlAUV
    {
    public:

        ControlAUV(std::string mode);

        ~ControlAUV() = default;

        Eigen::VectorXd GetActuationForError(Eigen::VectorXd &error);

        std::vector<bool> IsInBoundingBox(Eigen::VectorXd &error);

        void SetNewBoundingBox(Eigen::VectorXd BBox);
        void ResetBoundingBox();

    private:

        enum ControllerType{PID_ = 0, PI_, PD_, P_};

        AxisController x_, y_, z_, roll_, pitch_, yaw_;



    };
}




#endif //PROC_CONTROL_CONTROL_AUV_H
