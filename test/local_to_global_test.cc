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
#include "proc_control/ControlSystem.h"
#include "lib_atlas/maths/matrix.h"
#include <eigen3/Eigen/Eigen>

TEST(LocalGlobalTest, first) {
  Eigen::Matrix3d original_rotation = atlas::EulerToRot(Eigen::Vector3d(0,0,atlas::DegreeToRadian(-45)));
  Eigen::Vector3d original_position(2,3,0), translation(4.33013,-2.5,0) ;

  Eigen::Vector3d final_pos = original_position + (original_rotation*translation);
  Eigen::Vector3d euler_final = atlas::RotToEuler(original_rotation);
  std::cout << atlas::RadianToDegree(euler_final[0]) << "\t" << atlas::RadianToDegree(euler_final[1]) << "\t" << atlas::RadianToDegree(euler_final[2]) << std::endl;
  std::cout << final_pos[0] << "\t" << final_pos[1] << "\t" << final_pos[2];
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
