//
// Created by olavoie on 12/11/18.
//

#include "PIDController.h"


namespace proc_control
{
    PIDController::PIDController(const std::string & controllerType)
    {
        for (std::string & axe : CommandedAxis)
        {
            std::shared_ptr<control::PIDParameters> pidParam = std::make_shared<control::PIDParameters>();
            pidParameters_.emplace_back(new PIDParameters(axe, controllerType, pidParam));
        }


        for (auto & pidParameter : pidParameters_)
        {
            pidController_.emplace_back(new control::ContinuousTimePid(pidParameter->GetPIDParameters()));
        }

    }

    Eigen::VectorXd PIDController::ComputedWrenchFromError(control::ControllerCMD &command)
    {
        Eigen::VectorXd actuation = Eigen::VectorXd::Zero(6);

        size_t i{0};
        for (auto & pid : pidController_)
        {
            actuation[i] = pid->Update(command.errorPose[i]);
            ++i;
        }
        actuation[2] += pidParameters_[2]->GetConstanteDepthForce();
        return actuation;
    }
}

