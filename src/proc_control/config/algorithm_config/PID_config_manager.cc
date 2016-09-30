//
// Created by jeremie on 9/23/16.
//

#include <proc_control/property.h>
#include "proc_control/config/algorithm_config/PID_config_manager.h"
#include <yaml-cpp/yaml.h>
#include <fstream>

PIDConfigManager::PIDConfigManager()
: ConfigManager("PID"),
  p_(0.0f), i_(0.0f), d_(0.0f)
{
  Init();
}

void PIDConfigManager::UpdateFromConfig(const proc_control::PIDConfig &config )
{
  p_ = config.P;
  i_ = config.I;
  d_ = config.D;
}

void PIDConfigManager::WriteConfig( const proc_control::PIDConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  out << YAML::Key << "P";
  out << YAML::Value << p_;
  out << YAML::Key << "I";
  out << YAML::Value << i_;
  out << YAML::Key << "D";
  out << YAML::Value << d_;

  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void PIDConfigManager::ReadConfig( proc_control::PIDConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  if (node["P"]) {
    p_ = node["P"].as<double>();
  }
  if (node["I"]) {
    i_ = node["I"].as<double>();
  }
  if (node["D"]) {
    d_ = node["D"].as<double>();
  }

  config.P = p_;
  config.I = i_;
  config.D = d_;
}