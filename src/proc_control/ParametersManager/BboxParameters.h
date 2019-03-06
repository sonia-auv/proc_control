//
// Created by olavoie on 12/11/18.
//

#ifndef PROC_CONTROL_BBOXPARAMETERS_H
#define PROC_CONTROL_BBOXPARAMETERS_H

#include "proc_control/ParametersManager/ParamManagerIF.h"
#include "proc_control/BboxConfig.h"

namespace proc_control
{
    class BboxParameters : public ParamManagerIF<BboxConfig>
    {
    public:
        BboxParameters(std::string axe_name,std::shared_ptr<std::vector<double>> &bboxParameters);
        virtual ~BboxParameters() = default;

        //==========================================================================
        // P U B L I C   O V E R R I D E D   M E T H O D S

        void OnDynamicReconfigureChange(const BboxConfig &config ) override;

        void WriteConfigFile( const BboxConfig &config ) override;

        void ReadConfigFile( BboxConfig &config ) override;

    private:
        std::string file_path_;
        std::shared_ptr<std::vector<double>> bboxParameters_;

    };
}



#endif //PROC_CONTROL_BBOXPARAMETERS_H
