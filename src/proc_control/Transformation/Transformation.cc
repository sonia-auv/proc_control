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

    void Transformation::ComputeHomogeneousMatrix(Eigen::Vector3d euler_angle, Eigen::Vector3d position){

        Eigen::Matrix3d rotation_matrix = EulerToRotMatrix(euler_angle);

        for (int i=0; i < 3; i++){
            for (int j=0; j < 3; j++) {
                homogeneous_matrix_(i, j) = rotation_matrix(i, j);
            }
        }

        homogeneous_matrix_(3,0) = 0, homogeneous_matrix_(3,1) = 0, homogeneous_matrix_(3,2) = 0, homogeneous_matrix_(3,3) = 1;
        homogeneous_matrix_(0,3) = position.x(), homogeneous_matrix_(1,3) = position.y(), homogeneous_matrix_(2,3) = position.z();

 
    }

    void Transformation::ComputePositionFromHomogeneousMatrix(Eigen::Matrix4d homogeneous_matrix) {
        Eigen::Matrix3d rotation_matrix;
        Eigen::Vector3d position, euler_angles;

        for (int i=0; i < 3; i++){
            for (int j=0; j < 3; j++) {
                rotation_matrix(i, j) = homogeneous_matrix(i, j);
            }
        }


        euler_angles = rotation_matrix.eulerAngles(0, 1, 2);

        position_[0] = homogeneous_matrix(0,3), position_[1] = homogeneous_matrix(1,3), position_[2] = homogeneous_matrix(2,3);

        for (int i = 0; i < 3; i++){
            position_[i+3] = RadianToDegree(euler_angles[i]);
        }

    }



    Eigen::Matrix3d Transformation::EulerToRotMatrix(Eigen::Vector3d &euler_angle) {

        Eigen::Matrix3d Rx, Ry, Rz;

        Rx = FillRxMatrix(DegreeToRadian(euler_angle[0]));
        Ry = FillRyMatrix(DegreeToRadian(euler_angle[1]));
        Rz = FillRzMatrix(DegreeToRadian(euler_angle[2]));

        return Rx * Ry * Rz;

    }

    double Transformation::DegreeToRadian(double angle) {
        return angle * M_PI / 180.0;
    }

    double Transformation::RadianToDegree(double angle) {
        return angle * 180.0 / M_PI;
    }

    Eigen::Matrix3d Transformation::FillRxMatrix(double euler_angle_roll) {

        Eigen::Matrix3d Rx;

        Rx(0,0) = 1, Rx(0,1) = 0, Rx(0,2) = 0;
        Rx(1,0) = 0, Rx(1,1) = cos(euler_angle_roll), Rx(1,2) = -sin(euler_angle_roll);
        Rx(2,0) = 0, Rx(2,1) = sin(euler_angle_roll), Rx(2,2) = cos(euler_angle_roll);

        return Rx;

    }

    Eigen::Matrix3d Transformation::FillRyMatrix(double euler_angle_pitch) {

        Eigen::Matrix3d Ry;

        Ry(0,0) = cos(euler_angle_pitch), Ry(0,1) = 0, Ry(0,2) = sin(euler_angle_pitch);
        Ry(1,0) = 0, Ry(1,1) = 1, Ry(1,2) = 0;
        Ry(2,0) = -sin(euler_angle_pitch), Ry(2,1) = 0 , Ry(2,2) = cos(euler_angle_pitch);

        return Ry;

    }

    Eigen::Matrix3d Transformation::FillRzMatrix(double euler_angle_yaw) {

        Eigen::Matrix3d Rz;

        Rz(0,0) = cos(euler_angle_yaw), Rz(0,1) = -sin(euler_angle_yaw), Rz(0,2) = 0;
        Rz(1,0) = sin(euler_angle_yaw), Rz(1,1) = cos(euler_angle_yaw), Rz(1,2) = 0;
        Rz(2,0) = 0, Rz(2,1) = 0 , Rz(2,2) = 1;

        return Rz;

    }

    void Transformation::SetHomogeneousMatrix(Eigen::Matrix4d homogeneous_matrix) {
        homogeneous_matrix_ = homogeneous_matrix;
    }

    Eigen::Matrix4d Transformation::GetHomogeneousMatrix() {
        return homogeneous_matrix_;
    }

    std::array<double, 6> Transformation::GetPositionFromHomogeneousMatrix() {
        return this->position_;
    }
}
