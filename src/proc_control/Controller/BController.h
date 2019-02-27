//
// Created by olavoie on 12/18/18.
//

#ifndef PROC_CONTROL_BCONTROLLER_H
#define PROC_CONTROL_BCONTROLLER_H

#include <memory>
#include <control_library/ControlType.h>
#include <control_library/toolbox/TransferFunction.h>
#include <control_library/toolbox/ContinuousTimePid.h>
#include "proc_control/Controller/ControllerIF.h"
#include "proc_control/ParametersManager/CommandBParameters.h"
#include "proc_control/ParametersManager/PIDParameters.h"

namespace proc_control
{
    class BController : public ControllerIF
    {
    public:
        BController();
        virtual ~BController() = default;

        Eigen::VectorXd ComputedWrenchFromError(control::ControllerCMD & command) override;

    private:
        std::shared_ptr<control::TransferFunctionCoefficient>  transferFunctionCoefficient_;
        std::unique_ptr<CommandBParameters>                    commandBParameters_;


        control::TransferFunction               transferFunction_;
        std::shared_ptr<control::PIDParameters> controlPIDParameters_;
        PIDParameters                           pidParameters_;
        control::ContinuousTimePid              pidController_;

    };
}

#endif //PROC_CONTROL_BCONTROLLER_H