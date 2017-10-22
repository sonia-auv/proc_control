/**
 * \file	AxisController.cc
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

#include "AxisController.h"

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//

AxisController::AxisController(int controller_type, std::string name): current_controller_(nullptr) {

    switch(controller_type)
    {
        case 0: controller_type_ = PID_;
                current_controller_ = std::make_shared<PID>(name);
            break;
        case 1: controller_type_ = PI_;
            break;
        case 2: controller_type_ = PD_;
            break;
        case 3: controller_type_ = P_;
            break;
        default:
            std::cout << "Not implemented yet" << std::endl;
    }


}

double AxisController::CalculateActuationForError(double &error){

    return current_controller_->GetValueForError(error);

}

