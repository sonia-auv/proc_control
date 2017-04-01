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

inline std::array<double, 6> PIDZAxis_Algorithm::CalculateActuationForError(const std::array<double, 6> &error)
{
  std::array<double, 6> actuation = {0.0f};
  // The 4 axis algorithm control only X Y Z YAW
  // X Y Z
//  actuation[0] = x_.GetValueForError(error[0]);
//  actuation[1] = y_.GetValueForError(error[1]);
//  actuation[2] = z_.GetValueForError(error[2]) + constant_depth_force_;
//  actuation[5] = yaw_.GetValueForError(error[5]);
  return actuation;
};

#endif //PROC_CONTROL_PIDZAXIS_ALGORITHM_H
