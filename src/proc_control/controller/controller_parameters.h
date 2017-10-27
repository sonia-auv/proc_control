/**
 * \file	controller_parameters.h
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

#ifndef PROC_CONTROL_CONTROLLER_PARAMETERS_H
#define PROC_CONTROL_CONTROLLER_PARAMETERS_H

#include <map>
#include <string>
#include <vector>
#include <list>

class ControllerParameters {

public:
    //==========================================================================
    // P U B L I C   C / D T O R S
    ControllerParameters(const std::vector<std::string> &parameters_names,
                         const std::vector<double> &parameters_values) :
            Min_Actuation(0),
            Max_Actuation(0) {
        ToMap(parameters_names, parameters_values);
    }

    ~ControllerParameters() = default;

    //==========================================================================
    // P U B L I C   M E T H O D S

    void ToMap(const std::vector<std::string> &parameters_names, const std::vector<double> &parameters_values);

    //==========================================================================
    // P U B L I C   M E M B E R S
    std::map<std::string, double> Parameters_Map;
    double Min_Actuation, Max_Actuation;

};

inline void ControllerParameters::ToMap(const std::vector<std::string> &parameters_names,
                                        const std::vector<double> &parameters_values) {

    u_int8_t i = 0;
    double value;

    for(auto const &name: parameters_names){
        value = parameters_values[i];
        Parameters_Map.insert(std::pair<std::string,double>(name,value));
        i++;
    }

    Parameters_Map.insert(std::pair<std::string, double>("I_LIMIT", Min_Actuation));
    Parameters_Map.insert(std::pair<std::string, double>("MIN_ACTUATION", Min_Actuation));
    Parameters_Map.insert(std::pair<std::string, double>("MAX_ACTUATION", Max_Actuation));

}


#endif //PROC_CONTROL_CONTROLLER_PARAMETERS_H
