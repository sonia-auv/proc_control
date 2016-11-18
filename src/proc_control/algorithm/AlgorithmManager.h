//
// Created by jeremie on 11/16/16.
//

#ifndef PROC_CONTROL_ALGORITHMMANAGER_H
#define PROC_CONTROL_ALGORITHMMANAGER_H

#include <memory>
#include "proc_control/algorithm/ControlAlgorithm.h"
#include "proc_control/config/algorithm_config_manager.h"

class AlgorithmManager {
  public:
  AlgorithmManager();

  std::array<double, 6> GetActuationForError(const std::array<double, 6> &error);

  private:
  // Observer override
  void UpdateAlgorithm();

  AlgorithmConfigManager algorithm_config_manager_;
  boost::signals2::connection connexion_to_config_;
  std::vector<std::shared_ptr<ControlAlgorithm>> algorithms_;
  std::shared_ptr<ControlAlgorithm> current_algorithm_;

};

inline std::array<double, 6> AlgorithmManager::GetActuationForError(const std::array<double, 6> &error)
{
  return current_algorithm_->CalculateActuationForError(error);
};

#endif //PROC_CONTROL_ALGORITHMMANAGER_H
