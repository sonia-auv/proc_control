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
}

void ThrusterConfigManager::UpdateFromConfig(const proc_control::ThrusterConfig &config )
{

  port_efforts_ = {config.Port_X, config.Port_Y, config.Port_Z, config.Port_PITCH, config.Port_ROLL, config.Port_YAW};
  starboard_efforts_ = {config.Starboard_X, config.Starboard_Y, config.Starboard_Z, config.Starboard_PITCH, config.Starboard_ROLL, config.Starboard_YAW};
  front_depth_efforts_ = {config.Front_Depth_X, config.Front_Depth_Y, config.Front_Depth_Z, config.Front_Depth_PITCH, config.Front_Depth_ROLL, config.Front_Depth_YAW};
  back_depth_efforts_ = {config.Back_Depth_X, config.Back_Depth_Y, config.Back_Depth_Z, config.Back_Depth_PITCH, config.Back_Depth_ROLL, config.Back_Depth_YAW};
  front_heading_efforts_ = {config.Front_Heading_X, config.Front_Heading_Y, config.Front_Heading_Z, config.Front_Heading_PITCH, config.Front_Heading_ROLL, config.Front_Heading_YAW};
  back_heading_efforts_ = {config.Back_Heading_X, config.Back_Heading_Y, config.Back_Heading_Z, config.Back_Heading_PITCH, config.Back_Heading_ROLL, config.Back_Heading_YAW};
}

void ThrusterConfigManager::WriteConfig( const proc_control::ThrusterConfig &config )
{
  YAML::Emitter out;
  out << YAML::BeginMap;
  WriteEfforts("port", out, port_efforts_ ) ;
  WriteEfforts("starboard", out, starboard_efforts_);
  WriteEfforts("front_depth", out, front_depth_efforts_);
  WriteEfforts("back_depth", out, back_depth_efforts_);
  WriteEfforts("front_heading", out, front_heading_efforts_);
  WriteEfforts("back_heading", out, back_heading_efforts_);

  out << YAML::EndMap;
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void ThrusterConfigManager::ReadConfig( proc_control::ThrusterConfig &config )
{
  YAML::Node node = YAML::LoadFile(file_path_);

  ReadEfforts("port", node, port_efforts_);
  ReadEfforts("starboard", node, starboard_efforts_);
  ReadEfforts("front_depth", node, front_depth_efforts_);
  ReadEfforts("back_depth", node, back_depth_efforts_);
  ReadEfforts("front_heading", node, front_heading_efforts_);
  ReadEfforts("back_heading", node, back_heading_efforts_);

  config.Port_X = port_efforts_[0];
  config.Port_Y = port_efforts_[1];
  config.Port_Z = port_efforts_[2];
  config.Port_PITCH = port_efforts_[3];
  config.Port_ROLL = port_efforts_[4];
  config.Port_YAW = port_efforts_[5];

  config.Starboard_X = starboard_efforts_[0];
  config.Starboard_Y = starboard_efforts_[1];
  config.Starboard_Z = starboard_efforts_[2];
  config.Starboard_PITCH = starboard_efforts_[3];
  config.Starboard_ROLL = starboard_efforts_[4];
  config.Starboard_YAW = starboard_efforts_[5];

  config.Front_Depth_X = front_depth_efforts_[0];
  config.Front_Depth_Y = front_depth_efforts_[1];
  config.Front_Depth_Z = front_depth_efforts_[2];
  config.Front_Depth_PITCH = front_depth_efforts_[3];
  config.Front_Depth_ROLL = front_depth_efforts_[4];
  config.Front_Depth_YAW = front_depth_efforts_[5];

  config.Back_Depth_X = back_depth_efforts_[0];
  config.Back_Depth_Y = back_depth_efforts_[1];
  config.Back_Depth_Z = back_depth_efforts_[2];
  config.Back_Depth_PITCH = back_depth_efforts_[3];
  config.Back_Depth_ROLL = back_depth_efforts_[4];
  config.Back_Depth_YAW = back_depth_efforts_[5];

  config.Front_Heading_X = front_heading_efforts_[0];
  config.Front_Heading_Y = front_heading_efforts_[1];
  config.Front_Heading_Z = front_heading_efforts_[2];
  config.Front_Heading_PITCH = front_heading_efforts_[3];
  config.Front_Heading_ROLL = front_heading_efforts_[4];
  config.Front_Heading_YAW = front_heading_efforts_[5];

  config.Back_Heading_X = back_heading_efforts_[0];
  config.Back_Heading_Y = back_heading_efforts_[1];
  config.Back_Heading_Z = back_heading_efforts_[2];
  config.Back_Heading_PITCH = back_heading_efforts_[3];
  config.Back_Heading_ROLL = back_heading_efforts_[4];
  config.Back_Heading_YAW = back_heading_efforts_[5];

}
