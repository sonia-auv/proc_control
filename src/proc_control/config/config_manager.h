/**
 * \file	config_manager.h
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

#ifndef PROC_CONTROL_CONFIG_MANAGER_H
#define PROC_CONTROL_CONFIG_MANAGER_H


#include <string>
#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>
#include <yaml-cpp/yaml.h>


template <class T>
class ConfigManager {
 protected:
  //==========================================================================
  // P R O T E C T E D   C / D T O R S
  ConfigManager(const std::string &manager_name)
      : manager_name_(manager_name),
        server_(ros::NodeHandle(std::string("~/") + manager_name)),
        current_config_()
  { }

  //==========================================================================
  // P R O T E C T E D   M E T H O D S

  void Init();
  // Update the specific variables with the provided configuration
  virtual void OnDynamicReconfigureChange(const T &config) = 0;
  // Save the specific variables to the config to the file.
  virtual void WriteConfigFile(const T &config) = 0;
  // Read the specific variables from the file and fills config.
  virtual void ReadConfigFile(T &config) = 0;

  std::string GetManagerName();

 private:
  //==========================================================================
  // P R I V A T E   M E T H O D S

  void CallBackDynamicReconfigure(T &config, uint32_t level);

  //==========================================================================
  // P R I V A T E   M E M B E R S

  std::string manager_name_;
  dynamic_reconfigure::Server<T> server_;
  T current_config_;
  bool is_initing_;
};

template <class T>
inline std::string ConfigManager<T>::GetManagerName()
{
  return manager_name_;
}

template <class T>
inline void ConfigManager<T>::CallBackDynamicReconfigure(T &config, uint32_t level)
{
  // Prevent warning;
  (void)level;
  if( !is_initing_ )
  {
    // Save new config
    current_config_ = config;
    // Calls the manager so it update itself
    OnDynamicReconfigureChange(current_config_);
    // Save the configuration to file.
    WriteConfigFile(current_config_);
  }else
  {
    config = current_config_;
  }
}


template <class T>
inline void ConfigManager<T>::Init()
{
  is_initing_ = true;
  // Load the configuration from file.
  ReadConfigFile(current_config_);

  // The original configuration as default.
  server_.setConfigDefault(current_config_);

  // Set the callback.
  server_.setCallback(boost::bind(&ConfigManager<T>::CallBackDynamicReconfigure, this, _1, _2));

  is_initing_ = false;

  // This makes sure the node has the good configuration.
  CallBackDynamicReconfigure(current_config_, 0);
}

#endif //PROC_CONTROL_CONFIG_MANAGER_H
