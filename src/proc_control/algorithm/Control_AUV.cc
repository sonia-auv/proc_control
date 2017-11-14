/**
 * \file	Control_AUV.cc
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	10/21/17
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. AUV All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. AUV software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. AUV software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. AUV software. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Control_AUV.h"

namespace proc_control{

    Control_AUV::Control_AUV(): x_(ControllerType::PID_, "x"), y_(ControllerType::PID_, "y"), z_(ControllerType::PID_, "z"), roll_(ControllerType::PID_, "roll"),
                                pitch_(ControllerType::PID_, "pitch"), yaw_(ControllerType::PID_, "yaw") {}

    Control_AUV::~Control_AUV() { }

    std::array<double, 6> Control_AUV::GetActuationForError(std::array<double, 6> &error){

        std::array<double, 6> actuation;

        actuation[0] = x_.CalculateActuationForError(error[0]);
        actuation[1] = y_.CalculateActuationForError(error[1]);
        actuation[2] = z_.CalculateActuationForError(error[2]) + z_.get_constante_depth_force();
        actuation[3] = roll_.CalculateActuationForError(error[3]);
        actuation[4] = pitch_.CalculateActuationForError(error[4]);
        actuation[5] = yaw_.CalculateActuationForError(error[5]);

        return actuation;

    }

    bool Control_AUV::IsInBoundingBox(std::array<double, 6> &error) {

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

    void Control_AUV::ResetBoundingBox() {
        x_.reset_axis_bbox();
        y_.reset_axis_bbox();
        z_.reset_axis_bbox();
        roll_.reset_axis_bbox();
        pitch_.reset_axis_bbox();
        yaw_.reset_axis_bbox();
    }

}

