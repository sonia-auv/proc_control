//
// Created by jeremie on 11/16/16.
//

#include "AlgorithmManager.h"
#include "PID4Axis_Algorithm.h"
#include "PIDZAxis_Algorithm.h"
#include <memory>
#include <yaml-cpp/yaml.h>
#include <fstream>

AlgorithmManager::AlgorithmManager()
    : ConfigManager("Algorithm"),
      algorithm_to_use_(AlgorithmTypes::PID_Z_AXIS),
      current_algorithm_(nullptr)
{
  algorithms_.push_back(std::make_shared<PIDZAxis_Algorithm>());
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

  bounding_box_x_ = config.BBox_X;
  bounding_box_y_ = config.BBox_Y;
  bounding_box_z_ = config.BBox_Z;
  bounding_box_yaw_ = config.BBox_Yaw;
}

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
}

