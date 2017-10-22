//
// Created by olavoie on 10/21/17.
//

#ifndef PROC_CONTROL_PID_H
#define PROC_CONTROL_PID_H

#include <string>
#include <list>
#include "controller_parameters.h"

class PID {
public:
    //==========================================================================
    // P U B L I C   C / D T O R S

    PID(const std::list<std::string> &parameters_names, const std::list<double> &parameters_values);

    //==========================================================================
    // P U B L I C   M E T H O D S
    double GetValueForError(double error);
    inline ControllerParameters & GetPIDValues() { return pid_values_; };

private :
    //==========================================================================
    // P R I V A T E   M E M B E R S


    ControllerParameters pid_values_;


};


#endif //PROC_CONTROL_PID_H
