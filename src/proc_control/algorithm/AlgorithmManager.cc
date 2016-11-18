//
// Created by jeremie on 11/16/16.
//

#include "AlgorithmManager.h"
#include "PID4Axis_Algorithm.h"
#include <memory>
#include <yaml-cpp/yaml.h>
#include <fstream>

AlgorithmManager::AlgorithmManager()
    : ConfigManager("Algorithm"),
      algorithm_to_use_(AlgorithmTypes ::PID_4_AXIS),
      current_algorithm_(nullptr)
{
  algorithms_.push_back(std::make_shared<PID4Axis_Algorithm>());
  current_algorithm_ = algorithms_[0];
  Init();
}

void AlgorithmManager::OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config )
{
  algorithm_to_use_ = ConversionEnumInt(config.Algorithm);
  std::cout << "Update to the algorithm choice" << std::endl;

  switch (algorithm_to_use_ ) {
    case AlgorithmTypes::PID_4_AXIS:
      current_algorithm_ = algorithms_[0];
      break;
    default:
      std::cout << "Not implemented yet" << std::endl;
  }
}

void AlgorithmManager::WriteConfigFile( const proc_control::AlgorithmConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  out << YAML::Key << "Algorithm";
  out << YAML::Value << ConversionEnumInt(algorithm_to_use_);
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void AlgorithmManager::ReadConfigFile( proc_control::AlgorithmConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  if (node["Algorithm"]) {
    algorithm_to_use_ = ConversionEnumInt(node["Algorithm"].as<int>());
  }
  config.Algorithm = ConversionEnumInt(algorithm_to_use_);
}

