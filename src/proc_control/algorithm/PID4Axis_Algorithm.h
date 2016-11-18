//
// Created by jeremie on 11/16/16.
//

#ifndef PROC_CONTROL_PID4AXIS_ALGORITHM_H
#define PROC_CONTROL_PID4AXIS_ALGORITHM_H

#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/algorithm/PID.h"
#include "proc_control/config/algorithm_config/PID_4Axis_config_manager.h"

class PID4Axis_Algorithm : public ControlAlgorithm{
  public:
  PID4Axis_Algorithm();

  // ControlAlgorithm override
  std::array<double, 6> CalculateActuationForError(const std::array<double, 6> &error);
  private:
  void OnPIDUpdate();
  PID4AxisConfigManager config_manager_;
  // X Y Z YAW
  // The config_manager holds the configurations.
  std::vector<PID> pids_;
  boost::signals2::connection connexion_to_config_;

};

inline std::array<double, 6> PID4Axis_Algorithm::CalculateActuationForError(const std::array<double, 6> &error)
{
  std::array<double, 6> actuation = {0.0f};
  // The 4 axis algorithm control only X Y Z YAW
  // X Y Z
  for( int i = 0; i < 3; i++)
  {
    actuation[i] = pids_[i].GetValueForError(error[i]);
  }
  // YAW
  actuation[5] = pids_[3].GetValueForError(error[5]);
  return actuation;
};

inline void PID4Axis_Algorithm::OnPIDUpdate()
{
  std::cout << "Update to the PID values" << std::endl;
  // Easy way :)
  pids_.clear();
  pids_.push_back(PID(config_manager_.x));
  pids_.push_back(PID(config_manager_.y));
  pids_.push_back(PID(config_manager_.z));
  pids_.push_back(PID(config_manager_.yaw));
}

#endif //PROC_CONTROL_PID4AXIS_ALGORITHM_H
