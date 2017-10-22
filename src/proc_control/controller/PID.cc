//
// Created by olavoie on 10/21/17.
//

#include "PID.h"

PID::PID(const std::list<std::string> &parameters_names, const std::list<double> &parameters_values):
        pid_values_(parameters_names, parameters_values) {}

double PID::GetValueForError(double error) {
    double actuation = 0;
    return actuation;
}