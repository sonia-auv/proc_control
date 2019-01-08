//
// Created by olavoie on 12/18/18.
//

#include "CommandBParameters.h"

namespace proc_control
{
    CommandBParameters::CommandBParameters( std::shared_ptr<control::TransferFunctionCoefficient> &transferFunctionCoefficientB):
        transferFunctionCoefficientB_{transferFunctionCoefficientB}
    {
        transferFunctionCoefficientB_->denominatorFactor.row(0) << -3.639591435619611, 4.951840184694524, -2.984799708005306, 0.672550978879680;
        transferFunctionCoefficientB_->numeratorFactor.row(0)   <<  3.663521493460744, 0.062852137377651, -7.264065541170898, -0.062601520631772, 3.600794664456033;
        transferFunctionCoefficientB_->denominatorFactor.row(1) << -3.721140132164017,   5.182918636148546,  -3.202408853963115,   0.740630350805249;
        transferFunctionCoefficientB_->numeratorFactor.row(1)   <<  2.874571854497089, 0.016292762391361, -5.732850946601702, -0.016292762389132, 2.858279092106842;
        transferFunctionCoefficientB_->denominatorFactor.row(3) <<  0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->numeratorFactor.row(3)   <<  0.0, 0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->denominatorFactor.row(3) <<  0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->numeratorFactor.row(3)   <<  0.0, 0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->denominatorFactor.row(4) <<  0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->numeratorFactor.row(4)   <<  0.0, 0.0, 0.0, 0.0, 0.0;
        transferFunctionCoefficientB_->denominatorFactor.row(5) << -3.438254439400247,   4.364849833917319,  -2.413705446788345,   0.487110296428659;
        transferFunctionCoefficientB_->numeratorFactor.row(5)   <<  0.006654007474324,   0.000513789197763,  -0.012775927167275,  -0.000477192030541,   0.006158516860172;
    }
}


