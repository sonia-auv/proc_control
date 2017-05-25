/**
 * \file	thruster.h
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

#ifndef PROC_CONTROL_THRUSTER_H
#define PROC_CONTROL_THRUSTER_H

#include <array>
#include <ros/ros.h>
#include <provider_thruster/ThrusterEffort.h>

namespace proc_control {

class Thruster {
 public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  Thruster(const uint8_t &id);
  ~Thruster();

  //==========================================================================
  // P U B L I C   M E T H O D S

  void Publish(uint8_t ID, int16_t thrust_value);

  void SetFrom6AxisArray(const std::array<double, 6> &array_axis);
  std::array<double, 3> GetLinearEffort() const;
  std::array<double, 3> GetRotationnalEffort() const;

  inline bool IsEnable() {
    return isEnable_;
  };

  inline void SetEnable(bool isEnable) {
    this->isEnable_ = isEnable;
  };

  inline uint16_t GetID() const { return id_; }
  uint16_t GetIDFromName(std::string name) const;
  double LinearizeForce(double force) const;

 private:
  //==========================================================================
  // P R I V A T E   M E M B E R S

  ros::NodeHandle nh_;
  ros::Publisher thruster_effort_publisher_;

  std::array<double, 3> linear_effort_;
  std::array<double, 3> rotationnal_effort_;
  uint8_t id_;
  bool isEnable_;
};

} // namespace proc_control

#endif //PROC_CONTROL_THRUSTER_H
