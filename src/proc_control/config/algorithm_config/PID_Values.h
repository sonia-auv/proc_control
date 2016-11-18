//
// Created by jeremie on 11/16/16.
//

#ifndef PROC_CONTROL_PID_VALUES_H
#define PROC_CONTROL_PID_VALUES_H

#include <string>
#include <map>
#include <vector>

class PIDValues
{
  public:
  PIDValues(const std::string &name):Name(name),
                                      P(0), I(0), D(0),
                                      I_Limit(0),
                                      Min_Actuation(0), Max_Actuation(0){}

  std::map<std::string, double&> ToMap();
  std::string Name;
  double P, I, D, I_Limit, Min_Actuation, Max_Actuation;

};

inline std::map<std::string, double&> PIDValues::ToMap()
{
  std::map<std::string, double&> map;

  map.insert(std::pair<std::string, double&>(Name + "_P", P));
  map.insert(std::pair<std::string, double&>(Name + "_I", I));
  map.insert(std::pair<std::string, double&>(Name + "_D", D));
  map.insert(std::pair<std::string, double&>(Name + "_I_LIMIT", I_Limit));
  map.insert(std::pair<std::string, double&>(Name + "_MIN_ACTUATION", Min_Actuation));
  map.insert(std::pair<std::string, double&>(Name + "_MAX_ACTUATION", Max_Actuation));
  return map;
}

#endif //PROC_CONTROL_PID_VALUES_H
