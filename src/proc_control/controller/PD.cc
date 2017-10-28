/**
 * \file	PD.cc
 * \author	Antoine Dozois <dozois.a@gmail.com>
 * \date	10/28/17
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
#include "PD.h"

PD::PD(std::shared_ptr<ControllerParameters> PD_parameters): PD_parameters_(PD_parameters) {
    command_ = 0.0;
}


double PD::ComputeCommand(const double &target){

    error_ = target-command_;
    command_ = PD_parameters_->Parameters_Map["P"]*error_ + PD_parameters_->Parameters_Map["D"]*error_;
    return command_;

}


double PD::GetError() {
    return error_;
}