//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_THRUSTERCONFIGMANAGER_H
#define PROC_CONTROL_THRUSTERCONFIGMANAGER_H

#include <yaml-cpp/yaml.h>
#include <proc_control/property.h>
#include <proc_control/thruster/thruster.h>
#include "proc_control/ThrusterConfig.h"
#include "proc_control/config/config_manager.h"
/*!
 * Thruster's effort in a direction are represented as a vector of participation in
 * a direction. The direction are [X, Y, Z, YAW, PITCH, ROLL]. You can adjust the
 * the effort by changing the value in the axis. Say the subs always tend to turn port when
 * going straight forward, augment the force in X of the port thruster.
 */
class ThrusterConfigManager : public ConfigManager<proc_control::ThrusterConfig>{
  public:

  ThrusterConfigManager();

  // ConfigManager override
  void UpdateFromConfig(const proc_control::ThrusterConfig &config );
  void WriteConfig( const proc_control::ThrusterConfig &config );
  void ReadConfig( proc_control::ThrusterConfig &config );

  std::array<double, 6> GetThrusterConfig(const std::string &name);

  private:
  // Writes to a YAML node an effort array
  void WriteEfforts (const std::string &thruster_name, YAML::Emitter& out);
  // Reads from a YAML node an effort array.
  void ReadEfforts (const std::string &thruster_name, YAML::Node& node);

  // Contains a map with the ID/
  std::map<std::string, std::array<double, 6> > thruster_list_;

  const std::string file_path_ = kConfigPath + "thruster" + kConfigExt;

};

inline void ThrusterConfigManager::WriteEfforts (const std::string &thruster_name, YAML::Emitter& out) {
  out << YAML::Key << (thruster_name);
  out << YAML::Value ;
  out << YAML::Flow;
  auto t_array  = thruster_list_[thruster_name];
  out << std::vector<double>(t_array.cbegin(), t_array.cend());
}

inline void ThrusterConfigManager::ReadEfforts (const std::string &thruster_name, YAML::Node& node) {
  if( node[thruster_name] )
  {
    auto thruster = node[thruster_name];
    assert(thruster.Type() == YAML::NodeType::Sequence);
    std::array<double, 6> force_array = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    for( size_t i = 0, size = force_array.size(); i < size; i++)
    {
      force_array [i] = thruster[i].as<double>();
    }
    thruster_list_[thruster_name] = force_array;
  }
}

inline std::array<double, 6> ThrusterConfigManager::GetThrusterConfig(const std::string &name)
{
  return thruster_list_[name];
};

#endif //PROC_CONTROL_THRUSTERCONFIGMANAGER_H
