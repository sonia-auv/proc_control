/**
 * \file	trajectory_yaw.cc
 * \author Francis Masse <francis.masse05@gmail.com>
 * \date	25/06/17
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

#include <cstdio>
#include "trajectory.h"

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
Trajectory::Trajectory() {
  is_spline_calculated = false;
  is_position_reach = true;
  spline_time = 0;
}

//------------------------------------------------------------------------------
//
Trajectory::~Trajectory() {}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
bool Trajectory::IsSplineCalculated() { return is_spline_calculated; }

//-----------------------------------------------------------------------------
//
void Trajectory::SetTargetPosition(double target_position) {
  this->target_position = target_position;
}

//-----------------------------------------------------------------------------
//
void Trajectory::CalculateSpline(double current_position, double current_velocity,
                                    double target_velocity) {
  hermite_spline_solution[0] = current_position;
  hermite_spline_solution[1] = current_velocity;
  hermite_spline_solution[2] = -current_position * 3.0f - current_velocity * 2.0f +
                                this->target_position * 3.0f - target_velocity;
  hermite_spline_solution[3] = current_position * 2.0f + current_velocity -
                               this->target_position * 2.0f + target_velocity;

  spline_time = 0.0;
  is_spline_calculated = true;
  is_position_reach = false;
}

//-----------------------------------------------------------------------------
//
double Trajectory::GetPosition(double dt) {
  double spline_time_squared = spline_time * spline_time;
  double spline_time_cubed = spline_time_squared * spline_time;

  if (!is_position_reach) {
    current_position = hermite_spline_solution[0] +
        hermite_spline_solution[1] * spline_time +
        hermite_spline_solution[2] * spline_time_squared +
        hermite_spline_solution[3] * spline_time_cubed;

    spline_time += (dt / 5);
  } else {
    current_position = hermite_spline_solution[0] +
        hermite_spline_solution[1] * spline_time +
        hermite_spline_solution[2] * spline_time_squared +
        hermite_spline_solution[3] * spline_time_cubed;
  }

  if (fabs(current_position - target_position) < 0.01) {
    is_position_reach = true;
  }

  return current_position;
}

//-----------------------------------------------------------------------------
//
double Trajectory::GetCurrentPosition() {
  return current_position;
}

//-----------------------------------------------------------------------------
//
void Trajectory::Reset() {
  spline_time = 0.0;
  target_position = 0.0;
  current_position = 0.0;
  is_position_reach = false;
  is_spline_calculated = false;
  hermite_spline_solution[0] = 0.0;
  hermite_spline_solution[1] = 0.0;
  hermite_spline_solution[2] = 0.0;
  hermite_spline_solution[3] = 0.0;
}
