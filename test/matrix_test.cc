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
#include <lib_atlas/maths/matrix.h>
#include <lib_atlas/maths/conversion.h>

#include <eigen3/Eigen/Eigen>
#include <Eigen/Geometry>
#include <lib_atlas/maths/numbers.h>

// test values : Rot Z, Rot Y, Rot X
// Those are the order for the web site.
// rotation around z, then rotation around y then x
// so [0] is Z, [1] is y, [2] is X
// When putting in a vector, change for [2], [1], [0]
//The returned angles are in the ranges [0:pi]x[-pi:pi]x[-pi:pi].
//so Roll:[0:pi] Pitch:[-pi:pi] Yaw:[-pi:pi].

double test_values_euler [2][3] {
    {0.235, 67.36, 97.6},
    {20.35, -65.2, 175.3}
};
//w, x, y, z
double test_values_quaternion [2][4]{
    {0.5473, 0.6269, 0.3640, 0.4184 },
    { 0.1291, 0.8246, -0.1704, -0.5237}
};

//
double test_values_rotation [2][9]{
    {0.385,-0.002,0.923,0.914,-0.136,-0.382,0.126,0.991,-0.051},
    {0.393,-0.146,-0.908,-0.416,-0.909,-0.034,-0.820,0.391,-0.418}
};

void PrintMatrix3d(Eigen::Matrix3d a)
{
  std::cout << "\t\t";
  for( int i = 0; i < 9; i++)
  {
    std::cout << a(i) <<"\t";
  }
  std::cout << std::endl;
}

void PrintQuaterniond(Eigen::Quaterniond a)
{
  std::cout << "\t\t";
  std::cout << a.w() << "\t"
      << a.x() << "\t"
      << a.y() << "\t"
      << a.z() << "\n";
}

void PrintVector3d(Eigen::Vector3d a)
{
  std::cout << "\t\t";
  for( int i = 0; i < 3; i++)
  {
    std::cout << a[i] <<"\t";
  }
  std::cout << std::endl;
}

void CompareRotationMatrix( Eigen::Matrix3d a, Eigen::Matrix3d b)
{
  for( int i = 0; i < 9; i++)
  {
    ASSERT_NEAR(a(i), b(i), 0.001);
  }
}
void CompareQuaternion( Eigen::Quaterniond a, Eigen::Quaterniond b)
{
  ASSERT_NEAR(a.w(), b.w(), 0.001);
  ASSERT_NEAR(a.x(), b.x(), 0.001);
  ASSERT_NEAR(a.y(), b.y(), 0.001);
  ASSERT_NEAR(a.z(), b.z(), 0.001);
}

void ConvertVecToRadian(Eigen::Vector3d &a)
{
  for(int i = 0; i < 3; i ++)
  {
    a[i] = atlas::DegreeToRadian(a[i]);
  }
}

void CompareEuler( Eigen::Vector3d a, Eigen::Vector3d b)
{
  for( int i = 0; i < 3; i++)
  {
    ASSERT_NEAR(a[i], b[i], 0.001);
  }
}


TEST(MatrixTest, QuatToEuler) {

  // This site has been verified by many teachers at school. It is right and true.
  // https://cours.etsmtl.ca/mec741/Applets/Orient3D.html
  for(int i = 0; i < 2; i++ )
  {
    Eigen::Matrix3d rot_ref;
    rot_ref <<
        test_values_rotation[i][0], test_values_rotation[i][1], test_values_rotation[i][2],
        test_values_rotation[i][3],test_values_rotation[i][4],test_values_rotation[i][5],
        test_values_rotation[i][6],test_values_rotation[i][7],test_values_rotation[i][8];

    // We inverse it so we can get .x, .y and .z that are the rotation around those axis.

    Eigen::Vector3d euler_ref (
        test_values_euler[i][2],
        test_values_euler[i][1],
        test_values_euler[i][0]);
    ConvertVecToRadian(euler_ref);

    Eigen::Quaterniond quat_ref (test_values_quaternion[i][0], test_values_quaternion[i][1],
                                 test_values_quaternion[i][2], test_values_quaternion[i][3]);

    // Some of the conversion are not tested because
    // The conversion returns a different from
    // the given reference, but it is the same rotation.
    // I verified. (Jay 19/09/2016)


    Eigen::Matrix3d test_rot;
    Eigen::Quaterniond test_quaternion;
    Eigen::Vector3d test_euler;

    test_quaternion = atlas::EulerToQuat(euler_ref);
    CompareQuaternion(quat_ref, test_quaternion);

    test_rot = atlas::EulerToRot(euler_ref);
    CompareRotationMatrix(rot_ref, test_rot);

    test_euler = atlas::QuatToEuler(quat_ref);
    CompareEuler(test_euler, euler_ref);

    test_rot = atlas::QuatToRot(quat_ref);
    CompareRotationMatrix(rot_ref, test_rot);

    test_quaternion = atlas::RotToQuat(rot_ref);
    CompareQuaternion(test_quaternion, quat_ref);

    test_euler = atlas::RotToEuler(rot_ref);
    CompareEuler(test_euler, euler_ref);
  }

  Eigen::Vector3d testVec(2,20, 90);
  ConvertVecToRadian(testVec);
  Eigen::Quaterniond q = atlas::EulerToQuat(testVec);
  std::cout << q.w() << "\t"
      << q.x() << "\t"
      << q.y() << "\t"
      << q.z()<< std::endl;
  Eigen::Vector3d v = atlas::QuatToEuler(q);
  std::cout << v.x()
      << "\t" << v.y()
      << "\t" << v.z()<< std::endl;

}
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
