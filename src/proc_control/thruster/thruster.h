//
// Created by jeremie on 10/17/16.
//

#ifndef PROC_CONTROL_THRUSTER_H
#define PROC_CONTROL_THRUSTER_H


#include <array>
#include <ros/ros.h>
#include <provider_thruster/ThrusterEffort.h>

class Thruster {
  public:
  static std::array<double,101> POSITIVE_LINEAR_LUT;

  Thruster(const uint8_t &id) : linear_effort_({0.0}), rotationnal_effort_({0.0}), id_(id)
  {
    ros::NodeHandle n;
    publisher_ = n.advertise<provider_thruster::ThrusterEffort>("/provider_thruster/thruster_effort", 100);
  };

  void Publish(uint8_t ID, int16_t thrust_value);

  void SetFrom6AxisArray(const std::array<double, 6> &array_axis);
  std::array<double, 3> GetLinearEffort() const ;
  std::array<double, 3> GetRotationnalEffort() const ;

  bool IsEnable();
  void SetEnable(bool isEnable);

  uint16_t GetID() const {return id_;}

  uint16_t GetIDFromName(std::string name) const {
    if (name == "T1") {
      return 1;
    } else if (name == "T2") {
      return 2;
    } else if (name == "T3") {
      return 3;
    } else if (name == "T4") {
      return 4;
    } else if (name == "T5") {
      return 5;
    } else if (name == "T6") {
      return 6;
    } else if (name == "T7") {
      return 7;
    } else if (name == "T8") {
      return 8;
    }
    return 10;
  }

  double LinearizeForce(double force) const;

  private:
  std::array<double, 3> linear_effort_;
  std::array<double, 3> rotationnal_effort_;
  uint8_t id_;
  ros::ServiceClient client_;
  ros::Publisher publisher_;
  bool isEnable;
};

inline bool Thruster::IsEnable() {
  return isEnable;
};

inline void Thruster::SetEnable(bool isEnable) {
    this->isEnable = isEnable;
};

inline std::array<double, 3> Thruster::GetLinearEffort() const
{
  return linear_effort_;
};

inline std::array<double, 3> Thruster::GetRotationnalEffort() const
{
  return rotationnal_effort_;
};

// Using Louis-Phillippe's formula (from is PFE) we linearize the exponential response of the thruster
// by applying a inverse power fonction
// Ex if the conversion from % to total force is x^2, we apply x^1/2 so that 50 % == max force/2...
inline double Thruster::LinearizeForce(double force) const
{
  return 11.9 * std::pow(force,0.45106) + 5;
}

inline void Thruster::SetFrom6AxisArray(const std::array<double, 6> &array_axis)
{
  std::copy(array_axis.begin(), array_axis.begin() + 3, linear_effort_.begin());
  std::copy(array_axis.begin() + 3, array_axis.end(), rotationnal_effort_.begin());

  for(int i = 0; i < 3; i++)
  {
    linear_effort_[i] ;
    rotationnal_effort_[i];
  }
}

inline void Thruster::Publish(uint8_t ID, int16_t thrust_value) {
  provider_thruster::ThrusterEffort msg;
  msg.ID = ID;
  msg.effort = thrust_value;

  if (this->isEnable)
  {
      publisher_.publish(msg);
  }
}

#endif //PROC_CONTROL_THRUSTER_H
