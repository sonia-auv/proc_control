/**
 * \file	AlgorithmManager.cc
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

#include "AlgorithmManager.h"
#include "PID4Axis_Algorithm.h"
#include "PIDZAxis_Algorithm.h"
#include <memory>
#include <yaml-cpp/yaml.h>
#include <fstream>

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
AlgorithmManager::AlgorithmManager()
    : ConfigManager("Algorithm"),
      algorithm_to_use_(AlgorithmTypes::PID_Z_AXIS),
      current_algorithm_(nullptr)
{
  algorithms_.push_back(std::make_shared<PID4Axis_Algorithm>());
  algorithms_.push_back(std::make_shared<PIDZAxis_Algorithm>());
  current_algorithm_ = algorithms_[1];
  Init();
}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void AlgorithmManager::OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config )
{
  algorithm_to_use_ = ConversionEnumInt(config.Algorithm);
  std::cout << "Update to the algorithm choice" << std::endl;

  switch (algorithm_to_use_ ) {
    case AlgorithmTypes::PID_4_AXIS:
      current_algorithm_ = algorithms_[0];
      break;
    case AlgorithmTypes::PID_Z_AXIS:
      current_algorithm_ = algorithms_[1];
    default:
      std::cout << "Not implemented yet" << std::endl;
  }

  bounding_box_x_ = config.BBox_X;
  bounding_box_y_ = config.BBox_Y;
  bounding_box_z_ = config.BBox_Z;
  bounding_box_yaw_ = config.BBox_Yaw;
}

//-----------------------------------------------------------------------------
//
void AlgorithmManager::WriteConfigFile( const proc_control::AlgorithmConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  out << YAML::Key << "Algorithm";
  out << YAML::Value << ConversionEnumInt(algorithm_to_use_);
  out << YAML::Key << "BBox_X";
  out << YAML::Value << bounding_box_x_;
  out << YAML::Key << "BBox_Y";
  out << YAML::Value << bounding_box_y_;
  out << YAML::Key << "BBox_Z";
  out << YAML::Value << bounding_box_z_;
  out << YAML::Key << "BBox_Yaw";
  out << YAML::Value << bounding_box_yaw_;

  std::ofstream fout(file_path_);
  fout << out.c_str();
}

//-----------------------------------------------------------------------------
//
void AlgorithmManager::ReadConfigFile( proc_control::AlgorithmConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  if (node["Algorithm"]) {
    algorithm_to_use_ = ConversionEnumInt(node["Algorithm"].as<int>());
  }
  if (node["BBox_X"]) {
    bounding_box_x_ = node["BBox_X"].as<double>();
  }
  if (node["BBox_Y"]) {
    bounding_box_y_= node["BBox_Y"].as<double>();
  }
  if (node["BBox_Z"]) {
    bounding_box_z_ = node["BBox_Z"].as<double>();
  }
  if (node["BBox_Yaw"]) {
    bounding_box_yaw_ = node["BBox_Yaw"].as<double>();
  }
  config.Algorithm = ConversionEnumInt(algorithm_to_use_);
  config.BBox_X = bounding_box_x_;
  config.BBox_Y = bounding_box_y_;
  config.BBox_Z = bounding_box_z_;
  config.BBox_Yaw = bounding_box_yaw_;

  current_bounding_box_x_ = bounding_box_x_;
  current_bounding_box_y_ = bounding_box_y_;
  current_bounding_box_z_ = bounding_box_z_;
  current_bounding_box_yaw_ = bounding_box_yaw_;

}

//-----------------------------------------------------------------------------
//
int AlgorithmManager::ConversionEnumInt(AlgorithmManager::AlgorithmTypes enum_)
{
  switch (enum_)
  {
    case AlgorithmManager::AlgorithmTypes::PID_4_AXIS: return 0;
    case AlgorithmManager::AlgorithmTypes::PID_5_AXIS: return 1;
    case AlgorithmManager::AlgorithmTypes::PID_Z_AXIS: return 2;
  }
  return 0;
}

//-----------------------------------------------------------------------------
//
AlgorithmManager::AlgorithmTypes AlgorithmManager::ConversionEnumInt(int enum_)
{
  switch (enum_)
  {
    default:
    case 0: return AlgorithmTypes::PID_4_AXIS;
    case 1: return AlgorithmTypes::PID_5_AXIS;
    case 2: return AlgorithmTypes ::PID_Z_AXIS;
  }
  return AlgorithmTypes::PID_4_AXIS;
}

//-----------------------------------------------------------------------------
//
std::array<double, 6> AlgorithmManager::GetActuationForError(const std::array<double, 6> &error)
{
  return current_algorithm_->CalculateActuationForError(error);
};

//-----------------------------------------------------------------------------
//
bool AlgorithmManager::IsInBoundingBox(double error_x, double error_y, double error_z, double error_yaw)
{
  return std::fabs(error_x) < current_bounding_box_x_ &&
      std::fabs(error_y) < current_bounding_box_y_ &&
      std::fabs(error_z) < current_bounding_box_z_ &&
      std::fabs(error_yaw) < current_bounding_box_yaw_;
}

//-----------------------------------------------------------------------------
//
void AlgorithmManager::SetNewBoundingBox(double bounding_box_x, double bounding_box_y,
                                         double bounding_box_z, double bounding_box_yaw) {
  current_bounding_box_x_ = bounding_box_x;
  current_bounding_box_y_ = bounding_box_y;
  current_bounding_box_z_ = bounding_box_z;
  current_bounding_box_yaw_ = bounding_box_yaw;
}

//-----------------------------------------------------------------------------
//
void AlgorithmManager::ResetBoundingBox() {
  current_bounding_box_x_ = bounding_box_x_;
  current_bounding_box_y_ = bounding_box_y_;
  current_bounding_box_z_ = bounding_box_z_;
  current_bounding_box_yaw_ = bounding_box_yaw_;
}


