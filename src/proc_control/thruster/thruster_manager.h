/**
 * \file	thruster_manager.h
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

#ifndef PROC_CONTROL_THRUSTERMANAGER_H
#define PROC_CONTROL_THRUSTERMANAGER_H

#include <vector>
#include <yaml-cpp/yaml.h>
#include <proc_control/property.h>
#include "proc_control/thruster/thruster.h"
#include "proc_control/Config/ConfigManager.h"
#include "proc_control/ThrusterConfig.h"
#include <eigen3/Eigen/Eigen>

namespace proc_control {

class ThrusterManager : public ConfigManager<proc_control::ThrusterConfig> {
 public:
    //==========================================================================
    // P U B L I C   C / D T O R S

    ThrusterManager();
    ~ThrusterManager();

    //==========================================================================
    // P U B L I C   O V E R R I D E D   M E T H O D S

    // ConfigManager override
    void OnDynamicReconfigureChange(const proc_control::ThrusterConfig &config) override;
    void WriteConfigFile(const proc_control::ThrusterConfig &config) override;
    void ReadConfigFile(proc_control::ThrusterConfig &config) override;

    //==========================================================================
    // P U B L I C   M E T H O D S

    void SetEnable(bool isEnable);
    void Commit(Eigen::VectorXd &actuation);

    template<typename Tp_>
    inline int signum(Tp_ val) {
      return (Tp_(0) < val) - (val < Tp_(0));
    }

 private:
    //==========================================================================
    // P R I V A T E   M E T H O D S

    void WriteEfforts(size_t thruster_index, YAML::Emitter &out);
    void ReadEfforts(const std::string &thruster_name, YAML::Node &node);
    void SetEfforts();

    //==========================================================================
    // P R I V A T E   M E M B E R S

    std::vector<proc_control::Thruster> thruster_list_;

    Eigen::VectorXd actuation_;
    Eigen::Matrix<double, 8, 1> actuation_thruster_;
    Eigen::Matrix<double, 6, 8> effort_;

    double constant_reverse_effort_;
    const std::string file_path_ = kConfigPath + "thruster" + kConfigExt;
    const std::string CONSTANT_REVERSE_EFFORT = "CONSTANT_REVERSE_EFFORT";
};

} // namespace proc_control

#endif //PROC_CONTROL_THRUSTERMANAGER_H
