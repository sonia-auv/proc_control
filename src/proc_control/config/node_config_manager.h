//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_NODECONFIGMANAGER_H
#define PROC_CONTROL_NODECONFIGMANAGER_H

#include <proc_control/property.h>
#include "proc_control/NodeConfig.h"
#include "proc_control/config/config_manager.h"

/*!
 * Class to handler configuration for the node. It can select the control algorithm.
 */
class NodeConfigManager : public ConfigManager<proc_control::NodeConfig> {
public:
    NodeConfigManager();
    ~NodeConfigManager()= default;

  void UpdateFromConfig(const proc_control::NodeConfig &config );
  void WriteConfig( const proc_control::NodeConfig &config );
  void ReadConfig( proc_control::NodeConfig &config );

  private:
  enum class Algorithm{PID_4_AXIS = 0, PID_5_AXIS};
  int algorithm_to_use_;
  const std::string file_path_ = kConfigPath + "node" + kConfigExt;


};


#endif //PROC_CONTROL_NODECONFIGMANAGER_H
