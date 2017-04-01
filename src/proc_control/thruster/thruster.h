//
// Created by jeremie on 10/17/16.
//

#ifndef PROC_CONTROL_THRUSTER_H
#define PROC_CONTROL_THRUSTER_H


#include <array>
#include <ros/ros.h>
#include <proc_control/ThrusterEffort.h>

class Thruster {
  public:
  static std::array<double,101> POSITIVE_LINEAR_LUT;

  Thruster(const uint8_t &id) : linear_effort_({0.0}), rotationnal_effort_({0.0}), id_(id)
  {
    ros::NodeHandle n;
    publisher_ = n.advertise<proc_control::ThrusterEffort>("/proc_control/thruster_effort", 100);
  };

  void Publish(uint8_t ID, int16_t thrust_value);

  void SetFrom6AxisArray(const std::array<double, 6> &array_axis);
  std::array<double, 3> GetLinearEffort() const ;
  std::array<double, 3> GetRotationnalEffort() const ;

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
  //TODO: Send thrust_value through RS485
  proc_control::ThrusterEffort msg;
  msg.ID = ID;
  msg.effort = thrust_value;

  publisher_.publish(msg);
//  msg.device_id = msg.DEVICE_ID_actuators;
//  msg.unique_id = can_id_;
//  msg.method_number = msg.METHOD_MOTOR_set_speed;
//  msg.parameter_value = POSITIVE_LINEAR_LUT[std::min(abs(thrust_value), 100)];
//  if( thrust_value < 0)
//    msg.parameter_value *= -1;
//  publisher_.publish(msg);

//  sonia_msgs::SendCanMessageRequest rq;
//  sonia_msgs::SendCanMessageResponse response;
//  rq.device_id = rq.DEVICE_ID_actuators;
//  rq.unique_id = can_id_;
//  rq.method_number = rq.METHOD_MOTOR_set_speed;
//  rq.parameter_value = POSITIVE_LINEAR_LUT[std::min(abs(thrust_value), 100)];
//  if( thrust_value < 0)
//    rq.parameter_value *= -1;
//  client_.call(rq, response);
  //std::cout << id_ << " set at : " << rq.parameter_value << std::endl;
  // Do nothing with response
}

#endif //PROC_CONTROL_THRUSTER_H
