/**
 * \file	ParametersManager.cc
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	10/24/17
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

#include <fstream>
#include "ParametersManager.h"
#include "proc_control/property.h"


ParametersManager::ParametersManager(std::string axe_name, std::shared_ptr<ControllerParameters> controller_parameters):
        ConfigManager(axe_name + "_controller_parameters"), controller_parameters_(controller_parameters)
{

    file_path_ = kConfigPath + axe_name + "_controller_parameters" + kConfigExt;
    this->Init();

}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//

void ParametersManager::OnDynamicReconfigureChange(const ControllerConfig &config )
{

    controller_parameters_->Parameters_Values[0] = config.P;
    controller_parameters_->Parameters_Values[1] = config.I;
    controller_parameters_->Parameters_Values[2] = config.D;
    controller_parameters_->Parameters_Values[3] = config.I_LIMIT;
    controller_parameters_->Parameters_Values[4] = config.MIN_ACTUATION;
    controller_parameters_->Parameters_Values[5] = config.MAX_ACTUATION;


}

//-----------------------------------------------------------------------------
//

void ParametersManager::WriteConfigFile(const ControllerConfig &config )
{

    YAML::Emitter out;
    uint8_t i = 0;

    for (auto parameter_name : controller_parameters_->Parameters_Names){
        out << YAML::BeginMap;
        out << YAML::Key << parameter_name;
        out << YAML::Value << controller_parameters_->Parameters_Values[i];
        i++;
    }

    std::ofstream fout(file_path_);
    fout << out.c_str();

}

//-----------------------------------------------------------------------------
//

void ParametersManager::ReadConfigFile(ControllerConfig &config )
{

    YAML::Node node = YAML::LoadFile(file_path_);

    if (node[controller_parameters_->Parameters_Names[0]])
        controller_parameters_->Parameters_Values[0] = node[controller_parameters_->Parameters_Names[0]].as<double>();

    if (node[controller_parameters_->Parameters_Names[1]])
        controller_parameters_->Parameters_Values[1] = node[controller_parameters_->Parameters_Names[1]].as<double>();

    if (node[controller_parameters_->Parameters_Names[2]])
        controller_parameters_->Parameters_Values[2] = node[controller_parameters_->Parameters_Names[2]].as<double>();

    if (node[controller_parameters_->Parameters_Names[3]])
        controller_parameters_->Parameters_Values[3] = node[controller_parameters_->Parameters_Names[3]].as<double>();

    if (node[controller_parameters_->Parameters_Names[4]])
        controller_parameters_->Parameters_Values[4] = node[controller_parameters_->Parameters_Names[4]].as<double>();

    if (node[controller_parameters_->Parameters_Names[5]])
        controller_parameters_->Parameters_Values[5] = node[controller_parameters_->Parameters_Names[5]].as<double>();

    config.P = controller_parameters_->Parameters_Values[0];
    config.I = controller_parameters_->Parameters_Values[1];
    config.D = controller_parameters_->Parameters_Values[2];
    config.I_LIMIT = controller_parameters_->Parameters_Values[3];
    config.MIN_ACTUATION = controller_parameters_->Parameters_Values[4];
    config.MAX_ACTUATION = controller_parameters_->Parameters_Values[5];

}