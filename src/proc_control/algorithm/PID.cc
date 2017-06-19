/**
 * \file	PID.cc
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

#include "PID.h"

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
PID::PID(const std::string &name) :
    last_error_(0),
    integration_sum_(0),
    pid_values_(name) { }

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
double PID::GetValueForError(double error) {
  std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();
  auto diff = now_time - last_time_;

  double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count())/(double(1E9));

  double proportional, derivative, integrale;

  double actuation = 0; // Actuation (output of PID block)
  // Prevent dividing by 0
  // 0.0001 s == 1000 HZ so we good :)
  if(deltaTime_s > (0.0001f) )
  {
    // Compute and add the proportional gain term

    proportional = (pid_values_.P * error);
    actuation = proportional;

    // Compute and add the derivative gain term
    derivative = pid_values_.D * ((error - last_error_) / (deltaTime_s));
    actuation += derivative;
    // Integrate cumulative error
    integration_sum_ += (error * deltaTime_s);
    // Reset I if position crosses target (if error is 0 or changes sign)
    if ((copysign(1.0f, error) != copysign(1.0f, last_error_)) || (error == 0.0)) {
      integration_sum_ = 0;
    } else {
      // Clip I to prevent Integral WindUp
      integration_sum_ = std::min(std::max(integration_sum_, -(pid_values_.I_Limit)),
                                  pid_values_.I_Limit);
      integrale = (pid_values_.I * integration_sum_);
      actuation += integrale;
    }

    // Clip Actuation
    actuation = std::min(std::max(actuation, pid_values_.Min_Actuation),
                         pid_values_.Max_Actuation);
  }

  printf("P : %lf \n"
             "I : %lf \n"
             "D : %lf \n", proportional, derivative, integrale);

  // Persist all the previous values
  last_time_ = now_time;//nowTime;
  last_error_ = error;

  return actuation;
};
