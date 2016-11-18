//
// Created by jeremie on 11/16/16.
//

#include "AlgorithmManager.h"
#include "PID4Axis_Algorithm.h"
#include <memory>

AlgorithmManager::AlgorithmManager():
    algorithm_config_manager_(),
    current_algorithm_(nullptr)
{
  algorithms_.push_back(std::make_shared<PID4Axis_Algorithm>());
  current_algorithm_ = algorithms_[0];

  connexion_to_config_ = algorithm_config_manager_.AddObserver(boost::bind(&AlgorithmManager::UpdateAlgorithm, this));
  if( connexion_to_config_.connected())
    std::cout << "Algorithm manager is connected to the configuration" << std::endl;
  UpdateAlgorithm();
}

void AlgorithmManager::UpdateAlgorithm()
{
  std::cout << "Update to the algorithm choice" << std::endl;
  AlgorithmConfigManager::AlgorithmTypes algo = algorithm_config_manager_.GetCurrentAlgorithmConfig();

  switch (algo)
  {
    case AlgorithmConfigManager::AlgorithmTypes::PID_4_AXIS:
      current_algorithm_ = algorithms_[0];
      break;

    default:
      std::cout << "Not implemented yet" << std::endl;
  }


}