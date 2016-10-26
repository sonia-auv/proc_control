//
// Created by jeremie on 9/23/16.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H


#include <ctime>
#include <cmath>
#include <algorithm>

class ControlAlgorithm_PID {
public :
    double getValueForError(double error);

private :
    double lastError;
    double integrationSum;
    time_t  lastTime;
    double p,i,d, iLimit, minActuation, maxActuation;
};


#endif //PROC_CONTROL_PID_H
