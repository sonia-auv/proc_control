//
// Created by olavoie on 11/13/17.
//

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
        Eigen::Matrix3d homogeneous_to_rot_matrix(Eigen::Matrix3d homogeneous_matrix);

        Eigen::Matrix3d fill_rx_matrix(double euler_angle_roll);
        Eigen::Matrix3d fill_ry_matrix(double euler_angle_pitch);
        Eigen::Matrix3d fill_rz_matrix(double euler_angle_yaw);

        std::array<double, 6> position_;

        Eigen::Matrix4d homogeneous_matrix_;

    };

}



#endif //PROC_CONTROL_TRANSFORMATION_H
