//
// Created by olavoie on 10/26/17.
//

#include "Control_AUV.h"

Control_AUV::Control_AUV(): x_(ControllerType::PID_, "x"), y_(ControllerType::PID_, "y"), z_(ControllerType::PID_, "z"), roll_(ControllerType::PID_, "roll"),
                            pitch_(ControllerType::PID_, "pitch"), yaw_(ControllerType::PID_, "yaw") {}

Control_AUV::~Control_AUV() { }

std::array<double, 6> Control_AUV::GetActuationForError(std::array<double, 6> &error){

    std::array<double, 6> actuation;

    actuation[0] = x_.CalculateActuationForError(error[0]);
    actuation[1] = y_.CalculateActuationForError(error[1]);
    actuation[2] = z_.CalculateActuationForError(error[2]);
    actuation[3] = roll_.CalculateActuationForError(error[3]);
    actuation[4] = pitch_.CalculateActuationForError(error[4]);
    actuation[5] = yaw_.CalculateActuationForError(error[5]);

    return actuation;

}
