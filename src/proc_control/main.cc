/**
 * \file	main.cc
 * \author	Jeremie St-Jules-Prevost <jeremie.st.jules.prevost@gmail.com>
 * \date	24/01/2016
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. AUV software.
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

#include <ros/ros.h>
#include "proc_control_node.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "proc_control");

  ros::NodeHandlePtr nh(new ros::NodeHandle("~"));
  proc_control::ProcControlNode proc_control_node{nh};

  ros::Rate r(20); // 20 hz
  while(ros::ok())
  {
    ros::spinOnce();
    proc_control_node.Control();
    r.sleep();
  }
}
