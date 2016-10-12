//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_THRUSTERCONFIGMANAGER_H
#define PROC_CONTROL_THRUSTERCONFIGMANAGER_H

#include <yaml-cpp/yaml.h>
#include <proc_control/property.h>
#include <proc_control/Thruster.h>
#include "proc_control/ThrusterConfig.h"
#include "proc_control/config/config_manager.h"

class ThrusterConfigManager : public ConfigManager<proc_control::ThrusterConfig> {
  private:

  public:

  ThrusterConfigManager();
  void UpdateFromConfig(const proc_control::ThrusterConfig &config );
  void WriteConfig( const proc_control::ThrusterConfig &config );
  void ReadConfig( proc_control::ThrusterConfig &config );

  private:
  void WriteEfforts (const std::string &thruster_name, YAML::Emitter& out, std::array<double, 6> &effort);
  void ReadEfforts (const std::string &thruster_name, YAML::Node& node, std::array<double, 6> &effort);

  std::array<double, 6> port_efforts_, starboard_efforts_, back_depth_efforts_,
      front_depth_efforts_, front_heading_efforts_, back_heading_efforts_;

  const std::string file_path_ = kConfigPath + "thruster" + kConfigExt;

};

inline void ThrusterConfigManager::WriteEfforts (const std::string &thruster_name, YAML::Emitter& out, std::array<double, 6> &effort) {
  out << YAML::Key << (thruster_name);
  out << YAML::Value ;
  out << YAML::Flow;
  out << std::vector<double>(effort.cbegin(), effort.cend());
}

inline void ThrusterConfigManager::ReadEfforts (const std::string &thruster_name, YAML::Node& node, std::array<double, 6> &effort) {
  if( node[thruster_name] )
  {
    auto thruster = node[thruster_name];
    assert(thruster.Type() == YAML::NodeType::Sequence);
    for( size_t i = 0, size = effort.size(); i < size; i++)
    {
      effort[i] = thruster[i].as<double>();
    }
  }
}


#endif //PROC_CONTROL_THRUSTERCONFIGMANAGER_H
