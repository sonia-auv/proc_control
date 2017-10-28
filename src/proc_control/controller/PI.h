/**
 * \file	PI.h
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

#ifndef PROC_CONTROL_PI_H
#define PROC_CONTROL_PI_H

#include "proc_control/algorithm/ControlAlgorithm.h"
#include "controller_parameters.h"


class PI : public ControlAlgorithm{

public:

    PI(std::shared_ptr<ControllerParameters> PI_parameters);
    ~PI() = default;

    double ComputeCommand(const double &target) override ;

    double GetError();



private:
    double error_;
    double command_;
    std::shared_ptr<ControllerParameters> PI_parameters_;
};


#endif //PROC_CONTROL_PI_H
