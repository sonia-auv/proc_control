//
// Created by olavoie on 12/18/18.
//

#include "BController.h"

namespace proc_control
{
    BController::BController():
        transferFunctionCoefficient_{ std::make_shared<control::TransferFunctionCoefficient>() },
        commandBParameters_(new CommandBParameters(transferFunctionCoefficient_)),
        transferFunction_(control::CARTESIAN_SPACE, transferFunctionCoefficient_, 4),
        controlPIDParameters_{std::make_shared<control::PIDParameters>()},
        pidParameters_("z", "position", controlPIDParameters_),
        pidController_(controlPIDParameters_)
    {
    }

    Eigen::VectorXd BController::ComputedWrenchFromError(control::ControllerCMD &command)
    {
        Eigen::VectorXd wrench{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)};

        wrench    = transferFunction_.Update(command.errorVelocity);
        wrench[2] = pidController_.Update(command.errorVelocity[2]);

        return wrench;
    }
}