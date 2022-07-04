//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: proc_control_types.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.4
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Sat Jul  2 01:30:35 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_proc_control_types_h_
#define RTW_HEADER_proc_control_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
struct SL_Bus_proc_control_std_msgs_MultiArrayDimension
{
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
struct SL_Bus_proc_control_std_msgs_MultiArrayLayout
{
  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_proc_control_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
  uint32_T DataOffset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Int16MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Int16MultiArray_

// MsgType=std_msgs/Int16MultiArray
struct SL_Bus_proc_control_std_msgs_Int16MultiArray
{
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_proc_control_std_msgs_MultiArrayLayout Layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  int16_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_proc_control_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_proc_control_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_proc_control_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_proc_control_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_proc_control_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sensor_msgs_Imu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sensor_msgs_Imu_

// MsgType=sensor_msgs/Imu
struct SL_Bus_proc_control_sensor_msgs_Imu
{
  // MsgType=std_msgs/Header
  SL_Bus_proc_control_std_msgs_Header Header;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_proc_control_geometry_msgs_Quaternion Orientation;
  real_T OrientationCovariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 AngularVelocity;
  real_T AngularVelocityCovariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 LinearAcceleration;
  real_T LinearAccelerationCovariance[9];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_BodyVelocityDVL_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_BodyVelocityDVL_

// MsgType=sonia_common/BodyVelocityDVL
struct SL_Bus_proc_control_sonia_common_BodyVelocityDVL
{
  // MsgType=std_msgs/Header
  SL_Bus_proc_control_std_msgs_Header Header;
  real_T XVelBtm;
  real_T YVelBtm;
  real_T ZVelBtm;
  real_T EVelBtm;
  real_T Velocity1;
  real_T Velocity2;
  real_T Velocity3;
  real_T Velocity4;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Float32_

// MsgType=std_msgs/Float32
struct SL_Bus_proc_control_std_msgs_Float32
{
  real32_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_PingMsg_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_PingMsg_

// MsgType=sonia_common/PingMsg
struct SL_Bus_proc_control_sonia_common_PingMsg
{
  // MsgType=std_msgs/Header
  SL_Bus_proc_control_std_msgs_Header Header;
  uint16_T Frequency;
  real_T Heading;
  real_T Elevation;
  uint16_T Debug;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
struct SL_Bus_proc_control_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
struct SL_Bus_proc_control_geometry_msgs_Pose
{
  // MsgType=geometry_msgs/Point
  SL_Bus_proc_control_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_proc_control_geometry_msgs_Quaternion Orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Int8MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Int8MultiArray_

// MsgType=std_msgs/Int8MultiArray
struct SL_Bus_proc_control_std_msgs_Int8MultiArray
{
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_proc_control_std_msgs_MultiArrayLayout Layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  int8_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_UInt16MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_UInt16MultiArray_

// MsgType=std_msgs/UInt16MultiArray
struct SL_Bus_proc_control_std_msgs_UInt16MultiArray
{
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_proc_control_std_msgs_MultiArrayLayout Layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  uint16_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_MpcGains_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_MpcGains_

// MsgType=sonia_common/MpcGains
struct SL_Bus_proc_control_sonia_common_MpcGains
{
  // IsVarLen=1:VarLenCategory=data:VarLenElem=OV_SL_Info:TruncateAction=warn
  real_T OV[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=OV
  SL_Bus_ROSVariableLengthArrayInfo OV_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=MV_SL_Info:TruncateAction=warn
  real_T MV[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=MV
  SL_Bus_ROSVariableLengthArrayInfo MV_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=MVR_SL_Info:TruncateAction=warn
  real_T MVR[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=MVR
  SL_Bus_ROSVariableLengthArrayInfo MVR_SL_Info;
  real_T MaxThrust;
  real_T MinThrust;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_MpcInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_MpcInfo_

// MsgType=sonia_common/MpcInfo
struct SL_Bus_proc_control_sonia_common_MpcInfo
{
  boolean_T IsMpcAlive;
  boolean_T TargetReached;
  boolean_T IsTrajectoryDone;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=ThrustersStatus_SL_Info:TruncateAction=warn 
  boolean_T ThrustersStatus[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ThrustersStatus
  SL_Bus_ROSVariableLengthArrayInfo ThrustersStatus_SL_Info;
  int8_T MpcStatus;
  uint8_T MpcMode;

  // MsgType=sonia_common/MpcGains
  SL_Bus_proc_control_sonia_common_MpcGains CurrentGains;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Bool_

// MsgType=std_msgs/Bool
struct SL_Bus_proc_control_std_msgs_Bool
{
  boolean_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_PoseWithCovariance_

// MsgType=geometry_msgs/PoseWithCovariance
struct SL_Bus_proc_control_geometry_msgs_PoseWithCovariance
{
  // MsgType=geometry_msgs/Pose
  SL_Bus_proc_control_geometry_msgs_Pose Pose;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_proc_control_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_TwistWithCovariance_

// MsgType=geometry_msgs/TwistWithCovariance
struct SL_Bus_proc_control_geometry_msgs_TwistWithCovariance
{
  // MsgType=geometry_msgs/Twist
  SL_Bus_proc_control_geometry_msgs_Twist Twist;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_nav_msgs_Odometry_

// MsgType=nav_msgs/Odometry
struct SL_Bus_proc_control_nav_msgs_Odometry
{
  // MsgType=std_msgs/Header
  SL_Bus_proc_control_std_msgs_Header Header;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=ChildFrameId_SL_Info:TruncateAction=warn 
  uint8_T ChildFrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ChildFrameId
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_proc_control_geometry_msgs_PoseWithCovariance Pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_proc_control_geometry_msgs_TwistWithCovariance Twist;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
struct SL_Bus_proc_control_std_msgs_Float64MultiArray
{
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_proc_control_std_msgs_MultiArrayLayout Layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Transform_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_geometry_msgs_Transform_

// MsgType=geometry_msgs/Transform
struct SL_Bus_proc_control_geometry_msgs_Transform
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 Translation;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_proc_control_geometry_msgs_Quaternion Rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_ros_time_Duration_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_ros_time_Duration_

// MsgType=ros_time/Duration
struct SL_Bus_proc_control_ros_time_Duration
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w_

// MsgType=trajectory_msgs/MultiDOFJointTrajectoryPoint
struct SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w
{
  // MsgType=geometry_msgs/Transform:IsVarLen=1:VarLenCategory=data:VarLenElem=Transforms_SL_Info:TruncateAction=warn 
  SL_Bus_proc_control_geometry_msgs_Transform Transforms[2000];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Transforms
  SL_Bus_ROSVariableLengthArrayInfo Transforms_SL_Info;

  // MsgType=geometry_msgs/Twist:IsVarLen=1:VarLenCategory=data:VarLenElem=Velocities_SL_Info:TruncateAction=warn 
  SL_Bus_proc_control_geometry_msgs_Twist Velocities[2000];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Velocities
  SL_Bus_ROSVariableLengthArrayInfo Velocities_SL_Info;

  // MsgType=geometry_msgs/Twist:IsVarLen=1:VarLenCategory=data:VarLenElem=Accelerations_SL_Info:TruncateAction=warn 
  SL_Bus_proc_control_geometry_msgs_Twist Accelerations[2000];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Accelerations
  SL_Bus_ROSVariableLengthArrayInfo Accelerations_SL_Info;

  // MsgType=ros_time/Duration
  SL_Bus_proc_control_ros_time_Duration TimeFromStart;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_AddPose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_sonia_common_AddPose_

// MsgType=sonia_common/AddPose
struct SL_Bus_proc_control_sonia_common_AddPose
{
  // MsgType=geometry_msgs/Point
  SL_Bus_proc_control_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_proc_control_geometry_msgs_Vector3 Orientation;
  uint8_T Frame;
  uint8_T Speed;
  real_T Fine;
  boolean_T Rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_UInt8_
#define DEFINED_TYPEDEF_FOR_SL_Bus_proc_control_std_msgs_UInt8_

// MsgType=std_msgs/UInt8
struct SL_Bus_proc_control_std_msgs_UInt8
{
  uint8_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_qfomatEQOl7mLQ02Mpt2VE_
#define DEFINED_TYPEDEF_FOR_struct_qfomatEQOl7mLQ02Mpt2VE_

struct struct_qfomatEQOl7mLQ02Mpt2VE
{
  real_T T[48];
  real_T tau;
  real_T b0;
  real_T a1;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_PHAFHl5XyXX1OaeSBzWbKD_
#define DEFINED_TYPEDEF_FOR_struct_PHAFHl5XyXX1OaeSBzWbKD_

struct struct_PHAFHl5XyXX1OaeSBzWbKD
{
  real_T mass;
  real_T volume;
  real_T rho;
  real_T g;
  real_T dvlCenterDist;
  real_T height;
  real_T I[9];
  real_T RG[3];
  real_T RB[3];
  real_T CDL[6];
  real_T CDQ[6];
  real_T AF[3];
  real_T AddedMass[6];
  real_T DepthPose[3];
  real_T hydroPose[3];
  real_T sonarPose[3];
  real_T dvlRotation[3];
  struct_qfomatEQOl7mLQ02Mpt2VE thruster;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_BYV1v0JTV2y829hAXU8EsH_
#define DEFINED_TYPEDEF_FOR_struct_BYV1v0JTV2y829hAXU8EsH_

struct struct_BYV1v0JTV2y829hAXU8EsH
{
  real_T sampletime;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SqczGJVM1s2EbgKSygGASD_
#define DEFINED_TYPEDEF_FOR_struct_SqczGJVM1s2EbgKSygGASD_

struct struct_SqczGJVM1s2EbgKSygGASD
{
  real_T sampletime;
  struct_BYV1v0JTV2y829hAXU8EsH imuDepth;
  struct_BYV1v0JTV2y829hAXU8EsH dvl;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_km1VGdrSgDw9o5zbPZirGD_
#define DEFINED_TYPEDEF_FOR_struct_km1VGdrSgDw9o5zbPZirGD_

struct struct_km1VGdrSgDw9o5zbPZirGD
{
  real_T sampletime;
  struct_SqczGJVM1s2EbgKSygGASD procNav;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_ufqIMyHD2vQ8RfLYE7OdnG_
#define DEFINED_TYPEDEF_FOR_struct_ufqIMyHD2vQ8RfLYE7OdnG_

struct struct_ufqIMyHD2vQ8RfLYE7OdnG
{
  real_T adapQMpcMode[4];
  real_T openLoopMode[2];
  real_T LtvQMpcMode;
  real_T rosGains;
  real_T NlmpcMode;
  real_T adapEMpcMode;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Fcl3OWFFDL64qkAOtsVYAC_
#define DEFINED_TYPEDEF_FOR_struct_Fcl3OWFFDL64qkAOtsVYAC_

struct struct_Fcl3OWFFDL64qkAOtsVYAC
{
  real_T trajMode;
  real_T singleWpts[5];
  real_T SpaceMouseMode[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_x7JWpgYpPywnYpZFC6VmZH_
#define DEFINED_TYPEDEF_FOR_struct_x7JWpgYpPywnYpZFC6VmZH_

struct struct_x7JWpgYpPywnYpZFC6VmZH
{
  real_T init;
  struct_ufqIMyHD2vQ8RfLYE7OdnG control;
  struct_Fcl3OWFFDL64qkAOtsVYAC traj;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WTmPWsEMvOzNnnAVv5fQNC_
#define DEFINED_TYPEDEF_FOR_struct_WTmPWsEMvOzNnnAVv5fQNC_

struct struct_WTmPWsEMvOzNnnAVv5fQNC
{
  int32_T MaxIterations;
  real_T ConstraintTolerance;
  boolean_T UseWarmStart;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WHjMt45Sk148iktWsfFxl_
#define DEFINED_TYPEDEF_FOR_struct_WHjMt45Sk148iktWsfFxl_

struct struct_WHjMt45Sk148iktWsfFxl
{
  int32_T MaxIterations;
  real_T ConstraintTolerance;
  real_T OptimalityTolerance;
  real_T ComplementarityTolerance;
  real_T StepTolerance;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lnQ9KXdSZFplhcBp5LBCc_
#define DEFINED_TYPEDEF_FOR_struct_lnQ9KXdSZFplhcBp5LBCc_

struct struct_lnQ9KXdSZFplhcBp5LBCc
{
  int32_T MaxIterations;
  real_T ConstraintTolerance;
  real_T DiscreteConstraintTolerance;
  boolean_T RoundingAtRootNode;
  int32_T MaxPendingNodes;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hZWlT12TcLzIbjyXO4CjGF_
#define DEFINED_TYPEDEF_FOR_struct_hZWlT12TcLzIbjyXO4CjGF_

struct struct_hZWlT12TcLzIbjyXO4CjGF
{
  real_T World_Position[3];
  real_T Quaternion[4];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_ORe84o0x5GBDisGKnu34DG_
#define DEFINED_TYPEDEF_FOR_struct_ORe84o0x5GBDisGKnu34DG_

struct struct_ORe84o0x5GBDisGKnu34DG
{
  real_T Body_Velocity[3];
  real_T Linear_Acceleration[3];
  real_T Angular_Rate[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_rlScCGcQggJ5TYrxrqGJfF_
#define DEFINED_TYPEDEF_FOR_struct_rlScCGcQggJ5TYrxrqGJfF_

struct struct_rlScCGcQggJ5TYrxrqGJfF
{
  struct_hZWlT12TcLzIbjyXO4CjGF x;
  struct_ORe84o0x5GBDisGKnu34DG v;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_ovWlOQLLs0y1mSxaL5ZDmG_
#define DEFINED_TYPEDEF_FOR_struct_ovWlOQLLs0y1mSxaL5ZDmG_

struct struct_ovWlOQLLs0y1mSxaL5ZDmG
{
  real_T Pressure_Depth;
  real_T Quaternion[4];
  real_T DVL_Velocity[3];
  real_T Angular_Rate[3];
  real_T Linear_Acceleration[3];
  real_T Hydro_Angles[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_dhOFexlPAOq1XLxIBHN1J_
#define DEFINED_TYPEDEF_FOR_struct_dhOFexlPAOq1XLxIBHN1J_

struct struct_dhOFexlPAOq1XLxIBHN1J
{
  real_T WorldPosition[3];
  real_T qS2W[4];
  real_T qW2S[4];
  real_T Body_Velocity[3];
  real_T Angular_Rate[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eJsqWOClzwG18rBvtrhWOG_
#define DEFINED_TYPEDEF_FOR_struct_eJsqWOClzwG18rBvtrhWOG_

struct struct_eJsqWOClzwG18rBvtrhWOG
{
  real_T mvmin[8];
  real_T mvmax[8];
  real_T ywt[13];
  real_T mvwt[8];
  real_T dmwwt[8];
  boolean_T thrustersStatus[8];
  boolean_T kill;
  real_T p;
  real_T m;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TOFpsJJYcOBczOpEd57stD_
#define DEFINED_TYPEDEF_FOR_struct_TOFpsJJYcOBczOpEd57stD_

struct struct_TOFpsJJYcOBczOpEd57stD
{
  real_T Body_Velocity[3];
  real_T error[3];
  real_T enable;
};

#endif

#ifndef struct_f_robotics_slcore_internal_bl_T
#define struct_f_robotics_slcore_internal_bl_T

struct f_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                                // struct_f_robotics_slcore_internal_bl_T

#ifndef struct_ros_slros_internal_block_Curr_T
#define struct_ros_slros_internal_block_Curr_T

struct ros_slros_internal_block_Curr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // struct_ros_slros_internal_block_Curr_T

#ifndef struct_AuvDifferentialEquation_proc__T
#define struct_AuvDifferentialEquation_proc__T

struct AuvDifferentialEquation_proc__T
{
  int32_T isInitialized;
};

#endif                                // struct_AuvDifferentialEquation_proc__T

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_fixed_system_DivideByConstant_T
#define struct_fixed_system_DivideByConstant_T

struct fixed_system_DivideByConstant_T
{
  int32_T isInitialized;
};

#endif                                // struct_fixed_system_DivideByConstant_T

#ifndef struct_HydroModel_proc_control_T
#define struct_HydroModel_proc_control_T

struct HydroModel_proc_control_T
{
  int32_T isInitialized;
  SL_Bus_proc_control_geometry_msgs_Vector3 pingerPosition;
};

#endif                                 // struct_HydroModel_proc_control_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

#ifndef struct_quaternion_proc_control_T
#define struct_quaternion_proc_control_T

struct quaternion_proc_control_T
{
  real_T a;
  real_T b;
  real_T c;
  real_T d;
};

#endif                                 // struct_quaternion_proc_control_T

#ifndef struct_TrimPlant_proc_control_T
#define struct_TrimPlant_proc_control_T

struct TrimPlant_proc_control_T
{
  real_T qkm[4];
  real_T qkt[4];
  real_T xl[13];
};

#endif                                 // struct_TrimPlant_proc_control_T

#ifndef struct_OpenLoopController_proc_contr_T
#define struct_OpenLoopController_proc_contr_T

struct OpenLoopController_proc_contr_T
{
  int32_T isInitialized;
  real_T k;
  real_T binv[48];
  real_T mass;
  real_T volume;
  real_T height;
  real_T I[9];
  real_T RG[3];
  real_T RB[3];
  real_T AddedMass[6];
  real_T CDL[6];
  real_T CDQ[6];
  real_T AF[3];
  real_T g;
  real_T rho;
};

#endif                                // struct_OpenLoopController_proc_contr_T

#ifndef struct_mpcManager_proc_control_T
#define struct_mpcManager_proc_control_T

struct mpcManager_proc_control_T
{
  int32_T isInitialized;
  real_T init;
  real_T currentFaultCount[8];
  boolean_T isThrusterFault[8];
  real_T rosOV[13];
  real_T rosMV[8];
  real_T rosMVR[8];
};

#endif                                 // struct_mpcManager_proc_control_T

#ifndef struct_MultiTrajectoryManager_proc_c_T
#define struct_MultiTrajectoryManager_proc_c_T

struct MultiTrajectoryManager_proc_c_T
{
  int32_T isInitialized;
  real_T poseBuffer[78000];
  real_T bufferCount;
  boolean_T done;
  real_T targetReachedCount;
  real_T initialPose[7];
  boolean_T init;
  real_T dummy;
  real_T emptyArray[13];
};

#endif                                // struct_MultiTrajectoryManager_proc_c_T

#ifndef struct_TrajectoryManager_proc_contro_T
#define struct_TrajectoryManager_proc_contro_T

struct TrajectoryManager_proc_contro_T
{
  int32_T isInitialized;
  real_T linearConvergence;
  real_T quaternionConvergence;
  real_T TargetThreshold;
  real_T poseBuffer[78013];
  real_T generationNumber;
  real_T bufferCount;
  boolean_T done;
  real_T targetReachedCount;
  real_T init;
  real_T dummy;
  real_T emptyArray[13];
};

#endif                                // struct_TrajectoryManager_proc_contro_T

#ifndef struct_AddPose_proc_control_T
#define struct_AddPose_proc_control_T

struct AddPose_proc_control_T
{
  real_T i;
  real_T poseList[18];
  real_T initcond[7];
};

#endif                                 // struct_AddPose_proc_control_T

#ifndef struct_cell_wrap_proc_control_T
#define struct_cell_wrap_proc_control_T

struct cell_wrap_proc_control_T
{
  uint32_T f1[8];
};

#endif                                 // struct_cell_wrap_proc_control_T

#ifndef struct_robotics_slcore_internal_bloc_T
#define struct_robotics_slcore_internal_bloc_T

struct robotics_slcore_internal_bloc_T
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize[4];
  real_T TimeScaling[33];
};

#endif                                // struct_robotics_slcore_internal_bloc_T

#ifndef struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T
#define struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T

struct sqZuOXvj3QtPO9QwF8LnDoG_proc__T
{
  real_T breaks[4];
  real_T coefs[36];
};

#endif                                // struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T

#ifndef struct_cell_proc_control_T
#define struct_cell_proc_control_T

struct cell_proc_control_T
{
  real_T f1[6];
  real_T f2[2];
};

#endif                                 // struct_cell_proc_control_T

#ifndef struct_robotics_slcore_internal_bl_p_T
#define struct_robotics_slcore_internal_bl_p_T

struct robotics_slcore_internal_bl_p_T
{
  boolean_T tunablePropertyChanged[5];
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize[3];
  real_T VelocityBoundaryCondition[6];
  real_T AccelerationBoundaryCondition[10];
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDDStruct;
  cell_proc_control_T PrevOptInputs;
  boolean_T PPFormUpdatedNeeded;
};

#endif                                // struct_robotics_slcore_internal_bl_p_T

#ifndef struct_rosCommandManager_proc_contro_T
#define struct_rosCommandManager_proc_contro_T

struct rosCommandManager_proc_contro_T
{
  int32_T isInitialized;
  real_T initial_mode;
  real_T m_initCond[7];
  real_T m_mode;
  real_T m_killStatus;
  real_T m_simulation;
  real_T m_reset;
  real_T m_trajClear;
  real_T m_notDryRun;
};

#endif                                // struct_rosCommandManager_proc_contro_T

#ifndef struct_emxArray_real_T_proc_control_T
#define struct_emxArray_real_T_proc_control_T

struct emxArray_real_T_proc_control_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 // struct_emxArray_real_T_proc_control_T

#ifndef struct_emxArray_boolean_T_proc_contr_T
#define struct_emxArray_boolean_T_proc_contr_T

struct emxArray_boolean_T_proc_contr_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_boolean_T_proc_contr_T

#ifndef struct_emxArray_int32_T_proc_control_T
#define struct_emxArray_int32_T_proc_control_T

struct emxArray_int32_T_proc_control_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_int32_T_proc_control_T

#ifndef struct_emxArray_uint16_T_proc_contro_T
#define struct_emxArray_uint16_T_proc_contro_T

struct emxArray_uint16_T_proc_contro_T
{
  uint16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                // struct_emxArray_uint16_T_proc_contro_T

// Parameters (default storage)
typedef struct P_proc_control_T_ P_proc_control_T;

// Forward declaration for rtModel
typedef struct tag_RTM_proc_control_T RT_MODEL_proc_control_T;

#endif                                 // RTW_HEADER_proc_control_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
