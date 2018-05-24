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

#include "ControlAUV.h"

namespace proc_control{

    ControlAUV::ControlAUV(std::string mode): x_(ControllerType::PID_, "x", mode), y_(ControllerType::PID_, "y", mode),
                                                    z_(ControllerType::PID_, "z", mode), roll_(ControllerType::PID_, "roll", mode),
                                                    pitch_(ControllerType::PID_, "pitch", mode), yaw_(ControllerType::PID_, "yaw", mode) {}

    ControlAUV::EigenVector6d ControlAUV::GetActuationForError(EigenVector6d &error){

        EigenVector6d actuation;

        actuation[0] = x_.CalculateActuationForError(error[0]);
        actuation[1] = y_.CalculateActuationForError(error[1]);
        actuation[2] = z_.CalculateActuationForError(error[2]) + z_.GetConstanteDepthForce();
        actuation[3] = roll_.CalculateActuationForError(error[3]);
        actuation[4] = pitch_.CalculateActuationForError(error[4]);
        actuation[5] = yaw_.CalculateActuationForError(error[5]);

        return actuation;

    }

    std::vector<bool> ControlAUV::IsInBoundingBox(EigenVector6d &error) {

        double BBox_x     = x_.GetAxisBbox();
        double BBox_y     = y_.GetAxisBbox();
        double BBox_z     = z_.GetAxisBbox();
        double BBox_roll  = roll_.GetAxisBbox();
        double BBox_pitch = pitch_.GetAxisBbox();
        double BBox_yaw   = yaw_.GetAxisBbox();

        std::vector<bool> isInBoundingBox = {std::fabs(error[0]) <= BBox_x, std::fabs(error[1]) <= BBox_y, std::fabs(error[2]) <= BBox_z,
                                             std::fabs(error[3]) <= BBox_roll, std::fabs(error[4]) <= BBox_pitch, std::fabs(error[5]) <= BBox_yaw};

        return isInBoundingBox;

    }

    void ControlAUV::SetNewBoundingBox(EigenVector6d BBox) {
        x_.SetAxisBbox(BBox[0]);
        y_.SetAxisBbox(BBox[1]);
        z_.SetAxisBbox(BBox[2]);
        roll_.SetAxisBbox(BBox[3]);
        pitch_.SetAxisBbox(BBox[4]);
        yaw_.SetAxisBbox(BBox[5]);

    }

    void ControlAUV::ResetBoundingBox() {
        x_.ResetAxisBbox();
        y_.ResetAxisBbox();
        z_.ResetAxisBbox();
        roll_.ResetAxisBbox();
        pitch_.ResetAxisBbox();
        yaw_.ResetAxisBbox();
    }

}

