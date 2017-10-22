//
// Created by olavoie on 10/21/17.
//

#include "ControlAlgorithm.h"


ControlAlgorithm::ControlAlgorithm(int controller) {

    switch(controller)
    {
        case 0: controller_type = PID;
            break;
        case 1: controller_type = PI;
            break;
        case 2: controller_type = PD;
            break;
        case 3: controller_type = P;
            break;
        default:
            std::cout << "Not implemented yet" << std::endl;
    }



}
