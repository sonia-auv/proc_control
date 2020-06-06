/**
 * \file     property.h
 * \author	Jeremie St-Jules-Prevost <jeremie.st.jules.prevost@gmail.com>
 * \date    2016
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. All rights reserved.
 *
 * \details This file contains all the constants properties for the proc control.
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

#ifndef PROC_CONTROL_PROPERTY_H
#define PROC_CONTROL_PROPERTY_H

#include <string>

const std::string kNodeName = "/proc_control/proc_control/";

const std::string kProjectFolderPath = std::getenv("ROS_SONIA_WS");

const std::string kProjectPath = kProjectFolderPath + "/src" + kNodeName;

const std::string kConfigPath = kProjectPath + "config/";

const std::string kConfigExt = ".yaml";

const size_t X = 0;
const size_t Y = 1;
const size_t Z = 2;
const size_t ROLL = 3;
const size_t PITCH = 4;
const size_t YAW = 5;

#endif //PROC_CONTROL_PROPERTY_H
