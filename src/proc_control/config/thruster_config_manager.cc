//
// Created by jeremie on 9/23/16.
//

#include <fstream>
#include "proc_control/config/thruster_config_manager.h"
#include "thruster_config_manager.h"

ThrusterConfigManager::ThrusterConfigManager()
    : ConfigManager("Thruster")
{
  Init();
  Notify();
}

void ThrusterConfigManager::UpdateFromConfig(const proc_control::ThrusterConfig &config )
{
  thruster_list_["port"] = {config.Port_X, config.Port_Y, config.Port_Z, config.Port_PITCH, config.Port_ROLL, config.Port_YAW};
  thruster_list_["starboard"]  = {config.Starboard_X, config.Starboard_Y, config.Starboard_Z, config.Starboard_PITCH, config.Starboard_ROLL, config.Starboard_YAW};
  thruster_list_["front_depth"] = {config.Front_Depth_X, config.Front_Depth_Y, config.Front_Depth_Z, config.Front_Depth_PITCH, config.Front_Depth_ROLL, config.Front_Depth_YAW};
  thruster_list_["back_depth"]  = {config.Back_Depth_X, config.Back_Depth_Y, config.Back_Depth_Z, config.Back_Depth_PITCH, config.Back_Depth_ROLL, config.Back_Depth_YAW};
  thruster_list_["front_heading"]  = {config.Front_Heading_X, config.Front_Heading_Y, config.Front_Heading_Z, config.Front_Heading_PITCH, config.Front_Heading_ROLL, config.Front_Heading_YAW};
  thruster_list_["back_heading"]  = {config.Back_Heading_X, config.Back_Heading_Y, config.Back_Heading_Z, config.Back_Heading_PITCH, config.Back_Heading_ROLL, config.Back_Heading_YAW};
}

void ThrusterConfigManager::WriteConfig( const proc_control::ThrusterConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  for(auto & thruster : thruster_list_)
  {
    WriteEfforts(thruster.first, out);
  }

  out << YAML::EndMap;
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void ThrusterConfigManager::ReadConfig( proc_control::ThrusterConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  ReadEfforts("port", node);
  ReadEfforts("starboard", node);
  ReadEfforts("front_depth", node);
  ReadEfforts("back_depth", node);
  ReadEfforts("front_heading", node);
  ReadEfforts("back_heading", node);

  config.Port_X = thruster_list_["port"][0];
  config.Port_Y = thruster_list_["port"][1];
  config.Port_Z = thruster_list_["port"][2];
  config.Port_PITCH = thruster_list_["port"][3];
  config.Port_ROLL = thruster_list_["port"][4];
  config.Port_YAW = thruster_list_["port"][5];

  config.Starboard_X = thruster_list_["starboard"][0];
  config.Starboard_Y = thruster_list_["starboard"][1];
  config.Starboard_Z = thruster_list_["starboard"][2];
  config.Starboard_PITCH = thruster_list_["starboard"][3];
  config.Starboard_ROLL = thruster_list_["starboard"][4];
  config.Starboard_YAW = thruster_list_["starboard"][5];

  config.Front_Depth_X = thruster_list_["front_depth"][0];
  config.Front_Depth_Y = thruster_list_["front_depth"][1];
  config.Front_Depth_Z = thruster_list_["front_depth"][2];
  config.Front_Depth_PITCH = thruster_list_["front_depth"][3];
  config.Front_Depth_ROLL = thruster_list_["front_depth"][4];
  config.Front_Depth_YAW = thruster_list_["front_depth"][5];

  config.Back_Depth_X = thruster_list_["back_depth"][0];
  config.Back_Depth_Y = thruster_list_["back_depth"][1];
  config.Back_Depth_Z = thruster_list_["back_depth"][2];
  config.Back_Depth_PITCH = thruster_list_["back_depth"][3];
  config.Back_Depth_ROLL = thruster_list_["back_depth"][4];
  config.Back_Depth_YAW = thruster_list_["back_depth"][5];

  config.Front_Heading_X = thruster_list_["front_heading"][0];
  config.Front_Heading_Y = thruster_list_["front_heading"][1];
  config.Front_Heading_Z = thruster_list_["front_heading"][2];
  config.Front_Heading_PITCH = thruster_list_["front_heading"][3];
  config.Front_Heading_ROLL = thruster_list_["front_heading"][4];
  config.Front_Heading_YAW = thruster_list_["front_heading"][5];

  config.Back_Heading_X = thruster_list_["back_heading"][0];
  config.Back_Heading_Y = thruster_list_["back_heading"][1];
  config.Back_Heading_Z = thruster_list_["back_heading"][2];
  config.Back_Heading_PITCH = thruster_list_["back_heading"][3];
  config.Back_Heading_ROLL = thruster_list_["back_heading"][4];
  config.Back_Heading_YAW = thruster_list_["back_heading"][5];

}
