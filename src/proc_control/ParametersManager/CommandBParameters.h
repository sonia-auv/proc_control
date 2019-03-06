//
// Created by olavoie on 12/18/18.
//

#ifndef PROC_CONTROL_COMMANDBPARAMETERS_H
#define PROC_CONTROL_COMMANDBPARAMETERS_H

#include <memory>
#include <control_library/ControlType.h>

namespace proc_control
{
    class CommandBParameters
    {
    public:
        CommandBParameters(std::shared_ptr<control::TransferFunctionCoefficient> & transferFunctionCoefficientB);
        virtual ~CommandBParameters() = default;


    private:
        std::shared_ptr<control::TransferFunctionCoefficient>  transferFunctionCoefficientB_;

    };
}



#endif //PROC_CONTROL_COMMANDBPARAMETERS_H
