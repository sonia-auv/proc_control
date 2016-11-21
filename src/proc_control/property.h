//
// Created by jeremie on 9/28/16.
//

#ifndef PROC_CONTROL_PROPERTY_H
#define PROC_CONTROL_PROPERTY_H

#include <lib_atlas/config.h>
#include <string>

const std::string kNodeName = "/proc_control/";

const std::string kProjectPath =
    atlas::kWorkspaceRoot + "/src" + kNodeName;

const std::string kConfigPath = kProjectPath + "config/";

const std::string kConfigExt = ".yaml";

const size_t X = 0;
const size_t Y = 1;
const size_t Z = 2;
const size_t ROLL = 3;
const size_t PITCH = 4;
const size_t YAW = 5;

#endif //PROC_CONTROL_PROPERTY_H
