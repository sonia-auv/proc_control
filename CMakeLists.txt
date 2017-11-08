# \file     CMakeLists.txt
# \author   Jeremie St-Jules-Prevost <jeremie.st.jules.prevost@gmail.com>
# \date     23/09/2016
#
# \copyright Copyright (c) 2016 S.O.N.I.A. All rights reserved.
#
# \section LICENSE
#
# This file is part of S.O.N.I.A. software.
#
# S.O.N.I.A. software is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# S.O.N.I.A. software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with S.O.N.I.A. software. If not, see <http://www.gnu.org/licenses/>.

#===============================================================================
# G L O B A L   P R O J E C T   C O N F I G U R A T I O N

cmake_minimum_required(VERSION 2.8)
project(proc_control)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING
      "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
      FORCE)
endif (NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++11 -O3 -s")

set(CMAKE_MODULE_PATH "/usr/share/cmake-3.0/Modules")

set(proc_control_SRC_DIR "src")

#===============================================================================
# C A T K I N   C O N F I G U R A T I O N
find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    std_msgs
    message_generation
    geometry_msgs
    sensor_msgs
    dynamic_reconfigure
    provider_thruster
    provider_kill_mission
)

generate_dynamic_reconfigure_options(
        cfg/Thruster_reconf.cfg
        cfg/Controller_reconf.cfg
)

add_message_files(
    DIRECTORY msg
    FILES
    PositionTarget.msg
    TargetReached.msg
    ThrustLogging.msg
)

add_service_files(
     DIRECTORY srv
     FILES
     ClearWaypoint.srv
     SetPositionTarget.srv
     GetPositionTarget.srv
     EnableThrusters.srv
     EnableControl.srv
     SetBoundingBox.srv
     ResetBoundingBox.srv
)

# Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs  # Or other packages containing msgs
)

catkin_package(
    INCLUDE_DIRS ${proc_control_SRC_DIR}
    LIBRARIES
    CATKIN_DEPENDS roscpp message_runtime std_msgs provider_thruster provider_kill_mission
    dynamic_reconfigure
)

#===============================================================================
# I N C L U D E   F I L E S

file(GLOB_RECURSE proc_control_FILES
    "${proc_control_SRC_DIR}/*.cc"
    "${proc_control_SRC_DIR}/*.h")

list(REMOVE_ITEM proc_control_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/${proc_control_SRC_DIR}/${PROJECT_NAME}/main.cc)

include_directories(
    ${catkin_INCLUDE_DIRS}
    ${proc_control_SRC_DIR}
    "${proc_control_SRC_DIR}/../cfg/cpp/"
        ${Boost_INCLUDE_DIRS}
        ${provider_kill_mission_INCLUDE_DIRS}
)

#==========================================================================
# C R E A T E   E X E C U T A B L E
add_executable(${PROJECT_NAME}_node ${proc_control_SRC_DIR}/${PROJECT_NAME}/main.cc ${proc_control_FILES})
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES} ${Eigen_LIBRARIES} yaml-cpp ${Boost_LIBRARIES})
add_dependencies(${PROJECT_NAME}_node
        ${PROJECT_NAME}_generate_messages_cpp
        ${PROJECT_NAME}_gencfg)

#==========================================================================
# U N I T   T E S T S
if (${CATKIN_ENABLE_TESTING})
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
endif ()
