#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "proc_control_node_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block proc_control_node/ROS Input/Real System/Subscribe
extern SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_proc_control_node_sensor_msgs_Imu> Sub_proc_control_node_31_5;

// For Block proc_control_node/ROS Input/Real System/Subscribe1
extern SimulinkSubscriber<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL> Sub_proc_control_node_31_1235;

// For Block proc_control_node/ROS Input/Real System/Subscribe2
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_proc_control_node_std_msgs_Float32> Sub_proc_control_node_31_1302;

// For Block proc_control_node/ROS Input/Simulation/Subscribe
extern SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_proc_control_node_sensor_msgs_Imu> Sub_proc_control_node_31_1241;

// For Block proc_control_node/ROS Input/Simulation/Subscribe depth
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_proc_control_node_std_msgs_Float32> Sub_proc_control_node_31_1305;

// For Block proc_control_node/ROS Input/Simulation/Subscribe1
extern SimulinkSubscriber<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL> Sub_proc_control_node_31_1242;

// For Block proc_control_node/Subsystem Controller/MPC manager/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_proc_control_node_std_msgs_Float64MultiArray> Sub_proc_control_node_182_1620;

// For Block proc_control_node/Subsystem Controller/MPC manager/Subscribe1
extern SimulinkSubscriber<sonia_common::MpcGains, SL_Bus_proc_control_node_sonia_common_MpcGains> Sub_proc_control_node_182_1643;

// For Block proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_proc_control_node_geometry_msgs_Twist> Sub_proc_control_node_184_1122;

// For Block proc_control_node/Subsystem Trajectory/Subsystem1/Subscribe
extern SimulinkSubscriber<trajectory_msgs::MultiDOFJointTrajectoryPoint, SL_Bus_proc_control_node_MultiDOFJointTrajectoryPo_9xm16l> Sub_proc_control_node_184_1581;

// For Block proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe
extern SimulinkSubscriber<sonia_common::AddPose, SL_Bus_proc_control_node_sonia_common_AddPose> Sub_proc_control_node_184_1168;

// For Block proc_control_node/Subsystem1/Subscribe1
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_node_std_msgs_Bool> Sub_proc_control_node_185_12;

// For Block proc_control_node/Subsystem1/Subscribe2
extern SimulinkSubscriber<std_msgs::UInt8, SL_Bus_proc_control_node_std_msgs_UInt8> Sub_proc_control_node_185_13;

// For Block proc_control_node/Subsystem1/Subscribe3
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_node_std_msgs_Bool> Sub_proc_control_node_185_14;

// For Block proc_control_node/Subsystem1/Subscribe4
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_node_std_msgs_Bool> Sub_proc_control_node_185_268;

// For Block proc_control_node/Subsystem1/Subscribe5
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_node_std_msgs_Bool> Sub_proc_control_node_185_270;

// For Block proc_control_node/Subsystem1/startSim
extern SimulinkSubscriber<geometry_msgs::Pose, SL_Bus_proc_control_node_geometry_msgs_Pose> Sub_proc_control_node_185_11;

// For Block proc_control_node/Modle Physique/Modele Thruster/Publish2
extern SimulinkPublisher<std_msgs::Int16MultiArray, SL_Bus_proc_control_node_std_msgs_Int16MultiArray> Pub_proc_control_node_19_1361;

// For Block proc_control_node/ROS Output/Send DVL msg/Publish
extern SimulinkPublisher<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL> Pub_proc_control_node_41;

// For Block proc_control_node/ROS Output/Send Depth msg/Publish Depth
extern SimulinkPublisher<std_msgs::Float32, SL_Bus_proc_control_node_std_msgs_Float32> Pub_proc_control_node_243;

// For Block proc_control_node/ROS Output/Send IMU msg/Publish imu_info
extern SimulinkPublisher<sensor_msgs::Imu, SL_Bus_proc_control_node_sensor_msgs_Imu> Pub_proc_control_node_47;

// For Block proc_control_node/ROS Output/Send to Unity/Publish
extern SimulinkPublisher<geometry_msgs::Pose, SL_Bus_proc_control_node_geometry_msgs_Pose> Pub_proc_control_node_75;

// For Block proc_control_node/Send Data to ROS/Publish2
extern SimulinkPublisher<std_msgs::UInt16MultiArray, SL_Bus_proc_control_node_std_msgs_UInt16MultiArray> Pub_proc_control_node_104;

// For Block proc_control_node/Send Data to ROS/Subsystem/Publish5
extern SimulinkPublisher<sonia_common::MpcInfo, SL_Bus_proc_control_node_sonia_common_MpcInfo> Pub_proc_control_node_287;

// For Block proc_control_node/Sensor Manager/Send Sensor ON/Publish
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_proc_control_node_std_msgs_Bool> Pub_proc_control_node_116;

// For Block proc_control_node/Sensor Manager/Send To Telemetry /Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_proc_control_node_nav_msgs_Odometry> Pub_proc_control_node_163;

// For Block proc_control_node/Subsystem Trajectory/SubsystemAuto/Publish5
extern SimulinkPublisher<geometry_msgs::Pose, SL_Bus_proc_control_node_geometry_msgs_Pose> Pub_proc_control_node_184_1596;

void slros_node_init(int argc, char** argv);

#endif
