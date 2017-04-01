//
// Created by jeremie on 9/28/16.
//

#ifndef PROC_CONTROL_PROPERTY_H
#define PROC_CONTROL_PROPERTY_H

#include <string>

const std::string kNodeName = "/proc_control/";

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
