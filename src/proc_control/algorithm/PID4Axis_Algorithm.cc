//
// Created by jeremie on 11/16/16.
//

#include "PID4Axis_Algorithm.h"
#include <yaml-cpp/yaml.h>
#include <fstream>

PID4Axis_Algorithm::PID4Axis_Algorithm()
    : ConfigManager("PID_4Axis"),
      x_("X"), y_("Y"), z_("Z"), yaw_("YAW"),
      x_values_(x_.GetPIDValues()),y_values_(y_.GetPIDValues()),
      z_values_(z_.GetPIDValues()),yaw_values_(yaw_.GetPIDValues()),
      constant_depth_force_(0.0)
{
  Init();
}

void PID4Axis_Algorithm::OnDynamicReconfigureChange(const proc_control::PID4AxisConfig &config )
{
  std::cout << "Update on PIX 4 Axis configuration" << std::endl;
  x_values_.D = config.X_D;
  x_values_.P = config.X_P;
  x_values_.I = config.X_I;
  x_values_.I_Limit = config.X_I_LIMIT;
  x_values_.Max_Actuation = config.X_MAX_ACTUATION;
  x_values_.Min_Actuation = config.X_MIN_ACTUATION;

  y_values_.D = config.Y_D;
  y_values_.P = config.Y_P;
  y_values_.I = config.Y_I;
  y_values_.I_Limit = config.Y_I_LIMIT;
  y_values_.Max_Actuation = config.Y_MAX_ACTUATION;
  y_values_.Min_Actuation = config.Y_MIN_ACTUATION;

  z_values_.D = config.Z_D;
  z_values_.P = config.Z_P;
  z_values_.I = config.Z_I;
  z_values_.I_Limit = config.Z_I_LIMIT;
  z_values_.Max_Actuation = config.Z_MAX_ACTUATION;
  z_values_.Min_Actuation = config.Z_MIN_ACTUATION;

  yaw_values_.D = config.YAW_D;
  yaw_values_.P = config.YAW_P;
  yaw_values_.I = config.YAW_I;
  yaw_values_.I_Limit = config.YAW_I_LIMIT;
  yaw_values_.Max_Actuation = config.YAW_MAX_ACTUATION;
  yaw_values_.Min_Actuation = config.YAW_MIN_ACTUATION;

  constant_depth_force_ = config.CONSTANT_DEPTH_FORCE;
}

void PID4Axis_Algorithm::WriteConfigFile( const proc_control::PID4AxisConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;

  out << YAML::Key << CONSTANT_DEPTH_FORCE;
  out << YAML::Value << constant_depth_force_;

  std::vector< std::map<std::string, double&> >
      all_config {x_values_.ToMap(), y_values_.ToMap(),z_values_.ToMap(), yaw_values_.ToMap()};
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

void PID4Axis_Algorithm::ReadConfigFile( proc_control::PID4AxisConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);
  std::vector< std::map<std::string, double&> >
      all_config {x_values_.ToMap(), y_values_.ToMap(),z_values_.ToMap(), yaw_values_.ToMap()};
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
  config.X_D = x_values_.D;
  config.X_P = x_values_.P;
  config.X_I = x_values_.I;
  config.X_I_LIMIT = x_values_.I_Limit;
  config.X_MAX_ACTUATION = x_values_.Max_Actuation;
  config.X_MIN_ACTUATION = x_values_.Min_Actuation;

  config.Y_D = y_values_.D;
  config.Y_P = y_values_.P;
  config.Y_I = y_values_.I;
  config.Y_I_LIMIT = y_values_.I_Limit;
  config.Y_MAX_ACTUATION = y_values_.Max_Actuation;
  config.Y_MIN_ACTUATION = y_values_.Min_Actuation;

  config.Z_D = z_values_.D;
  config.Z_P = z_values_.P;
  config.Z_I = z_values_.I;
  config.Z_I_LIMIT = z_values_.I_Limit;
  config.Z_MAX_ACTUATION = z_values_.Max_Actuation;
  config.Z_MIN_ACTUATION = z_values_.Min_Actuation;

  config.YAW_D = yaw_values_.D;
  config.YAW_P = yaw_values_.P;
  config.YAW_I = yaw_values_.I;
  config.YAW_I_LIMIT = yaw_values_.I_Limit;
  config.YAW_MAX_ACTUATION = yaw_values_.Max_Actuation;
  config.YAW_MIN_ACTUATION = yaw_values_.Min_Actuation;
}