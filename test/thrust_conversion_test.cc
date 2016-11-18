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
#include <ros/ros.h>
#include "proc_control/thruster/thruster_manager.h"

char **argv_g;
int argc_g ;

TEST(ThrustConversion, thrust) {

  ros::init(argc_g , argv_g , "proc_control");

  ThrusterManager mng;


  std::array<double, 6>
      in1 = {12.4988,0,-13.024,0,0,0}, out1 = {6.8743,6.249,0,0,-6.5,-6.5},
  in2 = {100,5,-13,0,0,0}, out2 = {55,50,0,0,-6.5,-6.5},
  in3 = {100,-100,-13,0,0,100}, out3 = {55,50,0,90,-6.5,-6.5},
  in4 = {-25,43,-103,0,0,52.5}, out4 = {15.12,-38.75,-14.12,-11.56,-43,-43},
  in5 = {0.43,100,32.43,0,0,-96.57}, out5 = {0.21,0.21, 53.45,-43.45, 16.21,16.21};

  std::vector<std::array<double, 6>> ins {in1, in2, in3, in4, in5}, outs {out1, out2, out3, out4, out5};
  for( size_t i = 0; i < ins.size(); i++)
  {
    std::array<double,3> in_lin, in_rot;
    std::array<double, 6> out;
    in_lin = {ins[i][0], ins[i][1], ins[i][2]};
    in_rot = {ins[i][3], ins[i][4], ins[i][5]};
    out = mng.Commit(in_lin, in_rot);

    std::cout << out[0] <<"\t" << out[1]<<"\t"  << out[2]<<"\t" << out[3]<<"\t" << out[4]<<"\t" << out[5] << std::endl;
    std::cout << outs[i][0]<<"\t"  << outs[i][1] <<"\t" << outs[i][2]<<"\t" << outs[i][3]<<"\t" << outs[i][4]<<"\t" << outs[i][5] << std::endl;

    double mse = 0;
    for( int j = 0; j < 6; j++)
    {
      mse += pow((out[j] - outs[i][j]),2);
    }
    std::cout << std::sqrt(mse) << std::endl;

    for( int j = 0;j < 6; j++)
    {
      int val = int(fabs(out[j]));
      std::cout << Thruster::POSITIVE_LINEAR_LUT[val] << "\t";
    }
    std::cout << std::endl << std::endl;

  }
  //ros::spin();
  std::cout << "DOnE" << std::endl;

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  argc_g = argc;
  argv_g = argv;
  return RUN_ALL_TESTS();
}
