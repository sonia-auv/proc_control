/**
 * \file	main.cc
 * \author	Jeremie St-Jules-Prevost <jeremie.st.jules.prevost@gmail.com>
 * \date	24/01/2016
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

#include <ros/ros.h>
#include "ControlSystem.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "proc_control");
  ros::NodeHandle node = ros::NodeHandle(std::string("~/proc_control"));
  ros::NodeHandlePtr ptr(&node);
  ControlSystem system1(ptr);
  ros::Rate r(14); // 10 hz
  while(ros::ok())
  {
    system1.Control();
    r.sleep();
    ros::spinOnce();
  }
  std::cout << "Proc control up and running" << std::endl;

}
