/**
 * \file	thruster_manager.cc
 * \author	Jeremie St-Jules <jeremie.st.jules.prevost@gmail.com>
 * \coauthor Francis Masse <francis.masse05@gmail.com>
 * \date	10/17/16
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. AUV All rights reserved.
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

#include <fstream>
#include "thruster_manager.h"

namespace proc_control {

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
ThrusterManager::ThrusterManager() : ConfigManager("Thruster") {
  // Add all the thrusters
  thruster_list_.push_back(Thruster(1));
  thruster_list_.push_back(Thruster(2));
  thruster_list_.push_back(Thruster(3));
  thruster_list_.push_back(Thruster(4));
  thruster_list_.push_back(Thruster(5));
  thruster_list_.push_back(Thruster(6));
  thruster_list_.push_back(Thruster(7));
  thruster_list_.push_back(Thruster(8));

  ThrusterManager::SetEnable(1);

  Init();
}

//------------------------------------------------------------------------------
//
ThrusterManager::~ThrusterManager() {}

//==============================================================================
// C O N F I G M A N A G E R   M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void ThrusterManager::OnDynamicReconfigureChange(const proc_control::ThrusterConfig &config) {
  std::cout << "Update on thruster configuration" << std::endl;
  for (auto &t : thruster_list_) {
    if (t.GetID() == t.GetIDFromName("T1")) {
      t.SetFrom6AxisArray(
          {config.T1_X, config.T1_Y, config.T1_Z,
           config.T1_PITCH, config.T1_ROLL, config.T1_YAW});
    } else if (t.GetID() == t.GetIDFromName("T2")) {
      t.SetFrom6AxisArray(
          {config.T2_X, config.T2_Y, config.T2_Z,
           config.T2_PITCH, config.T2_ROLL, config.T2_YAW});
    } else if (t.GetID() == t.GetIDFromName("T3")) {
      t.SetFrom6AxisArray(
          {config.T3_X, config.T3_Y, config.T3_Z,
           config.T3_PITCH, config.T3_ROLL, config.T3_YAW});
    } else if (t.GetID() == t.GetIDFromName("T4")) {
      t.SetFrom6AxisArray(
          {config.T4_X, config.T4_Y, config.T4_Z,
           config.T4_PITCH, config.T4_ROLL, config.T4_YAW});
    } else if (t.GetID() == t.GetIDFromName("T5")) {
      t.SetFrom6AxisArray(
          {config.T5_X, config.T5_Y, config.T5_Z,
           config.T5_PITCH, config.T5_ROLL, config.T5_YAW});
    } else if (t.GetID() == t.GetIDFromName("T6")) {
      t.SetFrom6AxisArray(
          {config.T6_X, config.T6_Y, config.T6_Z,
           config.T6_PITCH, config.T6_ROLL, config.T6_YAW});
    } else if (t.GetID() == t.GetIDFromName("T7")) {
      t.SetFrom6AxisArray(
          {config.T7_X, config.T7_Y, config.T7_Z,
           config.T7_PITCH, config.T7_ROLL, config.T7_YAW});
    } else if (t.GetID() == t.GetIDFromName("T8")) {
      t.SetFrom6AxisArray(
          {config.T8_X, config.T8_Y, config.T8_Z,
           config.T8_PITCH, config.T8_ROLL, config.T8_YAW});
    }
  }
}

//-----------------------------------------------------------------------------
//
void ThrusterManager::WriteConfigFile(const proc_control::ThrusterConfig &config) {
  return;
  YAML::Emitter out;
  out << YAML::BeginMap;
  for (size_t i = 0; i < thruster_list_.size(); i++) {
    WriteEfforts(i, out);
  }

  out << YAML::EndMap;
  std::ofstream fout(file_path_);
  fout << out.c_str();
}

//-----------------------------------------------------------------------------
//
void ThrusterManager::ReadConfigFile(proc_control::ThrusterConfig &config) {
  YAML::Node node = YAML::LoadFile(file_path_);

  ReadEfforts("T1", node);
  ReadEfforts("T2", node);
  ReadEfforts("T3", node);
  ReadEfforts("T4", node);
  ReadEfforts("T5", node);
  ReadEfforts("T6", node);
  ReadEfforts("T7", node);
  ReadEfforts("T8", node);

  for (const auto &t : thruster_list_) {
    if (t.GetID() == t.GetIDFromName("T1")) {
      config.T1_X = t.GetLinearEffort()[0];
      config.T1_Y = t.GetLinearEffort()[1];
      config.T1_Z = t.GetLinearEffort()[2];
      config.T1_PITCH = t.GetRotationnalEffort()[0];
      config.T1_ROLL = t.GetRotationnalEffort()[1];
      config.T1_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T2")) {
      config.T2_X = t.GetLinearEffort()[0];
      config.T2_Y = t.GetLinearEffort()[1];
      config.T2_Z = t.GetLinearEffort()[2];
      config.T2_PITCH = t.GetRotationnalEffort()[0];
      config.T2_ROLL = t.GetRotationnalEffort()[1];
      config.T2_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T3")) {
      config.T3_X = t.GetLinearEffort()[0];
      config.T3_Y = t.GetLinearEffort()[1];
      config.T3_Z = t.GetLinearEffort()[2];
      config.T3_PITCH = t.GetRotationnalEffort()[0];
      config.T3_ROLL = t.GetRotationnalEffort()[1];
      config.T3_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T4")) {
      config.T4_X = t.GetLinearEffort()[0];
      config.T4_Y = t.GetLinearEffort()[1];
      config.T4_Z = t.GetLinearEffort()[2];
      config.T4_PITCH = t.GetRotationnalEffort()[0];
      config.T4_ROLL = t.GetRotationnalEffort()[1];
      config.T4_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T5")) {
      config.T5_X = t.GetLinearEffort()[0];
      config.T5_Y = t.GetLinearEffort()[1];
      config.T5_Z = t.GetLinearEffort()[2];
      config.T5_PITCH = t.GetRotationnalEffort()[0];
      config.T5_ROLL = t.GetRotationnalEffort()[1];
      config.T5_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T6")) {
      config.T6_X = t.GetLinearEffort()[0];
      config.T6_Y = t.GetLinearEffort()[1];
      config.T6_Z = t.GetLinearEffort()[2];
      config.T6_PITCH = t.GetRotationnalEffort()[0];
      config.T6_ROLL = t.GetRotationnalEffort()[1];
      config.T6_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T7")) {
      config.T7_X = t.GetLinearEffort()[0];
      config.T7_Y = t.GetLinearEffort()[1];
      config.T7_Z = t.GetLinearEffort()[2];
      config.T7_PITCH = t.GetRotationnalEffort()[0];
      config.T7_ROLL = t.GetRotationnalEffort()[1];
      config.T7_YAW = t.GetRotationnalEffort()[2];
    } else if (t.GetID() == t.GetIDFromName("T8")) {
      config.T8_X = t.GetLinearEffort()[0];
      config.T8_Y = t.GetLinearEffort()[1];
      config.T8_Z = t.GetLinearEffort()[2];
      config.T8_PITCH = t.GetRotationnalEffort()[0];
      config.T8_ROLL = t.GetRotationnalEffort()[1];
      config.T8_YAW = t.GetRotationnalEffort()[2];
    }
  }
}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
void ThrusterManager::SetEnable(bool isEnable) {

  for (auto &thruster : thruster_list_) {
    thruster.SetEnable(isEnable);
  }
}

//-----------------------------------------------------------------------------
//
std::array<double, 8> ThrusterManager::Commit(std::array<double, 3> &linear_target,
                                              std::array<double, 3> &rotational_target) {
  std::array<double, 8> thrust_vec = {0};
  int i = 0;
  for (auto &t : thruster_list_) {
    double target = 0;
    std::array<double, 3> thruster_effort_lin = t.GetLinearEffort();
    std::array<double, 3> thruster_effort_rot = t.GetRotationnalEffort();

    for (int i = 0; i < 3; i++) {
      target += linear_target[i] * thruster_effort_lin[i];
      target += rotational_target[i] * thruster_effort_rot[i];
    }
    t.Publish(t.GetID(), (int16_t)target);
    thrust_vec[i] = target;
    i++;
  }
  return thrust_vec;
}

//-----------------------------------------------------------------------------
//
void ThrusterManager::WriteEfforts(size_t thruster_index, YAML::Emitter &out) {
//  out << YAML::Key << thruster_list_[thruster_index].GetID();
//  out << YAML::Value;
//  out << YAML::Flow;
//  std::array<double, 3> lin_array  = thruster_list_[thruster_index].GetLinearEffort();
//  std::array<double, 3> rot_array  = thruster_list_[thruster_index].GetRotationnalEffort();
//  std::vector<double> tot_vec = {lin_array[0], lin_array[1],lin_array[2],rot_array[3],rot_array[4],rot_array[5]};
//  out << tot_vec;
}

//-----------------------------------------------------------------------------
//
void ThrusterManager::ReadEfforts(const std::string &thruster_name, YAML::Node &node) {
  if (node[thruster_name]) {
    auto thruster = node[thruster_name];
    assert(thruster.Type() == YAML::NodeType::Sequence);
    std::array<double, 6> force_array = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    for (size_t i = 0, size = force_array.size(); i < size; i++) {
      force_array[i] = thruster[i].as<double>();
    }
    for (auto &t : thruster_list_) {
      if (t.GetID() == t.GetIDFromName(thruster_name))
        t.SetFrom6AxisArray(force_array);
    }

  }
}

} // namespace proc_control