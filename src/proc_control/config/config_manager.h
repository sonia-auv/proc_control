//
// Created by jeremie on 9/28/16.
//

#ifndef PROC_CONTROL_CONFIG_MANAGER_H
#define PROC_CONTROL_CONFIG_MANAGER_H


#include <string>
#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>
#include <yaml-cpp/yaml.h>


template <class T>
class ConfigManager {

  protected:
  ConfigManager(const std::string &manager_name)
      : manager_name_(manager_name),
        server_(ros::NodeHandle(std::string("~/") + manager_name)),
        current_config_()
  {
  }

  void Init();
  // Update the specific variables with the provided configuration
  virtual void OnDynamicReconfigureChange(const T &config) = 0;
  // Save the specific variables to the config to the file.
  virtual void WriteConfigFile(const T &config) = 0;
  // Read the specific variables from the file and fills config.
  virtual void ReadConfigFile(T &config) = 0;

  // Returns manager's name and and configuration path..
  std::string GetManagerName();

  private:
  // Function called when a configuration is changed.
  void CallBackDynamicReconfigure(T &config, uint32_t level);

  private:

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
