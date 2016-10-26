//
// Created by simon on 12/10/16.
//

#ifndef PROC_CONTROL_CONTROLALGORITHM_H
#define PROC_CONTROL_CONTROLALGORITHM_H

#include <vector>

class ControlAlgorithm {
    void GetErrorFromPositionAndTarget();
    void UpdatePosition(std::vector<double> position_vector);
    void UpdateTarget(std::vector<double> target_position);
    virtual void GetActuationForError(std::vector<double> error_vector) = 0;

};
#endif //PROC_CONTROL_CONTROLALGORITHM_H
