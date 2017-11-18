//
// Created by olavoie on 10/22/17.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H

#include "proc_control/algorithm/ControlAlgorithm.h"
#include "controller_parameters.h"
#include <chrono>


class PID : public ControlAlgorithm {

public:

    PID(std::shared_ptr<ControllerParameters> PID_parameters);
    ~PID() = default;

    double ComputeCommand(const double &error) override ;

private:
    //==========================================================================
    // P R I V A T E   M E M B E R S

    double last_error_;
    double integration_sum_;
    std::chrono::steady_clock::time_point last_time_;

    std::shared_ptr<ControllerParameters> PID_parameters_;

};


#endif //PROC_CONTROL_PID_H
