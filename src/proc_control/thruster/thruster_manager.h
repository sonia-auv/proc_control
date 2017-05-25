//
// Created by jeremie on 10/17/16.
//

#ifndef PROC_CONTROL_THRUSTERMANAGER_H
#define PROC_CONTROL_THRUSTERMANAGER_H

#include <vector>
#include <yaml-cpp/yaml.h>
#include <proc_control/property.h>
#include "proc_control/thruster/thruster.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/ThrusterConfig.h"

class ThrusterManager : public ConfigManager<proc_control::ThrusterConfig>{
  public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  ThrusterManager();
  ~ThrusterManager();

  //==========================================================================
  // P U B L I C   O V E R R I D E D   M E T H O D S

  // ConfigManager override
  void OnDynamicReconfigureChange(const proc_control::ThrusterConfig &config ) override ;
  void WriteConfigFile(const proc_control::ThrusterConfig &config) override ;
  void ReadConfigFile(proc_control::ThrusterConfig &config) override ;

  //==========================================================================
  // P U B L I C   M E T H O D S

  void SetEnable(bool isEnable);
  std::array<double, 8> Commit(std::array<double, 3> &linear_effort,
                               std::array<double, 3> &rotational_target);

  template <typename Tp_>
  inline int signum(Tp_ val) {
    return (Tp_(0) < val) - (val < Tp_(0));
  }

 private:
  //==========================================================================
  // P R I V A T E   M E T H O D S

  void WriteEfforts(size_t thruster_index, YAML::Emitter &out);
  void ReadEfforts (const std::string &thruster_name, YAML::Node& node);

  //==========================================================================
  // P R I V A T E   M E M B E R S

  std::vector<Thruster> thruster_list_;
  const std::string file_path_ = kConfigPath + "thruster" + kConfigExt;
};

#endif //PROC_CONTROL_THRUSTERMANAGER_H
