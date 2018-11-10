//
// Created by olavoie on 11/9/18.
//

#include "PPIController.h"

namespace proc_control
{
    PPIController::PPIController() :
        ControllerIF(),
        transferFunctionCoefficient_{ std::make_shared<control::TransferFunctionCoefficient>() },
        ppiController_(transferFunctionCoefficient_, 1, 0.790365564859250),
        paramManagers_("PPIParameters", transferFunctionCoefficient_)
    {
    }

    Eigen::VectorXd PPIController::ComputedWrenchFromError(control::ControllerCMD & command)
    {
        return ppiController_.Update(command);

    }

    std::vector<bool> PPIController::IsInBoundingBox(Eigen::VectorXd &error)
    {
        std::vector<bool> b {false, false, false, false, false, false};

        return b;
    }
}


