//
// Created by olavoie on 10/26/17.
//

#ifndef PROC_CONTROL_CONTROL_AUV_H
#define PROC_CONTROL_CONTROL_AUV_H

#include "AxisController.h"

class Control_AUV {

public:

    Control_AUV();

    ~Control_AUV();

    std::array<double, 6> GetActuationForError(std::array<double, 6> &error);

    bool IsInBoundingBox(std::array<double, 6> error);

    void SetNewBoundingBox(std::array<double, 6> BBox);
    void ResetBoundingBox();

private:

    enum ControllerType{PID_ = 0, PI_, PD_, P_};

    AxisController x_, y_, z_, roll_, pitch_, yaw_;



};


#endif //PROC_CONTROL_CONTROL_AUV_H
