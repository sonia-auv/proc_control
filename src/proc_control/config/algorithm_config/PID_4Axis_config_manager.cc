//
// Created by jeremie on 9/23/16.
//

#include <proc_control/property.h>
#include "proc_control/config/algorithm_config/PID_4Axis_config_manager.h"
#include <yaml-cpp/yaml.h>
#include <fstream>

PID4AxisConfigManager::PID4AxisConfigManager()
: ConfigManager("PID_4Axis"),
  x("X"), y("Y"), z("Z"), yaw("YAW")
{
  Init();
}

void PID4AxisConfigManager::OnDynamicReconfigureChange(const proc_control::PID4AxisConfig &config )
{
  x.D = config.X_D;
  x.P = config.X_P;
  x.I = config.X_I;
  x.I_Limit = config.X_I_LIMIT;
  x.Max_Actuation = config.X_MAX_ACTUATION;
  x.Min_Actuation = config.X_MIN_ACTUATION;

  y.D = config.Y_D;
  y.P = config.Y_P;
  y.I = config.Y_I;
  y.I_Limit = config.Y_I_LIMIT;
  y.Max_Actuation = config.Y_MAX_ACTUATION;
  y.Min_Actuation = config.Y_MIN_ACTUATION;

  z.D = config.Z_D;
  z.P = config.Z_P;
  z.I = config.Z_I;
  z.I_Limit = config.Z_I_LIMIT;
  z.Max_Actuation = config.Z_MAX_ACTUATION;
  z.Min_Actuation = config.Z_MIN_ACTUATION;

  yaw.D = config.YAW_D;
  yaw.P = config.YAW_P;
  yaw.I = config.YAW_I;
  yaw.I_Limit = config.YAW_I_LIMIT;
  yaw.Max_Actuation = config.YAW_MAX_ACTUATION;
  yaw.Min_Actuation = config.YAW_MIN_ACTUATION;
}

void PID4AxisConfigManager::WriteConfigFile( const proc_control::PID4AxisConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  std::vector< std::map<std::string, double&> >
      all_config {x.ToMap(), y.ToMap(),z.ToMap(), yaw.ToMap()};
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

void PID4AxisConfigManager::ReadConfigFile( proc_control::PID4AxisConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);
  std::vector< std::map<std::string, double&> >
      all_config {x.ToMap(), y.ToMap(),z.ToMap(), yaw.ToMap()};
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

  config.X_D = x.D;
  config.X_P = x.P;
  config.X_I = x.I;
  config.X_I_LIMIT = x.I_Limit;
  config.X_MAX_ACTUATION = x.Max_Actuation;
  config.X_MIN_ACTUATION = x.Min_Actuation;

  config.Y_D = y.D;
  config.Y_P = y.P;
  config.Y_I = y.I;
  config.Y_I_LIMIT = y.I_Limit;
  config.Y_MAX_ACTUATION = y.Max_Actuation;
  config.Y_MIN_ACTUATION = y.Min_Actuation;

  config.Z_D = z.D;
  config.Z_P = z.P;
  config.Z_I = z.I;
  config.Z_I_LIMIT = z.I_Limit;
  config.Z_MAX_ACTUATION = z.Max_Actuation;
  config.Z_MIN_ACTUATION = z.Min_Actuation;

  config.YAW_D = yaw.D;
  config.YAW_P = yaw.P;
  config.YAW_I = yaw.I;
  config.YAW_I_LIMIT = yaw.I_Limit;
  config.YAW_MAX_ACTUATION = yaw.Max_Actuation;
  config.YAW_MIN_ACTUATION = yaw.Min_Actuation;
}