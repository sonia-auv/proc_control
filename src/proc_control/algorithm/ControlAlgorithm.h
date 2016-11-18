//
// Created by simon on 12/10/16.
//

#ifndef PROC_CONTROL_CONTROLALGORITHM_H
#define PROC_CONTROL_CONTROLALGORITHM_H

#include <array>

class ControlAlgorithm {
  public:
    virtual std::array<double, 6> CalculateActuationForError(const std::array<double, 6> &error) = 0;
};
#endif //PROC_CONTROL_CONTROLALGORITHM_H
