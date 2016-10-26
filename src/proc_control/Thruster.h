//
// Created by jeremie on 10/8/16.
//

#ifndef PROC_CONTROL_THRUSTER_H
#define PROC_CONTROL_THRUSTER_H

#include <array>
#include <yaml-cpp/yaml.h>

class Thruster {

  void SetValues(std::array<double, 6> values);
  private:
  std::array<double, 6> efforts_;

};

inline void Thruster::SetValues(std::array<double, 6> values)
{
  efforts_ = values;
}
#endif //PROC_CONTROL_THRUSTER_H
