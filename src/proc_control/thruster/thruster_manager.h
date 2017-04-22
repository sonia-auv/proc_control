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

class ThrusterManager  : public ConfigManager<proc_control::ThrusterConfig>{
  public:
  ThrusterManager();

  // ConfigManager override
  void OnDynamicReconfigureChange(const proc_control::ThrusterConfig &config ) override ;
  void WriteConfigFile(const proc_control::ThrusterConfig &config) override ;
  void ReadConfigFile(proc_control::ThrusterConfig &config) override ;

  void SetEnable(bool isEnable);

  template <typename Tp_>
  inline int signum(Tp_ val) {
    return (Tp_(0) < val) - (val < Tp_(0));
  }

  std::array<double, 8> Commit(std::array<double, 3> &linear_effort, std::array<double, 3> &rotational_target);

  private:
  // Writes to a YAML node an effort array
  void WriteEfforts(size_t thruster_index, YAML::Emitter &out);
  // Reads from a YAML node an effort array.
  void ReadEfforts (const std::string &thruster_name, YAML::Node& node);

  // Contains a map with the ID/
  std::vector< Thruster > thruster_list_;

  const std::string file_path_ = kConfigPath + "thruster" + kConfigExt;

};

inline void ThrusterManager::SetEnable(bool isEnable) {

  for(auto &thruster : thruster_list_){
    thruster.SetEnable(isEnable);
  }

}

inline void ThrusterManager::WriteEfforts(size_t thruster_index, YAML::Emitter &out) {
//  out << YAML::Key << thruster_list_[thruster_index].GetID();
//  out << YAML::Value;
//  out << YAML::Flow;
//  std::array<double, 3> lin_array  = thruster_list_[thruster_index].GetLinearEffort();
//  std::array<double, 3> rot_array  = thruster_list_[thruster_index].GetRotationnalEffort();
//  std::vector<double> tot_vec = {lin_array[0], lin_array[1],lin_array[2],rot_array[3],rot_array[4],rot_array[5]};
//  out << tot_vec;
}

inline void ThrusterManager::ReadEfforts (const std::string &thruster_name, YAML::Node& node) {
  if( node[thruster_name] )
  {
    auto thruster = node[thruster_name];
    assert(thruster.Type() == YAML::NodeType::Sequence);
    std::array<double, 6> force_array = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    for( size_t i = 0, size = force_array.size(); i < size; i++)
    {
      force_array [i] = thruster[i].as<double>();
    }
    for(auto &t : thruster_list_)
    {
      if( t.GetID() == t.GetIDFromName(thruster_name))
        t.SetFrom6AxisArray(force_array);
    }

  }
}

#endif //PROC_CONTROL_THRUSTERMANAGER_H
