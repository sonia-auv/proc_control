/**
 * \file	ParametersManager.h
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

#ifndef PROC_CONTROL_PARAMETERSMANAGER_H
#define PROC_CONTROL_PARAMETERSMANAGER_H

#include <control_library/ControlType.h>
#include "proc_control/ParametersManager/ParamManagerIF.h"
#include "proc_control/PIDControllerConfig.h"

namespace proc_control
{
    class PIDParameters : public ParamManagerIF<PIDControllerConfig>
    {
    public:
        //==========================================================================
        // P U B L I C   C / D T O R S

        PIDParameters(std::string &axe_name, std::string mode ,std::shared_ptr<control::PIDParameters> &pidParameters);

        //==========================================================================
        // P U B L I C   O V E R R I D E D   M E T H O D S

        void OnDynamicReconfigureChange(const PIDControllerConfig &config ) override;

        void WriteConfigFile( const PIDControllerConfig &config ) override;

        void ReadConfigFile( PIDControllerConfig &config ) override;

        double GetConstanteDepthForce();

        std::shared_ptr<control::PIDParameters> & GetPIDParameters() {return pidParameters_;}

    private:
        //==========================================================================
        // P R I V A T E   M E M B E R S

        std::string file_path_;
        std::shared_ptr<control::PIDParameters> pidParameters_;
        double constante_depth_force_;
    };
}

#endif //PROC_CONTROL_PARAMETERSMANAGER_H
