//
// Created by jeremie on 11/16/16.
//

#include "PID4Axis_Algorithm.h"

PID4Axis_Algorithm::PID4Axis_Algorithm()
{
  connexion_to_config_ = config_manager_.AddObserver(boost::bind(&PID4Axis_Algorithm::OnPIDUpdate, this));
  if(connexion_to_config_.connected())
    std::cout << "PID4Axis is connected to the configuration" << std::endl;
  OnPIDUpdate();
}