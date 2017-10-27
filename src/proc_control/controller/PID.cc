//
// Created by olavoie on 10/22/17.
//

#include "PID.h"

PID::PID(std::shared_ptr<ControllerParameters> PID_parameters): PID_parameters_(PID_parameters) {
    command_ = 0.0;
}


double PID::ComputeCommand(const double &target){

    error_ = target-command_;
    command_ = PID_parameters_->Parameters_Map["P"]*error_ + PID_parameters_->Parameters_Map["I"]*error_ + PID_parameters_->Parameters_Map["D"]*error_;
    return command_;

}


double PID::GetError() {
    return error_;
}
