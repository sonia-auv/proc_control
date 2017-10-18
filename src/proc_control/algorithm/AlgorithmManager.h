/**
 * \file	AlgorithmManager.h
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

#ifndef PROC_CONTROL_ALGORITHMMANAGER_H
#define PROC_CONTROL_ALGORITHMMANAGER_H

#include <memory>
#include <proc_control/property.h>
#include <cmath>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/AlgorithmConfig.h"

class AlgorithmManager : public ConfigManager<proc_control::AlgorithmConfig>  {
 public:
  //==========================================================================
  // C O N S T  ,  T Y P E D E F   A N D   E N U M

  enum class AlgorithmTypes{PID_6_AXIS = 0, PID_5_AXIS, PID_Z_AXIS};

  //==========================================================================
  // P U B L I C   C / D T O R S

  AlgorithmManager();

  //==========================================================================
  // P U B L I C   M E T H O D S

  void OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config ) override ;
  void WriteConfigFile( const proc_control::AlgorithmConfig &config ) override ;
  void ReadConfigFile( proc_control::AlgorithmConfig &config ) override ;

  int ConversionEnumInt(AlgorithmTypes enum_);
  AlgorithmTypes ConversionEnumInt(int enum_);

  std::array<double, 6> GetActuationForError(const std::array<double, 6> &error);

  bool IsInBoundingBox(double error_x, double error_y, double error_z, double error_yaw);
  void SetNewBoundingBox(double bounding_box_x, double bounding_box_y,
                         double bounding_box_z, double bounding_box_yaw);
  void ResetBoundingBox();

  private:

  //==========================================================================
  // P R I V A T E   M E M B E R S

  AlgorithmTypes algorithm_to_use_;
  double current_bounding_box_x_, current_bounding_box_y_, current_bounding_box_z_, current_bounding_box_yaw_;
  double bounding_box_x_, bounding_box_y_, bounding_box_z_, bounding_box_yaw_;
  std::vector<std::shared_ptr<ControlAlgorithm>> algorithms_;
  std::shared_ptr<ControlAlgorithm> current_algorithm_;

  const std::string file_path_ = kConfigPath + "Algorithm" + kConfigExt;

};

#endif //PROC_CONTROL_ALGORITHMMANAGER_H
