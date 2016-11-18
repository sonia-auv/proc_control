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

class ThrusterManager {
  public:
  ThrusterManager();

  // Observer override
  void UpdateThrustVector();

  std::array<double, 6> Commit(std::array<double, 3> &linear_effort, std::array<double, 3> &rotational_target);

  private:

  std::vector<Thruster> thrusters_;
  ThrusterConfigManager thruster_config_manager_;
  boost::signals2::connection connexion_to_config_;
};

inline void ThrusterManager::UpdateThrustVector()
{
  std::cout << "Update to the thruster values" << std::endl;
  for(auto &thruster : thrusters_)
  {
    thruster.SetFrom6AxisArray(thruster_config_manager_.GetThrusterConfig(thruster.GetID()));
  }
}


#endif //PROC_CONTROL_THRUSTERMANAGER_H
