//
// Created by jeremie on 9/23/16.
//

#include <yaml-cpp/yaml.h>
#include <fstream>
#include "proc_control/config/algorithm_config_manager.h"

AlgorithmConfigManager::AlgorithmConfigManager()
: ConfigManager("Algorithm"),
    algorithm_to_use_(AlgorithmTypes ::PID_4_AXIS)
{
  Init();
}

void AlgorithmConfigManager::OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config )
{
  algorithm_to_use_ = ConversionEnumInt(config.Algorithm);
}

void AlgorithmConfigManager::WriteConfigFile( const proc_control::AlgorithmConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  out << YAML::Key << "Algorithm";
  out << YAML::Value << ConversionEnumInt(algorithm_to_use_);
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void AlgorithmConfigManager::ReadConfigFile( proc_control::AlgorithmConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  if (node["Algorithm"]) {
    algorithm_to_use_ = ConversionEnumInt(node["Algorithm"].as<int>());
  }
  config.Algorithm = ConversionEnumInt(algorithm_to_use_);
}

