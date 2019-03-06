//
// Created by olavoie on 10/27/18.
//

#ifndef PROC_CONTROL_PPIPARAMETERS_H
#define PROC_CONTROL_PPIPARAMETERS_H

#include <string>
#include <control_library/ControlType.h>

#include "ParamManagerIF.h"
#include "proc_control/PPIControllerConfig.h"

namespace proc_control
{
    class PPIParameters : ParamManagerIF<PPIControllerConfig>
    {
    public:

        PPIParameters(const std::string & paramName, std::shared_ptr<control::TransferFunctionCoefficient> & transferFunctionCoefficient);

        virtual ~PPIParameters() = default;

        void OnDynamicReconfigureChange(const PPIControllerConfig &config ) override;

        void WriteConfigFile( const PPIControllerConfig &config ) override;

        void ReadConfigFile( PPIControllerConfig &config ) override;

    private:
        std::shared_ptr<control::TransferFunctionCoefficient> transferFunctionCoefficient_;

        std::string filePath_;
        std::list<std::string> paramKey_;
    };
}

#endif //PROC_CONTROL_PPIPARAMETERS_H