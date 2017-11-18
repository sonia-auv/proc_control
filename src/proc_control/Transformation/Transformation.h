/**
 * \file	Transformation.h
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

#ifndef PROC_CONTROL_TRANSFORMATION_H
#define PROC_CONTROL_TRANSFORMATION_H

#include <eigen3/Eigen/Eigen>

namespace proc_control{

    class Transformation {
    public:



        void compute_homogeneous_matrix(Eigen::Vector3d euler_angle, Eigen::Vector3d position);

        std::array<double, 6> get_position_from_homogeneous_matrix();
        void compute_position_from_homogeneous_matrix(Eigen::Matrix4d homogeneous_matrix);

        void set_homogeneous_matrix(Eigen::Matrix4d homogeneous_matrix);
        Eigen::Matrix4d get_homogeneous_matrix();


    private:

        Eigen::Matrix3d euler_to_rot_matrix(Eigen::Vector3d &euler_angle);
        double degree_to_radian(double angle);
        double radian_to_degree(double angle);

        Eigen::Matrix3d fill_rx_matrix(double euler_angle_roll);
        Eigen::Matrix3d fill_ry_matrix(double euler_angle_pitch);
        Eigen::Matrix3d fill_rz_matrix(double euler_angle_yaw);

        std::array<double, 6> position_;

        Eigen::Matrix4d homogeneous_matrix_;

    };

}



#endif //PROC_CONTROL_TRANSFORMATION_H
