//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H


#include <ctime>
#include <cmath>
#include <algorithm>

#include <proc_control/config/algorithm_config/PID_Values.h>

class PID {
public :
  PID(PIDValues &pid_values):last_error_(0), integration_sum_(0), last_time_(0), pid_values_(pid_values){}
  double GetValueForError(double error);

private :
    double last_error_;
    double integration_sum_;
    time_t  last_time_;
    PIDValues &pid_values_;
};


#endif //PROC_CONTROL_PID_H
