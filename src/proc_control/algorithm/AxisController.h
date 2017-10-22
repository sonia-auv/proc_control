/**
 * \file	AxisController.h
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

#ifndef PROC_CONTROL_AXISCONTROLLER_H
#define PROC_CONTROL_AXISCONTROLLER_H

#include "ControlAlgorithm.h"
#include "proc_control/controller/controller_parameters.h"
#include "proc_control/controller/PID.h"

class AxisController
{
public:
    //==========================================================================
    // P U B L I C   C / D T O R S
    AxisController(int controller_type, std::string name);


    double CalculateActuationForError(double &error);

private:
    enum ControllerType{PID_ = 0, PI_, PD_, P_};

    ControllerType controller_type_;

    std::shared_ptr<ControlAlgorithm> current_controller_;

};


#endif //PROC_CONTROL_AXISCONTROLLER_H
