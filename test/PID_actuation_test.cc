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
#include "proc_control/algorithm/PID6Axis_Algorithm.h"
#include <chrono>

char **argv_g;
int argc_g ;

TEST(PIDTest, first) {

  ros::init(argc_g , argv_g , "proc_control");
  ros::NodeHandle node = ros::NodeHandle(std::string("~/proc_control"));
  ros::NodeHandlePtr ptr(&node);
  PID6Axis_Algorithm algo;
  std::array<double, 6>
      out1 = {12.4988,0,13.024,0,0,0}, in1 = {0.5,0,0,0,0,0},
      out2 = {100,0,13,0,0,0}, in2 = {100,0,0,0,0,0},
      out3 = {100,-100,13,0,0,100}, in3 = {5,-6,0, 0,0,180},
      out4 = {-25,43,103,0,0,52.5}, in4 = {-1,2,2, 0,0,70},
      out5 = {0.43,100,58,0,0,-96.57}, in5 = {-0.0002328,50,1, 0,0,-125};

  std::vector<std::array<double, 6>> ins {in1, in2, in3, in4, in5}, outs {out1, out2, out3, out4, out5};
  for( size_t i = 0; i < ins.size(); i ++)
  {
    std::array<double, 6> out;
    for( int j = 0; j < 3; j++)
    {
      out = algo.CalculateActuationForError(ins[i]);
      // sleep 14 hz
      usleep(1000 *72);
    }

    std::cout << out[0] <<"\t" << out[1]<<"\t"  << out[2]<<"\t" << out[3]<<"\t" << out[4]<<"\t" << out[5] << std::endl;
    std::cout << outs[i][0]<<"\t"  << outs[i][1] <<"\t" << outs[i][2]<<"\t" << outs[i][3]<<"\t" << outs[i][4]<<"\t" << outs[i][5] << std::endl;
    double mse = 0;
    for( int j = 0; j < 6; j++)
    {
      mse += pow((out[j] - outs[i][j]),2);
    }
    std::cout << std::sqrt(mse) << std::endl<< std::endl;

  }
  std::cout << "DOnE\n" << std::endl ;

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  argc_g = argc;
  argv_g = argv;
  return RUN_ALL_TESTS();
}
