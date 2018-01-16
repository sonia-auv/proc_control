//
// Created by olavoie on 1/13/18.
//

#ifndef PROC_CONTROL_CONTROLMODEIF_H
#define PROC_CONTROL_CONTROLMODEIF_H

#include <ros/ros.h>

#include "proc_control/property.h"


namespace proc_control{

    class ControlModeIf {
    public:

        virtual void Process() = 0;
        virtual void SetTarget(bool isGlobal, Eigen::Vector3d translation, Eigen::Vector3d orientation) = 0;

    };

}


#endif //PROC_CONTROL_CONTROLMODEIF_H
