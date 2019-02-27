//
// Created by olavoie on 11/9/18.
//

#include "PPIController.h"

namespace proc_control
{
    PPIController::PPIController() :
        ControllerIF(),
        transferFunctionCoefficient_{ std::make_shared<control::TransferFunctionCoefficient>() },
        ppiController_(transferFunctionCoefficient_, 1, 0.237175750019500),
        paramManagers_("PPIParameters", transferFunctionCoefficient_)
    {
    }

    Eigen::VectorXd PPIController::ComputedWrenchFromError(control::ControllerCMD & command)
    {
        return ppiController_.Update(command);
    }
}


