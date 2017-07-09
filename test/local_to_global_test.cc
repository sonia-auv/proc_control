/**
 * \file	matrix_test.cc
 * \author	Thibaut Mattio <thibaut.mattio@gmail.com>
 * \date	21/02/2016
 *
 * \copyright Copyright (c) 2015 S.O.N.I.A. All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. software. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtest/gtest.h>
#include "proc_control/proc_control_node.h"
#include "lib_atlas/maths/matrix.h"
#include <eigen3/Eigen/Eigen>

TEST(LocalGlobalTest, first) {
  double rotation = 315;
  Eigen::Matrix3d original_rotation = atlas::EulerToRot(Eigen::Vector3d(atlas::DegreeToRadian(rotation),0,0));
  Eigen::Vector3d original_position(2,3,0), translation(1,0,0) ;


  Eigen::Vector3d final_pos = original_position + (original_rotation*translation);
  Eigen::Vector3d euler_final = atlas::RotToEuler(original_rotation);
  //std::cout << atlas::RadianToDegree(euler_final[0]) << "\t" << atlas::RadianToDegree(euler_final[1]) << "\t" << atlas::RadianToDegree(euler_final[2]) << std::endl;
  //std::cout << final_pos[0] << "\t" << final_pos[1] << "\t" << final_pos[2] << std::endl;

  Eigen::Matrix3d inverse_rotation = atlas::EulerToRot(Eigen::Vector3d(atlas::DegreeToRadian(-rotation),0,0));
  Eigen::Vector3d go_to_pos(final_pos[0]-original_position[0], final_pos[1]-original_position[1], final_pos[2]-original_position[2]); ;
  Eigen::Vector3d local_conversion = inverse_rotation*go_to_pos;

  std::cout << translation[0] << "\t" << translation[1] << "\t" << translation[2] << std::endl;
  std::cout << local_conversion[0] << "\t" << local_conversion[1] << "\t" << local_conversion[2] << std::endl;


}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
