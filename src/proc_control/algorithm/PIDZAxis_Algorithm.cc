//
// Created by bullshark on 4/1/17.
//

#include "PIDZAxis_Algorithm.h"
#include <yaml-cpp/yaml.h>
#include <fstream>

PIDZAxis_Algorithm::PIDZAxis_Algorithm()
    : ConfigManager("PID_ZAxis"),
      z_("Z"),
      z_values_(z_.GetPIDValues()),
      constant_depth_force_(0.0)
{
  Init();
}

std::array<double, 6> PIDZAxis_Algorithm::CalculateActuationForError(const std::array<double, 6> &error)
{
  std::array<double, 6> actuation = {0.0f};
  // The Z axis algorithm control only Z

  actuation[2] = z_.GetValueForError(error[2]) + constant_depth_force_;

  return actuation;
};

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