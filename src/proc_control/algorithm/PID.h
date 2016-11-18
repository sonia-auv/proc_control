//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H


#include <algorithm>
#include <chrono>
#include <cmath>
#include <proc_control/config/algorithm_config/PID_Values.h>


class PID {
  public :

  PID(const std::string &name):last_error_(0), integration_sum_(0), pid_values_(name){}
  double GetValueForError(double error);
  PIDValues & GetPIDValues() {return pid_values_;};

  private :
  double last_error_;
  double integration_sum_;
  std::chrono::steady_clock::time_point last_time_;

  PIDValues pid_values_;
};


#endif //PROC_CONTROL_PID_H
