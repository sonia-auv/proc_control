//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: proc_control.h
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
#ifndef RTW_HEADER_proc_control_h_
#define RTW_HEADER_proc_control_h_
#include <stdio.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "proc_control_types.h"
#include "rtGetNaN.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtGetInf.h"
#include "zero_crossing_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals for system '<S100>/Current Time'
struct B_CurrentTime_proc_control_T {
  SL_Bus_proc_control_ros_time_Time CurrentTime;// '<S100>/Current Time'
};

// Block states (default storage) for system '<S100>/Current Time'
struct DW_CurrentTime_proc_control_T {
  ros_slros_internal_block_Curr_T obj; // '<S100>/Current Time'
  boolean_T objisempty;                // '<S100>/Current Time'
};

// Block signals (default storage)
struct B_proc_control_T {
  real_T b_this[78013];
  real_T b_this_m[78000];
  real_T Mu_data[46400];
  SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w In1;// '<S276>/In1'
  SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w b_varargout_2;
  real_T Sx_data[12180];
  real_T Su_data[10400];
  real_T SuJm_data[10400];
  real_T b_y_data[10400];
  real_T varargin_2_data[10400];
  real_T a[10400];
  real_T tmp_data[6561];
  real_T tmp_data_c[6561];
  real_T tmp_data_k[6561];
  real_T RLinv_data[6561];
  real_T b_D_data[6561];
  real_T b_H_data[6561];
  real_T b_H_data_c[6561];
  real_T b_H_data_b[6561];
  real_T b_Linv_data[6561];
  real_T tmp_data_p[6561];
  real_T TL_data[6561];
  real_T Q_data[6561];
  real_T R_data[6561];
  real_T b_A_data[6561];
  real_T in1_data[6561];
  real_T tmp_data_cv[6400];
  real_T Jm_data[6400];
  real_T I2Jm_data[6400];
  real_T I3_data[6400];
  real_T varargin_4_data[6400];
  real_T varargin_6_data[6400];
  real_T Mv_aux_data[6380];
  real_T b_A[4851];
  real_T q[4746];
  real_T Su1_data[4640];
  real_T AA[3969];
  real_T b_C[3003];
  real_T Sx_data_f[2730];
  real_T b_Sx[2730];
  real_T dv[2486];
  real_T u_g[2034];
  real_T A[1859];                      // '<S133>/MATLAB Function2'
  real_T C[1859];                      // '<S133>/MATLAB Function2'
  real_T Bu[1848];
  real_T s[1808];
  real_T Kx_data[1680];
  real_T Hv_data[1430];
  real_T varargin_1_data[1430];
  real_T b_Hv[1430];
  real_T CovMat[1156];
  real_T B[1144];                      // '<S133>/MATLAB Function2'
  real_T varargin_1_data_g[1040];
  real_T Su1_data_m[1040];
  real_T b_SuJm[1040];
  real_T b_Su1[1040];
  real_T WySuJm[1040];
  real_T b_tmp[986];
  int8_T b_data[6561];
  int8_T a_n[6400];
  real_T tmp_data_pp[640];
  real_T I1_data[640];
  real_T Ku1_data[640];
  real_T I2Jm[640];
  real_T WuI2Jm[640];
  real_T WduJm[640];
  real_T in1_data_l[640];
  real_T b_B[630];
  real_T Mlimfull_data[580];
  real_T Vfull_data[580];
  real_T b_A_j[441];
  real_T AA_d[441];
  real_T Mlimfull0[436];
  real_T Vfull0[436];
  SL_Bus_proc_control_std_msgs_Float64MultiArray In1_f;// '<S202>/In1'
  SL_Bus_proc_control_std_msgs_Float64MultiArray b_varargout_2_g;
  SL_Bus_proc_control_sonia_common_MpcInfo msg_l;// '<S114>/MATLAB Function'
  real_T b_D[390];
  SL_Bus_proc_control_sonia_common_MpcGains In1_o;// '<S203>/In1'
  SL_Bus_proc_control_sonia_common_MpcGains b_varargout_2_d;
  real_T A_d[338];
  SL_Bus_proc_control_std_msgs_Int16MultiArray msg_n;// '<S16>/MATLAB Function3' 
  SL_Bus_proc_control_std_msgs_UInt16MultiArray msg_m;// '<S5>/MATLAB Function3' 
  SL_Bus_proc_control_std_msgs_Int8MultiArray msg_j;// '<S5>/MATLAB Function1'
  real_T Nk[273];
  real_T b_C_l[273];
  real_T CA[273];
  real_T CA_o[273];
  real_T b_C_b[273];
  real_T b_A_n[260];
  real_T Bv[231];
  real_T b_Mlim[226];
  real_T Bc[226];
  real_T b_Mu1[226];
  real_T cTol[226];
  real_T b_A_b[208];
  real_T b_A_l[182];
  real_T P[169];
  real_T y_h[169];
  real_T P_b[169];
  real_T A2[169];
  real_T A4[169];
  real_T A6[169];
  real_T dv1[169];
  real_T A4_d[169];
  real_T dv2[169];
  real_T b_a[169];
  real_T cBuffer[169];
  real_T aBuffer[169];
  real_T cBuffer_e[169];
  real_T cBuffer_b[169];
  real_T b_A2[169];
  real_T b_A4[169];
  real_T b_A6[169];
  real_T y_j[169];
  real_T dv3[169];
  real_T b_A4_f[169];
  real_T a_a[169];
  real_T cBuffer_j[169];
  real_T aBuffer_j[169];
  real_T cBuffer_o[169];
  real_T cBuffer_n[169];
  real_T A_i[169];
  real_T y_o[169];
  real_T A_n[169];
  real_T y_m[169];
  real_T b_A_c[169];
  real_T V[169];
  real_T b_a_m[169];
  real_T A_m[169];
  real_T y_ja[169];
  real_T V_h[169];
  real_T A6_c[169];
  real_T V_c[169];
  real_T A6_p[169];
  real_T b_Kx[168];
  int16_T r_data[580];
  int16_T s_data[580];
  int16_T t_data[580];
  int16_T v_data[580];
  int16_T w_data[580];
  int16_T y_data[580];
  real_T Dv[143];
  real_T Y_o[143];                     // '<S133>/MATLAB Function2'
  real_T X_d[143];                     // '<S133>/MATLAB Function2'
  real_T DX[143];                      // '<S133>/MATLAB Function2'
  real_T CA_data[143];
  real_T A_p[140];
  real_T y_h_a[130];                   // '<S265>/MATLAB Function1'
  real_T b[130];
  real_T readCurrent[128];
  SL_Bus_proc_control_nav_msgs_Odometry msg_l_e;// '<S119>/MATLAB Function1'
  int32_T iC[226];
  real_T rtb_B_a[104];
  real_T Sum_a[104];
  real_T b_C_i[104];
  real_T cb_data[100];
  real_T dHdx[91];
  real_T y_lt[91];
  real_T K[91];
  real_T b_C_o[91];
  real_T U[88];                        // '<S133>/MATLAB Function2'
  real_T b_Kv[88];
  real_T t[81];
  real_T zopt_data[81];
  real_T f_data[81];
  real_T L[81];
  real_T b_D_o[81];
  real_T b_H[81];
  real_T U_i[81];
  real_T RLinv[81];
  real_T TL[81];
  real_T R[81];
  real_T b_A_f[81];
  real_T r_data_i[81];
  real_T AcRow_data[81];
  real_T z_data[81];
  real_T tau_data[81];
  real_T b_Ac_data[81];
  real_T work_data[81];
  real_T tmp_data_f[81];
  real_T work_data_g[81];
  real_T in1_data_c[81];
  real_T b_utarget[80];
  real_T utargetseq_data[80];
  real_T a_o[80];
  real_T b_I1[80];
  real_T a_l[80];
  real_T s_data_m[80];
  real_T s_data_mj[80];
  boolean_T isMrows_data[580];
  int32_T b_data_c[130];
  real_T b_y_tmp[64];
  real_T b_B_f[64];
  real_T b_Jm[64];
  real_T b_I1_p[64];
  SL_Bus_proc_control_sensor_msgs_Imu In1_p;// '<S72>/In1'
  SL_Bus_proc_control_sensor_msgs_Imu In1_pd;// '<S80>/In1'
  SL_Bus_proc_control_sensor_msgs_Imu b_varargout_2_e;
  SL_Bus_proc_control_sensor_msgs_Imu msg_f;// '<S91>/MATLAB Function'
  boolean_T isMrows0[436];
  real_T R_o[49];
  real_T R_h[49];
  real_T Sy[49];
  real_T A_l[48];
  real_T constValues[41];
  int32_T b_data_h[80];
  int32_T b_data_m[80];
  real_T dHdx_m[39];
  real_T y_h3[39];
  real_T K_c[39];
  real_T b_C_k[39];
  real_T c_x[36];
  real_T modCoeffs[36];
  real_T constValues_p[36];
  real_T dv4[36];
  real_T modCoeffs_p[36];
  real_T b_A_p[36];
  char_T rtb_ASCIItoString_c_a[256];
  char_T rtb_ASCIItoString_j[256];
  char_T Switch1[256];                 // '<S100>/Switch1'
  boolean_T bv[226];
  SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_i;// '<S73>/In1'
  SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_c;// '<S82>/In1'
  SL_Bus_proc_control_sonia_common_BodyVelocityDVL msg_a;// '<S89>/MATLAB Function' 
  real_T coefsWithFlatStart[24];
  SL_Bus_proc_control_sonia_common_PingMsg BusAssignment;// '<S92>/Bus Assignment' 
  real_T b_xoff[21];
  real_T rtb_xNew_f_e[21];
  real_T Transpose_i[18];              // '<S282>/Transpose'
  real_T Opt[18];
  real_T Rhs[18];
  char_T cv[128];
  real_T A_o[14];
  real_T x_dot_kk[13];
  real_T x_dot_k[13];
  real_T xNew_f[13];                   // '<S255>/Correct'
  real_T xNew_p[13];                   // '<S253>/Correct'
  real_T dv5[13];
  real_T b_C_bb[13];
  real_T b_Wy[13];
  real_T tau[13];
  real_T work[13];
  real_T b_C_a[13];
  real_T tau_g[13];
  real_T work_e[13];
  real_T work_f[13];
  real_T work_h[13];
  real_T K_e[13];
  real_T C_c[13];
  real_T a_ax[13];
  real_T work_d[13];
  real_T tamp[13];
  real_T coefMat[12];
  real_T tau_a[12];
  real_T coefMat_p[12];
  real_T newSegmentCoeffs[12];
  real_T tau_m[12];
  real_T vseq[11];
  int8_T b_o[81];
  boolean_T w_data_n[80];
  boolean_T w_data_l[80];
  real_T twpt[9];
  real_T TmpSignalConversionAtMATL_b[9];// '<S270>/Subsystem1'
  real_T zopt[9];
  real_T varargin_1[9];
  real_T r[9];
  real_T z[9];
  real_T tau_p[9];
  real_T work_p[9];
  real_T Sy_f[9];
  real_T u[8];                         // '<S210>/ '
  real_T mvwt[8];                      // '<S128>/MPC manager'
  real_T dmwwt[8];                     // '<S128>/MPC manager'
  real_T U_ie[8];
  real_T u_scale[8];                   // '<S136>/u_scale'
  real_T dv6[8];
  real_T dv7[8];
  real_T umax_incr[8];
  real_T umin_incr[8];
  real_T b_Wu[8];
  real_T b_Wdu[8];
  SL_Bus_proc_control_sonia_common_AddPose b_varargout_2_o;
  SL_Bus_proc_control_geometry_msgs_Pose ZeroOrderHold;// '<S268>/Zero-Order Hold' 
  SL_Bus_proc_control_geometry_msgs_Pose In1_n;// '<S299>/In1'
  SL_Bus_proc_control_geometry_msgs_Pose msg;// '<S268>/MATLAB Function2'
  SL_Bus_proc_control_geometry_msgs_Pose b_varargout_2_k;
  SL_Bus_proc_control_geometry_msgs_Pose msg_b;// '<S93>/MATLAB Function'
  real_T target[7];                    // '<S9>/Merge'
  real_T z_i[7];
  real_T work_o[7];
  real_T TmpSignalConversionAtMATLAB[7];
  real_T mesuredPose[7];
  real_T y_m4[7];
  real_T x[7];
  int32_T iv[13];
  SL_Bus_proc_control_geometry_msgs_Twist In1_od;// '<S274>/In1'
  SL_Bus_proc_control_geometry_msgs_Twist b_varargout_2_f;
  real_T TSamp[6];                     // '<S166>/TSamp'
  real_T rtb_TSamp_h[6];
  real_T constValues_m[6];
  real_T dv8[6];
  real_T constValues_a[6];
  real_T constValues_k[6];
  int32_T blockFormat[12];
  int32_T blockFormat_c[12];
  char_T b_zeroDelimTopic[39];
  char_T b_zeroDelimTopic_p[37];
  char_T b_zeroDelimTopic_b[35];
  char_T b_zeroDelimTopic_c[34];
  char_T b_zeroDelimTopic_n[33];
  quaternion_proc_control_T expl_temp;
  char_T b_zeroDelimTopic_i[32];
  real_T MATLABSystem_o1[4];           // '<S10>/MATLAB System'
  real_T n[4];
  real_T TmpSignalConversionAtSFunct[4];// '<S205>/MATLAB Function1'
  real_T qRel[4];
  real_T modBreaks[4];
  real_T qRel_m[4];
  real_T mesuredPose_j[4];
  int32_T iv1[8];
  int32_T bb_data[8];
  int32_T bb_data_e[8];
  char_T b_zeroDelimTopic_m[31];
  char_T b_zeroDelimTopic_m0[30];
  char_T b_zeroDelimTopic_j[30];
  char_T b_zeroDelimTopic_f[29];
  char_T b_zeroDelimTopic_a[28];
  char_T b_zeroDelimTopic_g[27];
  char_T b_zeroDelimTopic_nr[26];
  char_T b_zeroDelimTopic_d[26];
  SL_Bus_proc_control_geometry_msgs_Vector3 b_varargout_2_n;
  real_T Gain[3];                      // '<S266>/Gain'
  real_T Reference[130];               // '<S9>/Merge'
  real_T MATLABSystem_o2[3];           // '<S10>/MATLAB System'
  real_T z_c[3];
  real_T u2[3];                        // '<S234>/1//2'
  real_T sincos_o2[3];                 // '<S40>/sincos'
  real_T u2_j[3];                      // '<S40>/1//2'
  real_T rtb_sincos_o2_f[3];
  real_T target_p[3];
  real_T v[3];
  real_T c[3];
  real_T b_v[3];
  char_T b_zeroDelimTopic_p2[23];
  char_T b_zeroDelimTopic_nj[23];
  char_T b_zeroDelimTopic_k[22];
  char_T b_zeroDelimTopic_n3[22];
  char_T b_zeroDelimTopic_o[20];
  char_T b_zeroDelimTopic_gg[19];
  char_T b_zeroDelimTopic_cq[17];
  char_T b_zeroDelimTopic_cj[16];
  real_T DataTypeConversion1[2];       // '<S284>/Data Type Conversion1'
  real_T dv9[2];
  real_T dv10[2];
  real_T dv11[2];
  real_T obj[2];
  int16_T NtoRPM[8];                   // '<S16>/N to RPM'
  uint16_T BufferToMakeInportVirtual_Ins_e[8];
  uint16_T current[8];                 // '<S129>/N to A'
  uint16_T pwm[8];                     // '<S129>/N to PWM'
  uint8_T rows[13];
  uint8_T rows_m[13];
  int8_T b_ipiv[13];
  int8_T ipiv[13];
  boolean_T x_j[13];
  boolean_T x_k[13];
  real_T MATLABSystem_o4;              // '<S10>/MATLAB System'
  real_T DataTypeConversion[6];        // '<S284>/Data Type Conversion'
  real_T DataTypeConversion2;          // '<S284>/Data Type Conversion2'
  real_T MatrixConcatenate[2];         // '<S282>/Matrix Concatenate'
  real_T Selector[6];                  // '<S282>/Selector'
  real_T Selector1[8];                 // '<S282>/Selector1'
  real_T Selector4[7];                 // '<S282>/Selector4'
  real_T ZeroOrderHold1;               // '<S209>/Zero-Order Hold1'
  real_T DataStoreRead[13];            // '<S256>/Data Store Read'
  real_T zposition;                    // '<S206>/Sum'
  real_T Sum;                          // '<S236>/Sum'
  real_T Sum_o;                        // '<S237>/Sum'
  real_T Sum_c;                        // '<S238>/Sum'
  real_T q0;                           // '<S234>/q0'
  real_T q1;                           // '<S234>/q1'
  real_T q2;                           // '<S234>/q2'
  real_T q3;                           // '<S234>/q3'
  real_T mv[8];                        // '<S127>/Merge'
  real_T MpcStatus;                    // '<S127>/Merge'
  real_T alive;                        // '<S127>/Merge'
  real_T mvmin[8];                     // '<S128>/MPC manager'
  real_T mvmax[8];                     // '<S128>/MPC manager'
  real_T ywt[13];                      // '<S128>/MPC manager'
  real_T p;                            // '<S128>/MPC manager'
  real_T m;                            // '<S128>/MPC manager'
  real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T qS2W[4];        // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T BodyVelocity[3];// '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T AngularRate[3]; // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T BufferToMakeInportVirtual_Inser[8];
  real_T y;                            // '<S67>/MATLAB Function'
  real_T PWMtoN[8];                    // '<S11>/ PWM to N'
  real_T Drift[6];                     // '<S12>/ Drift'
  real_T WorldPosition_n[3];           // '<S1>/Discrete-Time Integrator'
  real_T PressureDepth;                // '<S14>/Gain'
  real_T Quaternion[4];                // '<S14>/Sum1'
  real_T AngularRate_d[3];             // '<S14>/Sum3'
  real_T LinearAcceleration[3];        // '<S14>/Sum5'
  real_T y_p[3];                       // '<S14>/MATLAB Function'
  real_T MATLABSystem_o2_k[3];         // '<S33>/MATLAB System'
  real_T y_l[4];                       // '<S1>/Quaternion Normalise'
  real_T d;
  real_T scale;
  real_T absxk;
  real_T t_m;
  real_T e_data;
  real_T b_x_data;
  real_T t30;
  real_T t31;
  real_T t33;
  real_T t34;
  real_T t40;
  real_T t41;
  real_T t59;
  real_T t61;
  real_T t60;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t12;
  real_T t13;
  real_T t15;
  real_T t16;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t29;
  real_T t65;
  real_T t52;
  real_T t57;
  real_T t58;
  real_T t62;
  real_T t63;
  real_T t69;
  real_T dp;
  real_T theta0;
  real_T oa;
  real_T ob;
  real_T oc;
  real_T oa_p;
  real_T ob_d;
  real_T od;
  real_T MATLABSystem_o3;              // '<S10>/MATLAB System'
  real_T Divide2_d;                    // '<S34>/Divide2'
  real_T Product5_o;                   // '<S62>/Product5'
  real_T Divide_i;                     // '<S34>/Divide'
  real_T Product8;                     // '<S62>/Product8'
  real_T MATLABSystem_o6;              // '<S10>/MATLAB System'
  real_T MATLABSystem_o7;              // '<S10>/MATLAB System'
  real_T Product5;                     // '<S61>/Product5'
  real_T assign_temp_c_data;
  real_T assign_temp_d_data;
  real_T n_g;
  real_T rtb_u2_c;
  real_T rtb_Sum6_idx_2;
  real_T rtb_Sum6_idx_0;
  real_T ob_tmp;
  real_T t69_tmp;
  real_T t27_tmp;
  real_T t31_tmp;
  real_T t24_tmp;
  real_T d_tmp;
  real_T t25_tmp;
  real_T t29_tmp;
  real_T d_c;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T t65_tmp;
  real_T y_tmp;
  real_T Sx_data_tmp;
  real_T b_p;
  real_T pny1;
  real_T varargin_1_size_idx_1_tmp_tmp;
  real_T bkj;
  real_T normH;
  real_T s_i;
  real_T b_B_d;
  real_T b_Kv_g;
  real_T WuI2Jm_l;
  real_T rMin;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T t_f;
  real_T b_Ac;
  real_T atmp;
  real_T beta1;
  real_T scale_d;
  real_T absxk_j;
  real_T t_i;
  real_T exptj;
  real_T d6_h;
  real_T eta1;
  real_T e;
  real_T ed2;
  real_T exptj_n;
  real_T d6_o;
  real_T eta1_c;
  real_T e_b;
  real_T ed2_e;
  real_T s_d;
  real_T atmp_i;
  real_T d36;
  real_T d37;
  real_T s_g;
  real_T K_n;
  real_T d38;
  real_T c_l;
  real_T xnorm;
  real_T b_alpha1_tmp;
  real_T scale_c;
  real_T absxk_n;
  real_T t_p;
  real_T s_dk;
  real_T K_o;
  real_T scale_j;
  real_T absxk_c;
  real_T t_h;
  real_T rMin_d;
  real_T Xnorm0_c;
  real_T cMin_p;
  real_T cVal_p;
  real_T t_a;
  real_T Linv;
  real_T atmp_o;
  real_T xnorm_j;
  real_T scale_p;
  real_T absxk_o;
  real_T t_l;
  real_T d_k;
  real_T s_j;
  real_T d_f;
  real_T s_c;
  real_T b_index;
  real_T scale_f;
  real_T absxk_nl;
  real_T t_iu;
  real_T holdPoint;
  real_T evalPointVector_idx_0;
  real_T normH_l;
  real_T absx;
  real_T ssq;
  real_T c_i;
  real_T c_k;
  real_T t45;
  real_T t65_f;
  real_T t56;
  real_T xk;
  real_T xk_a;
  real_T xk_d;
  real_T xk_e;
  real_T xk_eh;
  real_T xk_b;
  real_T xk_a0;
  real_T xk_i;
  real_T xk_f;
  real_T xk_j;
  real_T xk_o;
  real_T xk_fr;
  real_T xk_oy;
  real_T xk_tmp;
  real_T xk_tmp_l;
  real_T xk_tmp_lu;
  real_T xk_tmp_g;
  real_T xk_tmp_d;
  real_T xk_tmp_dv;
  real_T xk_tmp_j;
  real_T xk_tmp_f;
  real_T xk_tmp_js;
  real_T xk_tmp_h;
  real_T xk_tmp_c;
  real_T xk_tmp_n;
  real_T xk_tmp_k;
  real_T xk_tmp_a;
  real_T xk_tmp_fn;
  real_T xk_tmp_jz;
  real_T xk_tmp_kl;
  real_T xk_tmp_b;
  real_T xk_tmp_hm;
  real_T xk_tmp_e;
  real_T xk_tmp_hn;
  real_T xk_tmp_ku;
  real_T t8_tmp;
  real_T t9_tmp;
  real_T t10_tmp;
  real_T t11_tmp;
  real_T t12_tmp;
  real_T t13_tmp;
  real_T t15_tmp;
  real_T t20_tmp;
  real_T t33_tmp;
  real_T t37_tmp;
  real_T t39_tmp;
  real_T t63_tmp;
  real_T t67_tmp;
  real_T t68_tmp;
  real_T t23_tmp;
  real_T t84_tmp;
  real_T t55_tmp;
  real_T t86_tmp;
  real_T t87_tmp;
  real_T t16_tmp;
  real_T t17_tmp;
  real_T t18_tmp;
  real_T t19_tmp;
  real_T t21_tmp;
  real_T t22_tmp;
  real_T t71_tmp;
  real_T t80_tmp;
  real_T t81_tmp;
  real_T t85_tmp;
  real_T xk_tmp_jw;
  real_T xk_tmp_tmp;
  real_T xk_tmp_tmp_o;
  real_T xk_tmp_tmp_c;
  real_T xk_tmp_tmp_h;
  real_T xk_tmp_tmp_i;
  real_T xk_tmp_tmp_p;
  real_T xk_tmp_tmp_f;
  real_T xk_tmp_tmp_e;
  real_T xk_tmp_tmp_n;
  real_T xk_tmp_tmp_ho;
  real_T xk_tmp_tmp_hp;
  real_T xk_tmp_fnt;
  real_T xk_tmp_i;
  real_T xk_tmp_f4;
  real_T xk_tmp_cy;
  real_T xk_tmp_nn;
  real_T absx_h;
  real_T z_k;
  real_T s_h;
  real_T R_b;
  real_T beta1_o;
  real_T A_nq;
  real_T tst;
  real_T htmp1;
  real_T ab;
  real_T ba;
  real_T aa;
  real_T h12;
  real_T a__4;
  real_T tst_tmp;
  real_T tst_tmp_tmp;
  real_T temp;
  real_T p_m;
  real_T bcmax;
  real_T bcmis;
  real_T scale_k;
  real_T z_j;
  real_T a_h;
  real_T b_f;
  real_T t2;
  real_T t3_d;
  real_T t4_l;
  real_T t5_k;
  real_T t6_i;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12_h;
  real_T t13_m;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24_g;
  real_T t25_l;
  real_T t26_m;
  real_T t27_n;
  real_T t28;
  real_T t29_g;
  real_T t30_d;
  real_T t31_m;
  real_T t32;
  real_T t33_f;
  real_T t34_g;
  real_T t39;
  real_T t40_j;
  real_T t41_c;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45_e;
  real_T t58_m;
  real_T t59_o;
  real_T t60_a;
  real_T t62_j;
  real_T t63_g;
  real_T t64;
  real_T t66;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t56_j;
  real_T t61_e;
  real_T t27_tmp_j;
  real_T t31_tmp_j;
  real_T t24_tmp_g;
  real_T t8_o;
  real_T t9_h;
  real_T t10_c;
  real_T t11_a;
  real_T t12_l;
  real_T t13_j;
  real_T t15_i;
  real_T t20_m;
  real_T t33_ft;
  real_T t35_o;
  real_T t44_i;
  real_T t58_e;
  real_T t67;
  real_T t68;
  real_T t16_j;
  real_T t17_o;
  real_T t18_f;
  real_T t19_m;
  real_T t21_a;
  real_T t22_h;
  real_T t23_o;
  real_T t73;
  real_T t80;
  real_T t81;
  real_T t83;
  real_T t41_h;
  real_T t48;
  real_T t61_j;
  real_T t85;
  real_T t86;
  real_T t49;
  real_T t76;
  real_T out1_tmp;
  real_T out1_tmp_g;
  real_T out1_tmp_j;
  real_T out1_tmp_l;
  real_T out1_tmp_k;
  real_T out1_tmp_d;
  real_T out1_tmp_n;
  real_T out1_tmp_j5;
  real_T out1_tmp_a;
  real_T absx_hz;
  real_T z_iq;
  real_T s_dn;
  real_T R_bf;
  real_T b_index_h;
  real_T c_tmp_idx_1;
  real_T c_tmp_idx_2;
  real_T tamp_tmp;
  real_T tamp_tmp_p;
  real_T aSinInput;
  real_T e_data_n;
  real_T b_x_data_j;
  real_T q_o;
  real_T eul_tmp;
  real_T eul_tmp_b;
  real_T eul_tmp_j;
  real_T c_idx_0;
  real_T smax;
  real_T s_e;
  real_T t8_i;
  real_T t9_n;
  real_T t11_i;
  real_T t12_p;
  real_T t13_o;
  real_T t14;
  real_T t15_m;
  real_T t16_o;
  real_T t25_g;
  real_T t29_e;
  real_T t31_i;
  real_T t50;
  real_T t53;
  real_T t54;
  real_T t17_g;
  real_T t18_g;
  real_T t19_g;
  real_T t57_g;
  real_T t64_c;
  real_T t65_k;
  real_T t68_d;
  real_T t69_k;
  real_T t70;
  real_T t12_tmp_p;
  real_T t13_tmp_p;
  real_T t14_tmp;
  real_T t15_tmp_m;
  real_T out1_tmp_kt;
  real_T out1_tmp_a0;
  real_T out1_tmp_f;
  real_T out1_tmp_c;
  real_T out1_tmp_jk;
  real_T out1_tmp_kb;
  real_T t8_h;
  real_T t9_d;
  real_T t11_j;
  real_T t12_n;
  real_T t13_j0;
  real_T t14_l;
  real_T t15_p;
  real_T t16_p;
  real_T t25_ly;
  real_T t27_l;
  real_T t33_h;
  real_T t45_c;
  real_T t53_g;
  real_T t54_e;
  real_T t17_n;
  real_T t18_fn;
  real_T t19_n;
  real_T t59_e;
  real_T t64_b;
  real_T t65_a;
  real_T t67_i;
  real_T t69_n;
  real_T t70_f;
  real_T t12_tmp_i;
  real_T t13_tmp_k;
  real_T t14_tmp_b;
  real_T t15_tmp_d;
  real_T out1_tmp_h;
  real_T out1_tmp_nl;
  real_T out1_tmp_fj;
  real_T out1_tmp_ay;
  real_T out1_tmp_m;
  real_T out1_tmp_gu;
  real_T tst_n;
  real_T ab_c;
  real_T ba_d;
  real_T aa_k;
  real_T bb;
  real_T h12_c;
  real_T e_j;
  real_T tst_tmp_m;
  real_T tst_tmp_tmp_i;
  real_T temp_b;
  real_T p_o;
  real_T bcmax_g;
  real_T bcmis_e;
  real_T scale_i;
  real_T z_e;
  real_T bkj_i;
  real_T dp_m;
  real_T theta0_d;
  real_T b_q_c;
  real_T n_j;
  real_T oa_pe;
  real_T ob_b;
  real_T oc_p;
  real_T od_n;
  real_T assign_temp_a_data;
  real_T assign_temp_b_data;
  real_T assign_temp_c_data_c;
  real_T assign_temp_d_data_n;
  real_T oa_tmp;
  real_T ob_tmp_d;
  real_T od_tmp;
  real_T dp_i;
  real_T theta0_n;
  real_T b_q_c_b;
  real_T n_b;
  real_T oa_j;
  real_T ob_n;
  real_T oc_f;
  real_T od_e;
  real_T assign_temp_a_data_i;
  real_T assign_temp_b_data_a;
  real_T assign_temp_c_data_f;
  real_T assign_temp_d_data_k;
  real_T oa_tmp_c;
  real_T ob_tmp_j;
  real_T od_tmp_l;
  real_T scale_a;
  real_T absxk_i;
  real_T t_o;
  real_T temp_b4;
  real_T bkj_a;
  real_T y_a;
  real_T y_b;
  real_T y_c;
  real_T y_d;
  real_T vnorm;
  real_T qnorm;
  real_T vscale_data;
  real_T z_data_a;
  real_T in2_data;
  SL_Bus_proc_control_std_msgs_UInt8 In1_i2;// '<S295>/In1'
  SL_Bus_proc_control_std_msgs_Float32 In1_e;// '<S74>/In1'
  SL_Bus_proc_control_std_msgs_Float32 In1_om;// '<S81>/In1'
  SL_Bus_proc_control_std_msgs_Bool In1_f1;// '<S298>/In1'
  SL_Bus_proc_control_std_msgs_Bool In1_cx;// '<S294>/In1'
  boolean_T umax_incr_flag[8];
  boolean_T umin_incr_flag[8];
  boolean_T umax_incr_flag_i[8];
  boolean_T umin_incr_flag_i[8];
  int32_T assign_temp_a_size[2];
  int32_T assign_temp_b_size[2];
  int32_T assign_temp_c_size[2];
  int32_T assign_temp_d_size[2];
  int32_T Jm_size[2];
  int32_T I1_size[2];
  int32_T I3_size[2];
  int32_T b_H_size[2];
  int32_T SuJm_size[2];
  int32_T Sx_size[2];
  int32_T Su1_size[2];
  int32_T Hv_size[2];
  int32_T Ku1_size[2];
  int32_T Kx_size[2];
  int32_T b_y_size[2];
  int32_T varargin_4_size[2];
  int32_T cb_size[2];
  int32_T tmp_size[2];
  int32_T Su_size[2];
  int32_T RLinv_size[2];
  int32_T b_D_size[2];
  int32_T b_H_size_l[2];
  int32_T AcRow_size[2];
  int32_T b_H_size_o[2];
  int32_T b_A_size[2];
  int32_T b_size[2];
  int32_T tmp_size_p[2];
  int32_T tmp_size_o[2];
  int32_T tmp_size_c[2];
  int32_T assign_temp_a_size_o[2];
  int32_T assign_temp_b_size_o[2];
  int32_T assign_temp_c_size_h[2];
  int32_T assign_temp_d_size_i[2];
  int32_T assign_temp_a_size_g[2];
  int32_T assign_temp_b_size_c[2];
  int32_T assign_temp_c_size_o[2];
  int32_T assign_temp_d_size_g[2];
  int32_T vscale_size[2];
  int32_T z_size[2];
  int8_T b_ipiv_o[6];
  int8_T ipiv_g[6];
  boolean_T b_ad[4];
  real32_T rtb_Merge4_Data;
  int32_T idx;
  int32_T coffset;
  int32_T aoffset;
  int32_T knt;
  int32_T coltop;
  int32_T jp1j;
  int32_T jA;
  int32_T ijA;
  int32_T i;
  int32_T e_size;
  int32_T b_x_size;
  int32_T pny;
  int32_T nmoves;
  int32_T TotalFreeMoves;
  int32_T j;
  int32_T ioff;
  int32_T b_j;
  int32_T i_g;
  int32_T pny_b;
  int32_T loop_ub;
  int32_T nmoves_tmp;
  int32_T isMrows_size;
  int32_T tmp_size_k;
  int32_T Mu_size_idx_0;
  int32_T Mv_aux_size_idx_0;
  int32_T s_size_idx_0;
  int32_T Mu_size_idx_1_tmp;
  int32_T Mv_aux_size_idx_1_tmp;
  int32_T nmoves_tmp_c;
  int32_T varargin_1_j;
  int32_T i_a;
  int32_T loop_ub_d;
  int32_T i1;
  int32_T loop_ub_c;
  int32_T loop_ub_d0;
  int32_T input_sizes_idx_0;
  int32_T input_sizes_idx_1;
  int32_T i2;
  int32_T CA_tmp;
  int32_T varargin_1_size_idx_1;
  int32_T Sx_size_tmp;
  int32_T mc;
  int32_T coffset_a;
  int32_T boffset;
  int32_T aoffset_b;
  int32_T b_g;
  int32_T j_f;
  int32_T c_c;
  int32_T i_p;
  int32_T b_i;
  int32_T i3;
  int32_T kidx;
  int32_T i2_a;
  int32_T Tries;
  int32_T i_n;
  int32_T kidx_h;
  int32_T I2Jm_tmp;
  int32_T b_Kx_tmp;
  int32_T nA;
  int32_T tmp;
  int32_T exponent;
  int32_T b_exponent;
  int32_T i_m;
  int32_T iSave;
  int32_T iC_f;
  int32_T U_tmp;
  int32_T k_i;
  int32_T ii;
  int32_T knt_b;
  int32_T b_lastv;
  int32_T coltop_e;
  int32_T b_s;
  int32_T e_j_n;
  int32_T e_i;
  int32_T i4;
  int32_T b_s_p;
  int32_T i5;
  int32_T e_y_tmp;
  int32_T F_tmp;
  int32_T n_i;
  int32_T nb;
  int32_T nbitson;
  int32_T b_n;
  int32_T j_j;
  int32_T b_k;
  int32_T eint;
  int32_T i_l;
  int32_T i6;
  int32_T b_k_c;
  int32_T i7;
  int32_T b_A2_tmp;
  int32_T n_gr;
  int32_T nb_c;
  int32_T nbitson_l;
  int32_T n_e;
  int32_T coffset_d;
  int32_T aoffset_m;
  int32_T lastv;
  int32_T c_f;
  int32_T j_n;
  int32_T ii_o;
  int32_T A_tmp;
  int32_T jBcol;
  int32_T j_e;
  int32_T i_mp;
  int32_T coffset_c;
  int32_T aoffset_g;
  int32_T ii_b;
  int32_T lastv_p;
  int32_T j_p;
  int32_T j_a;
  int32_T jBcol_f;
  int32_T istart;
  int32_T ia;
  int32_T i_gr;
  int32_T itau;
  int32_T iaii;
  int32_T lastc;
  int32_T iac;
  int32_T e_b0;
  int32_T coltop_k;
  int32_T in;
  int32_T ia0;
  int32_T knt_k;
  int32_T lastc_b;
  int32_T b_ix;
  int32_T e_n;
  int32_T rowleft;
  int32_T jA_h;
  int32_T j_ni;
  int32_T coffset_m;
  int32_T TotalFreeMoves_g;
  int32_T nA_j;
  int32_T kDrop;
  int32_T kNext;
  int32_T last;
  int32_T idx_f;
  int32_T z_size_n;
  int32_T varargin_1_size_idx_1_g;
  int32_T b_m;
  int32_T b_n_d;
  int32_T i_j;
  int32_T b_A_cj;
  int32_T RLinv_idx_1;
  int32_T tau_size;
  int32_T TL_size_idx_0;
  int32_T Q_size_idx_0;
  int32_T R_size_idx_0;
  int32_T Q_size_idx_0_tmp;
  int32_T b_m_m;
  int32_T n_d;
  int32_T minmana;
  int32_T minmn;
  int32_T ii_n;
  int32_T mmi;
  int32_T mmip1;
  int32_T b_b;
  int32_T ix0;
  int32_T knt_p;
  int32_T coltop_kg;
  int32_T kend;
  int32_T k;
  int32_T g_k;
  int32_T jj;
  int32_T jp1j_c;
  int32_T c_n;
  int32_T e_k;
  int32_T jj_n;
  int32_T ix;
  int32_T t_c;
  int32_T v_d;
  int32_T ibcol;
  int32_T x_n;
  int32_T b_k_g;
  int32_T isMrows_tmp;
  int32_T t_tmp;
  int32_T t_lx;
  int32_T v_g;
  int32_T ibcol_p;
  int32_T x_ko;
  int32_T b_k_l;
  int32_T isMrows_tmp_b;
  int32_T t_tmp_c;
  int32_T b_degrees;
  int32_T emlN;
  int32_T Tries_f;
  int32_T loop_ub_o;
  int32_T tmp_size_d;
  int32_T loop_ub_tmp;
  int32_T idxAjj;
  int32_T j_l;
  int32_T ix_l;
  int32_T b_d;
  int32_T d_ku;
  int32_T b_ix_f;
  int32_T b_iy;
  int32_T b_k_p;
  int32_T i8;
  int32_T ia_k;
  int32_T i_k;
  int32_T itau_i;
  int32_T lastv_e;
  int32_T lastc_f;
  int32_T coltop_kx;
  int32_T b_ia;
  int32_T loop_ub_n;
  int32_T iyend;
  int32_T iy;
  int32_T b_iy_i;
  int32_T b_im;
  int32_T d_o;
  int32_T i9;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T loop_ub_dn;
  int32_T in1_size_idx_0;
  int32_T loop_ub_i;
  int32_T i10;
  int32_T im1n;
  int32_T in_g;
  int32_T itau_c;
  int32_T knt_e;
  int32_T lastc_a;
  int32_T l;
  int32_T b_ia_h;
  int32_T rowleft_e;
  int32_T c_ia;
  int32_T jy;
  int32_T b_ix_d;
  int32_T alpha1_tmp;
  int32_T work_tmp;
  int32_T kdefl;
  int32_T i_g5;
  int32_T L_e;
  int32_T k_e;
  int32_T m_g;
  int32_T nr;
  int32_T hoffset;
  int32_T b_j_g;
  int32_T iy_d;
  int32_T i11;
  int32_T loop_ub_tmp_n;
  int32_T i12;
  int32_T loop_ub_tmp_p;
  int32_T k_b;
  int32_T b_k_i;
  int32_T b_index_b;
  int32_T b_this_j;
  int32_T i13;
  int32_T i14;
  int32_T s_data_g;
  int32_T d_i;
  int32_T b_k_n;
  int32_T e_size_p;
  int32_T jj_f;
  int32_T b_j_f;
  int32_T ix_a;
  int32_T kdefl_g;
  int32_T i_ma;
  int32_T L_d;
  int32_T k_ef;
  int32_T m_e;
  int32_T nr_d;
  int32_T hoffset_j;
  int32_T L_n;
  int32_T ba_tmp;
  int32_T c_j;
  int32_T i_pm;
  int32_T coffset_aw;
  int32_T boffset_d;
  int32_T k_p;
  int32_T c_i_d;
  int32_T i15;
  int32_T loop_ub_p;
  int32_T i16;
  int32_T i17;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T aux_2_1;
  int32_T stride_0_0_f;
  int32_T stride_1_0_g;
  int32_T stride_2_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  int32_T stride_2_1;
  int32_T loop_ub_dp;
  int32_T loop_ub_h;
  int32_T b_ie;
  int32_T k_m;
  int32_T nA_c;
  int32_T minszA;
  int32_T c_lv;
  int32_T j_pb;
  int32_T i_i;
  int32_T mB;
  int32_T jBcol_b;
  int32_T kAcol;
  int32_T b_gn;
  int32_T j_o;
  int32_T b_k_b;
  int32_T i_e;
  int32_T y_e;
  int32_T i18;
  int32_T i19;
  int32_T jA_l;
  int32_T j_c;
  int32_T b_e;
  int32_T ijA_d;
  int32_T aoffset_o;
  int32_T b_l;
  int32_T i_h;
  int32_T d_l;
  int32_T b_i_c;
  int32_T newNumel;
  int32_T i_c;
  int32_T i20;
  int32_T stride_0_1_a;
  int32_T stride_1_1_i;
  int32_T loop_ub_l;
  int32_T newNumel_i;
  int32_T i_az;
  int32_T newNumel_ix;
  int32_T i_c3;
  int32_T i21;
  int32_T i22;
  int32_T aux_0_1_m;
  int32_T aux_1_1_n;
  int32_T stride_0_0_c;
  int32_T stride_1_0_n;
  int32_T stride_0_1_h;
  int32_T stride_1_1_iu;
  int32_T loop_ub_e;
  int32_T loop_ub_pc;
  int32_T in1_size_idx_0_k;
  int32_T in1_size_idx_1;
  int32_T i_i3;
  int32_T i_nl;
  int32_T i_o;
  int32_T mc_l;
  int32_T coffset_p;
  int32_T boffset_b;
  int32_T b_fy;
  int32_T j_i;
  int32_T c_ci;
  int32_T i_gl;
  int32_T b_i_i;
  int32_T i23;
  int32_T trueCount;
  int32_T b_i_b;
  int32_T c_i_n;
  uint32_T bpIdx;
  uint32_T b_q;
  SL_Bus_proc_control_std_msgs_Float32 b_varargout_2_p;
  SL_Bus_proc_control_std_msgs_Float32 BusAssignment_h;// '<S90>/Bus Assignment' 
  int8_T empty_non_axis_sizes[2];
  int8_T empty_non_axis_sizes_o[2];
  int8_T empty_non_axis_sizes_b[2];
  int16_T b_Mrows;
  int16_T ixw;
  uint8_T empty_non_axis_sizes_o1[2];
  uint8_T empty_non_axis_sizes_c[2];
  uint8_T empty_non_axis_sizes_j[2];
  uint8_T varargin_1_e[2];
  int8_T rtPrevAction;
  int8_T rtAction;
  int8_T sizes_idx_1;
  int8_T i24;
  uint8_T CastToDouble;                // '<S3>/Cast To Double'
  uint8_T DataTypeConversion_j;        // '<S10>/Data Type Conversion'
  uint8_T u_p;
  uint8_T i_np;
  boolean_T NOT;                       // '<S208>/NOT'
  boolean_T isReached;                 // '<S9>/Merge'
  boolean_T isTrajDone;                // '<S9>/Merge'
  boolean_T SourceBlock_o1;            // '<S275>/SourceBlock'
  boolean_T blockOrdering_o;           // '<S253>/Correct'
  boolean_T thrustersStatus[8];        // '<S128>/MPC manager'
  boolean_T b_varargout_1;
  boolean_T b_varargout_1_o;
  boolean_T Merge;                     // '<S3>/Merge'
  boolean_T NewDvlMsg;                 // '<S3>/Merge3'
  boolean_T newPressureMsg;            // '<S3>/Merge6'
  boolean_T Reset;                     // '<S87>/Reset'
  boolean_T empty_non_axis_sizes_d;
  boolean_T cTolComputed;
  boolean_T isT1Inf;
  boolean_T tempOK;
  boolean_T VECTOR_INPUT_AND_P_IS_INF;
  boolean_T MATRIX_INPUT_AND_P_IS_INF;
  SL_Bus_proc_control_std_msgs_Bool b_varargout_2_gq;
  SL_Bus_proc_control_std_msgs_Bool BusAssignment_i;
  SL_Bus_proc_control_std_msgs_UInt8 b_varargout_2_i;
  B_CurrentTime_proc_control_T CurrentTime_e;// '<S100>/Current Time'
  B_CurrentTime_proc_control_T CurrentTime;// '<S100>/Current Time'
};

// Block states (default storage) for system '<Root>'
struct DW_proc_control_T {
  TrajectoryManager_proc_contro_T obj; // '<S270>/MATLAB System'
  MultiTrajectoryManager_proc_c_T obj_o;// '<S269>/MATLAB System'
  robotics_slcore_internal_bl_p_T obj_j;// '<S287>/Polynomial Trajectory1'
  OpenLoopController_proc_contr_T obj_m;// '<S132>/MATLAB System'
  robotics_slcore_internal_bloc_T obj_j3;// '<S285>/Rotation Trajectory'
  mpcManager_proc_control_T obj_f;     // '<S128>/MPC manager'
  AddPose_proc_control_T obj_a;        // '<S270>/MATLAB System1'
  TrimPlant_proc_control_T obj_b;      // '<S130>/MATLAB System'
  rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
  HydroModel_proc_control_T obj_fj;    // '<S33>/MATLAB System'
  ros_slroscpp_internal_block_P_T obj_i;// '<S279>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ag;// '<S125>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_e;// '<S121>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_i1;// '<S117>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_p;// '<S113>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_og;// '<S112>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ap;// '<S107>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S104>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ab;// '<S102>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_k;// '<S98>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_kw;// '<S96>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_d;// '<S41>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_jj;// '<S27>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_bh;// '<S293>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_fx;// '<S292>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S291>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_oz;// '<S290>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_mt;// '<S289>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_hb;// '<S288>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_hd;// '<S283>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_df;// '<S275>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_cs;// '<S273>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_hh;// '<S201>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_k4;// '<S200>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p0;// '<S71>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ow;// '<S70>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_dh;// '<S69>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S68>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_hx;// '<S79>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_bg;// '<S78>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_df1;// '<S77>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_i4;// '<S76>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S42>/SourceBlock'
  real_T _DSTATE[8];                   // '<S210>/ '
  real_T Delay_DSTATE;                 // '<S3>/Delay'
  real_T Delay_DSTATE_e;               // '<S10>/Delay'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S285>/Discrete-Time Integrator'
  real_T Delay_DSTATE_i;               // '<S230>/Delay'
  real_T Delay_DSTATE_k;               // '<S129>/Delay'
  real_T last_mv_DSTATE[8];            // '<S170>/last_mv'
  real_T Delay1_DSTATE[88];            // '<S133>/Delay1'
  real_T UD_DSTATE[6];                 // '<S166>/UD'
  real_T last_mv_DSTATE_f[8];          // '<S136>/last_mv'
  real_T Delay1_DSTATE_e[8];           // '<S130>/Delay1'
  real_T DiscreteTransferFcn1_states;  // '<S17>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_k;// '<S18>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_o;// '<S19>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_i;// '<S20>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_g;// '<S21>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_h;// '<S22>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_l;// '<S23>/Discrete Transfer Fcn1'
  real_T DiscreteTransferFcn1_states_ge;// '<S24>/Discrete Transfer Fcn1'
  real_T UnitDelay_DSTATE[13];         // '<S1>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE_f[3];// '<S1>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE[3];// '<S1>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator2_DSTATE[4];// '<S1>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S1>/Discrete-Time Integrator3'
  real_T P[169];                       // '<S252>/DataStoreMemory - P'
  real_T x[13];                        // '<S252>/DataStoreMemory - x'
  real_T Drift_NextOutput[6];          // '<S12>/ Drift'
  real_T NextOutput;                   // '<S28>/White Noise'
  real_T NextOutput_b;                 // '<S29>/White Noise'
  real_T NextOutput_g;                 // '<S30>/White Noise'
  real_T NextOutput_l;                 // '<S31>/White Noise'
  real_T NextOutput_e;                 // '<S32>/White Noise'
  int32_T clockTickCounter;            // '<S133>/Pulse Generator'
  int32_T clockTickCounter_j;          // '<S130>/Pulse Generator'
  int32_T counter[6];                  // '<S12>/Sine Wave'
  uint32_T m_bpIndex[8];               // '<S129>/N to A'
  uint32_T m_bpIndex_c[8];             // '<S129>/N to PWM'
  uint32_T m_bpIndex_m[8];             // '<S11>/ PWM to N'
  uint32_T RandSeed[6];                // '<S12>/ Drift'
  uint32_T m_bpIndex_cj[8];            // '<S16>/N to RPM'
  uint32_T RandSeed_j;                 // '<S28>/White Noise'
  uint32_T RandSeed_d;                 // '<S29>/White Noise'
  uint32_T RandSeed_e;                 // '<S30>/White Noise'
  uint32_T RandSeed_n;                 // '<S31>/White Noise'
  uint32_T RandSeed_b;                 // '<S32>/White Noise'
  uint32_T state;                      // '<S33>/MATLAB System'
  uint32_T state_k[2];                 // '<S33>/MATLAB System'
  uint32_T state_i[625];               // '<S33>/MATLAB System'
  uint32_T method;                     // '<S33>/MATLAB System'
  AuvDifferentialEquation_proc__T obj_c3;// '<S1>/MATLAB System'
  uint16_T Delay_DSTATE_g[8];          // '<S7>/Delay'
  boolean_T Delay1_DSTATE_c;           // '<S270>/Delay1'
  boolean_T DelayInput1_DSTATE;        // '<S280>/Delay Input1'
  int8_T SwitchCase_ActiveSubsystem;   // '<S9>/Switch Case'
  int8_T SwitchCase_ActiveSubsystem_l; // '<S127>/Switch Case'
  int8_T DiscreteTimeIntegrator_PrevRese;// '<S1>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevRes;// '<S1>/Discrete-Time Integrator1'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
  uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S1>/Discrete-Time Integrator'
  uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S1>/Discrete-Time Integrator2'
  boolean_T Memory_PreviousInput[226]; // '<S170>/Memory'
  boolean_T Memory_PreviousInput_g[226];// '<S136>/Memory'
  boolean_T Memory_PreviousInput_i;    // '<S87>/Memory'
  boolean_T Memory_PreviousInput_f;    // '<S88>/Memory'
  boolean_T state_not_empty_e;         // '<S33>/MATLAB System'
  boolean_T MPCmanager_MODE;           // '<S7>/MPC manager'
  boolean_T ROSOutput_MODE;            // '<Root>/ROS Output'
  boolean_T Plotvalues_MODE;           // '<Root>/Plot values'
  boolean_T ModelePhysique_MODE;       // '<Root>/Modele Physique'
  DW_CurrentTime_proc_control_T CurrentTime_e;// '<S100>/Current Time'
  DW_CurrentTime_proc_control_T CurrentTime;// '<S100>/Current Time'
};

// Zero-crossing (trigger) state
struct PrevZCX_proc_control_T {
  ZCSigState Trajectorygenerator_Reset_ZCE;// '<S270>/Trajectory generator'
};

// External inputs (root inport signals with default storage)
struct ExtU_proc_control_T {
  real_T Inport;                       // '<Root>/Inport'
};

// Parameters (default storage)
struct P_proc_control_T_ {
  struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                           //  Referenced by:
                                           //    '<S14>/ y devant Z haut'
                                           //    '<S14>/Constant'
                                           //    '<S206>/Constant'
                                           //    '<S132>/MATLAB System'
                                           //    '<S233>/si y devant'

  struct_x7JWpgYpPywnYpZFC6VmZH mode;  // Variable: mode
                                          //  Referenced by: '<S10>/MATLAB System'

  real_T N[201];                       // Variable: N
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S129>/N to A'
                                          //    '<S129>/N to PWM'
                                          //    '<S16>/N to RPM'

  real_T RPM[201];                     // Variable: RPM
                                          //  Referenced by: '<S16>/N to RPM'

  real_T binv[48];                     // Variable: binv
                                          //  Referenced by: '<S132>/MATLAB System'

  real_T dSeedX;                       // Variable: dSeedX
                                          //  Referenced by: '<S12>/ Drift'

  real_T dmax[6];                      // Variable: dmax
                                          //  Referenced by: '<S12>/ Drift'

  real_T dmin[6];                      // Variable: dmin
                                          //  Referenced by: '<S12>/ Drift'

  real_T waveDiscreteFrequency[6];     // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S12>/Sine Wave'

  uint16_T A[201];                     // Variable: A
                                          //  Referenced by: '<S129>/N to A'

  uint16_T PWM[201];                   // Variable: PWM
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S129>/N to PWM'

  real_T BandLimitedWhiteNoise_Cov; // Mask Parameter: BandLimitedWhiteNoise_Cov
                                       //  Referenced by: '<S28>/Output'

  real_T BandLimitedWhiteNoise1_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise1_Cov
                                      //  Referenced by: '<S29>/Output'

  real_T BandLimitedWhiteNoise2_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise2_Cov
                                      //  Referenced by: '<S30>/Output'

  real_T BandLimitedWhiteNoise3_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise3_Cov
                                      //  Referenced by: '<S31>/Output'

  real_T BandLimitedWhiteNoise4_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise4_Cov
                                      //  Referenced by: '<S32>/Output'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S166>/UD'

  real_T BandLimitedWhiteNoise_seed;
                                   // Mask Parameter: BandLimitedWhiteNoise_seed
                                      //  Referenced by: '<S28>/White Noise'

  real_T BandLimitedWhiteNoise1_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise1_seed
                                     //  Referenced by: '<S29>/White Noise'

  real_T BandLimitedWhiteNoise2_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise2_seed
                                     //  Referenced by: '<S30>/White Noise'

  real_T BandLimitedWhiteNoise3_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise3_seed
                                     //  Referenced by: '<S31>/White Noise'

  real_T BandLimitedWhiteNoise4_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise4_seed
                                     //  Referenced by: '<S32>/White Noise'

  boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S87>/Initial Condition'
                                   //    '<S87>/Memory'

  boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S88>/Initial Condition'
                                  //    '<S88>/Memory'

  boolean_T DetectRisePositive_vinit;// Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S280>/Delay Input1'

  SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Out1_Y0;// Computed Parameter: Out1_Y0
                                                                  //  Referenced by: '<S276>/Out1'

  SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S275>/Constant'

  SL_Bus_proc_control_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                              //  Referenced by: '<S202>/Out1'

  SL_Bus_proc_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                     //  Referenced by: '<S200>/Constant'

  SL_Bus_proc_control_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                               //  Referenced by: '<S115>/Constant'

  SL_Bus_proc_control_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                         //  Referenced by: '<S203>/Out1'

  SL_Bus_proc_control_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                //  Referenced by: '<S201>/Constant'

  SL_Bus_proc_control_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                   //  Referenced by: '<S25>/Constant'

  SL_Bus_proc_control_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                    //  Referenced by: '<S109>/Constant'

  SL_Bus_proc_control_std_msgs_Int8MultiArray Constant_Value_lv;// Computed Parameter: Constant_Value_lv
                                                                   //  Referenced by: '<S108>/Constant'

  SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                             //  Referenced by: '<S122>/Constant'

  SL_Bus_proc_control_sensor_msgs_Imu Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                   //  Referenced by: '<S80>/Out1'

  SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                          //  Referenced by: '<S76>/Constant'

  SL_Bus_proc_control_sensor_msgs_Imu Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                   //  Referenced by: '<S72>/Out1'

  SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_l1;// Computed Parameter: Constant_Value_l1
                                                           //  Referenced by: '<S68>/Constant'

  SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                          //  Referenced by: '<S99>/Constant'

  struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                               //  Referenced by: '<S128>/MPC param'

  SL_Bus_proc_control_sonia_common_BodyVelocityDVL Out1_Y0_ma;// Computed Parameter: Out1_Y0_ma
                                                                 //  Referenced by: '<S82>/Out1'

  SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                      //  Referenced by: '<S78>/Constant'

  SL_Bus_proc_control_sonia_common_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                                //  Referenced by: '<S73>/Out1'

  SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_f2;// Computed Parameter: Constant_Value_f2
                                                                      //  Referenced by: '<S69>/Constant'

  SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S94>/Constant'

  SL_Bus_proc_control_sonia_common_PingMsg Out1_Y0_cv;// Computed Parameter: Out1_Y0_cv
                                                         //  Referenced by: '<S83>/Out1'

  SL_Bus_proc_control_sonia_common_PingMsg Constant_Value_oi;// Computed Parameter: Constant_Value_oi
                                                                //  Referenced by: '<S79>/Constant'

  SL_Bus_proc_control_sonia_common_PingMsg Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                        //  Referenced by: '<S75>/Out1'

  SL_Bus_proc_control_sonia_common_PingMsg Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                               //  Referenced by: '<S71>/Constant'

  SL_Bus_proc_control_sonia_common_PingMsg Constant_Value_k5;// Computed Parameter: Constant_Value_k5
                                                                //  Referenced by: '<S103>/Constant'

  struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                            //  Referenced by: '<S6>/Output'

  struct_ovWlOQLLs0y1mSxaL5ZDmG SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                    //  Referenced by: '<S1>/Sensors Output'

  struct_rlScCGcQggJ5TYrxrqGJfF CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                  //  Referenced by: '<S1>/Clean Output'

  struct_rlScCGcQggJ5TYrxrqGJfF Output_Y0_k;// Computed Parameter: Output_Y0_k
                                               //  Referenced by: '<S4>/Output'

  SL_Bus_proc_control_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                        //  Referenced by: '<S286>/Out1'

  SL_Bus_proc_control_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                //  Referenced by: '<S283>/Constant'

  SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                              //  Referenced by: '<S105>/Constant'

  SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                              //  Referenced by: '<S277>/Constant'

  SL_Bus_proc_control_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                      //  Referenced by: '<S299>/Out1'

  SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                             //  Referenced by: '<S293>/Constant'

  struct_TOFpsJJYcOBczOpEd57stD DVLMeasurments_Y0;// Computed Parameter: DVLMeasurments_Y0
                                                     //  Referenced by: '<S205>/DVL Measurments'

  SL_Bus_proc_control_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                        //  Referenced by: '<S274>/Out1'

  SL_Bus_proc_control_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                               //  Referenced by: '<S273>/Constant'

  SL_Bus_proc_control_geometry_msgs_Vector3 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                         //  Referenced by: '<S44>/Out1'

  SL_Bus_proc_control_geometry_msgs_Vector3 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                //  Referenced by: '<S42>/Constant'

  SL_Bus_proc_control_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                        //  Referenced by: '<S120>/Constant'

  SL_Bus_proc_control_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                 //  Referenced by: '<S294>/Out1'

  SL_Bus_proc_control_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                         //  Referenced by: '<S288>/Constant'

  SL_Bus_proc_control_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                 //  Referenced by: '<S296>/Out1'

  SL_Bus_proc_control_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                         //  Referenced by: '<S290>/Constant'

  SL_Bus_proc_control_std_msgs_Bool Out1_Y0_os;// Computed Parameter: Out1_Y0_os
                                                  //  Referenced by: '<S297>/Out1'

  SL_Bus_proc_control_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                        //  Referenced by: '<S291>/Constant'

  SL_Bus_proc_control_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                 //  Referenced by: '<S298>/Out1'

  SL_Bus_proc_control_std_msgs_Bool Constant_Value_pt;// Computed Parameter: Constant_Value_pt
                                                         //  Referenced by: '<S292>/Constant'

  SL_Bus_proc_control_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                    //  Referenced by: '<S81>/Out1'

  SL_Bus_proc_control_std_msgs_Float32 Constant_Value_dr;// Computed Parameter: Constant_Value_dr
                                                            //  Referenced by: '<S77>/Constant'

  SL_Bus_proc_control_std_msgs_Float32 Out1_Y0_nb;// Computed Parameter: Out1_Y0_nb
                                                     //  Referenced by: '<S74>/Out1'

  SL_Bus_proc_control_std_msgs_Float32 Constant_Value_oz;// Computed Parameter: Constant_Value_oz
                                                            //  Referenced by: '<S70>/Constant'

  SL_Bus_proc_control_std_msgs_Float32 Constant_Value_bv;// Computed Parameter: Constant_Value_bv
                                                            //  Referenced by: '<S97>/Constant'

  SL_Bus_proc_control_std_msgs_UInt8 Out1_Y0_kc;// Computed Parameter: Out1_Y0_kc
                                                   //  Referenced by: '<S295>/Out1'

  SL_Bus_proc_control_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                         //  Referenced by: '<S289>/Constant'

  real_T simulationwavedampB_Value;    // Expression: simulation.wave.damp.B
                                          //  Referenced by: '<S12>/simulation.wave.damp.B'

  real_T Constant_Value_h0;            // Expression: simulation.wave.damp.A
                                          //  Referenced by: '<S12>/Constant'

  real_T Saturation_UpperSat;          // Expression: simulation.wave.damp.min
                                          //  Referenced by: '<S12>/Saturation'

  real_T Saturation_LowerSat;          // Expression: simulation.wave.damp.max
                                          //  Referenced by: '<S12>/Saturation'

  real_T Constant2_Value[6];           // Expression: zeros(1,6)
                                          //  Referenced by: '<S12>/Constant2'

  real_T DiscreteTransferFcn1_NumCoef[2];// Expression: [physics.thruster.a1 0 ]
                                            //  Referenced by: '<S17>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef[2];// Expression: [1  physics.thruster.b0]
                                            //  Referenced by: '<S17>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialSta;// Expression: 0
                                            //  Referenced by: '<S17>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_k[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S18>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_n[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S18>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialS_k;// Expression: 0
                                            //  Referenced by: '<S18>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_n[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S19>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_m[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S19>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialS_g;// Expression: 0
                                            //  Referenced by: '<S19>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_e[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S20>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_b[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S20>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialS_h;// Expression: 0
                                            //  Referenced by: '<S20>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_b[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S21>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_l[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S21>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialS_m;// Expression: 0
                                            //  Referenced by: '<S21>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_i[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S22>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_l0[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S22>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_InitialS_b;// Expression: 0
                                            //  Referenced by: '<S22>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_c[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S23>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_a[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S23>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_Initial_mm;// Expression: 0
                                            //  Referenced by: '<S23>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_NumCoef_m[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S24>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_DenCoef_g[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S24>/Discrete Transfer Fcn1'

  real_T DiscreteTransferFcn1_Initial_gv;// Expression: 0
                                            //  Referenced by: '<S24>/Discrete Transfer Fcn1'

  real_T SineWave_Amp[6];              // Expression: simulation.wave.amplitudes
                                          //  Referenced by: '<S12>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                          //  Referenced by: '<S12>/Sine Wave'

  real_T SineWave_Offset[6];           // Expression: waveDiscretePhase
                                          //  Referenced by: '<S12>/Sine Wave'

  real_T UnitDelay_InitialCondition[13];// Expression: MPC.Xi
                                           //  Referenced by: '<S1>/Unit Delay'

  real_T Switch_Threshold;             // Expression: 0
                                          //  Referenced by: '<S12>/Switch'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S1>/Discrete-Time Integrator'

  real_T InitialAngularRates_Value[3]; // Expression: [0,0,0]
                                          //  Referenced by: '<S1>/Initial Angular Rates'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real_T InitialBodyvelocity_Value[3]; // Expression: [0,0,0]
                                          //  Referenced by: '<S1>/Initial Body velocity '

  real_T DiscreteTimeIntegrator3_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator3_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real_T WhiteNoise_Mean;              // Expression: 0
                                          //  Referenced by: '<S28>/White Noise'

  real_T WhiteNoise_StdDev;            // Computed Parameter: WhiteNoise_StdDev
                                          //  Referenced by: '<S28>/White Noise'

  real_T WhiteNoise_Mean_e;            // Expression: 0
                                          //  Referenced by: '<S29>/White Noise'

  real_T WhiteNoise_StdDev_d;         // Computed Parameter: WhiteNoise_StdDev_d
                                         //  Referenced by: '<S29>/White Noise'

  real_T WhiteNoise_Mean_c;            // Expression: 0
                                          //  Referenced by: '<S30>/White Noise'

  real_T WhiteNoise_StdDev_e;         // Computed Parameter: WhiteNoise_StdDev_e
                                         //  Referenced by: '<S30>/White Noise'

  real_T WhiteNoise_Mean_p;            // Expression: 0
                                          //  Referenced by: '<S31>/White Noise'

  real_T WhiteNoise_StdDev_j;         // Computed Parameter: WhiteNoise_StdDev_j
                                         //  Referenced by: '<S31>/White Noise'

  real_T WhiteNoise_Mean_l;            // Expression: 0
                                          //  Referenced by: '<S32>/White Noise'

  real_T WhiteNoise_StdDev_p;         // Computed Parameter: WhiteNoise_StdDev_p
                                         //  Referenced by: '<S32>/White Noise'

  real_T Constant1_Value[3];      // Expression: simulation.sensors.imu.acc.bias
                                     //  Referenced by: '<S14>/Constant1'

  real_T Gain_Gain;                    // Expression: 2
                                          //  Referenced by: '<S50>/Gain'

  real_T Gain1_Gain;                   // Expression: 2
                                          //  Referenced by: '<S50>/Gain1'

  real_T Constant_Value_mj;            // Expression: 0.5
                                          //  Referenced by: '<S50>/Constant'

  real_T Gain2_Gain;                   // Expression: 2
                                          //  Referenced by: '<S50>/Gain2'

  real_T u2_Gain;                      // Expression: 0.5
                                          //  Referenced by: '<S40>/1//2'

  real_T Constant_Value_k2;            // Expression: 0.5
                                          //  Referenced by: '<S54>/Constant'

  real_T Gain2_Gain_d;                 // Expression: 2
                                          //  Referenced by: '<S54>/Gain2'

  real_T Gain_Gain_j;                  // Expression: 2
                                          //  Referenced by: '<S54>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 2
                                          //  Referenced by: '<S54>/Gain1'

  real_T Gain_Gain_e;                  // Expression: 2
                                          //  Referenced by: '<S55>/Gain'

  real_T Constant_Value_gp;            // Expression: 0.5
                                          //  Referenced by: '<S55>/Constant'

  real_T Gain2_Gain_l;                 // Expression: 2
                                          //  Referenced by: '<S55>/Gain2'

  real_T Gain1_Gain_eg;                // Expression: 2
                                          //  Referenced by: '<S55>/Gain1'

  real_T Gain_Gain_m;                  // Expression: 2
                                          //  Referenced by: '<S56>/Gain'

  real_T Gain1_Gain_g;                 // Expression: 2
                                          //  Referenced by: '<S56>/Gain1'

  real_T Constant_Value_iw;            // Expression: 0.5
                                          //  Referenced by: '<S56>/Constant'

  real_T Gain2_Gain_b;                 // Expression: 2
                                          //  Referenced by: '<S56>/Gain2'

  real_T Gain_Gain_n;         // Expression: simulation.sensors.depth.resolution
                                 //  Referenced by: '<S14>/Gain'

  real_T Gain1_Gain_h;          // Expression: simulation.sensors.dvl.resolution
                                   //  Referenced by: '<S14>/Gain1'

  real_T Constant_Value_ah;            // Expression: 0.5
                                          //  Referenced by: '<S60>/Constant'

  real_T Gain_Gain_a;                  // Expression: 2
                                          //  Referenced by: '<S60>/Gain'

  real_T Gain1_Gain_b;                 // Expression: 2
                                          //  Referenced by: '<S60>/Gain1'

  real_T Gain2_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S60>/Gain2'

  real_T Constant_Value_ar;            // Expression: 0.5
                                          //  Referenced by: '<S61>/Constant'

  real_T Gain_Gain_c;                  // Expression: 2
                                          //  Referenced by: '<S61>/Gain'

  real_T Gain1_Gain_a;                 // Expression: 2
                                          //  Referenced by: '<S61>/Gain1'

  real_T Gain2_Gain_a;                 // Expression: 2
                                          //  Referenced by: '<S61>/Gain2'

  real_T Constant_Value_i2;            // Expression: 0.5
                                          //  Referenced by: '<S62>/Constant'

  real_T Gain_Gain_b;                  // Expression: 2
                                          //  Referenced by: '<S62>/Gain'

  real_T Gain1_Gain_f;                 // Expression: 2
                                          //  Referenced by: '<S62>/Gain1'

  real_T Gain2_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S62>/Gain2'

  real_T y_Y0;                         // Computed Parameter: y_Y0
                                          //  Referenced by: '<S67>/y'

  real_T Constant_Value_f2j;           // Expression: 0
                                          //  Referenced by: '<S67>/Constant'

  real_T Constant1_Value_h;            // Expression: 0
                                          //  Referenced by: '<S67>/Constant1'

  real_T Constant_Value_pr;            // Expression: InsertTimeStamp
                                          //  Referenced by: '<S100>/Constant'

  real_T Constant1_Value_a;            // Expression: SetFrameID
                                          //  Referenced by: '<S100>/Constant1'

  real_T Constant_Value_lo;            // Expression: MPC.nx
                                          //  Referenced by: '<S114>/Constant'

  real_T Constant1_Value_d;            // Expression: MPC.nu
                                          //  Referenced by: '<S114>/Constant1'

  real_T thrust_Y0;                    // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

  real_T Constant_Value_j;             // Expression: InsertTimeStamp
                                          //  Referenced by: '<S123>/Constant'

  real_T Constant1_Value_l;            // Expression: SetFrameID
                                          //  Referenced by: '<S123>/Constant1'

  real_T E_zero_Value[8];              // Expression: zeros(1,8)
                                          //  Referenced by: '<S134>/E_zero'

  real_T F_zero_Value[13];             // Expression: zeros(1,13)
                                          //  Referenced by: '<S134>/F_zero'

  real_T G_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/G_zero'

  real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                           //  Referenced by: '<S136>/LastPcov'

  real_T extmv_zero_Value[8];          // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/ext.mv_zero'

  real_T extmv_scale_Gain[8];          // Expression: RMVscale
                                          //  Referenced by: '<S136>/ext.mv_scale'

  real_T last_mv_InitialCondition[8];  // Expression: lastu+uoff
                                          //  Referenced by: '<S136>/last_mv'

  real_T Delay1_InitialCondition[8];   // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S130>/Delay1'

  real_T Constant_Value_e3[6];         // Expression: zeros(1,6)
                                          //  Referenced by: '<S130>/Constant'

  real_T Constant1_Value_m[2];         // Expression: zeros(1,2)
                                          //  Referenced by: '<S130>/Constant1'

  real_T ym_zero_Value[13];            // Expression: zeros(nym,1)
                                          //  Referenced by: '<S136>/ym_zero'

  real_T md_zero_Value;                // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/md_zero'

  real_T ymin_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymin_zero'

  real_T ymax_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymax_zero'

  real_T umin_scale4_Gain[8];      // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S136>/umin_scale4'

  real_T ymin_scale1_Gain[13];      // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S136>/ymin_scale1'

  real_T S_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/S_zero'

  real_T ymin_scale2_Gain;         // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S136>/ymin_scale2'

  real_T switch_zero_Value;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/switch_zero'

  real_T mvtarget_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/mv.target_zero'

  real_T uref_scale_Gain[8];           // Expression: RMVscale
                                          //  Referenced by: '<S136>/uref_scale'

  real_T ecrwt_zero_Value;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/ecr.wt_zero'

  real_T u_scale_Gain[8];              // Expression: MVscale
                                          //  Referenced by: '<S136>/u_scale'

  real_T PulseGenerator_Amp;           // Expression: 1
                                          //  Referenced by: '<S130>/Pulse Generator'

  real_T PulseGenerator_Period;        // Expression: 2
                                          //  Referenced by: '<S130>/Pulse Generator'

  real_T PulseGenerator_Duty;          // Expression: 1
                                          //  Referenced by: '<S130>/Pulse Generator'

  real_T PulseGenerator_PhaseDelay;    // Expression: 0
                                          //  Referenced by: '<S130>/Pulse Generator'

  real_T MATLABSystem_k;               // Expression: 40
                                          //  Referenced by: '<S132>/MATLAB System'

  real_T Constant_Value_d1;            // Expression: 0
                                          //  Referenced by: '<S132>/Constant'

  real_T Constant1_Value_p;            // Expression: 0
                                          //  Referenced by: '<S132>/Constant1'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S166>/TSamp'

  real_T Constant_Value_ct[8];         // Expression: zeros(1,8)
                                          //  Referenced by: '<S133>/Constant'

  real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S170>/last_mv'

  real_T ym_zero_Value_l[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S170>/ym_zero'

  real_T md_zero_Value_n;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/md_zero'

  real_T ymin_zero_Value_n[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S168>/ymin_zero'

  real_T ymax_zero_Value_h[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S168>/ymax_zero'

  real_T E_zero_Value_l[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S168>/E_zero'

  real_T umin_scale4_Gain_h[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S170>/umin_scale4'

  real_T F_zero_Value_o[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S168>/F_zero'

  real_T ymin_scale1_Gain_e[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S170>/ymin_scale1'

  real_T G_zero_Value_k;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/G_zero'

  real_T S_zero_Value_h;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/S_zero'

  real_T ymin_scale2_Gain_a;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S170>/ymin_scale2'

  real_T switch_zero_Value_d;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/switch_zero'

  real_T extmv_zero_Value_n[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S168>/ext.mv_zero'

  real_T extmv_scale_Gain_n[8];        // Expression: RMVscale
                                          //  Referenced by: '<S170>/ext.mv_scale'

  real_T mvtarget_zero_Value_i[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S168>/mv.target_zero'

  real_T uref_scale_Gain_h[8];         // Expression: RMVscale
                                          //  Referenced by: '<S170>/uref_scale'

  real_T ecrwt_zero_Value_h;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/ecr.wt_zero'

  real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                          //  Referenced by: '<S133>/Delay1'

  real_T Delay2_InitialCondition[143]; // Expression: repmat(MPC.Xi.',11,1)
                                          //  Referenced by: '<S133>/Delay2'

  real_T Constant3_Value;              // Expression: MPC.Ts
                                          //  Referenced by: '<S133>/Constant3'

  real_T Constant1_Value_k;            // Expression: MPC.dts
                                          //  Referenced by: '<S133>/Constant1'

  real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                             //  Referenced by: '<S170>/LastPcov'

  real_T u_scale_Gain_i[8];            // Expression: MVscale
                                          //  Referenced by: '<S170>/u_scale'

  real_T PulseGenerator_Amp_i;         // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

  real_T PulseGenerator_Period_e;      // Expression: 2
                                          //  Referenced by: '<S133>/Pulse Generator'

  real_T PulseGenerator_Duty_j;        // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

  real_T PulseGenerator_PhaseDelay_i;  // Expression: 0
                                          //  Referenced by: '<S133>/Pulse Generator'

  real_T useq_scale_Gain[88];          // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S170>/useq_scale'

  real_T useq_scale1_Gain[143];        // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S170>/useq_scale1'

  real_T Constant_Value_mg;            // Expression: 0
                                          //  Referenced by: '<S131>/Constant'

  real_T Constant1_Value_n[8];         // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S131>/Constant1'

  real_T Constant2_Value_p;            // Expression: 0
                                          //  Referenced by: '<S131>/Constant2'

  real_T Constant_Value_hf;            // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

  real_T Constant1_Value_f;            // Expression: 0
                                          //  Referenced by: '<S7>/Constant1'

  real_T Merge_1_InitialOutput;     // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

  real_T Merge_2_InitialOutput;     // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

  real_T Merge_3_InitialOutput;     // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S129>/Delay'

  real_T PSUsafe_UpperSat;             // Expression: MPC.tmax
                                          //  Referenced by: '<S129>/PSU safe'

  real_T PSUsafe_LowerSat;             // Expression: MPC.tmin
                                          //  Referenced by: '<S129>/PSU safe'

  real_T Quat_Y0;                      // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S233>/Quat'

  real_T u2_Gain_b;                    // Expression: 0.5
                                          //  Referenced by: '<S234>/1//2'

  real_T Constant1_Value_aa; // Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S205>/Constant1'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S230>/Constant6'

  real_T Delay_InitialCondition_l;     // Expression: 1
                                          //  Referenced by: '<S230>/Delay'

  real_T Constant_Value_fg;            // Expression: 0.5
                                          //  Referenced by: '<S236>/Constant'

  real_T Gain_Gain_o;                  // Expression: 2
                                          //  Referenced by: '<S236>/Gain'

  real_T Gain1_Gain_k;                 // Expression: 2
                                          //  Referenced by: '<S236>/Gain1'

  real_T Gain2_Gain_o;                 // Expression: 2
                                          //  Referenced by: '<S236>/Gain2'

  real_T Constant_Value_j5;            // Expression: 0.5
                                          //  Referenced by: '<S237>/Constant'

  real_T Gain_Gain_mq;                 // Expression: 2
                                          //  Referenced by: '<S237>/Gain'

  real_T Gain1_Gain_bk;                // Expression: 2
                                          //  Referenced by: '<S237>/Gain1'

  real_T Gain2_Gain_k;                 // Expression: 2
                                          //  Referenced by: '<S237>/Gain2'

  real_T Constant_Value_ol;            // Expression: 0.5
                                          //  Referenced by: '<S238>/Constant'

  real_T Gain_Gain_nh;                 // Expression: 2
                                          //  Referenced by: '<S238>/Gain'

  real_T Gain1_Gain_c;                 // Expression: 2
                                          //  Referenced by: '<S238>/Gain1'

  real_T Gain2_Gain_br;                // Expression: 2
                                          //  Referenced by: '<S238>/Gain2'

  real_T DepthMeasurments_Y0;         // Computed Parameter: DepthMeasurments_Y0
                                         //  Referenced by: '<S206>/Depth Measurments'

  real_T Constant_Value_ay;            // Expression: 0.5
                                          //  Referenced by: '<S246>/Constant'

  real_T Gain_Gain_bk;                 // Expression: 2
                                          //  Referenced by: '<S246>/Gain'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S246>/Gain1'

  real_T Gain2_Gain_dh;                // Expression: 2
                                          //  Referenced by: '<S246>/Gain2'

  real_T xhat_Y0;                      // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S209>/xhat'

  real_T Constant_Value_lx;            // Expression: 1
                                          //  Referenced by: '<S209>/Constant'

  real_T Q_Value[169];                 // Expression: p.Q
                                          //  Referenced by: '<S252>/Q'

  real_T R3_Value;                     // Expression: p.R{3}
                                          //  Referenced by: '<S252>/R3'

  real_T MeasurementFcn3Inputs_Value;  // Expression: 1
                                          //  Referenced by: '<S252>/MeasurementFcn3Inputs'

  real_T R2_Value[9];                  // Expression: p.R{2}
                                          //  Referenced by: '<S252>/R2'

  real_T MeasurementFcn2Inputs_Value;  // Expression: 1
                                          //  Referenced by: '<S252>/MeasurementFcn2Inputs'

  real_T R1_Value[49];                 // Expression: p.R{1}
                                          //  Referenced by: '<S252>/R1'

  real_T MeasurementFcn1Inputs_Value;  // Expression: 0
                                          //  Referenced by: '<S252>/MeasurementFcn1Inputs'

  real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                               //  Referenced by: '<S252>/DataStoreMemory - P'

  real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                              //  Referenced by: '<S252>/DataStoreMemory - x'

  real_T Constant7_Value[7];           // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S265>/Constant7'

  real_T Constant3_Value_f;            // Expression: MPC.p
                                          //  Referenced by: '<S265>/Constant3'

  real_T MATLABSystem_linearConvergence;// Expression: .25
                                           //  Referenced by: '<S270>/MATLAB System'

  real_T MATLABSystem_quaternionConverge;// Expression: .22
                                            //  Referenced by: '<S270>/MATLAB System'

  real_T MATLABSystem_TargetThreshold; // Expression: 2
                                          //  Referenced by: '<S270>/MATLAB System'

  real_T linWpts_Y0;                   // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S282>/linWpts'

  real_T RotWpts_Y0;                   // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S282>/RotWpts'

  real_T time_Y0;                      // Computed Parameter: time_Y0
                                          //  Referenced by: '<S282>/time'

  real_T target_Y0;                    // Computed Parameter: target_Y0
                                          //  Referenced by: '<S282>/target'

  real_T Constant1_Value_o;            // Expression: 0
                                          //  Referenced by: '<S282>/Constant1'

  real_T Out1_Y0_i;                    // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S284>/Out1'

  real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                               //  Referenced by: '<S287>/Polynomial Trajectory1'

  real_T Constant_Value_ep;            // Expression: 1
                                          //  Referenced by: '<S285>/Constant'

  real_T DiscreteTimeIntegrator_gainva_e;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_e
                             //  Referenced by: '<S285>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S285>/Discrete-Time Integrator'

  real_T Constant_Value_ha;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant'

  real_T Constant_Value_m5[13];     // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S263>/Constant'

  real_T Constant3_Value_o;            // Expression: MPC.p
                                          //  Referenced by: '<S263>/Constant3'

  real_T Delay_InitialCondition_c;     // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

  real_T Constant_Value_de;            // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T _InitialCondition[8];         // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S210>/ '

  real_T Delay_InitialCondition_j;     // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

  real_T Gain_Gain_g;                  // Expression: -1
                                          //  Referenced by: '<S266>/Gain'

  real_T Merge_1_InitialOutput_l; // Computed Parameter: Merge_1_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

  real_T Merge_4_InitialOutput;     // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S9>/Merge'

  char_T StringConstant1_String[256];
                                   // Computed Parameter: StringConstant1_String
                                      //  Referenced by: '<S100>/String Constant1'

  char_T StringConstant1_String_p[256];
                                 // Computed Parameter: StringConstant1_String_p
                                    //  Referenced by: '<S123>/String Constant1'

  int32_T FixedHorizonOptimizer_Ndis;  // Expression: Ndis
                                          //  Referenced by: '<S198>/FixedHorizonOptimizer'

  uint16_T mv_Y0;                      // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

  uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

  boolean_T hydronew_Y0;               // Computed Parameter: hydronew_Y0
                                          //  Referenced by: '<S66>/hydro new'

  boolean_T hydronew_Y0_a;             // Computed Parameter: hydronew_Y0_a
                                          //  Referenced by: '<S65>/hydro new'

  boolean_T Memory_InitialCondition[226];// Expression: iA
                                            //  Referenced by: '<S136>/Memory'

  boolean_T Memory_InitialCondition_p[226];// Expression: iA
                                              //  Referenced by: '<S170>/Memory'

  boolean_T yBlockOrdering_Y0;         // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S253>/yBlockOrdering'

  boolean_T yBlockOrdering_Y0_o;      // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S254>/yBlockOrdering'

  boolean_T yBlockOrdering_Y0_i;      // Computed Parameter: yBlockOrdering_Y0_i
                                         //  Referenced by: '<S255>/yBlockOrdering'

  boolean_T BlockOrdering_Value;       // Expression: true()
                                          //  Referenced by: '<S252>/BlockOrdering'

  boolean_T Enable1_Value;             // Expression: true()
                                          //  Referenced by: '<S252>/Enable1'

  boolean_T Enable3_Value;             // Expression: true()
                                          //  Referenced by: '<S252>/Enable3'

  boolean_T Constant1_Value_ds;        // Expression: false
                                          //  Referenced by: '<S265>/Constant1'

  boolean_T Constant2_Value_l;         // Expression: false
                                          //  Referenced by: '<S265>/Constant2'

  boolean_T Constant_Value_hm;         // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S281>/Constant'

  boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S270>/Delay1'

  boolean_T Constant2_Value_i;         // Expression: false
                                          //  Referenced by: '<S270>/Constant2'

  boolean_T Constant5_Value;           // Expression: false
                                          //  Referenced by: '<S263>/Constant5'

  boolean_T Constant4_Value;           // Expression: false
                                          //  Referenced by: '<S263>/Constant4'

  boolean_T Merge_2_InitialOutput_l;
                                  // Computed Parameter: Merge_2_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

  boolean_T Merge_3_InitialOutput_l;
                                  // Computed Parameter: Merge_3_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

  uint8_T Switch_Threshold_d;          // Computed Parameter: Switch_Threshold_d
                                          //  Referenced by: '<S7>/Switch'

};

// Real-time Model Data Structure
struct tag_RTM_proc_control_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint16_T TID[6];
    } TaskCounters;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_proc_control_T proc_control_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_proc_control_T proc_control_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_proc_control_T proc_control_DW;

// Zero-crossing (trigger) state
extern PrevZCX_proc_control_T proc_control_PrevZCX;

#ifdef __cplusplus

extern "C"
{

#endif

  // External inputs (root inport signals with default storage)
  extern struct ExtU_proc_control_T proc_control_U;

#ifdef __cplusplus

}

#endif

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void proc_control_initialize(void);
  extern void proc_control_step(void);
  extern void proc_control_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_proc_control_T *const proc_control_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S33>/Scope' : Unused code path elimination
//  Block '<S33>/phi' : Unused code path elimination
//  Block '<S33>/rho' : Unused code path elimination
//  Block '<S33>/tetha' : Unused code path elimination
//  Block '<S48>/Constant' : Unused code path elimination
//  Block '<S48>/Gain' : Unused code path elimination
//  Block '<S48>/Gain1' : Unused code path elimination
//  Block '<S48>/Gain2' : Unused code path elimination
//  Block '<S48>/Product' : Unused code path elimination
//  Block '<S48>/Product1' : Unused code path elimination
//  Block '<S48>/Product2' : Unused code path elimination
//  Block '<S48>/Product3' : Unused code path elimination
//  Block '<S48>/Product4' : Unused code path elimination
//  Block '<S48>/Product5' : Unused code path elimination
//  Block '<S48>/Product6' : Unused code path elimination
//  Block '<S48>/Product7' : Unused code path elimination
//  Block '<S48>/Product8' : Unused code path elimination
//  Block '<S48>/Sum' : Unused code path elimination
//  Block '<S48>/Sum1' : Unused code path elimination
//  Block '<S48>/Sum2' : Unused code path elimination
//  Block '<S48>/Sum3' : Unused code path elimination
//  Block '<S49>/Constant' : Unused code path elimination
//  Block '<S49>/Gain' : Unused code path elimination
//  Block '<S49>/Gain1' : Unused code path elimination
//  Block '<S49>/Gain2' : Unused code path elimination
//  Block '<S49>/Product' : Unused code path elimination
//  Block '<S49>/Product1' : Unused code path elimination
//  Block '<S49>/Product2' : Unused code path elimination
//  Block '<S49>/Product3' : Unused code path elimination
//  Block '<S49>/Product4' : Unused code path elimination
//  Block '<S49>/Product5' : Unused code path elimination
//  Block '<S49>/Product6' : Unused code path elimination
//  Block '<S49>/Product7' : Unused code path elimination
//  Block '<S49>/Product8' : Unused code path elimination
//  Block '<S49>/Sum' : Unused code path elimination
//  Block '<S49>/Sum1' : Unused code path elimination
//  Block '<S49>/Sum2' : Unused code path elimination
//  Block '<S49>/Sum3' : Unused code path elimination
//  Block '<S2>/Scope1' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S3>/Display' : Unused code path elimination
//  Block '<S85>/Data Type Duplicate' : Unused code path elimination
//  Block '<S87>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S86>/Data Type Duplicate' : Unused code path elimination
//  Block '<S88>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S137>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S138>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S139>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S140>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S141>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S142>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S143>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S144>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S145>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S146>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S147>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S148>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S149>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S150>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S151>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S152>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S153>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S154>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S155>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S156>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S157>/Vector Dimension Check' : Unused code path elimination
//  Block '<S158>/Vector Dimension Check' : Unused code path elimination
//  Block '<S159>/Vector Dimension Check' : Unused code path elimination
//  Block '<S160>/Vector Dimension Check' : Unused code path elimination
//  Block '<S161>/Vector Dimension Check' : Unused code path elimination
//  Block '<S162>/Vector Dimension Check' : Unused code path elimination
//  Block '<S136>/last_x' : Unused code path elimination
//  Block '<S163>/Vector Dimension Check' : Unused code path elimination
//  Block '<S136>/useq_scale' : Unused code path elimination
//  Block '<S136>/useq_scale1' : Unused code path elimination
//  Block '<S130>/Constant2' : Unused code path elimination
//  Block '<S130>/Gain' : Unused code path elimination
//  Block '<S130>/Scope' : Unused code path elimination
//  Block '<S127>/Display' : Unused code path elimination
//  Block '<S131>/Constant3' : Unused code path elimination
//  Block '<S166>/Data Type Duplicate' : Unused code path elimination
//  Block '<S170>/Floor' : Unused code path elimination
//  Block '<S170>/Floor1' : Unused code path elimination
//  Block '<S171>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S172>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S173>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S174>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S175>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S176>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S177>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S178>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S179>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S180>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S181>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S182>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S183>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S184>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S185>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S186>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S187>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S188>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S189>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S190>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S191>/Vector Dimension Check' : Unused code path elimination
//  Block '<S192>/Vector Dimension Check' : Unused code path elimination
//  Block '<S193>/Vector Dimension Check' : Unused code path elimination
//  Block '<S194>/Vector Dimension Check' : Unused code path elimination
//  Block '<S195>/Vector Dimension Check' : Unused code path elimination
//  Block '<S196>/Vector Dimension Check' : Unused code path elimination
//  Block '<S170>/last_x' : Unused code path elimination
//  Block '<S197>/Vector Dimension Check' : Unused code path elimination
//  Block '<S168>/m_zero' : Unused code path elimination
//  Block '<S168>/p_zero' : Unused code path elimination
//  Block '<S129>/Scope1' : Unused code path elimination
//  Block '<S129>/Scope2' : Unused code path elimination
//  Block '<S204>/Constant1' : Unused code path elimination
//  Block '<S204>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S218>/Product' : Unused code path elimination
//  Block '<S218>/Product1' : Unused code path elimination
//  Block '<S218>/Product2' : Unused code path elimination
//  Block '<S218>/Product3' : Unused code path elimination
//  Block '<S223>/Product' : Unused code path elimination
//  Block '<S223>/Product1' : Unused code path elimination
//  Block '<S223>/Product2' : Unused code path elimination
//  Block '<S223>/Product3' : Unused code path elimination
//  Block '<S223>/Sum' : Unused code path elimination
//  Block '<S222>/sqrt' : Unused code path elimination
//  Block '<S219>/Constant' : Unused code path elimination
//  Block '<S219>/Gain' : Unused code path elimination
//  Block '<S219>/Gain1' : Unused code path elimination
//  Block '<S219>/Gain2' : Unused code path elimination
//  Block '<S219>/Product' : Unused code path elimination
//  Block '<S219>/Product1' : Unused code path elimination
//  Block '<S219>/Product2' : Unused code path elimination
//  Block '<S219>/Product3' : Unused code path elimination
//  Block '<S219>/Product4' : Unused code path elimination
//  Block '<S219>/Product5' : Unused code path elimination
//  Block '<S219>/Product6' : Unused code path elimination
//  Block '<S219>/Product7' : Unused code path elimination
//  Block '<S219>/Product8' : Unused code path elimination
//  Block '<S219>/Sum' : Unused code path elimination
//  Block '<S219>/Sum1' : Unused code path elimination
//  Block '<S219>/Sum2' : Unused code path elimination
//  Block '<S219>/Sum3' : Unused code path elimination
//  Block '<S220>/Constant' : Unused code path elimination
//  Block '<S220>/Gain' : Unused code path elimination
//  Block '<S220>/Gain1' : Unused code path elimination
//  Block '<S220>/Gain2' : Unused code path elimination
//  Block '<S220>/Product' : Unused code path elimination
//  Block '<S220>/Product1' : Unused code path elimination
//  Block '<S220>/Product2' : Unused code path elimination
//  Block '<S220>/Product3' : Unused code path elimination
//  Block '<S220>/Product4' : Unused code path elimination
//  Block '<S220>/Product5' : Unused code path elimination
//  Block '<S220>/Product6' : Unused code path elimination
//  Block '<S220>/Product7' : Unused code path elimination
//  Block '<S220>/Product8' : Unused code path elimination
//  Block '<S220>/Sum' : Unused code path elimination
//  Block '<S220>/Sum1' : Unused code path elimination
//  Block '<S220>/Sum2' : Unused code path elimination
//  Block '<S220>/Sum3' : Unused code path elimination
//  Block '<S221>/Constant' : Unused code path elimination
//  Block '<S221>/Gain' : Unused code path elimination
//  Block '<S221>/Gain1' : Unused code path elimination
//  Block '<S221>/Gain2' : Unused code path elimination
//  Block '<S221>/Product' : Unused code path elimination
//  Block '<S221>/Product1' : Unused code path elimination
//  Block '<S221>/Product2' : Unused code path elimination
//  Block '<S221>/Product3' : Unused code path elimination
//  Block '<S221>/Product4' : Unused code path elimination
//  Block '<S221>/Product5' : Unused code path elimination
//  Block '<S221>/Product6' : Unused code path elimination
//  Block '<S221>/Product7' : Unused code path elimination
//  Block '<S221>/Product8' : Unused code path elimination
//  Block '<S221>/Sum' : Unused code path elimination
//  Block '<S221>/Sum1' : Unused code path elimination
//  Block '<S221>/Sum2' : Unused code path elimination
//  Block '<S221>/Sum3' : Unused code path elimination
//  Block '<S224>/Product' : Unused code path elimination
//  Block '<S224>/Product1' : Unused code path elimination
//  Block '<S224>/Product2' : Unused code path elimination
//  Block '<S224>/Product3' : Unused code path elimination
//  Block '<S229>/Product' : Unused code path elimination
//  Block '<S229>/Product1' : Unused code path elimination
//  Block '<S229>/Product2' : Unused code path elimination
//  Block '<S229>/Product3' : Unused code path elimination
//  Block '<S229>/Sum' : Unused code path elimination
//  Block '<S228>/sqrt' : Unused code path elimination
//  Block '<S225>/Constant' : Unused code path elimination
//  Block '<S225>/Gain' : Unused code path elimination
//  Block '<S225>/Gain1' : Unused code path elimination
//  Block '<S225>/Gain2' : Unused code path elimination
//  Block '<S225>/Product' : Unused code path elimination
//  Block '<S225>/Product1' : Unused code path elimination
//  Block '<S225>/Product2' : Unused code path elimination
//  Block '<S225>/Product3' : Unused code path elimination
//  Block '<S225>/Product4' : Unused code path elimination
//  Block '<S225>/Product5' : Unused code path elimination
//  Block '<S225>/Product6' : Unused code path elimination
//  Block '<S225>/Product7' : Unused code path elimination
//  Block '<S225>/Product8' : Unused code path elimination
//  Block '<S225>/Sum' : Unused code path elimination
//  Block '<S225>/Sum1' : Unused code path elimination
//  Block '<S225>/Sum2' : Unused code path elimination
//  Block '<S225>/Sum3' : Unused code path elimination
//  Block '<S226>/Constant' : Unused code path elimination
//  Block '<S226>/Gain' : Unused code path elimination
//  Block '<S226>/Gain1' : Unused code path elimination
//  Block '<S226>/Gain2' : Unused code path elimination
//  Block '<S226>/Product' : Unused code path elimination
//  Block '<S226>/Product1' : Unused code path elimination
//  Block '<S226>/Product2' : Unused code path elimination
//  Block '<S226>/Product3' : Unused code path elimination
//  Block '<S226>/Product4' : Unused code path elimination
//  Block '<S226>/Product5' : Unused code path elimination
//  Block '<S226>/Product6' : Unused code path elimination
//  Block '<S226>/Product7' : Unused code path elimination
//  Block '<S226>/Product8' : Unused code path elimination
//  Block '<S226>/Sum' : Unused code path elimination
//  Block '<S226>/Sum1' : Unused code path elimination
//  Block '<S226>/Sum2' : Unused code path elimination
//  Block '<S226>/Sum3' : Unused code path elimination
//  Block '<S227>/Constant' : Unused code path elimination
//  Block '<S227>/Gain' : Unused code path elimination
//  Block '<S227>/Gain1' : Unused code path elimination
//  Block '<S227>/Gain2' : Unused code path elimination
//  Block '<S227>/Product' : Unused code path elimination
//  Block '<S227>/Product1' : Unused code path elimination
//  Block '<S227>/Product2' : Unused code path elimination
//  Block '<S227>/Product3' : Unused code path elimination
//  Block '<S227>/Product4' : Unused code path elimination
//  Block '<S227>/Product5' : Unused code path elimination
//  Block '<S227>/Product6' : Unused code path elimination
//  Block '<S227>/Product7' : Unused code path elimination
//  Block '<S227>/Product8' : Unused code path elimination
//  Block '<S227>/Sum' : Unused code path elimination
//  Block '<S227>/Sum1' : Unused code path elimination
//  Block '<S227>/Sum2' : Unused code path elimination
//  Block '<S227>/Sum3' : Unused code path elimination
//  Block '<S204>/Scope' : Unused code path elimination
//  Block '<S204>/Sum4' : Unused code path elimination
//  Block '<S206>/Discrete Transfer Fcn1' : Unused code path elimination
//  Block '<S241>/Data Type Duplicate' : Unused code path elimination
//  Block '<S241>/Diff' : Unused code path elimination
//  Block '<S241>/TSamp' : Unused code path elimination
//  Block '<S241>/UD' : Unused code path elimination
//  Block '<S244>/Constant' : Unused code path elimination
//  Block '<S244>/Gain' : Unused code path elimination
//  Block '<S244>/Gain1' : Unused code path elimination
//  Block '<S244>/Gain2' : Unused code path elimination
//  Block '<S244>/Product' : Unused code path elimination
//  Block '<S244>/Product1' : Unused code path elimination
//  Block '<S244>/Product2' : Unused code path elimination
//  Block '<S244>/Product3' : Unused code path elimination
//  Block '<S244>/Product4' : Unused code path elimination
//  Block '<S244>/Product5' : Unused code path elimination
//  Block '<S244>/Product6' : Unused code path elimination
//  Block '<S244>/Product7' : Unused code path elimination
//  Block '<S244>/Product8' : Unused code path elimination
//  Block '<S244>/Sum' : Unused code path elimination
//  Block '<S244>/Sum1' : Unused code path elimination
//  Block '<S244>/Sum2' : Unused code path elimination
//  Block '<S244>/Sum3' : Unused code path elimination
//  Block '<S245>/Constant' : Unused code path elimination
//  Block '<S245>/Gain' : Unused code path elimination
//  Block '<S245>/Gain1' : Unused code path elimination
//  Block '<S245>/Gain2' : Unused code path elimination
//  Block '<S245>/Product' : Unused code path elimination
//  Block '<S245>/Product1' : Unused code path elimination
//  Block '<S245>/Product2' : Unused code path elimination
//  Block '<S245>/Product3' : Unused code path elimination
//  Block '<S245>/Product4' : Unused code path elimination
//  Block '<S245>/Product5' : Unused code path elimination
//  Block '<S245>/Product6' : Unused code path elimination
//  Block '<S245>/Product7' : Unused code path elimination
//  Block '<S245>/Product8' : Unused code path elimination
//  Block '<S245>/Sum' : Unused code path elimination
//  Block '<S245>/Sum1' : Unused code path elimination
//  Block '<S245>/Sum2' : Unused code path elimination
//  Block '<S245>/Sum3' : Unused code path elimination
//  Block '<S207>/Scope' : Unused code path elimination
//  Block '<S207>/Scope1' : Unused code path elimination
//  Block '<S207>/Scope2' : Unused code path elimination
//  Block '<S207>/Scope3' : Unused code path elimination
//  Block '<S253>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S254>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S255>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S257>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S252>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S252>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S252>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S252>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S9>/If' : Unused code path elimination
//  Block '<S264>/Matrix Concatenate' : Unused code path elimination
//  Block '<S264>/Scope' : Unused code path elimination
//  Block '<S264>/Scope1' : Unused code path elimination
//  Block '<S264>/Scope2' : Unused code path elimination
//  Block '<S264>/Scope3' : Unused code path elimination
//  Block '<S264>/Selector' : Unused code path elimination
//  Block '<S264>/Selector5' : Unused code path elimination
//  Block '<S264>/Selector6' : Unused code path elimination
//  Block '<S264>/Selector7' : Unused code path elimination
//  Block '<S264>/Selector8' : Unused code path elimination
//  Block '<S264>/Sum' : Unused code path elimination
//  Block '<S264>/e angulars rates' : Unused code path elimination
//  Block '<S264>/e position' : Unused code path elimination
//  Block '<S264>/e quaternion' : Unused code path elimination
//  Block '<S264>/e velocity' : Unused code path elimination
//  Block '<S266>/Scope1' : Unused code path elimination
//  Block '<S282>/Display' : Unused code path elimination
//  Block '<S282>/Selector3' : Unused code path elimination
//  Block '<S270>/Scope' : Unused code path elimination
//  Block '<S136>/Reshape' : Reshape block reduction
//  Block '<S136>/Reshape1' : Reshape block reduction
//  Block '<S136>/Reshape2' : Reshape block reduction
//  Block '<S136>/Reshape3' : Reshape block reduction
//  Block '<S136>/Reshape4' : Reshape block reduction
//  Block '<S136>/Reshape5' : Reshape block reduction
//  Block '<S170>/Reshape' : Reshape block reduction
//  Block '<S170>/Reshape1' : Reshape block reduction
//  Block '<S170>/Reshape2' : Reshape block reduction
//  Block '<S170>/Reshape3' : Reshape block reduction
//  Block '<S170>/Reshape4' : Reshape block reduction
//  Block '<S170>/Reshape5' : Reshape block reduction
//  Block '<S252>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S252>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S209>/Zero-Order Hold' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'proc_control'
//  '<S1>'   : 'proc_control/Modele Physique'
//  '<S2>'   : 'proc_control/Plot values'
//  '<S3>'   : 'proc_control/ROS Input'
//  '<S4>'   : 'proc_control/ROS Output'
//  '<S5>'   : 'proc_control/Send Data to ROS'
//  '<S6>'   : 'proc_control/Sensor Manager'
//  '<S7>'   : 'proc_control/Subsystem Controller'
//  '<S8>'   : 'proc_control/Subsystem ProcNav'
//  '<S9>'   : 'proc_control/Subsystem Trajectory'
//  '<S10>'  : 'proc_control/Subsystem1'
//  '<S11>'  : 'proc_control/Modele Physique/Modele Thruster'
//  '<S12>'  : 'proc_control/Modele Physique/Perturbations'
//  '<S13>'  : 'proc_control/Modele Physique/Quaternion Normalise'
//  '<S14>'  : 'proc_control/Modele Physique/Sensor Model'
//  '<S15>'  : 'proc_control/Modele Physique/Modele Thruster/MATLAB Function1'
//  '<S16>'  : 'proc_control/Modele Physique/Modele Thruster/Send RPM to unity'
//  '<S17>'  : 'proc_control/Modele Physique/Modele Thruster/T1'
//  '<S18>'  : 'proc_control/Modele Physique/Modele Thruster/T2'
//  '<S19>'  : 'proc_control/Modele Physique/Modele Thruster/T3'
//  '<S20>'  : 'proc_control/Modele Physique/Modele Thruster/T4'
//  '<S21>'  : 'proc_control/Modele Physique/Modele Thruster/T5'
//  '<S22>'  : 'proc_control/Modele Physique/Modele Thruster/T6'
//  '<S23>'  : 'proc_control/Modele Physique/Modele Thruster/T7'
//  '<S24>'  : 'proc_control/Modele Physique/Modele Thruster/T8'
//  '<S25>'  : 'proc_control/Modele Physique/Modele Thruster/Send RPM to unity/Blank Message2'
//  '<S26>'  : 'proc_control/Modele Physique/Modele Thruster/Send RPM to unity/MATLAB Function3'
//  '<S27>'  : 'proc_control/Modele Physique/Modele Thruster/Send RPM to unity/Publish2'
//  '<S28>'  : 'proc_control/Modele Physique/Sensor Model/Band-Limited White Noise'
//  '<S29>'  : 'proc_control/Modele Physique/Sensor Model/Band-Limited White Noise1'
//  '<S30>'  : 'proc_control/Modele Physique/Sensor Model/Band-Limited White Noise2'
//  '<S31>'  : 'proc_control/Modele Physique/Sensor Model/Band-Limited White Noise3'
//  '<S32>'  : 'proc_control/Modele Physique/Sensor Model/Band-Limited White Noise4'
//  '<S33>'  : 'proc_control/Modele Physique/Sensor Model/Hydrophones Model'
//  '<S34>'  : 'proc_control/Modele Physique/Sensor Model/IMU Inverse'
//  '<S35>'  : 'proc_control/Modele Physique/Sensor Model/MATLAB Function'
//  '<S36>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Conjugate'
//  '<S37>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation'
//  '<S38>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1'
//  '<S39>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2'
//  '<S40>'  : 'proc_control/Modele Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S41>'  : 'proc_control/Modele Physique/Sensor Model/Hydrophones Model/Publish'
//  '<S42>'  : 'proc_control/Modele Physique/Sensor Model/Hydrophones Model/Subscribe'
//  '<S43>'  : 'proc_control/Modele Physique/Sensor Model/Hydrophones Model/Subsystem'
//  '<S44>'  : 'proc_control/Modele Physique/Sensor Model/Hydrophones Model/Subscribe/Enabled Subsystem'
//  '<S45>'  : 'proc_control/Modele Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S46>'  : 'proc_control/Modele Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S47>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S48>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S49>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S50>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S51>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S52>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S53>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S54>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S55>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S56>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S57>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S58>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S59>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S60>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/V1'
//  '<S61>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/V2'
//  '<S62>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/V3'
//  '<S63>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S64>'  : 'proc_control/Modele Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S65>'  : 'proc_control/ROS Input/AUV8'
//  '<S66>'  : 'proc_control/ROS Input/Simulation'
//  '<S67>'  : 'proc_control/ROS Input/Subsystem'
//  '<S68>'  : 'proc_control/ROS Input/AUV8/Subscribe'
//  '<S69>'  : 'proc_control/ROS Input/AUV8/Subscribe1'
//  '<S70>'  : 'proc_control/ROS Input/AUV8/Subscribe2'
//  '<S71>'  : 'proc_control/ROS Input/AUV8/Subscribe3'
//  '<S72>'  : 'proc_control/ROS Input/AUV8/Subscribe/Enabled Subsystem'
//  '<S73>'  : 'proc_control/ROS Input/AUV8/Subscribe1/Enabled Subsystem'
//  '<S74>'  : 'proc_control/ROS Input/AUV8/Subscribe2/Enabled Subsystem'
//  '<S75>'  : 'proc_control/ROS Input/AUV8/Subscribe3/Enabled Subsystem'
//  '<S76>'  : 'proc_control/ROS Input/Simulation/Subscribe'
//  '<S77>'  : 'proc_control/ROS Input/Simulation/Subscribe depth'
//  '<S78>'  : 'proc_control/ROS Input/Simulation/Subscribe1'
//  '<S79>'  : 'proc_control/ROS Input/Simulation/Subscribe2'
//  '<S80>'  : 'proc_control/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S81>'  : 'proc_control/ROS Input/Simulation/Subscribe depth/Enabled Subsystem'
//  '<S82>'  : 'proc_control/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S83>'  : 'proc_control/ROS Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S84>'  : 'proc_control/ROS Input/Subsystem/MATLAB Function'
//  '<S85>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable'
//  '<S86>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable1'
//  '<S87>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable/Subsystem'
//  '<S88>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S89>'  : 'proc_control/ROS Output/Send DVL msg'
//  '<S90>'  : 'proc_control/ROS Output/Send Depth msg'
//  '<S91>'  : 'proc_control/ROS Output/Send IMU msg'
//  '<S92>'  : 'proc_control/ROS Output/Send Ping msg'
//  '<S93>'  : 'proc_control/ROS Output/Send to Unity'
//  '<S94>'  : 'proc_control/ROS Output/Send DVL msg/   '
//  '<S95>'  : 'proc_control/ROS Output/Send DVL msg/MATLAB Function'
//  '<S96>'  : 'proc_control/ROS Output/Send DVL msg/Publish'
//  '<S97>'  : 'proc_control/ROS Output/Send Depth msg/Blank Message'
//  '<S98>'  : 'proc_control/ROS Output/Send Depth msg/Publish Depth'
//  '<S99>'  : 'proc_control/ROS Output/Send IMU msg/   '
//  '<S100>' : 'proc_control/ROS Output/Send IMU msg/Header Assignment'
//  '<S101>' : 'proc_control/ROS Output/Send IMU msg/MATLAB Function'
//  '<S102>' : 'proc_control/ROS Output/Send IMU msg/Publish imu_info'
//  '<S103>' : 'proc_control/ROS Output/Send Ping msg/Blank Message'
//  '<S104>' : 'proc_control/ROS Output/Send Ping msg/Publish Ping'
//  '<S105>' : 'proc_control/ROS Output/Send to Unity/   '
//  '<S106>' : 'proc_control/ROS Output/Send to Unity/MATLAB Function'
//  '<S107>' : 'proc_control/ROS Output/Send to Unity/Publish'
//  '<S108>' : 'proc_control/Send Data to ROS/Blank Message'
//  '<S109>' : 'proc_control/Send Data to ROS/Blank Message2'
//  '<S110>' : 'proc_control/Send Data to ROS/MATLAB Function1'
//  '<S111>' : 'proc_control/Send Data to ROS/MATLAB Function3'
//  '<S112>' : 'proc_control/Send Data to ROS/Publish'
//  '<S113>' : 'proc_control/Send Data to ROS/Publish2'
//  '<S114>' : 'proc_control/Send Data to ROS/Subsystem'
//  '<S115>' : 'proc_control/Send Data to ROS/Subsystem/Blank Message5'
//  '<S116>' : 'proc_control/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S117>' : 'proc_control/Send Data to ROS/Subsystem/Publish5'
//  '<S118>' : 'proc_control/Sensor Manager/Send Sensor ON'
//  '<S119>' : 'proc_control/Sensor Manager/Send auv states'
//  '<S120>' : 'proc_control/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S121>' : 'proc_control/Sensor Manager/Send Sensor ON/Publish'
//  '<S122>' : 'proc_control/Sensor Manager/Send auv states/Blank Message'
//  '<S123>' : 'proc_control/Sensor Manager/Send auv states/Header Assignment'
//  '<S124>' : 'proc_control/Sensor Manager/Send auv states/MATLAB Function1'
//  '<S125>' : 'proc_control/Sensor Manager/Send auv states/Publish'
//  '<S126>' : 'proc_control/Sensor Manager/Send auv states/bus2mux'
//  '<S127>' : 'proc_control/Subsystem Controller/Controller list'
//  '<S128>' : 'proc_control/Subsystem Controller/MPC manager'
//  '<S129>' : 'proc_control/Subsystem Controller/Post traitements'
//  '<S130>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S131>' : 'proc_control/Subsystem Controller/Controller list/IDLE'
//  '<S132>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S133>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S134>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S135>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S136>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S137>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S139>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S200>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe'
//  '<S201>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1'
//  '<S202>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S203>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S204>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S205>' : 'proc_control/Subsystem ProcNav/DVL Mesurments'
//  '<S206>' : 'proc_control/Subsystem ProcNav/Detph Mesurments'
//  '<S207>' : 'proc_control/Subsystem ProcNav/Mux2Bus'
//  '<S208>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S209>' : 'proc_control/Subsystem ProcNav/Subsystem'
//  '<S210>' : 'proc_control/Subsystem ProcNav/Thursters Mesurments'
//  '<S211>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S212>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S213>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S214>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S215>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S216>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S217>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S218>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S219>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S220>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S221>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S222>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S223>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S224>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S225>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S226>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S227>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S228>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S229>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S230>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S231>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S232>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S233>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S234>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S235>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S236>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S237>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S238>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S239>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S240>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S241>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Discrete Derivative'
//  '<S242>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation'
//  '<S243>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S244>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V1'
//  '<S245>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V2'
//  '<S246>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V3'
//  '<S247>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S248>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S249>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S250>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S251>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S252>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S253>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S254>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S255>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3'
//  '<S256>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S257>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S258>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S259>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S260>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3/Correct'
//  '<S261>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S262>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S263>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S264>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S265>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S266>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S267>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S268>' : 'proc_control/Subsystem Trajectory/Subsystem2'
//  '<S269>' : 'proc_control/Subsystem Trajectory/SubsystemAuto'
//  '<S270>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory'
//  '<S271>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function1'
//  '<S272>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function1'
//  '<S273>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S274>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S275>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S276>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S277>' : 'proc_control/Subsystem Trajectory/Subsystem2/Blank Message5'
//  '<S278>' : 'proc_control/Subsystem Trajectory/Subsystem2/MATLAB Function2'
//  '<S279>' : 'proc_control/Subsystem Trajectory/Subsystem2/Publish5'
//  '<S280>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S281>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S282>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S283>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S284>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S285>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S286>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S287>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S288>' : 'proc_control/Subsystem1/Subscribe1'
//  '<S289>' : 'proc_control/Subsystem1/Subscribe2'
//  '<S290>' : 'proc_control/Subsystem1/Subscribe3'
//  '<S291>' : 'proc_control/Subsystem1/Subscribe4'
//  '<S292>' : 'proc_control/Subsystem1/Subscribe5'
//  '<S293>' : 'proc_control/Subsystem1/startSim'
//  '<S294>' : 'proc_control/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S295>' : 'proc_control/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S296>' : 'proc_control/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S297>' : 'proc_control/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S298>' : 'proc_control/Subsystem1/Subscribe5/Enabled Subsystem'
//  '<S299>' : 'proc_control/Subsystem1/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
