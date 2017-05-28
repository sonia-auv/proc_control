/**
 * \file	PID_Values.h
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

#ifndef PROC_CONTROL_PID_VALUES_H
#define PROC_CONTROL_PID_VALUES_H

#include <string>
#include <map>
#include <vector>

class PIDValues
{
 public:
  //==========================================================================
  // P U B L I C   C / D T O R S

  PIDValues(const std::string &name):Name(name),
                                      P(0), I(0), D(0),
                                      I_Limit(0),
                                      Min_Actuation(0), Max_Actuation(0){}

  //==========================================================================
  // P U B L I C   M E T H O D S

  std::map<std::string, double&> ToMap();

  //==========================================================================
  // P U B L I C   M E M B E R S

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
