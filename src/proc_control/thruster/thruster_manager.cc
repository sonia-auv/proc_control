//
// Created by jeremie on 10/17/16.
//

#include <fstream>
#include "thruster_manager.h"

ThrusterManager::ThrusterManager()
    : ConfigManager("Thruster")
{
  // Add all the thrusters
  thruster_list_.push_back(Thruster("port"));
  thruster_list_.push_back(Thruster("starboard"));
  thruster_list_.push_back(Thruster("front_heading"));
  thruster_list_.push_back(Thruster("back_heading"));
  thruster_list_.push_back(Thruster("front_depth"));
  thruster_list_.push_back(Thruster("back_depth"));

  Init();


}

std::array<double, 6>
ThrusterManager::Commit(std::array<double, 3> &linear_target, std::array<double, 3> &rotational_target)
{
  // legacy code...
  const double POWER_LIMIT_BEFORE_LUT = 43.0f;
  for (const auto &t  : thruster_list_) {
    std::array<double,3> thruster_effort_lin = t.GetLinearEffort();
    std::array<double,3> thruster_effort_rot = t.GetRotationnalEffort();
    // 2014-10-31 KC Change to limit Thruster effort earlier in the
    // process to 24 (55% from lookup table)
    double pretendedLinearEffortYTarget = linear_target[1] * thruster_effort_lin[1];
    double pretendedLinearEffortXTarget = linear_target[0] * thruster_effort_lin[0];
    double pretendedLinearEffortZTarget = linear_target[2]* thruster_effort_lin[2];
    // -
    double pretendedRotationEffortZTargetY = rotational_target[2] * thruster_effort_rot[1];
    double pretendedRotationEffortZTargetX = rotational_target[2] * thruster_effort_rot[0];
    double pretendedRotationEffortYTarget = rotational_target[1] * thruster_effort_rot[2];
    if(pretendedLinearEffortYTarget < pretendedLinearEffortXTarget * 1.2){
      // -
      // We put a higher priority on rotation, since we should attain
      // this
      // goal faster.
      if ((std::abs(pretendedLinearEffortYTarget)
           + std::abs(pretendedRotationEffortZTargetY)) > POWER_LIMIT_BEFORE_LUT) {
        // Setting the Y linear effort to what is left after rotational effort
        if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetY)) <= 0){
          linear_target[1] = 0;
          //-
        }
        else{
          linear_target[1] = atlas::signum(linear_target[1])
                             * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetY)) / std::abs(thruster_effort_lin[1]));
        }
      }
    }
    else{
      // -
      // We put a higher priority on rotation, since we should attain
      // this
      // goal faster.
      if ((std::abs(pretendedLinearEffortXTarget)
           + std::abs(pretendedRotationEffortZTargetX)) > POWER_LIMIT_BEFORE_LUT) {
        // Setting the Y linear effort to what is left after rotational effort
        if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetX)) <= 0){
          linear_target[0] = (0);
          //-
        }
        else{
          linear_target[0] = (atlas::signum(linear_target[0])
                              * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetX)) / std::abs(thruster_effort_lin[0])));
        }
      }

    }
    // We put a higher priority on rotation, since we should attain
    // this
    // goal faster.
    if ((std::abs(pretendedLinearEffortZTarget)
         + std::abs(pretendedRotationEffortYTarget)) > POWER_LIMIT_BEFORE_LUT) {
      // Setting the Z linear effort to what is left after rotational effort
      if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortYTarget)) <= 0){
        linear_target[3] = (0);

      }
      else{
        linear_target[3] = (atlas::signum(linear_target[2])
                            * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortYTarget)) / std::abs(thruster_effort_lin[2])));

      }
    }

  }
  //-
  std::array<double, 6> thrust_vec = {0};
  int i = 0;
  for (auto &t : thruster_list_) {
    double target = 0;
    std::array<double,3> thruster_effort_lin = t.GetLinearEffort();
    std::array<double,3> thruster_effort_rot = t.GetRotationnalEffort();
    //-
    for( int i = 0; i < 3; i ++)
    {
      target += linear_target[i] * thruster_effort_lin[i];
      target += rotational_target[i] * thruster_effort_rot[i];
    }
    t.Publish((int)target);
    thrust_vec[i] = target;
    i++;
  }
  return thrust_vec;
}


void ThrusterManager::OnDynamicReconfigureChange(const proc_control::ThrusterConfig &config ) {
  std::cout << "Update on thruster configuration" << std::endl;
  for (auto &t : thruster_list_) {
    if (t.GetID() == "port") {
      t.SetFrom6AxisArray(
          {config.Port_X, config.Port_Y, config.Port_Z,
           config.Port_PITCH, config.Port_ROLL, config.Port_YAW});
    } else if (t.GetID() == "starboard") {
      t.SetFrom6AxisArray(
          {config.Starboard_X, config.Starboard_Y, config.Starboard_Z,
           config.Starboard_PITCH, config.Starboard_ROLL, config.Starboard_YAW});
    } else if (t.GetID() == "back_heading") {
      t.SetFrom6AxisArray(
          {config.Back_Heading_X, config.Back_Heading_Y, config.Back_Heading_Z,
           config.Back_Heading_PITCH,config.Back_Heading_ROLL, config.Back_Heading_YAW});
    } else if (t.GetID() == "front_heading") {
      t.SetFrom6AxisArray(
          {config.Front_Heading_X, config.Front_Heading_Y, config.Front_Heading_Z,
           config.Front_Heading_PITCH, config.Front_Heading_ROLL, config.Front_Heading_YAW});
    } else if (t.GetID() == "front_depth") {
      t.SetFrom6AxisArray(
          {config.Front_Depth_X, config.Front_Depth_Y, config.Front_Depth_Z,
           config.Front_Depth_PITCH, config.Front_Depth_ROLL, config.Front_Depth_YAW});
    } else if (t.GetID() == "back_depth") {
      t.SetFrom6AxisArray(
          {config.Back_Depth_X, config.Back_Depth_Y, config.Back_Depth_Z,
           config.Back_Depth_PITCH, config.Back_Depth_ROLL, config.Back_Depth_YAW});
    }
  }
}

void ThrusterManager::WriteConfigFile(const proc_control::ThrusterConfig &config)
{
  return;
  YAML::Emitter out;
  out << YAML::BeginMap;
  for(size_t i = 0; i < thruster_list_.size(); i++)
  {
    WriteEfforts(i, out);
  }

  out << YAML::EndMap;
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

void ThrusterManager::ReadConfigFile(proc_control::ThrusterConfig &config)
{
  YAML::Node node = YAML::LoadFile(file_path_);

  ReadEfforts("port", node);
  ReadEfforts("starboard", node);
  ReadEfforts("front_depth", node);
  ReadEfforts("back_depth", node);
  ReadEfforts("front_heading", node);
  ReadEfforts("back_heading", node);

  for(const auto &t : thruster_list_)
  {
    if( t.GetID() == "port"){
      config.Port_X = t.GetLinearEffort()[0];
      config.Port_Y = t.GetLinearEffort()[1];
      config.Port_Z = t.GetLinearEffort()[2];
      config.Port_PITCH = t.GetRotationnalEffort()[0];
      config.Port_ROLL = t.GetRotationnalEffort()[1];
      config.Port_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "starboard"){
      config.Starboard_X = t.GetLinearEffort()[0];
      config.Starboard_Y = t.GetLinearEffort()[1];
      config.Starboard_Z = t.GetLinearEffort()[2];
      config.Starboard_PITCH = t.GetRotationnalEffort()[0];
      config.Starboard_ROLL = t.GetRotationnalEffort()[1];
      config.Starboard_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "front_heading"){
      config.Front_Heading_X = t.GetLinearEffort()[0];
      config.Front_Heading_Y = t.GetLinearEffort()[1];
      config.Front_Heading_Z = t.GetLinearEffort()[2];
      config.Front_Heading_PITCH = t.GetRotationnalEffort()[0];
      config.Front_Heading_ROLL = t.GetRotationnalEffort()[1];
      config.Front_Heading_YAW = t.GetRotationnalEffort()[2];

    }
    else if( t.GetID() == "back_heading"){
      config.Back_Heading_X = t.GetLinearEffort()[0];
      config.Back_Heading_Y = t.GetLinearEffort()[1];
      config.Back_Heading_Z = t.GetLinearEffort()[2];
      config.Back_Heading_PITCH = t.GetRotationnalEffort()[0];
      config.Back_Heading_ROLL = t.GetRotationnalEffort()[1];
      config.Back_Heading_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "front_depth"){
      config.Front_Depth_X = t.GetLinearEffort()[0];
      config.Front_Depth_Y = t.GetLinearEffort()[1];
      config.Front_Depth_Z = t.GetLinearEffort()[2];
      config.Front_Depth_PITCH = t.GetRotationnalEffort()[0];
      config.Front_Depth_ROLL = t.GetRotationnalEffort()[1];
      config.Front_Depth_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "back_depth"){
      config.Back_Depth_X = t.GetLinearEffort()[0];
      config.Back_Depth_Y = t.GetLinearEffort()[1];
      config.Back_Depth_Z = t.GetLinearEffort()[2];
      config.Back_Depth_PITCH = t.GetRotationnalEffort()[0];
      config.Back_Depth_ROLL = t.GetRotationnalEffort()[1];
      config.Back_Depth_YAW = t.GetRotationnalEffort()[2];
    }

  }


}
