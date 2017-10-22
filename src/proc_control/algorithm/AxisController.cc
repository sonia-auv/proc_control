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

AxisController::AxisController(const std::list<std::string> &parameters_names, const std::list<double> &parameters_values) {}

AxisController::~AxisController() {}

std::array<double, 6> AxisController::CalculateActuationForError(const std::array<double, 6> &error) {
    std::array<double, 6> actuation;
    return actuation;

}