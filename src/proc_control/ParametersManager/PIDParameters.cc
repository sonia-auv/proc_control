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
#include "PIDParameters.h"
#include "proc_control/property.h"

namespace proc_control
{

    PIDParameters::PIDParameters(std::string &axe_name, std::string mode , std::shared_ptr<control::PIDParameters> &pidParameters):
            ParamManagerIF(axe_name + "_axis" + mode + "_controller"), pidParameters_(pidParameters)
    {
        file_path_ = kConfigPath + "/Controllers_parameters/" + axe_name + "_" + mode + "_controller_parameters" + kConfigExt;
        Init();
    }

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//

    void PIDParameters::OnDynamicReconfigureChange(const ControllerConfig &config )
    {
        pidParameters_->Kp = config.P;
        pidParameters_->Ki = config.I;
        pidParameters_->Kd = config.D;
        pidParameters_->iLimit = config.I_LIMIT;
        constante_depth_force_ = config.CONSTANT_DEPTH_FORCE;
    }

//-----------------------------------------------------------------------------
//

    void PIDParameters::WriteConfigFile(const ControllerConfig &config )
    {

        YAML::Emitter out;

        out << YAML::BeginMap;
        out << YAML::Key << "P";
        out << YAML::Value << pidParameters_->Kp;
        out << YAML::Key << "I";
        out << YAML::Value << pidParameters_->Ki;
        out << YAML::Key << "D";
        out << YAML::Value << pidParameters_->Kd;
        out << YAML::Key << "I_LIMIT";
        out << YAML::Value << pidParameters_->iLimit;
        out << YAML::Key << "CONSTANT_DEPTH_FORCE";
        out << YAML::Value << constante_depth_force_;

        std::ofstream fout(file_path_);
        fout << out.c_str();

    }

//-----------------------------------------------------------------------------
//

    void PIDParameters::ReadConfigFile(ControllerConfig &config )
    {
        YAML::Node node = YAML::LoadFile(file_path_);

        if (node["P"])
            pidParameters_->Kp = node["P"].as<double>();

        if (node["I"])
            pidParameters_->Ki = node["I"].as<double>();

        if (node["D"])
            pidParameters_->Kd = node["D"].as<double>();

        if (node["I_LIMIT"])
            pidParameters_->iLimit = node["I_LIMIT"].as<double>();

        if (node["CONSTANT_DEPTH_FORCE"])
            constante_depth_force_ = node["CONSTANT_DEPTH_FORCE"].as<double>();

        config.P = pidParameters_->Kp;
        config.I = pidParameters_->Ki;
        config.D = pidParameters_->Kd;
        config.I_LIMIT = pidParameters_->iLimit;
        config.CONSTANT_DEPTH_FORCE = constante_depth_force_;
    }


    double PIDParameters::GetConstanteDepthForce()
    {
        return constante_depth_force_;
    }
}
