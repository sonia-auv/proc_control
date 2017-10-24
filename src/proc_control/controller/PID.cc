//
// Created by olavoie on 10/22/17.
//

#include "PID.h"

PID::PID(std::shared_ptr<ControllerParameters> PID_parameters): PID_parameters_(PID_parameters) {}

double PID::GetValueForError(const double &error) {
    double actuation = 0;
    return actuation;

}
