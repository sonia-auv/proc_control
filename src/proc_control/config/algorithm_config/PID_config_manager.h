//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_PIDCONFIGMANAGER_H
#define PROC_CONTROL_PIDCONFIGMANAGER_H

#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>

#include "proc_control/PIDConfig.h"
#include <proc_control/config/config_manager.h>
#include "proc_control/property.h"


class PIDConfigManager : public ConfigManager<proc_control::PIDConfig> {
  public:
  PIDConfigManager();

  void UpdateFromConfig(const proc_control::PIDConfig &config );
  void WriteConfig( const proc_control::PIDConfig &config );
  void ReadConfig( proc_control::PIDConfig &config );

  private:
  const std::string file_path_ = kConfigPath + "algorithm_config/PID" + kConfigExt;
  double p_, i_, d_;
};
//

#endif //PROC_CONTROL_PIDCONFIGMANAGER_H
