//
// Created by olavoie on 12/18/18.
//

#include "BController.h"

namespace proc_control
{
    BController::BController():
        transferFunctionCoefficient_{ std::make_shared<control::TransferFunctionCoefficient>() },
        commandBParameters_(new CommandBParameters(transferFunctionCoefficient_)),
        transferFunction_(control::CARTESIAN_SPACE, transferFunctionCoefficient_, 4)
    {
    }

    Eigen::VectorXd BController::ComputedWrenchFromError(control::ControllerCMD &command)
    {
        return transferFunction_.Update(command.errorVelocity);
    }

    std::vector<bool> BController::IsInBoundingBox(Eigen::VectorXd &error)
    {
        std::vector<bool> b {false, false, false, false, false, false};

        return b;
    }

}