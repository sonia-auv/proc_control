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


#endif //PROC_CONTROL_PROPERTY_H
