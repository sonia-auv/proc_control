/**
 * \file	trajectory_yaw.h
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

#ifndef PROC_CONTROL_TRAJECTORY_H
#define PROC_CONTROL_TRAJECTORY_H

#include <cmath>

class Trajectory {
 public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  Trajectory();
  ~Trajectory();

  //==========================================================================
  // P U B L I C   M E T H O D S

  void SetTargetPosition(double target_position);
  bool IsSplineCalculated();
  void CalculateSpline(double current_position, double current_velocity,
                       double target_velocity);
  double GetPosition(double dt);
  double GetCurrentPosition();
  void Reset();

 private:
  //==========================================================================
  // P R I V A T E   M E M B E R S

  double target_position;
  double current_position;

  bool is_spline_calculated;
  bool is_position_reach;

  double hermite_spline_solution[4];
  double spline_time;
};

#endif //PROC_CONTROL_TRAJECTORY_H
