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

/*!
 * Thruster's effort in a direction are represented as a vector of participation in
 * a direction. The direction are [X, Y, Z, YAW, PITCH, ROLL]. You can adjust the
 * the effort by changing the value in the axis. Say the subs always tend to turn port when
 * going straight forward, augment the force in X of the port thruster.
 */
class ThrusterConfigManager : public ConfigManager<proc_control::ThrusterConfig> {
  private:

  public:

  ThrusterConfigManager();

  // ConfigManager override
  void UpdateFromConfig(const proc_control::ThrusterConfig &config );
  void WriteConfig( const proc_control::ThrusterConfig &config );
  void ReadConfig( proc_control::ThrusterConfig &config );

  private:
  // Writes to a YAML node an effort array
  void WriteEfforts (const std::string &thruster_name, YAML::Emitter& out, std::array<double, 6> &effort);
  // Reads from a YAML node an effort array.
  void ReadEfforts (const std::string &thruster_name, YAML::Node& node, std::array<double, 6> &effort);

  // The efforts array.
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
