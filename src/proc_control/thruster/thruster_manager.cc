//
// Created by jeremie on 10/17/16.
//

#include <fstream>
#include "thruster_manager.h"

ThrusterManager::ThrusterManager()
    : ConfigManager("Thruster")
{
  // Add all the thrusters
  thruster_list_.push_back(Thruster("T1"));
  thruster_list_.push_back(Thruster("T2"));
  thruster_list_.push_back(Thruster("T3"));
  thruster_list_.push_back(Thruster("T4"));
  thruster_list_.push_back(Thruster("T5"));
  thruster_list_.push_back(Thruster("T6"));

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
    if (t.GetID() == "T1") {
      t.SetFrom6AxisArray(
          {config.T1_X, config.T1_Y, config.T1_Z,
           config.T1_PITCH, config.T1_ROLL, config.T1_YAW});
    } else if (t.GetID() == "T2") {
      t.SetFrom6AxisArray(
          {config.T2_X, config.T2_Y, config.T2_Z,
           config.T2_PITCH, config.T2_ROLL, config.T2_YAW});
    } else if (t.GetID() == "T3") {
      t.SetFrom6AxisArray(
          {config.T3_X, config.T3_Y, config.T3_Z,
           config.T3_PITCH,config.T3_ROLL, config.T3_YAW});
    } else if (t.GetID() == "T4") {
      t.SetFrom6AxisArray(
          {config.T4_X, config.T4_Y, config.T4_Z,
           config.T4_PITCH, config.T4_ROLL, config.T4_YAW});
    } else if (t.GetID() == "T5") {
      t.SetFrom6AxisArray(
          {config.T5_X, config.T5_Y, config.T5_Z,
           config.T5_PITCH, config.T5_ROLL, config.T5_YAW});
    } else if (t.GetID() == "T6") {
      t.SetFrom6AxisArray(
          {config.T6_X, config.T6_Y, config.T6_Z,
           config.T6_PITCH, config.T6_ROLL, config.T6_YAW});
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

  ReadEfforts("T1", node);
  ReadEfforts("T2", node);
  ReadEfforts("T3", node);
  ReadEfforts("T4", node);
  ReadEfforts("T5", node);
  ReadEfforts("T6", node);

  for(const auto &t : thruster_list_)
  {
    if( t.GetID() == "T1"){
      config.T1_X = t.GetLinearEffort()[0];
      config.T1_Y = t.GetLinearEffort()[1];
      config.T1_Z = t.GetLinearEffort()[2];
      config.T1_PITCH = t.GetRotationnalEffort()[0];
      config.T1_ROLL = t.GetRotationnalEffort()[1];
      config.T1_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "T2"){
      config.T2_X = t.GetLinearEffort()[0];
      config.T2_Y = t.GetLinearEffort()[1];
      config.T2_Z = t.GetLinearEffort()[2];
      config.T2_PITCH = t.GetRotationnalEffort()[0];
      config.T2_ROLL = t.GetRotationnalEffort()[1];
      config.T2_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "T3"){
      config.T3_X = t.GetLinearEffort()[0];
      config.T3_Y = t.GetLinearEffort()[1];
      config.T3_Z = t.GetLinearEffort()[2];
      config.T3_PITCH = t.GetRotationnalEffort()[0];
      config.T3_ROLL = t.GetRotationnalEffort()[1];
      config.T3_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "T4"){
      config.T4_X = t.GetLinearEffort()[0];
      config.T4_Y = t.GetLinearEffort()[1];
      config.T4_Z = t.GetLinearEffort()[2];
      config.T4_PITCH = t.GetRotationnalEffort()[0];
      config.T4_ROLL = t.GetRotationnalEffort()[1];
      config.T4_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "T5"){
      config.T5_X = t.GetLinearEffort()[0];
      config.T5_Y = t.GetLinearEffort()[1];
      config.T5_Z = t.GetLinearEffort()[2];
      config.T5_PITCH = t.GetRotationnalEffort()[0];
      config.T5_ROLL = t.GetRotationnalEffort()[1];
      config.T5_YAW = t.GetRotationnalEffort()[2];
    }
    else if( t.GetID() == "T6"){
      config.T6_X = t.GetLinearEffort()[0];
      config.T6_Y = t.GetLinearEffort()[1];
      config.T6_Z = t.GetLinearEffort()[2];
      config.T6_PITCH = t.GetRotationnalEffort()[0];
      config.T6_ROLL = t.GetRotationnalEffort()[1];
      config.T6_YAW = t.GetRotationnalEffort()[2];
    }

  }
}
