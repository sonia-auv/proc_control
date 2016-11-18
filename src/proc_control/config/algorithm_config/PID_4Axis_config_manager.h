//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_PIDCONFIGMANAGER_H
#define PROC_CONTROL_PIDCONFIGMANAGER_H

#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>

#include "proc_control/PID4AxisConfig.h"
#include <proc_control/config/config_manager.h>
#include "proc_control/property.h"
#include "proc_control/config/algorithm_config/PID_Values.h"

/*!
 * Holds the configuration for the PID algorithm implementation
 */
class PID4AxisConfigManager : public ConfigManager<proc_control::PID4AxisConfig > {
  public:
  PID4AxisConfigManager();

  void OnDynamicReconfigureChange(const proc_control::PID4AxisConfig &config ) override ;
  void WriteConfigFile( const proc_control::PID4AxisConfig &config ) override ;
  void ReadConfigFile( proc_control::PID4AxisConfig &config ) override ;

  PIDValues x, y, z, yaw;

  private:
  const std::string file_path_ = kConfigPath + "algorithm_config/PID4Axis" + kConfigExt;
};
//

#endif //PROC_CONTROL_PIDCONFIGMANAGER_H
