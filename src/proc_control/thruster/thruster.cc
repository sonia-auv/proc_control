/*
 * \file	thruster.cc
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

#include "thruster.h"

namespace proc_control {

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
Thruster::Thruster(const uint8_t &id) :
    linear_effort_({0.0}),
    rotationnal_effort_({0.0}),
    id_(id) {
    thruster_effort_publisher_ = nh_.advertise<provider_thruster::ThrusterEffort>
      ("/provider_thruster/thruster_effort", 100);
};

//------------------------------------------------------------------------------
//
Thruster::~Thruster() { }

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void Thruster::Publish(uint8_t ID, int16_t thrust_value) {
  provider_thruster::ThrusterEffort msg;
  msg.ID = ID;
  msg.effort = thrust_value;

  if (IsEnable()) {
    thruster_effort_publisher_.publish(msg);
  }
}

//-----------------------------------------------------------------------------
//
uint16_t Thruster::GetIDFromName(std::string name) const {
  if (name == "T1") {
    return 1;
  } else if (name == "T2") {
    return 2;
  } else if (name == "T3") {
    return 3;
  } else if (name == "T4") {
    return 4;
  } else if (name == "T5") {
    return 5;
  } else if (name == "T6") {
    return 6;
  } else if (name == "T7") {
    return 7;
  } else if (name == "T8") {
    return 8;
  }
  return 10;
}

//-----------------------------------------------------------------------------
//
std::array<double, 3> Thruster::GetLinearEffort() const {
  return linear_effort_;
};

//-----------------------------------------------------------------------------
//
std::array<double, 3> Thruster::GetRotationnalEffort() const {
  return rotationnal_effort_;
};

//-----------------------------------------------------------------------------
//
double Thruster::LinearizeForce(double force) const {
  return 11.9 * std::pow(force, 0.45106) + 5;
}

//-----------------------------------------------------------------------------
//
void Thruster::SetFrom6AxisArray(const std::array<double, 6> &array_axis) {
  std::copy(array_axis.begin(), array_axis.begin() + 3, linear_effort_.begin());
  std::copy(array_axis.begin() + 3, array_axis.end(), rotationnal_effort_.begin());

  for (int i = 0; i < 3; i++) {
    linear_effort_[i];
    rotationnal_effort_[i];
  }
}

} // namespace proc_control
