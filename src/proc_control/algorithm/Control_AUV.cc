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

bool Control_AUV::IsInBoundingBox(std::array<double, 6> error) {

    double BBox_x = x_.get_axis_bbox();
    double BBox_y = y_.get_axis_bbox();
    double BBox_z = z_.get_axis_bbox();
    double BBox_roll = roll_.get_axis_bbox();
    double BBox_pitch = pitch_.get_axis_bbox();
    double BBox_yaw = yaw_.get_axis_bbox();
    return std::fabs(error[0]) <= BBox_x && std::fabs(error[1]) <= BBox_y && std::fabs(error[2]) <= BBox_z &&
            std::fabs(error[3]) <= BBox_roll && std::fabs(error[4]) <= BBox_pitch && std::fabs(error[5]) <= BBox_yaw;

}

void Control_AUV::SetNewBoundingBox(std::array<double, 6> BBox) {
    x_.set_axis_bbox(BBox[0]);
    y_.set_axis_bbox(BBox[1]);
    z_.set_axis_bbox(BBox[2]);
    roll_.set_axis_bbox(BBox[3]);
    pitch_.set_axis_bbox(BBox[4]);
    yaw_.set_axis_bbox(BBox[5]);

}
