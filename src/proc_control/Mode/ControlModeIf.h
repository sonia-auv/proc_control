//
// Created by olavoie on 1/13/18.
//

#ifndef PROC_CONTROL_CONTROLMODEIF_H
#define PROC_CONTROL_CONTROLMODEIF_H

#include <ros/ros.h>

#include "proc_control/property.h"
#include "proc_control/thruster/thruster_manager.h"


const double DEGREE_TO_RAD = M_PI / 180.0;
const double RAD_TO_DEGREE = 180.0 / M_PI;

namespace proc_control{

    class ControlModeIf {
    public:

        virtual void Process() = 0;
        virtual void SetTarget(bool isGlobal, Eigen::Vector3d &translation, Eigen::Vector3d &orientation) = 0;

    protected:
        std::vector<bool>             isTargetReached_;
        proc_control::ThrusterManager thruster_manager_;

    };

}


#endif //PROC_CONTROL_CONTROLMODEIF_H
