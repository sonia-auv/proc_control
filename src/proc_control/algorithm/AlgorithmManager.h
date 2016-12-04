//
// Created by jeremie on 11/16/16.
//

#ifndef PROC_CONTROL_ALGORITHMMANAGER_H
#define PROC_CONTROL_ALGORITHMMANAGER_H

#include <memory>
#include <proc_control/property.h>
#include <cmath>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/AlgorithmConfig.h"

class AlgorithmManager : public ConfigManager<proc_control::AlgorithmConfig>  {
  public:
  AlgorithmManager();

  void OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config ) override ;
  void WriteConfigFile( const proc_control::AlgorithmConfig &config ) override ;
  void ReadConfigFile( proc_control::AlgorithmConfig &config ) override ;

  enum class AlgorithmTypes{PID_4_AXIS = 0, PID_5_AXIS};

  int ConversionEnumInt(AlgorithmTypes enum_);
  AlgorithmTypes ConversionEnumInt(int enum_);

  std::array<double, 6> GetActuationForError(const std::array<double, 6> &error);

  bool IsInBoundingBox(double error_x, double error_y, double error_z, double error_yaw);

  private:

  AlgorithmTypes algorithm_to_use_;
  double bounding_box_x_, bounding_box_y_, bounding_box_z_, bounding_box_yaw_;
  std::vector<std::shared_ptr<ControlAlgorithm>> algorithms_;
  std::shared_ptr<ControlAlgorithm> current_algorithm_;

  const std::string file_path_ = kConfigPath + "Algorithm" + kConfigExt;

};

inline std::array<double, 6> AlgorithmManager::GetActuationForError(const std::array<double, 6> &error)
{
  return current_algorithm_->CalculateActuationForError(error);
};

inline int AlgorithmManager::ConversionEnumInt(AlgorithmManager::AlgorithmTypes enum_)
{
  switch (enum_)
  {
    case AlgorithmManager::AlgorithmTypes::PID_4_AXIS: return 0;
    case AlgorithmManager::AlgorithmTypes::PID_5_AXIS: return 1;
  }
  return 0;
}

inline AlgorithmManager::AlgorithmTypes AlgorithmManager::ConversionEnumInt(int enum_)
{
  switch (enum_)
  {
    default:
    case 0: return AlgorithmTypes::PID_4_AXIS;
    case 1: return AlgorithmTypes::PID_5_AXIS;
  }
  return AlgorithmTypes::PID_4_AXIS;
}


inline bool AlgorithmManager::IsInBoundingBox(double error_x, double error_y, double error_z, double error_yaw)
{
  return std::fabs(error_x) < bounding_box_x_ &&
      std::fabs(error_y) < bounding_box_y_ &&
      std::fabs(error_z) < bounding_box_z_ &&
      std::fabs(error_yaw) < bounding_box_yaw_;
}
#endif //PROC_CONTROL_ALGORITHMMANAGER_H
