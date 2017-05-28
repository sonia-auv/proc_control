/**
 * \file	PID4Axis_Algorithm.h
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

#ifndef PROC_CONTROL_PID4AXIS_ALGORITHM_H
#define PROC_CONTROL_PID4AXIS_ALGORITHM_H

#include <proc_control/property.h>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/algorithm/PID.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/PID4AxisConfig.h"

class PID4Axis_Algorithm : public ControlAlgorithm,  public ConfigManager<proc_control::PID4AxisConfig > {
  public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  PID4Axis_Algorithm();

  //==========================================================================
  // P U B L I C   O V E R R I D E D   M E T H O D S

  // ConfigManager override
  void OnDynamicReconfigureChange(const proc_control::PID4AxisConfig &config ) override ;
  void WriteConfigFile( const proc_control::PID4AxisConfig &config ) override ;
  void ReadConfigFile( proc_control::PID4AxisConfig &config ) override ;

  // ControlAlgorithm override
  std::array<double, 6> CalculateActuationForError(const std::array<double, 6> &error);

  private:
  //==========================================================================
  // P R I V A T E   M E M B E R S

  PID x_, y_, z_, yaw_;
  PIDValues &x_values_, &y_values_, &z_values_, &yaw_values_;
  double constant_depth_force_;
  const std::string file_path_ = kConfigPath + "algorithm_config/PID4Axis" + kConfigExt;
  const std::string CONSTANT_DEPTH_FORCE = "CONSTANT_DEPTH_FORCE";
};

#endif //PROC_CONTROL_PID4AXIS_ALGORITHM_H
