//
// Created by jeremie on 9/23/16.
//

#include <yaml-cpp/yaml.h>
#include <fstream>
#include "proc_control/config/node_config_manager.h"

NodeConfigManager::NodeConfigManager()
: ConfigManager("Node"),
    algorithm_to_use_(0)
{
  Init();
}

void NodeConfigManager::UpdateFromConfig(const proc_control::NodeConfig &config )
{
  algorithm_to_use_ = config.Algorithm;
}

void NodeConfigManager::WriteConfig( const proc_control::NodeConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  out << YAML::Key << "Algorithm";
  out << YAML::Value << algorithm_to_use_;
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void NodeConfigManager::ReadConfig( proc_control::NodeConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  if (node["Algorithm"]) {
    algorithm_to_use_ = node["Algorithm"].as<int>();
  }
  config.Algorithm = algorithm_to_use_;
}

