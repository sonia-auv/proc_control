//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_NODECONFIGMANAGER_H
#define PROC_CONTROL_NODECONFIGMANAGER_H

#include <proc_control/property.h>
#include "proc_control/AlgorithmConfig.h"
#include "proc_control/config/config_manager.h"

/*!
 * Class to handler configuration for the node. It can select the control algorithm.
 */
class AlgorithmConfigManager : public ConfigManager<proc_control::AlgorithmConfig> {
public:
    AlgorithmConfigManager();
    ~AlgorithmConfigManager()= default;


  void OnDynamicReconfigureChange(const proc_control::AlgorithmConfig &config ) override ;
  void WriteConfigFile( const proc_control::AlgorithmConfig &config ) override ;
  void ReadConfigFile( proc_control::AlgorithmConfig &config ) override ;

  enum class AlgorithmTypes{PID_4_AXIS = 0, PID_5_AXIS};

  int ConversionEnumInt(AlgorithmTypes enum_);
  AlgorithmTypes ConversionEnumInt(int enum_);

  AlgorithmTypes GetCurrentAlgorithmConfig();
  private:
  AlgorithmTypes algorithm_to_use_;
  const std::string file_path_ = kConfigPath + "Algorithm" + kConfigExt;


};

inline AlgorithmConfigManager::AlgorithmTypes AlgorithmConfigManager::GetCurrentAlgorithmConfig()
{
  return algorithm_to_use_;
}

inline int AlgorithmConfigManager::ConversionEnumInt(AlgorithmConfigManager::AlgorithmTypes enum_)
{
  switch (enum_)
  {
    case AlgorithmConfigManager::AlgorithmTypes::PID_4_AXIS: return 0;
    case AlgorithmConfigManager::AlgorithmTypes::PID_5_AXIS: return 1;
  }
  return 0;
}

inline AlgorithmConfigManager::AlgorithmTypes AlgorithmConfigManager::ConversionEnumInt(int enum_)
{
  switch (enum_)
  {
    default:
    case 0: return AlgorithmTypes::PID_4_AXIS;
    case 1: return AlgorithmTypes::PID_5_AXIS;
  }
  return AlgorithmTypes::PID_4_AXIS;
}


#endif //PROC_CONTROL_NODECONFIGMANAGER_H
