//
// Created by jeremie on 10/17/16.
//

#ifndef PROC_CONTROL_THRUSTERMANAGER_H
#define PROC_CONTROL_THRUSTERMANAGER_H

#include <vector>
#include "lib_atlas/pattern/observer.h"
#include "lib_atlas/maths/numbers.h"
#include "proc_control/thruster/thruster.h"
#include "proc_control/config/thruster_config_manager.h"

class ThrusterManager : public atlas::Observer<> {

  ThrusterManager();

  // Observer override
  void OnSubjectNotify(ThrusterConfigManager);

  void Commit(std::array<double, 3> &linear_effort, std::array<double, 3> &rotational_target);
  private:

  std::vector<Thruster> thrusters_;
  ThrusterConfigManager thruster_config_manager_;
};

inline void ThrusterManager::OnSubjectNotify(ThrusterConfigManager)
{
  for(auto &thruster : thrusters_)
  {
    thruster.SetFrom6AxisArray(thruster_config_manager_.GetThrusterConfig(thruster.GetID()));
  }
}


#endif //PROC_CONTROL_THRUSTERMANAGER_H
