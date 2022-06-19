#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "proc_control";

// For Block proc_control/Modle Physique/Sensor Model/Hydrophones Model/Subscribe
SimulinkSubscriber<geometry_msgs::Vector3, SL_Bus_proc_control_geometry_msgs_Vector3> Sub_proc_control_19_1385;

// For Block proc_control/ROS Input/AUV8/Subscribe
SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_proc_control_sensor_msgs_Imu> Sub_proc_control_31_5;

// For Block proc_control/ROS Input/AUV8/Subscribe1
SimulinkSubscriber<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_sonia_common_BodyVelocityDVL> Sub_proc_control_31_1235;

// For Block proc_control/ROS Input/AUV8/Subscribe2
SimulinkSubscriber<std_msgs::Float32, SL_Bus_proc_control_std_msgs_Float32> Sub_proc_control_31_1302;

// For Block proc_control/ROS Input/AUV8/Subscribe3
SimulinkSubscriber<sonia_common::PingMsg, SL_Bus_proc_control_sonia_common_PingMsg> Sub_proc_control_31_1321;

// For Block proc_control/ROS Input/Simulation/Subscribe
SimulinkSubscriber<sensor_msgs::Imu, SL_Bus_proc_control_sensor_msgs_Imu> Sub_proc_control_31_1241;

// For Block proc_control/ROS Input/Simulation/Subscribe depth
SimulinkSubscriber<std_msgs::Float32, SL_Bus_proc_control_std_msgs_Float32> Sub_proc_control_31_1305;

// For Block proc_control/ROS Input/Simulation/Subscribe1
SimulinkSubscriber<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_sonia_common_BodyVelocityDVL> Sub_proc_control_31_1242;

// For Block proc_control/ROS Input/Simulation/Subscribe2
SimulinkSubscriber<sonia_common::PingMsg, SL_Bus_proc_control_sonia_common_PingMsg> Sub_proc_control_31_1318;

// For Block proc_control/Subsystem Controller/MPC manager/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_proc_control_std_msgs_Float64MultiArray> Sub_proc_control_182_1620;

// For Block proc_control/Subsystem Controller/MPC manager/Subscribe1
SimulinkSubscriber<sonia_common::MpcGains, SL_Bus_proc_control_sonia_common_MpcGains> Sub_proc_control_182_1643;

// For Block proc_control/Subsystem Trajectory/Subsystem/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_proc_control_geometry_msgs_Twist> Sub_proc_control_184_1122;

// For Block proc_control/Subsystem Trajectory/Subsystem1/Subscribe
SimulinkSubscriber<trajectory_msgs::MultiDOFJointTrajectoryPoint, SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w> Sub_proc_control_184_1581;

// For Block proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe
SimulinkSubscriber<sonia_common::AddPose, SL_Bus_proc_control_sonia_common_AddPose> Sub_proc_control_184_1168;

// For Block proc_control/Subsystem1/Subscribe1
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_std_msgs_Bool> Sub_proc_control_185_12;

// For Block proc_control/Subsystem1/Subscribe2
SimulinkSubscriber<std_msgs::UInt8, SL_Bus_proc_control_std_msgs_UInt8> Sub_proc_control_185_13;

// For Block proc_control/Subsystem1/Subscribe3
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_std_msgs_Bool> Sub_proc_control_185_14;

// For Block proc_control/Subsystem1/Subscribe4
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_std_msgs_Bool> Sub_proc_control_185_268;

// For Block proc_control/Subsystem1/Subscribe5
SimulinkSubscriber<std_msgs::Bool, SL_Bus_proc_control_std_msgs_Bool> Sub_proc_control_185_270;

// For Block proc_control/Subsystem1/startSim
SimulinkSubscriber<geometry_msgs::Pose, SL_Bus_proc_control_geometry_msgs_Pose> Sub_proc_control_185_11;

// For Block proc_control/Modle Physique/Modele Thruster/Send RPM to unity/Publish2
SimulinkPublisher<std_msgs::Int16MultiArray, SL_Bus_proc_control_std_msgs_Int16MultiArray> Pub_proc_control_19_1361;

// For Block proc_control/Modle Physique/Sensor Model/Hydrophones Model/Publish
SimulinkPublisher<geometry_msgs::Vector3, SL_Bus_proc_control_geometry_msgs_Vector3> Pub_proc_control_19_1384;

// For Block proc_control/ROS Output/Send DVL msg/Publish
SimulinkPublisher<sonia_common::BodyVelocityDVL, SL_Bus_proc_control_sonia_common_BodyVelocityDVL> Pub_proc_control_41;

// For Block proc_control/ROS Output/Send Depth msg/Publish Depth
SimulinkPublisher<std_msgs::Float32, SL_Bus_proc_control_std_msgs_Float32> Pub_proc_control_243;

// For Block proc_control/ROS Output/Send IMU msg/Publish imu_info
SimulinkPublisher<sensor_msgs::Imu, SL_Bus_proc_control_sensor_msgs_Imu> Pub_proc_control_47;

// For Block proc_control/ROS Output/Send Ping msg/Publish Ping
SimulinkPublisher<sonia_common::PingMsg, SL_Bus_proc_control_sonia_common_PingMsg> Pub_proc_control_350;

// For Block proc_control/ROS Output/Send to Unity/Publish
SimulinkPublisher<geometry_msgs::Pose, SL_Bus_proc_control_geometry_msgs_Pose> Pub_proc_control_75;

// For Block proc_control/Send Data to ROS/Publish
SimulinkPublisher<std_msgs::Int8MultiArray, SL_Bus_proc_control_std_msgs_Int8MultiArray> Pub_proc_control_102;

// For Block proc_control/Send Data to ROS/Publish2
SimulinkPublisher<std_msgs::UInt16MultiArray, SL_Bus_proc_control_std_msgs_UInt16MultiArray> Pub_proc_control_104;

// For Block proc_control/Send Data to ROS/Subsystem/Publish5
SimulinkPublisher<sonia_common::MpcInfo, SL_Bus_proc_control_sonia_common_MpcInfo> Pub_proc_control_287;

// For Block proc_control/Sensor Manager/Send Sensor ON/Publish
SimulinkPublisher<std_msgs::Bool, SL_Bus_proc_control_std_msgs_Bool> Pub_proc_control_116;

// For Block proc_control/Sensor Manager/Send To Telemetry /Publish
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_proc_control_nav_msgs_Odometry> Pub_proc_control_163;

// For Block proc_control/Subsystem Trajectory/sendCurrentTarget/Publish5
SimulinkPublisher<geometry_msgs::Pose, SL_Bus_proc_control_geometry_msgs_Pose> Pub_proc_control_184_1596;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

