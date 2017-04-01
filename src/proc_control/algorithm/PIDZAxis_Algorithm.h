//
// Created by bullshark on 4/1/17.
//

#ifndef PROC_CONTROL_PIDZAXIS_ALGORITHM_H
#define PROC_CONTROL_PIDZAXIS_ALGORITHM_H

#include <proc_control/property.h>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/algorithm/PID.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/PIDZAxisConfig.h"

class PIDZAxis_Algorithm : public ControlAlgorithm,  public ConfigManager<proc_control::PIDZAxisConfig > {
 public:
  PIDZAxis_Algorithm();

  void OnDynamicReconfigureChange(const proc_control::PIDZAxisConfig &config ) override ;
  void WriteConfigFile( const proc_control::PIDZAxisConfig &config ) override ;
  void ReadConfigFile( proc_control::PIDZAxisConfig &config ) override ;

  // ControlAlgorithm override
  std::array<double, 6> CalculateActuationForError(const std::array<double, 6> &error);

 private:

  // X Y Z YAW
  PID z_;
  PIDValues &z_values_;
  double constant_depth_force_;
  const std::string file_path_ = kConfigPath + "algorithm_config/PIDZAxis" + kConfigExt;
  const std::string CONSTANT_DEPTH_FORCE = "CONSTANT_DEPTH_FORCE";

};

#endif //PROC_CONTROL_PIDZAXIS_ALGORITHM_H
