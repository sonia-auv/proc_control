/**
 * \file	Transformation.cc
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	10/21/17
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. AUV All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. AUV software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. AUV software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. AUV software. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Transformation.h"
#include <iostream>

namespace proc_control{


    Eigen::Affine3d Transformation::HomogeneousMatrix(Eigen::Vector3d &eulerAngle, Eigen::Vector3d &translation) {

        Eigen::Affine3d mat;
        mat.linear() = (Eigen::AngleAxisd(eulerAngle[0], Eigen::Vector3d::UnitX())
                        * Eigen::AngleAxisd(eulerAngle[1], Eigen::Vector3d::UnitY())
                        * Eigen::AngleAxisd(eulerAngle[2], Eigen::Vector3d::UnitZ())).toRotationMatrix();
        mat.translation() = translation;

        return mat;
    }

}
