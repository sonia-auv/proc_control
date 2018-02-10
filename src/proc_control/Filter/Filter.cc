//
// Created by olavoie on 2/10/18.
//

#include "Filter.h"

namespace proc_control{

    Filter::Filter() {SmoothData_ = 0.0;}

    Filter::~Filter() {}

    double Filter::ComputeLPF(double raw_data) {

        return SmoothData_ - (LPF_Beta_ * (SmoothData_ - raw_data));
    }

}