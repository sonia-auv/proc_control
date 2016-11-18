//
// Created by jeremie on 11/16/16.
//

#ifndef PROC_CONTROL_PID4AXIS_ALGORITHM_H
#define PROC_CONTROL_PID4AXIS_ALGORITHM_H


#include <proc_control/property.h>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/algorithm/PID.h"
#include "proc_control/config/config_manager.h"
#include "proc_control/PID4AxisConfig.h"

class PID4Axis_Algorithm : public ControlAlgorithm,  public ConfigManager<proc_control::PID4AxisConfig > {
  public:
  PID4Axis_Algorithm();

  void OnDynamicReconfigureChange(const proc_control::PID4AxisConfig &config ) override ;
  void WriteConfigFile( const proc_control::PID4AxisConfig &config ) override ;
  void ReadConfigFile( proc_control::PID4AxisConfig &config ) override ;

  // ControlAlgorithm override
  std::array<double, 6> CalculateActuationForError(const std::array<double, 6> &error);

  private:

  // X Y Z YAW
  PID x_, y_, z_, yaw_;
  PIDValues &x_values_, &y_values_, &z_values_, &yaw_values_;
  double constant_depth_force_;
  const std::string file_path_ = kConfigPath + "algorithm_config/PID4Axis" + kConfigExt;
  const std::string CONSTANT_DEPTH_FORCE = "CONSTANT_DEPTH_FORCE";

};

inline std::array<double, 6> PID4Axis_Algorithm::CalculateActuationForError(const std::array<double, 6> &error)
{
  std::array<double, 6> actuation = {0.0f};
  // The 4 axis algorithm control only X Y Z YAW
  // X Y Z
  actuation[0] = x_.GetValueForError(error[0]);
  actuation[1] = y_.GetValueForError(error[1]);
  actuation[2] = z_.GetValueForError(error[2]) + constant_depth_force_;
  actuation[5] = yaw_.GetValueForError(error[5]);
  return actuation;
};

#endif //PROC_CONTROL_PID4AXIS_ALGORITHM_H
