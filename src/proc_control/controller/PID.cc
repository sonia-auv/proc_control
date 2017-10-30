//
// Created by olavoie on 10/22/17.
//

#include "PID.h"

PID::PID(std::shared_ptr<ControllerParameters> PID_parameters): PID_parameters_(PID_parameters) {
    command_ = 0.0;
}


double PID::ComputeCommand(const double &error){
    command_ = PID_parameters_->Parameters_Map["P"]*error + PID_parameters_->Parameters_Map["I"]*error + PID_parameters_->Parameters_Map["D"]*error;
    return command_;

}


double PID::GetError() {
    return error_;
}
