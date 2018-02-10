//
// Created by olavoie on 2/10/18.
//

#ifndef PROC_CONTROL_FILTER_H
#define PROC_CONTROL_FILTER_H

namespace proc_control{

    class Filter {
    public:
        Filter();
        ~Filter();

        void SetLPFBeta(double lpf_beta){LPF_Beta_ = lpf_beta;}
        double ComputeLPF(double raw_data);

    private:

        double SmoothData_;
        double LPF_Beta_;

    };

}


#endif //PROC_CONTROL_FILTER_H
