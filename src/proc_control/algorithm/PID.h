/**
 * \file	PID.h
 * \author	Jeremie St-Jules <jeremie.st.jules.prevost@gmail.com>
 * \coauthor Francis Masse <francis.masse05@gmail.com>
 * \date	10/17/16
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

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H


#include <algorithm>
#include <chrono>
#include <cmath>
#include <proc_control/config/algorithm_config/PID_Values.h>


class PID {
 public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  PID(const std::string &name);

  //==========================================================================
  // P U B L I C   M E T H O D S
  double GetValueForError(double error);
  inline PIDValues & GetPIDValues() { return pid_values_; };

  private :
  //==========================================================================
  // P R I V A T E   M E M B E R S

  double last_error_;
  double integration_sum_;
  std::chrono::steady_clock::time_point last_time_;

  PIDValues pid_values_;
};


#endif //PROC_CONTROL_PID_H
