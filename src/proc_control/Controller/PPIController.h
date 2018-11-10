//
// Created by olavoie on 11/9/18.
//

#ifndef PROC_CONTROL_PPICONTROLLER_H
#define PROC_CONTROL_PPICONTROLLER_H

#include <memory>
#include <control_library/ControlType.h>
#include <control_library/Controller/ControllerPPI.h>

#include "proc_control/algorithm/ControllerIF.h"
#include "proc_control/ParametersManager/PPIParameters.h"
#include "proc_control/PPIControllerConfig.h"

namespace proc_control
{
    class PPIController : public ControllerIF
    {
    public:
        PPIController();
        virtual ~PPIController() = default;

        Eigen::VectorXd   ComputedWrenchFromError(control::ControllerCMD & command) override;
        std::vector<bool> IsInBoundingBox(Eigen::VectorXd &error) override;

    private:
        std::shared_ptr<control::TransferFunctionCoefficient> transferFunctionCoefficient_;

        control::ControllerPPI ppiController_;
        PPIParameters          paramManagers_;

    };
}

#endif //PROC_CONTROL_PPICONTROLLER_H
