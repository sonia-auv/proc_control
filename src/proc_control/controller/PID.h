//
// Created by olavoie on 10/22/17.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H

#include "proc_control/algorithm/ControlAlgorithm.h"
#include "controller_parameters.h"


class PID : public ControlAlgorithm {

public:

    PID(std::shared_ptr<ControllerParameters> PID_parameters);

    double GetValueForError(const double &error);

private:

    std::shared_ptr<ControllerParameters> PID_parameters_;

};


#endif //PROC_CONTROL_PID_H
