/**
 * \file	PIDZAxis_Algorithm.cc
 * \author Francis Masse <francis.masse05@gmail.com>
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

#include "PIDZAxis_Algorithm.h"
#include <yaml-cpp/yaml.h>
#include <fstream>

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
PIDZAxis_Algorithm::PIDZAxis_Algorithm()
    : ConfigManager("PID_ZAxis"),
      z_("Z"),
      z_values_(z_.GetPIDValues()),
      constant_depth_force_(0.0)
{
  Init();
}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void PIDZAxis_Algorithm::OnDynamicReconfigureChange(const proc_control::PIDZAxisConfig &config )
{
  std::cout << "Update on PIX Z Axis configuration" << std::endl;

  z_values_.D = config.Z_D;
  z_values_.P = config.Z_P;
  z_values_.I = config.Z_I;
  z_values_.I_Limit = config.Z_I_LIMIT;
  z_values_.Max_Actuation = config.Z_MAX_ACTUATION;
  z_values_.Min_Actuation = config.Z_MIN_ACTUATION;

  constant_depth_force_ = config.CONSTANT_DEPTH_FORCE;
}

//-----------------------------------------------------------------------------
//
void PIDZAxis_Algorithm::WriteConfigFile( const proc_control::PIDZAxisConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;

  out << YAML::Key << CONSTANT_DEPTH_FORCE;
  out << YAML::Value << constant_depth_force_;

  std::vector< std::map<std::string, double&> >
      all_config {z_values_.ToMap()};
  for( auto config : all_config)
  {
    for(auto elem : config)
    {
      out << YAML::Key << elem.first;
      out << YAML::Value << elem.second;
    }
  }
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

//-----------------------------------------------------------------------------
//
void PIDZAxis_Algorithm::ReadConfigFile( proc_control::PIDZAxisConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);
  std::vector< std::map<std::string, double&> >
      all_config {z_values_.ToMap()};
  for( auto config : all_config)
  {
    for(auto elem : config)
    {
      if( node[elem.first])
      {
        elem.second = node[elem.first].as<double>();
      }
    }
  }
  if( node[CONSTANT_DEPTH_FORCE] )
  {
    constant_depth_force_ = node[CONSTANT_DEPTH_FORCE].as<double>();
  }
  config.CONSTANT_DEPTH_FORCE = constant_depth_force_;

  config.Z_D = z_values_.D;
  config.Z_P = z_values_.P;
  config.Z_I = z_values_.I;
  config.Z_I_LIMIT = z_values_.I_Limit;
  config.Z_MAX_ACTUATION = z_values_.Max_Actuation;
  config.Z_MIN_ACTUATION = z_values_.Min_Actuation;
}

//-----------------------------------------------------------------------------
//
std::array<double, 6> PIDZAxis_Algorithm::CalculateActuationForError(const std::array<double, 6> &error)
{
  std::array<double, 6> actuation = {0.0f};
  // The Z axis algorithm control only Z

  actuation[2] = z_.GetValueForError(error[2]) + constant_depth_force_;

  return actuation;
};