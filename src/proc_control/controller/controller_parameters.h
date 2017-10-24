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

class ControllerParameters
{

public:
    //==========================================================================
    // P U B L I C   C / D T O R S
    ControllerParameters(const std::string axe_name,const std::vector<std::string> &parameters_names,
                         const std::vector<double> &parameters_values):
                         Axe_Name(axe_name),
                         Parameters_Names(parameters_names),
                         Parameters_Values(parameters_values),
                         Min_Actuation(0),
                         Max_Actuation(0){}

    ~ControllerParameters(){}

    //==========================================================================
    // P U B L I C   M E T H O D S

    std::map<std::string, double&> ToMap();

    //==========================================================================
    // P U B L I C   M E M B E R S
    std::string Axe_Name;
    std::vector<std::string> Parameters_Names;
    std::vector<double> Parameters_Values;
    double Min_Actuation, Max_Actuation;

};

inline std::map<std::string, double&> ControllerParameters::ToMap()
{

    std::map<std::string, double&> map;
    std::vector<double> parameters = Parameters_Values;
    u_int8_t i = 0;

    for (auto parameter_name : Parameters_Names){

        map.insert(std::pair<std::string, double&>(Axe_Name + parameter_name, parameters[i]));
        i++;

    }

    map.insert(std::pair<std::string, double&>(Axe_Name + "_MIN_ACTUATION", Min_Actuation));
    map.insert(std::pair<std::string, double&>(Axe_Name + "_MAX_ACTUATION", Max_Actuation));

    return map;

}


#endif //PROC_CONTROL_CONTROLLER_PARAMETERS_H
