//
// Created by olavoie on 10/22/17.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H

#include "proc_control/algorithm/ControlAlgorithm.h"


class PID : public ControlAlgorithm {

public:

    PID(const std::string &name);

    double GetValueForError(const double &error);

};


#endif //PROC_CONTROL_PID_H
