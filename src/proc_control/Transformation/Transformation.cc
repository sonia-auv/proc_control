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

    void Transformation::compute_homogeneous_matrix(Eigen::Vector3d euler_angle, Eigen::Vector3d position){

        Eigen::Matrix3d rotation_matrix = euler_to_rot_matrix(euler_angle);

        for (int i=0; i < 3; i++){
            for (int j=0; j < 3; j++) {
                homogeneous_matrix_(i, j) = rotation_matrix(i, j);
            }
        }

        homogeneous_matrix_(3,0) = 0, homogeneous_matrix_(3,1) = 0, homogeneous_matrix_(3,2) = 0, homogeneous_matrix_(3,3) = 1;
        homogeneous_matrix_(0,3) = position.x(), homogeneous_matrix_(1,3) = position.y(), homogeneous_matrix_(2,3) = position.z();

 
    }

    void Transformation::compute_position_from_homogeneous_matrix(Eigen::Matrix4d homogeneous_matrix) {
        Eigen::Matrix3d rotation_matrix;
        Eigen::Vector3d position, euler_angles;

        for (int i=0; i < 3; i++){
            for (int j=0; j < 3; j++) {
                rotation_matrix(i, j) = homogeneous_matrix(i, j);
            }
        }


        euler_angles = rotation_matrix.eulerAngles(0, 1, 2);

        position.x() = homogeneous_matrix(0,3), position.y() = homogeneous_matrix(1,3), position.z() = homogeneous_matrix(2,3);

        for (int i = 0; i < 3; i++){
            position_[i+3] = radian_to_degree(euler_angles[i]);
        }

        // Inverse x y axis
        position_[0] = position[1];
        position_[1] = position[0];

        position_[2] = position[2];

    }



    Eigen::Matrix3d Transformation::euler_to_rot_matrix(Eigen::Vector3d &euler_angle) {

        Eigen::Matrix3d Rx, Ry, Rz;

        Rx = fill_rx_matrix(degree_to_radian(euler_angle[0]));
        Ry = fill_ry_matrix(degree_to_radian(euler_angle[1]));
        Rz = fill_rz_matrix(degree_to_radian(euler_angle[2]));

        return Rx * Ry * Rz;

    }

    double Transformation::degree_to_radian(double angle) {
        return angle * M_PI / 180.0;
    }

    double Transformation::radian_to_degree(double angle) {
        return angle * 180.0 / M_PI;
    }

    Eigen::Matrix3d Transformation::fill_rx_matrix(double euler_angle_roll) {

        Eigen::Matrix3d Rx;

        Rx(0,0) = 1, Rx(0,1) = 0, Rx(0,2) = 0;
        Rx(1,0) = 0, Rx(1,1) = cos(euler_angle_roll), Rx(1,2) = -sin(euler_angle_roll);
        Rx(2,0) = 0, Rx(2,1) = sin(euler_angle_roll), Rx(2,2) = cos(euler_angle_roll);

        return Rx;

    }

    Eigen::Matrix3d Transformation::fill_ry_matrix(double euler_angle_pitch) {

        Eigen::Matrix3d Ry;

        Ry(0,0) = cos(euler_angle_pitch), Ry(0,1) = 0, Ry(0,2) = sin(euler_angle_pitch);
        Ry(1,0) = 0, Ry(1,1) = 1, Ry(1,2) = 0;
        Ry(2,0) = -sin(euler_angle_pitch), Ry(2,1) = 0 , Ry(2,2) = cos(euler_angle_pitch);

        return Ry;

    }

    Eigen::Matrix3d Transformation::fill_rz_matrix(double euler_angle_yaw) {

        Eigen::Matrix3d Rz;

        Rz(0,0) = cos(euler_angle_yaw), Rz(0,1) = -sin(euler_angle_yaw), Rz(0,2) = 0;
        Rz(1,0) = sin(euler_angle_yaw), Rz(1,1) = cos(euler_angle_yaw), Rz(1,2) = 0;
        Rz(2,0) = 0, Rz(2,1) = 0 , Rz(2,2) = 1;

        return Rz;

    }

    void Transformation::set_homogeneous_matrix(Eigen::Matrix4d homogeneous_matrix) {
        homogeneous_matrix_ = homogeneous_matrix;
    }

    Eigen::Matrix4d Transformation::get_homogeneous_matrix() {
        return homogeneous_matrix_;
    }

    std::array<double, 6> Transformation::get_position_from_homogeneous_matrix() {
        return this->position_;
    }
}
