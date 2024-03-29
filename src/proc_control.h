//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 3.79
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Mon Jul 18 07:32:28 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_proc_control_h_
#define RTW_HEADER_proc_control_h_
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "proc_control_types.h"
#include <string>
#include "rtGetNaN.h"

extern "C" {

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

#ifndef struct_HydroModel_proc_control_T
#define struct_HydroModel_proc_control_T

struct HydroModel_proc_control_T
{
  int32_T isInitialized;
  SL_Bus_proc_control_geometry_msgs_Vector3 pingerPosition;
};

#endif                                 // struct_HydroModel_proc_control_T

// Class declaration for model proc_control
class proc_control final
{
  // public data and function members
 public:
  // Block signals for system '<S101>/Current Time'
  struct B_CurrentTime_proc_control_T {
    SL_Bus_proc_control_ros_time_Time CurrentTime;// '<S101>/Current Time'
  };

  // Block states (default storage) for system '<S101>/Current Time'
  struct DW_CurrentTime_proc_control_T {
    ros_slros_internal_block_Curr_T obj;// '<S101>/Current Time'
    boolean_T objisempty;              // '<S101>/Current Time'
  };

  // Block signals (default storage)
  struct B_proc_control_T {
    std::string Switch1_o;             // '<S101>/Switch1'
    std::string Switch1;               // '<S170>/Switch1'
    s_Ref0liQlfQOPmAop9i3aPH_proc_T q;
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T r;
    real_T y_data[3345241];
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T b_WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T b;
    s_j0X3urodUv3ospvkLXsspC_proc_T p_m;
    real_T B_data[1792420];
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T TrialState;
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T m_c;
    real_T g[78013];
    real_T g_k[78000];
    real_T A_data[67520];
    real_T Mu_data[46400];
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w In1;// '<S309>/In1'
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w b_varargout_2;
    real_T JacCineqTrans_data[36140];
    real_T b_varargin_1_data[36140];
    real_T a__4_data[36140];
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T Au[25600];
    real_T Auf_data[25600];
    real_T tmp_data[20800];
    real_T unusedExpr[19321];
    real_T JacCeqTrans[18070];
    real_T JacEqTrans_tmp[18070];
    real_T Jx_c[16900];
    real_T Sx_data[12180];
    real_T Su_data[10400];
    real_T SuJm_data[10400];
    real_T y_data_b[10400];
    real_T varargin_2_data[10400];
    real_T a[10400];
    real_T Jmv[10400];
    real_T tmp_data_p[6561];
    real_T tmp_data_c[6561];
    real_T tmp_data_f[6561];
    real_T b_H_data[6561];
    real_T b_Linv_data[6561];
    real_T tmp_data_g[6561];
    real_T RLinv_data[6561];
    real_T b_D_data[6561];
    real_T b_H_data_g[6561];
    real_T b_H_data_m[6561];
    real_T TL_data[6561];
    real_T Q_data[6561];
    real_T R_data[6561];
    real_T b_A_data[6561];
    real_T tmp_data_n[6561];
    real_T tmp_data_pp[6561];
    real_T tmp_data_l[6561];
    real_T in1_data[6561];
    real_T tmp_data_j[6400];
    real_T Jm_data[6400];
    real_T I2Jm_data[6400];
    real_T I3_data[6400];
    real_T varargin_4_data[6400];
    real_T varargin_6_data[6400];
    real_T dv[6400];
    real_T tmp_data_d[6400];
    real_T Mv_aux_data[6380];
    real_T b_A[4851];
    real_T q_g[4746];
    real_T Su1_data[4640];
    s_IDHIEhzA2KtfYk7ehxTmaH_proc_T o;
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_C[3003];
    real_T Sx_data_l[2730];
    real_T b_Sx[2730];
    real_T tmp_data_dh[2560];
    real_T tmp_data_dy[2560];
    real_T dv1[2486];
    real_T ct[2166];
    real_T varargin_2_data_l[2080];
    real_T u_o[2034];
    s_wbACub5hw4pAYPfHb1hrsB_proc_T s;
    real_T ct_b[1959];
    real_T A[1859];                    // '<S134>/MATLAB Function2'
    real_T C[1859];                    // '<S134>/MATLAB Function2'
    real_T Bu[1848];
    real_T y_data_n[1829];
    real_T y_data_bs[1829];
    real_T work_data[1829];
    real_T work_data_l[1829];
    real_T vn1_data[1829];
    real_T vn2_data[1829];
    real_T work_data_h[1829];
    real_T y_data_bn[1829];
    real_T y_data_d[1829];
    real_T y_data_e[1829];
    real_T y_data_bj[1829];
    real_T y_data_j[1829];
    real_T y_data_f[1829];
    real_T y_data_a[1829];
    real_T s_j[1808];
    real_T Kx_data[1680];
    real_T ct_j[1640];
    real_T Hv_data[1430];
    real_T varargin_1_data_o[1430];
    real_T b_Hv[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T ct_n[1260];
    real_T CovMat[1156];
    real_T B[1144];                    // '<S134>/MATLAB Function2'
    real_T varargin_1_data_i[1040];
    real_T Su1_data_o[1040];
    real_T b_SuJm[1040];
    real_T b_Su1[1040];
    real_T WySuJm[1040];
    real_T Jmv_n[1040];
    real_T ct_m[1016];
    real_T ct_c[1016];
    real_T b_tmp[986];
    real_T c_data[980];
    int8_T b_data[6561];
    real_T ct_md[812];
    real_T ct_m3[805];
    real_T ct_ja[804];
    real_T tmp_data_h[640];
    real_T tmp_data_c0[640];
    real_T I1_data[640];
    real_T Ku1_data[640];
    real_T I2Jm[640];
    real_T WuI2Jm[640];
    real_T dv2[640];
    real_T tmp_data_ct[640];
    real_T tmp_data_px[640];
    real_T b_B[630];
    real_T Mlimfull_data[580];
    real_T Vfull_data[580];
    real_T in4[445];
    real_T b_A_p[441];
    real_T AA_a[441];
    real_T Mlimfull0[436];
    real_T Vfull0[436];
    real_T in3[435];
    real_T in3_e[433];
    SL_Bus_proc_control_std_msgs_Float64MultiArray In1_f;// '<S234>/In1'
    SL_Bus_proc_control_std_msgs_Float64MultiArray b_varargout_2_a;
    SL_Bus_proc_control_sonia_common_MpcInfo msg_a;// '<S115>/MATLAB Function'
    real_T b_D[390];
    SL_Bus_proc_control_sonia_common_MpcGains In1_o;// '<S235>/In1'
    SL_Bus_proc_control_sonia_common_MpcGains b_varargout_2_i;
    real_T b_A_l[338];
    SL_Bus_proc_control_std_msgs_Int16MultiArray msg_p;// '<S17>/MATLAB Function3' 
    SL_Bus_proc_control_std_msgs_UInt16MultiArray msg_h;// '<S5>/MATLAB Function3' 
    real_T B_data_o[320];
    real_T b_Bu[320];
    uint32_T c_mt[625];
    SL_Bus_proc_control_std_msgs_Int8MultiArray msg_n;// '<S5>/MATLAB Function1' 
    real_T Nk[273];
    real_T b_C_o[273];
    real_T CA[273];
    real_T CA_i[273];
    real_T b_C_f[273];
    real_T Cineq_data[260];
    real_T b_data_i[260];
    real_T varargin_1_data_f[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_g[260];
    real_T b_c_c[260];
    real_T b_c_data_o[260];
    real_T Je_data[260];
    real_T b_A_lm[260];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T Bv[231];
    real_T b_Mlim[226];
    real_T Bc[226];
    real_T b_Mlim_m[226];
    real_T b_Mu1[226];
    real_T cTol[226];
    real_T dv3[226];
    real_T b_A_m[208];
    real_T b_A_c[182];
    real_T A_f[169];
    real_T b_varargout_3[169];
    real_T dv4[169];
    real_T Ac[169];
    real_T Ac_p[169];
    real_T b_A2[169];
    real_T b_A4[169];
    real_T b_A6[169];
    real_T y_e1[169];
    real_T dv5[169];
    real_T b_A4_o[169];
    real_T a_h[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_l[169];
    real_T cBuffer_h[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T dv6[169];
    real_T A4_m[169];
    real_T dv7[169];
    real_T b_a[169];
    real_T cBuffer_m[169];
    real_T aBuffer_h[169];
    real_T cBuffer_c[169];
    real_T cBuffer_k[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T b_A_pc[169];
    real_T V[169];
    real_T b_h[169];
    real_T y_p[169];
    real_T y_p4[169];
    real_T y_a[169];
    real_T y_j[169];
    real_T V_e[169];
    real_T A6_o[169];
    real_T V_b[169];
    real_T A6_a[169];
    real_T S[169];
    real_T b_a_g[169];
    real_T b_Kx[168];
    int16_T q_data[580];
    int16_T r_data[580];
    int16_T s_data[580];
    int16_T t_data[580];
    int16_T v_data[580];
    int16_T w_data[580];
    real_T Dv[143];
    real_T Y_p[143];                   // '<S134>/MATLAB Function2'
    real_T X_d[143];                   // '<S134>/MATLAB Function2'
    real_T DX[143];                    // '<S134>/MATLAB Function2'
    real_T CA_data[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_e[143];
    real_T X_f[143];
    real_T X_h[143];
    real_T b_X_e[143];
    real_T b_X_c[143];
    real_T b_X_a[143];
    real_T b_A_d[140];
    real_T z[139];
    real_T rtb_Selector_a[139];
    real_T dv8[139];
    real_T b_x[139];
    mpcParams mpcParams_l;             // '<S323>/Bus Creator'
    real_T y_j_p[130];                 // '<S298>/MATLAB Function1'
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_m[130];
    real_T gfX[130];
    real_T z_o[130];
    real_T b_n[130];
    real_T readCurrent[128];
    SL_Bus_proc_control_nav_msgs_Odometry msg_po;// '<S120>/MATLAB Function1'
    SL_Bus_proc_control_nav_msgs_Odometry msg_l;// '<S138>/MATLAB Function1'
    real_T Selector_l[117];            // '<S210>/Selector'
    int32_T iC[226];
    real_T b_varargout_4[104];
    real_T b_varargout_2_p[104];
    real_T Sum_p[104];
    real_T Bc_f[104];
    real_T b_C_i[104];
    int16_T matches_data[400];
    real_T cb_data[100];
    physicsConstants BusCreator;       // '<S324>/Bus Creator'
    real_T dHdx[91];
    real_T K[91];
    real_T C_o[91];
    real_T b_C_k[91];
    real_T y_i[91];
    real_T U[88];                      // '<S134>/MATLAB Function2'
    real_T b_Kv[88];
    real_T U_o[88];
    real_T b_U[88];
    real_T U_m[88];
    real_T U_c[88];
    real_T U_f[88];
    real_T b_U_h[88];
    real_T Umv[88];
    real_T b_U_m[88];
    real_T b_U_a[88];
    real_T t[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T b_Linv[81];
    real_T c_Linv[81];
    real_T b_D_k[81];
    real_T b_H[81];
    real_T U_p[81];
    real_T RLinv[81];
    real_T TL[81];
    real_T QQ[81];
    real_T RR[81];
    real_T c_A[81];
    real_T r_data_b[81];
    real_T z_data[81];
    real_T b_x_data[81];
    real_T b_Ac_data[81];
    real_T tau_data[81];
    real_T b_Ac_data_c[81];
    real_T work_data_n[81];
    real_T work_data_i[81];
    real_T tmp_data_m[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv9[80];
    real_T utargetseq_data[80];
    real_T dv10[80];
    real_T b_I1[80];
    real_T dv11[80];
    real_T gfU[80];
    real_T y_jg[80];
    real_T tmp_data_e[80];
    real_T tmp_data_mv[80];
    boolean_T isMrows_data[580];
    real_T Selector1_n[72];            // '<S210>/Selector1'
    int16_T b_data_m[260];
    int16_T b_data_j[260];
    int16_T d_data[260];
    real_T y_tmp[64];
    real_T b_I[64];
    real_T b_Jm[64];
    real_T b_Su1_f[64];
    real_T b_I1_a[64];
    SL_Bus_proc_control_sensor_msgs_Imu In1_p;// '<S73>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu In1_pd;// '<S81>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu b_varargout_2_g;
    SL_Bus_proc_control_sensor_msgs_Imu msg_c;// '<S92>/MATLAB Function'
    boolean_T isMrows0[436];
    char_T s1_data[403];
    char_T b_s1_data[403];
    char_T b_varargin_2_data[402];
    char_T cleanStr_data[401];
    char_T str_data[401];
    char_T str_data_n[401];
    char_T str_data_d[401];
    char_T charValue[400];
    char_T replaced_data[400];
    uint8_T GetParameter15_o1[400];    // '<S324>/Get Parameter15'
    real_T Sy[49];
    real_T Sy_n[49];
    real_T R[49];
    real_T Tm[48];
    real_T dv12[48];
    real_T Tm_c[48];
    real_T dv13[48];
    real_T b_A_f[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T dHdx_p[39];
    real_T K_p[39];
    real_T C_n[39];
    real_T b_C_kt[39];
    real_T y_n[39];
    real_T in2[38];
    real_T dCoefs[36];
    real_T b_newCoefs[36];
    real_T constValues_o[36];
    real_T constValues_g[36];
    real_T in2_c[36];
    real_T A_c[36];
    real_T dv14[36];
    boolean_T icf[260];
    boolean_T icf_m[260];
    int8_T Je[260];
    boolean_T bv[226];
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_i;// '<S74>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_c;// '<S83>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL msg_b;// '<S90>/MATLAB Function' 
    real_T coefsWithFlatStart[24];
    SL_Bus_proc_control_sonia_common_PingAngles BusAssignment;// '<S93>/Bus Assignment' 
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T xk[21];
    real_T Transpose_i[18];            // '<S315>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    char_T s1_data_j[131];
    char_T b_s1_data_k[131];
    char_T b_varargin_2_data_m[130];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cleanStr_data_p[129];
    char_T str_data_dz[129];
    char_T str_data_g[129];
    char_T charValue_c[128];
    char_T replaced_data_c[128];
    uint8_T GetParameter10_o1[128];    // '<S324>/Get Parameter10'
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    real_T A_i[14];
    int32_T ic[26];
    int32_T ic_d[26];
    real_T K_g[13];
    real_T z_l[13];
    real_T imz[13];
    real_T xk_f[13];
    real_T K_d[13];
    real_T dv15[13];
    real_T b_C_j[13];
    real_T b_Wy[13];
    real_T x_dot_kk[13];
    real_T dv16[13];
    real_T ic_i[13];
    real_T ic_h[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_n[13];
    real_T b_C_o3[13];
    real_T ic_c[13];
    real_T dv17[13];
    real_T dv18[13];
    real_T work[13];
    real_T tau[13];
    real_T work_b[13];
    real_T tau_e[13];
    real_T work_d[13];
    real_T tau_i[13];
    real_T work_g[13];
    real_T tau_n[13];
    real_T work_l[13];
    real_T ic_ce[13];
    real_T dv19[13];
    real_T dv20[13];
    real_T b_x_n[13];
    real_T work_p[13];
    real_T a_d[13];
    real_T coefMat[12];
    real_T coeffMat[12];
    real_T tau_o[12];
    real_T vseq[11];
    int8_T b_B_j[81];
    int32_T i_data[20];
    int32_T ii_data_c[20];
    boolean_T tmp_data_hp[80];
    boolean_T tmp_data_da[80];
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_b[9];// '<S303>/Subsystem1'
    real_T zopt[9];
    real_T f[9];
    real_T r_c[9];
    real_T z_p[9];
    real_T b_Ac[9];
    real_T tau_p[9];
    real_T work_a[9];
    real_T R_o[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_j;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_p;
    char_T s1_data_o[67];
    char_T b_s1_data_l[67];
    char_T b_varargin_2_data_k[66];
    char_T cleanStr_data_j[65];
    char_T str_data_f[65];
    char_T str_data_c[65];
    char_T charValue_f[64];
    char_T replaced_data_n[64];
    int8_T matches_data_i[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_l[64];
    real_T u[8];                       // '<S243>/ '
    real_T mvmax[8];                   // '<S129>/MPC manager'
    real_T ywt[13];                    // '<S129>/MPC manager'
    real_T mvwt[8];                    // '<S129>/MPC manager'
    real_T dmwwt[8];                   // '<S129>/MPC manager'
    real_T U_i[8];
    real_T u_scale[8];                 // '<S139>/u_scale'
    real_T rtb_u_scale_k[8];
    real_T dv21[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_f[8];
    real_T duk_a[8];
    real_T gfU_d[8];
    real_T ic_e[8];
    real_T c_e[8];
    real_T runtimedata_MVRateMin[8];
    uint8_T GetParameter_o1_m[64];     // '<S327>/Get Parameter'
    SL_Bus_proc_control_sonia_common_AddPose b_varargout_2_b;
    SL_Bus_proc_control_geometry_msgs_Pose ZeroOrderHold;// '<S301>/Zero-Order Hold' 
    SL_Bus_proc_control_geometry_msgs_Pose In1_n;// '<S343>/In1'
    SL_Bus_proc_control_geometry_msgs_Pose msg;// '<S301>/MATLAB Function2'
    SL_Bus_proc_control_geometry_msgs_Pose b_varargout_2_a0;
    SL_Bus_proc_control_geometry_msgs_Pose msg_i;// '<S94>/MATLAB Function'
    real_T z_i[7];
    real_T TmpSignalConversionAtMATLAB[7];
    real_T tau_f[7];
    real_T work_j[7];
    real_T mesuredPose[7];
    real_T y_o[7];
    real_T x_f[7];
    int32_T iv[13];
    SL_Bus_proc_control_geometry_msgs_Twist In1_od;// '<S307>/In1'
    SL_Bus_proc_control_geometry_msgs_Twist b_varargout_2_l;
    real_T TSamp[6];                   // '<S173>/TSamp'
    real_T dv22[6];
    real_T rtb_TSamp_l[6];
    real_T constValues_gf[6];
    real_T constValues_d[6];
    int32_T blockFormat[12];
    int32_T blockFormat_o[12];
    int8_T b_I_d[36];
    quaternion_proc_control_T expl_temp_jo;
    real_T n[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S238>/MATLAB Function1'
    real_T qt[4];
    real_T qRel[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T v_data_f[8];
    int32_T v_data_j[8];
    boolean_T icf_h[26];
    boolean_T icf_c[26];
    SL_Bus_proc_control_geometry_msgs_Vector3 b_varargout_2_n;
    real_T Gain[3];                    // '<S299>/Gain'
    real_T Reference[130];             // '<S9>/Merge'
    real_T target[7];                  // '<S9>/Merge'
    real_T InitQuat[4];                // '<S322>/MATLAB System'
    real_T InitPos[3];                 // '<S322>/MATLAB System'
    real_T c_k[3];
    real_T a_a[3];
    real_T sincos_o2[3];               // '<S41>/sincos'
    real_T v[3];                       // '<S238>/MATLAB Function1'
    real_T dv23[3];
    real_T v_f[3];
    real_T target_j[3];
    real_T work_k[3];
    boolean_T corr[20];
    real_T DataTypeConversion1[2];     // '<S317>/Data Type Conversion1'
    real_T Selector1[8];               // '<S315>/Selector1'
    real_T Selector4[7];               // '<S315>/Selector4'
    real_T DataStoreRead[13];          // '<S289>/Data Store Read'
    int16_T NtoRPM[8];                 // '<S17>/N to RPM'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    uint16_T current[8];               // '<S130>/N to A'
    uint16_T pwm[8];                   // '<S130>/N to PWM'
    uint8_T rows[13];
    uint8_T rows_e[13];
    int8_T b_ipiv[13];
    int8_T ipiv[13];
    boolean_T x_b[13];
    boolean_T x_h[13];
    boolean_T x_hn[13];
    int32_T Jx_size[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T NavReset;                   // '<S322>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S317>/Data Type Conversion'
    real_T DataTypeConversion2;        // '<S317>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S315>/Matrix Concatenate'
    real_T Selector[6];                // '<S315>/Selector'
    real_T zposition;                  // '<S239>/Sum'
    real_T Gain_p;                     // '<S269>/Gain'
    real_T Gain1;                      // '<S269>/Gain1'
    real_T Gain2;                      // '<S269>/Gain2'
    real_T Sum;                        // '<S269>/Sum'
    real_T Gain_c;                     // '<S270>/Gain'
    real_T Gain1_m;                    // '<S270>/Gain1'
    real_T Gain2_l;                    // '<S270>/Gain2'
    real_T Sum_o;                      // '<S270>/Sum'
    real_T Gain_i;                     // '<S271>/Gain'
    real_T Gain1_g;                    // '<S271>/Gain1'
    real_T Gain2_b;                    // '<S271>/Gain2'
    real_T Sum_c;                      // '<S271>/Sum'
    real_T q0;                         // '<S267>/q0'
    real_T q1;                         // '<S267>/q1'
    real_T q2;                         // '<S267>/q2'
    real_T q3;                         // '<S267>/q3'
    real_T mv[8];                      // '<S128>/Merge'
    real_T MpcStatus;                  // '<S128>/Merge'
    real_T alive;                      // '<S128>/Merge'
    real_T mvmin[8];                   // '<S129>/MPC manager'
    real_T p;                          // '<S129>/MPC manager'
    real_T m;                          // '<S129>/MPC manager'
    real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BufferToMakeInportVirtual_Inser[8];
    real_T y;                          // '<S68>/MATLAB Function'
    real_T PWMtoN[8];                  // '<S11>/ PWM to N'
    real_T Drift[6];                   // '<S12>/ Drift'
    real_T WorldPosition_n[3];         // '<S1>/Discrete-Time Integrator'
    real_T Gain2_k;                    // '<S55>/Gain2'
    real_T Gain_cz;                    // '<S55>/Gain'
    real_T Gain1_c;                    // '<S55>/Gain1'
    real_T Gain_cr;                    // '<S56>/Gain'
    real_T Gain2_n;                    // '<S56>/Gain2'
    real_T Gain1_d;                    // '<S56>/Gain1'
    real_T Gain_l;                     // '<S57>/Gain'
    real_T Gain1_o;                    // '<S57>/Gain1'
    real_T Gain2_i;                    // '<S57>/Gain2'
    real_T PressureDepth;              // '<S14>/Gain'
    real_T Quaternion[4];              // '<S14>/Sum1'
    real_T AngularRate_d[3];           // '<S14>/Sum3'
    real_T LinearAcceleration[3];      // '<S14>/Sum5'
    real_T y_e[3];                     // '<S14>/MATLAB Function'
    real_T MATLABSystem_o2[3];         // '<S34>/MATLAB System'
    real_T y_d[4];                     // '<S1>/Quaternion Normalise'
    real_T d_data_k;
    real_T d;
    real_T scale;
    real_T absxk;
    real_T t_j;
    real_T e_data;
    real_T b_x_data_o;
    real_T t30;
    real_T t31;
    real_T t33;
    real_T t34;
    real_T t39;
    real_T t40;
    real_T t41;
    real_T t43;
    real_T t44;
    real_T t45;
    real_T t59;
    real_T t61;
    real_T t35;
    real_T t60;
    real_T t4;
    real_T t5;
    real_T t6;
    real_T t15;
    real_T t21;
    real_T t24;
    real_T t26;
    real_T t27;
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
    real_T oc;
    real_T oa_c;
    real_T ob;
    real_T oc_h;
    real_T od;
    real_T SimActive;                  // '<S322>/MATLAB System'
    real_T Product3_pn;                // '<S60>/Product3'
    real_T Divide_i;                   // '<S35>/Divide'
    real_T trajClear;                  // '<S322>/MATLAB System'
    real_T notDryRun;                  // '<S322>/MATLAB System'
    real_T Product3_cf;                // '<S54>/Product3'
    real_T Product_h;                  // '<S54>/Product'
    real_T Product2_na;                // '<S54>/Product2'
    real_T Product1_hlk;               // '<S54>/Product1'
    real_T Output_i;                   // '<S29>/Output'
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T rtb_v_i;
    real_T rtb_sincos_o1_idx_2;
    real_T rtb_sincos_o1_idx_1;
    real_T rtb_sincos_o1_idx_0;
    real_T AngularRate_a_idx_1;
    real_T AngularRate_a_idx_0;
    real_T BodyVelocity_c_idx_2;
    real_T t58_tmp;
    real_T t58_tmp_p;
    real_T t35_tmp;
    real_T oa_tmp;
    real_T t24_tmp;
    real_T d_tmp;
    real_T t25_tmp;
    real_T t29_tmp;
    real_T d_f;
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
    real_T oc_tmp;
    real_T A_tmp;
    real_T b_j;
    real_T b_p;
    real_T pny1;
    real_T varargin_1_size_idx_1_tmp_tmp;
    real_T bkj;
    real_T b_I_e;
    real_T b_Kv_n;
    real_T WuI2Jm_h;
    real_T ywt_h;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_f;
    real_T b_Ac_i;
    real_T b_Linv_f;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T t5_c;
    real_T t6_n;
    real_T t14;
    real_T t15_h;
    real_T t16;
    real_T t17;
    real_T t18;
    real_T t19;
    real_T exptj;
    real_T d6_k;
    real_T eta1;
    real_T x_hz;
    real_T e;
    real_T ed2;
    real_T QPObjective_beta;
    real_T scale_b;
    real_T absxk_o;
    real_T t_n;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_m;
    real_T umvk_k;
    real_T duk_j;
    real_T e_h;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_f;
    real_T runtimedata_OutputMin_d;
    real_T runtimedata_OutputMax_l;
    real_T exptj_k;
    real_T d6_i;
    real_T eta1_h;
    real_T b_varargin_1;
    real_T e_m;
    real_T ed2_g;
    real_T fs_l;
    real_T e_m4;
    real_T wtYerr_n;
    real_T obj_objfun_workspace_runtimed_g;
    real_T wtYerr_d;
    real_T obj_objfun_workspace_runtimed_m;
    real_T duk_f;
    real_T t20;
    real_T t22;
    real_T t23;
    real_T t24_g;
    real_T t27_j;
    real_T t28;
    real_T t29;
    real_T t30_c;
    real_T t31_e;
    real_T t32;
    real_T t36;
    real_T t37;
    real_T t38;
    real_T t39_m;
    real_T t41_o;
    real_T t42;
    real_T t44_a;
    real_T t49;
    real_T t50;
    real_T t52_j;
    real_T t80;
    real_T t81;
    real_T t82;
    real_T t83;
    real_T t84;
    real_T t85;
    real_T t86;
    real_T t87;
    real_T t88;
    real_T t89;
    real_T t90;
    real_T t91;
    real_T t92;
    real_T t93;
    real_T t94;
    real_T t95;
    real_T t96;
    real_T t97;
    real_T t100;
    real_T t101;
    real_T t102;
    real_T t103;
    real_T t104;
    real_T t105;
    real_T t108;
    real_T t111;
    real_T t112;
    real_T t113;
    real_T t115;
    real_T t117;
    real_T t119;
    real_T t120;
    real_T t80_tmp;
    real_T t81_tmp;
    real_T t82_tmp;
    real_T t83_tmp;
    real_T t84_tmp;
    real_T t85_tmp;
    real_T t92_tmp;
    real_T t93_tmp;
    real_T t80_tmp_tmp;
    real_T t82_tmp_tmp;
    real_T t96_tmp;
    real_T t97_tmp;
    real_T t100_tmp;
    real_T t101_tmp;
    real_T t108_tmp;
    real_T t111_tmp;
    real_T t115_tmp;
    real_T t119_tmp;
    real_T t81_tmp_tmp;
    real_T t84_tmp_tmp;
    real_T t83_tmp_tmp;
    real_T t85_tmp_tmp;
    real_T t96_tmp_tmp;
    real_T t97_tmp_tmp;
    real_T t92_tmp_tmp;
    real_T t93_tmp_tmp;
    real_T t111_tmp_tmp;
    real_T t108_tmp_tmp;
    real_T t115_tmp_tmp;
    real_T in3_tmp;
    real_T in3_tmp_g;
    real_T in3_tmp_j;
    real_T t119_tmp_tmp;
    real_T in3_tmp_e;
    real_T in3_tmp_jy;
    real_T in3_tmp_jb;
    real_T in3_tmp_gi;
    real_T in3_tmp_o;
    real_T t92_tmp_h;
    real_T t96_tmp_c;
    real_T t100_tmp_a;
    real_T t119_tmp_l;
    real_T in3_tmp_jc;
    real_T in3_tmp_i;
    real_T in3_tmp_m;
    real_T in3_tmp_f;
    real_T in3_tmp_on;
    real_T in3_tmp_iz;
    real_T in3_tmp_e0;
    real_T in3_tmp_j0;
    real_T in3_tmp_o4;
    real_T in3_tmp_fr;
    real_T in3_tmp_m3;
    real_T in3_tmp_a;
    real_T in3_tmp_h;
    real_T in3_tmp_oc;
    real_T in3_tmp_hn;
    real_T in3_tmp_j3;
    real_T in3_tmp_g3;
    real_T in3_tmp_jz;
    real_T in3_tmp_l;
    real_T in3_tmp_k;
    real_T in3_tmp_d;
    real_T in3_tmp_n;
    real_T in3_tmp_j5;
    real_T in3_tmp_a3;
    real_T in3_tmp_hz;
    real_T in3_tmp_iq;
    real_T in3_tmp_dn;
    real_T in3_tmp_b;
    real_T in3_tmp_hj;
    real_T in3_tmp_p;
    real_T in3_tmp_nk;
    real_T in3_tmp_jza;
    real_T in3_tmp_ot;
    real_T in3_tmp_bj;
    real_T in3_tmp_jk;
    real_T in3_tmp_eq;
    real_T in3_tmp_i4;
    real_T in3_tmp_ng;
    real_T in3_tmp_ie;
    real_T in3_tmp_p3;
    real_T in3_tmp_og;
    real_T in3_tmp_mz;
    real_T in3_tmp_otc;
    real_T in3_tmp_gz;
    real_T in3_tmp_ez;
    real_T in3_tmp_izd;
    real_T in3_tmp_gb;
    real_T in3_tmp_ge;
    real_T in3_tmp_gbr;
    real_T in3_tmp_gr;
    real_T in3_tmp_c;
    real_T in3_tmp_kt;
    real_T in3_tmp_ds;
    real_T in3_tmp_kx;
    real_T in3_tmp_pd;
    real_T in3_tmp_p5;
    real_T in3_tmp_m4;
    real_T in3_tmp_ktf;
    real_T in3_tmp_a0;
    real_T t93_tmp_f;
    real_T t97_tmp_c;
    real_T t101_tmp_j;
    real_T t108_tmp_k;
    real_T t111_tmp_h;
    real_T t115_tmp_d;
    real_T t896;
    real_T t897;
    real_T t898;
    real_T t899;
    real_T t900;
    real_T t901;
    real_T t897_tmp;
    real_T t896_tmp;
    real_T t898_tmp;
    real_T ct_tmp;
    real_T t899_tmp;
    real_T t901_tmp;
    real_T ct_tmp_j;
    real_T t900_tmp;
    real_T ct_tmp_n;
    real_T ct_tmp_j0;
    real_T ct_tmp_l;
    real_T ct_tmp_p;
    real_T ct_tmp_po;
    real_T ct_tmp_ly;
    real_T ct_tmp_ld;
    real_T ct_tmp_h;
    real_T ct_tmp_c;
    real_T ct_tmp_g;
    real_T t898_tmp_e;
    real_T t897_tmp_n;
    real_T t896_tmp_f;
    real_T t899_tmp_n;
    real_T t901_tmp_e;
    real_T t900_tmp_b;
    real_T ct_tmp_a;
    real_T ct_tmp_i;
    real_T ct_tmp_nq;
    real_T ct_tmp_f;
    real_T ct_tmp_tmp;
    real_T ct_tmp_tmp_i;
    real_T ct_tmp_tmp_k;
    real_T ct_tmp_tmp_b;
    real_T ct_tmp_d;
    real_T ct_tmp_hs;
    real_T ct_tmp_nl;
    real_T ct_tmp_fj;
    real_T ct_tmp_ay;
    real_T ct_tmp_m;
    real_T ct_tmp_gu;
    real_T ct_tmp_nh;
    real_T ct_tmp_ch;
    real_T ct_tmp_d4;
    real_T ct_tmp_tmp_ky;
    real_T ct_tmp_cl;
    real_T ct_tmp_jd;
    real_T ct_tmp_mt;
    real_T ct_tmp_ie;
    real_T ct_tmp_b;
    real_T t1162;
    real_T t1163;
    real_T t1164;
    real_T t1459;
    real_T t1483;
    real_T t1484;
    real_T t1485;
    real_T t1488;
    real_T t1489;
    real_T t1490;
    real_T t517;
    real_T t552;
    real_T t575;
    real_T ct_tmp_tmp_o;
    real_T t1456;
    real_T t1457;
    real_T t1458;
    real_T t1479;
    real_T t1499;
    real_T t1527;
    real_T t1533;
    real_T t1533_tmp;
    real_T t1533_tmp_g;
    real_T t1533_tmp_e;
    real_T out1_tmp;
    real_T out1_tmp_i;
    real_T out1_tmp_e;
    real_T out1_tmp_is;
    real_T out1_tmp_m;
    real_T out1_tmp_d;
    real_T out1_tmp_j;
    real_T out1_tmp_p;
    real_T out1_tmp_b;
    real_T out1_tmp_pn;
    real_T out1_tmp_n;
    real_T out1_tmp_c;
    real_T out1_tmp_nh;
    real_T out1_tmp_da;
    real_T out1_tmp_ih;
    real_T out1_tmp_no;
    real_T out1_tmp_bi;
    real_T out1_tmp_bt;
    real_T out1_tmp_jk;
    real_T out1_tmp_n0;
    real_T out1_tmp_f;
    real_T out1_tmp_eu;
    real_T out1_tmp_in;
    real_T out1_tmp_a;
    real_T out1_tmp_fd;
    real_T out1_tmp_k;
    real_T out1_tmp_cg;
    real_T out1_tmp_j1;
    real_T out1_tmp_l;
    real_T out1_tmp_ai;
    real_T out1_tmp_iy;
    real_T out1_tmp_o;
    real_T out1_tmp_b4;
    real_T out1_tmp_an;
    real_T out1_tmp_aq;
    real_T out1_tmp_i0;
    real_T out1_tmp_iz;
    real_T out1_tmp_lg;
    real_T out1_tmp_o5;
    real_T out1_tmp_py;
    real_T out1_tmp_om;
    real_T out1_tmp_cm;
    real_T out1_tmp_oc;
    real_T out1_tmp_ol;
    real_T out1_tmp_h;
    real_T out1_tmp_ihq;
    real_T out1_tmp_g;
    real_T out1_tmp_c1;
    real_T out1_tmp_ok;
    real_T out1_tmp_g5;
    real_T out1_tmp_o2;
    real_T out1_tmp_gf;
    real_T out1_tmp_ad;
    real_T out1_tmp_gy;
    real_T out1_tmp_bp;
    real_T out1_tmp_kn;
    real_T out1_tmp_ca;
    real_T out1_tmp_ji;
    real_T out1_tmp_al;
    real_T out1_tmp_dm;
    real_T out1_tmp_cx;
    real_T out1_tmp_d0;
    real_T out1_tmp_a2;
    real_T out1_tmp_bo;
    real_T out1_tmp_gu;
    real_T out1_tmp_fb;
    real_T out1_tmp_cgx;
    real_T out1_tmp_pn0;
    real_T out1_tmp_at;
    real_T out1_tmp_noc;
    real_T out1_tmp_hl;
    real_T out1_tmp_mv;
    real_T out1_tmp_f5;
    real_T out1_tmp_bw;
    real_T out1_tmp_ec;
    real_T out1_tmp_nz;
    real_T out1_tmp_p4;
    real_T out1_tmp_ihc;
    real_T out1_tmp_js;
    real_T out1_tmp_lj;
    real_T out1_tmp_ce;
    real_T out1_tmp_gr;
    real_T out1_tmp_c5;
    real_T out1_tmp_ly;
    real_T out1_tmp_ev;
    real_T out1_tmp_dt;
    real_T out1_tmp_my;
    real_T out1_tmp_fi;
    real_T out1_tmp_tmp;
    real_T out1_tmp_tmp_n;
    real_T out1_tmp_tmp_o;
    real_T out1_tmp_en;
    real_T out1_tmp_mp;
    real_T out1_tmp_ch;
    real_T out1_tmp_g4;
    real_T out1_tmp_bn;
    real_T out1_tmp_po;
    real_T out1_tmp_p2;
    real_T out1_tmp_ap;
    real_T out1_tmp_fm;
    real_T out1_tmp_gr1;
    real_T out1_tmp_b0;
    real_T out1_tmp_kw;
    real_T out1_tmp_k1;
    real_T out1_tmp_bwc;
    real_T out1_tmp_ix;
    real_T out1_tmp_nj;
    real_T out1_tmp_hx;
    real_T out1_tmp_ni;
    real_T out1_tmp_mm;
    real_T out1_tmp_guo;
    real_T out1_tmp_jb;
    real_T out1_tmp_f0;
    real_T out1_tmp_ng;
    real_T out1_tmp_gt;
    real_T out1_tmp_tmp_d;
    real_T out1_tmp_tmp_c;
    real_T out1_tmp_tmp_m;
    real_T out1_tmp_tmp_dk;
    real_T out1_tmp_tmp_n4;
    real_T out1_tmp_bwe;
    real_T out1_tmp_p2x;
    real_T out1_tmp_kg;
    real_T out1_tmp_cl;
    real_T out1_tmp_n2;
    real_T out1_tmp_nm;
    real_T out1_tmp_cd;
    real_T out1_tmp_dk;
    real_T out1_tmp_nq;
    real_T out1_tmp_guh;
    real_T out1_tmp_lx;
    real_T out1_tmp_ge;
    real_T out1_tmp_pv;
    real_T out1_tmp_ko;
    real_T out1_tmp_l1;
    real_T out1_tmp_tmp_b;
    real_T out1_tmp_tmp_cx;
    real_T out1_tmp_tmp_f;
    real_T out1_tmp_oo;
    real_T out1_tmp_dd;
    real_T out1_tmp_ld;
    real_T out1_tmp_ls;
    real_T out1_tmp_dr;
    real_T out1_tmp_ku;
    real_T out1_tmp_fo;
    real_T out1_tmp_p3;
    real_T out1_tmp_k1y;
    real_T out1_tmp_k4;
    real_T out1_tmp_iv;
    real_T out1_tmp_ew;
    real_T out1_tmp_ft;
    real_T out1_tmp_kx;
    real_T out1_tmp_ne;
    real_T out1_tmp_it;
    real_T out1_tmp_im;
    real_T out1_tmp_o2s;
    real_T out1_tmp_dn;
    real_T out1_tmp_iu;
    real_T out1_tmp_gy3;
    real_T out1_tmp_tmp_cv;
    real_T out1_tmp_tmp_e;
    real_T out1_tmp_tmp_a;
    real_T out1_tmp_hq;
    real_T out1_tmp_ef;
    real_T out1_tmp_dw;
    real_T out1_tmp_g5h;
    real_T out1_tmp_ev0;
    real_T out1_tmp_eq;
    real_T out1_tmp_gm;
    real_T out1_tmp_gk;
    real_T out1_tmp_dz;
    real_T out1_tmp_n1;
    real_T out1_tmp_p2p;
    real_T out1_tmp_bs;
    real_T out1_tmp_iw;
    real_T out1_tmp_bi1;
    real_T out1_tmp_jv;
    real_T out1_tmp_gz;
    real_T out1_tmp_nl;
    real_T out1_tmp_tmp_p;
    real_T out1_tmp_tmp_fb;
    real_T out1_tmp_tmp_fs;
    real_T out1_tmp_aa;
    real_T out1_tmp_g3;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T out1_tmp_efd;
    real_T out1_tmp_ey;
    real_T out1_tmp_dl;
    real_T out1_tmp_jbr;
    real_T out1_tmp_nx;
    real_T out1_tmp_ju;
    real_T out1_tmp_pm;
    real_T out1_tmp_aw;
    real_T out1_tmp_df;
    real_T out1_tmp_pz;
    real_T out1_tmp_d2;
    real_T out1_tmp_pq;
    real_T out1_tmp_fp;
    real_T out1_tmp_gen;
    real_T out1_tmp_dp;
    real_T out1_tmp_hg;
    real_T out1_tmp_ie;
    real_T out1_tmp_mz;
    real_T out1_tmp_cy;
    real_T out1_tmp_lv;
    real_T out1_tmp_pb;
    real_T out1_tmp_i1;
    real_T out1_tmp_b3;
    real_T out1_tmp_gn;
    real_T out1_tmp_oq;
    real_T out1_tmp_b1;
    real_T out1_tmp_ewq;
    real_T out1_tmp_e1;
    real_T out1_tmp_lgy;
    real_T out1_tmp_cf;
    real_T out1_tmp_e5;
    real_T out1_tmp_dwl;
    real_T out1_tmp_oe;
    real_T out1_tmp_lw;
    real_T out1_tmp_hga;
    real_T out1_tmp_ln;
    real_T out1_tmp_c5w;
    real_T t20_c;
    real_T t22_a;
    real_T t23_i;
    real_T t24_l;
    real_T t27_i;
    real_T t28_a;
    real_T t29_i;
    real_T t30_c3;
    real_T t31_m;
    real_T t32_n;
    real_T t36_c;
    real_T t37_n;
    real_T t38_h;
    real_T t40_i;
    real_T t41_e;
    real_T t43_p;
    real_T t48;
    real_T t49_k;
    real_T t51;
    real_T t83_i;
    real_T t84_n;
    real_T t85_o;
    real_T t86_l;
    real_T t87_p;
    real_T t88_b;
    real_T t89_f;
    real_T t90_i;
    real_T t91_c;
    real_T t92_g;
    real_T t93_i;
    real_T t94_b;
    real_T t95_n;
    real_T t96_p;
    real_T t97_o;
    real_T t98;
    real_T t99;
    real_T t100_b;
    real_T t103_o;
    real_T t104_c;
    real_T t105_j;
    real_T t106;
    real_T t107;
    real_T t108_e;
    real_T t111_p;
    real_T t114;
    real_T t115_n;
    real_T t116;
    real_T t118;
    real_T t120_o;
    real_T t122;
    real_T t123;
    real_T t83_tmp_d;
    real_T t84_tmp_g;
    real_T t85_tmp_i;
    real_T t86_tmp;
    real_T t87_tmp;
    real_T t88_tmp;
    real_T t95_tmp;
    real_T t96_tmp_i;
    real_T t83_tmp_tmp_c;
    real_T t85_tmp_tmp_b;
    real_T t99_tmp;
    real_T t100_tmp_g;
    real_T t103_tmp;
    real_T t104_tmp;
    real_T t111_tmp_d;
    real_T t114_tmp;
    real_T t118_tmp;
    real_T t122_tmp;
    real_T t84_tmp_tmp_f;
    real_T t87_tmp_tmp;
    real_T t86_tmp_tmp;
    real_T t88_tmp_tmp;
    real_T t99_tmp_tmp;
    real_T t100_tmp_tmp;
    real_T t95_tmp_tmp;
    real_T t96_tmp_tmp_j;
    real_T t114_tmp_tmp;
    real_T t111_tmp_tmp_e;
    real_T t118_tmp_tmp;
    real_T in4_tmp;
    real_T in4_tmp_p;
    real_T in4_tmp_d;
    real_T t122_tmp_tmp;
    real_T in4_tmp_f;
    real_T in4_tmp_n;
    real_T in4_tmp_o;
    real_T in4_tmp_du;
    real_T in4_tmp_l;
    real_T in4_tmp_fu;
    real_T in4_tmp_j;
    real_T t95_tmp_g;
    real_T t96_tmp_l;
    real_T t99_tmp_k;
    real_T t100_tmp_p;
    real_T t103_tmp_b;
    real_T t104_tmp_i;
    real_T t111_tmp_p;
    real_T t114_tmp_l;
    real_T t118_tmp_e;
    real_T t122_tmp_e;
    real_T in4_tmp_pn;
    real_T in4_tmp_jg;
    real_T in4_tmp_g;
    real_T in4_tmp_le;
    real_T in4_tmp_jo;
    real_T in4_tmp_pk;
    real_T in4_tmp_d0;
    real_T in4_tmp_k;
    real_T in4_tmp_m;
    real_T in4_tmp_fv;
    real_T in4_tmp_m4;
    real_T in4_tmp_nf;
    real_T in4_tmp_mi;
    real_T in4_tmp_b;
    real_T in4_tmp_c;
    real_T in4_tmp_gw;
    real_T in4_tmp_ck;
    real_T in4_tmp_i;
    real_T in4_tmp_kv;
    real_T in4_tmp_go;
    real_T in4_tmp_pd;
    real_T in4_tmp_fd;
    real_T in4_tmp_mo;
    real_T in4_tmp_my;
    real_T in4_tmp_lb;
    real_T in4_tmp_jon;
    real_T in4_tmp_m5;
    real_T in4_tmp_j4;
    real_T in4_tmp_ii;
    real_T in4_tmp_a;
    real_T in4_tmp_h;
    real_T in4_tmp_dd;
    real_T in4_tmp_i2;
    real_T in4_tmp_hr;
    real_T in4_tmp_dj;
    real_T in4_tmp_lb5;
    real_T in4_tmp_f3;
    real_T in4_tmp_lt;
    real_T in4_tmp_l3;
    real_T in4_tmp_f4;
    real_T in4_tmp_gy;
    real_T in4_tmp_gz;
    real_T in4_tmp_av;
    real_T in4_tmp_du1;
    real_T in4_tmp_bc;
    real_T in4_tmp_dg;
    real_T in4_tmp_fvc;
    real_T in4_tmp_as;
    real_T t898_m;
    real_T t899_i;
    real_T t900_i;
    real_T t901_k;
    real_T t902;
    real_T t903;
    real_T t899_tmp_a;
    real_T t898_tmp_m;
    real_T t900_tmp_c;
    real_T ct_tmp_bo;
    real_T t901_tmp_k;
    real_T t903_tmp;
    real_T ct_tmp_lr;
    real_T t902_tmp;
    real_T ct_tmp_nz;
    real_T ct_tmp_pp;
    real_T ct_tmp_f0;
    real_T ct_tmp_k;
    real_T ct_tmp_e;
    real_T ct_tmp_na;
    real_T ct_tmp_o;
    real_T ct_tmp_ad;
    real_T ct_tmp_bi;
    real_T ct_tmp_ba;
    real_T t900_tmp_m;
    real_T t899_tmp_m;
    real_T t898_tmp_k;
    real_T t901_tmp_m;
    real_T t903_tmp_h;
    real_T t902_tmp_i;
    real_T ct_tmp_ct;
    real_T ct_tmp_ni;
    real_T ct_tmp_il;
    real_T ct_tmp_oc;
    real_T ct_tmp_tmp_h;
    real_T ct_tmp_tmp_p;
    real_T ct_tmp_tmp_g;
    real_T ct_tmp_tmp_c;
    real_T ct_tmp_gn;
    real_T ct_tmp_bb;
    real_T ct_tmp_j0l;
    real_T ct_tmp_ha;
    real_T ct_tmp_d45;
    real_T ct_tmp_oa;
    real_T ct_tmp_k2;
    real_T ct_tmp_jw;
    real_T ct_tmp_de;
    real_T ct_tmp_fs;
    real_T ct_tmp_tmp_a;
    real_T ct_tmp_eg;
    real_T ct_tmp_ns;
    real_T ct_tmp_ob;
    real_T ct_tmp_dk;
    real_T ct_tmp_cu;
    real_T t1164_m;
    real_T t1165;
    real_T t1166;
    real_T t1466;
    real_T t1488_o;
    real_T t1489_b;
    real_T t1490_m;
    real_T t1491;
    real_T t1492;
    real_T t1493;
    real_T t519;
    real_T t554;
    real_T t1463;
    real_T t1464;
    real_T t1465;
    real_T t1524;
    real_T t1546;
    real_T t1526;
    real_T t1542;
    real_T t1546_tmp;
    real_T t1546_tmp_i;
    real_T t1543_tmp;
    real_T t1543_tmp_i;
    real_T t1542_tmp;
    real_T out1_tmp_g5t;
    real_T out1_tmp_mu;
    real_T out1_tmp_nod;
    real_T out1_tmp_cag;
    real_T out1_tmp_jvr;
    real_T out1_tmp_ej;
    real_T out1_tmp_ep;
    real_T out1_tmp_kr;
    real_T out1_tmp_k4o;
    real_T out1_tmp_id;
    real_T out1_tmp_eh;
    real_T out1_tmp_lyp;
    real_T out1_tmp_ldf;
    real_T out1_tmp_lc;
    real_T out1_tmp_ob;
    real_T out1_tmp_i5;
    real_T out1_tmp_e2;
    real_T out1_tmp_lo;
    real_T out1_tmp_noct;
    real_T out1_tmp_eue;
    real_T out1_tmp_cu;
    real_T out1_tmp_aps;
    real_T out1_tmp_ms;
    real_T out1_tmp_ck;
    real_T out1_tmp_fg;
    real_T out1_tmp_mj;
    real_T out1_tmp_k0;
    real_T out1_tmp_bu;
    real_T out1_tmp_hc;
    real_T out1_tmp_hcg;
    real_T out1_tmp_h2;
    real_T out1_tmp_bps;
    real_T out1_tmp_bf;
    real_T out1_tmp_dpz;
    real_T out1_tmp_jd;
    real_T out1_tmp_dlj;
    real_T out1_tmp_lot;
    real_T out1_tmp_jkk;
    real_T out1_tmp_bib;
    real_T out1_tmp_f2;
    real_T out1_tmp_poz;
    real_T out1_tmp_lr;
    real_T out1_tmp_l1r;
    real_T out1_tmp_i5e;
    real_T out1_tmp_okp;
    real_T out1_tmp_bv;
    real_T out1_tmp_iti;
    real_T out1_tmp_gv;
    real_T out1_tmp_pob;
    real_T out1_tmp_h5;
    real_T out1_tmp_ddb;
    real_T out1_tmp_fb5;
    real_T out1_tmp_fod;
    real_T out1_tmp_c1h;
    real_T out1_tmp_dkw;
    real_T out1_tmp_cat;
    real_T out1_tmp_bc;
    real_T out1_tmp_pw;
    real_T out1_tmp_hh;
    real_T out1_tmp_ei;
    real_T out1_tmp_lb;
    real_T out1_tmp_hge;
    real_T out1_tmp_nt;
    real_T out1_tmp_kr0;
    real_T out1_tmp_bti;
    real_T out1_tmp_oy;
    real_T out1_tmp_nij;
    real_T out1_tmp_fij;
    real_T out1_tmp_grk;
    real_T out1_tmp_dm5;
    real_T out1_tmp_d1;
    real_T out1_tmp_eyj;
    real_T out1_tmp_cei;
    real_T out1_tmp_ar;
    real_T out1_tmp_tmp_h;
    real_T out1_tmp_tmp_er;
    real_T out1_tmp_tmp_ne;
    real_T out1_tmp_hgs;
    real_T out1_tmp_oc2;
    real_T out1_tmp_foh;
    real_T out1_tmp_k1c;
    real_T out1_tmp_ejt;
    real_T out1_tmp_iwr;
    real_T out1_tmp_o3;
    real_T out1_tmp_jo;
    real_T out1_tmp_ky;
    real_T out1_tmp_ja;
    real_T out1_tmp_tmp_d0;
    real_T out1_tmp_tmp_g;
    real_T out1_tmp_tmp_c5;
    real_T out1_tmp_kh;
    real_T out1_tmp_jn;
    real_T out1_tmp_hcu;
    real_T out1_tmp_cz;
    real_T out1_tmp_dh;
    real_T out1_tmp_ai3;
    real_T out1_tmp_pu;
    real_T out1_tmp_fk;
    real_T out1_tmp_h2u;
    real_T out1_tmp_j5;
    real_T out1_tmp_nr;
    real_T out1_tmp_tmp_o1;
    real_T out1_tmp_tmp_on;
    real_T out1_tmp_tmp_dv;
    real_T out1_tmp_ac;
    real_T out1_tmp_kwn;
    real_T out1_tmp_ct;
    real_T out1_tmp_jy;
    real_T out1_tmp_bh;
    real_T out1_tmp_nc;
    real_T out1_tmp_dmd;
    real_T out1_tmp_hf;
    real_T out1_tmp_bfm;
    real_T out1_tmp_pyh;
    real_T out1_tmp_bpy;
    real_T out1_tmp_px;
    real_T out1_tmp_nek;
    real_T out1_tmp_j2;
    real_T out1_tmp_bny;
    real_T out1_tmp_ny;
    real_T out1_tmp_bweh;
    real_T out1_tmp_jr;
    real_T out1_tmp_k0l;
    real_T out1_tmp_dq;
    real_T out1_tmp_dj;
    real_T out1_tmp_o0;
    real_T out1_tmp_cfs;
    real_T out1_tmp_oz;
    real_T out1_tmp_aj;
    real_T out1_tmp_dqn;
    real_T out1_tmp_tmp_el;
    real_T out1_tmp_tmp_i;
    real_T out1_tmp_bwn;
    real_T out1_tmp_an0;
    real_T out1_tmp_kz;
    real_T out1_tmp_m2;
    real_T out1_tmp_jx;
    real_T out1_tmp_jm;
    real_T out1_tmp_tmp_k;
    real_T out1_tmp_tmp_kp;
    real_T out1_tmp_tmp_ar;
    real_T out1_tmp_kc;
    real_T out1_tmp_fo1;
    real_T out1_tmp_czb;
    real_T out1_tmp_on;
    real_T out1_tmp_kv;
    real_T out1_tmp_p2d;
    real_T out1_tmp_f4;
    real_T out1_tmp_dx;
    real_T out1_tmp_eb;
    real_T out1_tmp_lf;
    real_T out1_tmp_ez;
    real_T out1_tmp_hv;
    real_T out1_tmp_gg;
    real_T out1_tmp_p5;
    real_T out1_tmp_tmp_nl;
    real_T out1_tmp_tmp_o2;
    real_T out1_tmp_tmp_l;
    real_T out1_tmp_fz;
    real_T out1_tmp_h5r;
    real_T out1_tmp_d4;
    real_T out1_tmp_mf;
    real_T out1_tmp_iya;
    real_T out1_tmp_j4;
    real_T out1_tmp_pa;
    real_T out1_tmp_db;
    real_T out1_tmp_jbb;
    real_T out1_tmp_kk;
    real_T out1_tmp_mc;
    real_T out1_tmp_do;
    real_T out1_tmp_pzl;
    real_T out1_tmp_ig;
    real_T out1_tmp_ged;
    real_T out1_tmp_efo;
    real_T out1_tmp_ha;
    real_T out1_tmp_gq;
    real_T out1_tmp_cgl;
    real_T out1_tmp_a5;
    real_T out1_tmp_fpc;
    real_T out1_tmp_ik;
    real_T out1_tmp_c1k;
    real_T out1_tmp_nrj;
    real_T out1_tmp_c2;
    real_T out1_tmp_c4;
    real_T out1_tmp_ikw;
    real_T out1_tmp_hu;
    real_T out1_tmp_ml;
    real_T out1_tmp_go;
    real_T out1_tmp_tmp_ox;
    real_T out1_tmp_tmp_ms;
    real_T out1_tmp_tmp_ex;
    real_T out1_tmp_ea;
    real_T out1_tmp_il;
    real_T out1_tmp_fw;
    real_T out1_tmp_hvb;
    real_T out1_tmp_ini;
    real_T out1_tmp_pi;
    real_T out1_tmp_aaa;
    real_T out1_tmp_fj;
    real_T out1_tmp_ddh;
    real_T out1_tmp_cuz;
    real_T out1_tmp_j1k;
    real_T out1_tmp_c3;
    real_T out1_tmp_nw;
    real_T out1_tmp_jf;
    real_T out1_tmp_ks;
    real_T out1_tmp_os;
    real_T out1_tmp_g2;
    real_T out1_tmp_ksm;
    real_T out1_tmp_j5b;
    real_T out1_tmp_px1;
    real_T out1_tmp_hw;
    real_T out1_tmp_nwp;
    real_T out1_tmp_bx;
    real_T out1_tmp_mt;
    real_T out1_tmp_kvt;
    real_T out1_tmp_b4w;
    real_T out1_tmp_l1g;
    real_T out1_tmp_g5i;
    real_T out1_tmp_g23;
    real_T out1_tmp_n4;
    real_T out1_tmp_c3d;
    real_T out1_tmp_eo;
    real_T d35;
    real_T t15_f;
    real_T t17_k;
    real_T t19_c;
    real_T t23_d;
    real_T t25;
    real_T t27_m;
    real_T t33_j;
    real_T t34_c;
    real_T t35_d;
    real_T t37_p;
    real_T t38_a;
    real_T t39_m0;
    real_T t41_n;
    real_T t42_k;
    real_T t43_pd;
    real_T t44_k;
    real_T t45_g;
    real_T t47;
    real_T t50_h;
    real_T t57_l;
    real_T t58_o;
    real_T t129;
    real_T t130;
    real_T t131;
    real_T t133;
    real_T t134;
    real_T t135;
    real_T in3_tmp_a2;
    real_T in3_tmp_n3;
    real_T in3_tmp_ov;
    real_T in3_tmp_da;
    real_T in3_tmp_hk;
    real_T in3_tmp_h4;
    real_T in3_tmp_a0e;
    real_T in3_tmp_kg;
    real_T in3_tmp_jr;
    real_T in3_tmp_tmp;
    real_T in3_tmp_tmp_d;
    real_T in3_tmp_pe;
    real_T in3_tmp_dh;
    real_T in3_tmp_by;
    real_T in3_tmp_oa;
    real_T in3_tmp_j4;
    real_T in3_tmp_pc;
    real_T in3_tmp_lj;
    real_T in3_tmp_cy;
    real_T in3_tmp_mi;
    real_T in3_tmp_h5;
    real_T in3_tmp_tmp_a;
    real_T in3_tmp_tmp_o;
    real_T in3_tmp_tmp_i;
    real_T in3_tmp_tmp_e;
    real_T in3_tmp_tmp_az;
    real_T in3_tmp_tmp_eu;
    real_T in3_tmp_tmp_dz;
    real_T in3_tmp_tmp_l;
    real_T in3_tmp_if;
    real_T in3_tmp_nkd;
    real_T in3_tmp_cf;
    real_T in3_tmp_i4j;
    real_T in3_tmp_d4;
    real_T in3_tmp_b4;
    real_T in3_tmp_at;
    real_T in3_tmp_b5;
    real_T in3_tmp_nt;
    real_T in3_tmp_bi;
    real_T in3_tmp_pi;
    real_T in3_tmp_ih;
    real_T in3_tmp_kf;
    real_T in3_tmp_cr;
    real_T in3_tmp_nc;
    real_T in3_tmp_bp;
    real_T in3_tmp_tmp_m;
    real_T in3_tmp_tmp_mr;
    real_T in3_tmp_tmp_n;
    real_T in3_tmp_tmp_mz;
    real_T in3_tmp_tmp_lv;
    real_T in3_tmp_tmp_o0;
    real_T in3_tmp_tmp_ix;
    real_T in3_tmp_tmp_p;
    real_T in3_tmp_tmp_nm;
    real_T in3_tmp_tmp_c;
    real_T in3_tmp_et;
    real_T in3_tmp_jv;
    real_T in3_tmp_l2;
    real_T in3_tmp_jt;
    real_T in3_tmp_c3;
    real_T in3_tmp_tmp_b;
    real_T in3_tmp_i0;
    real_T in3_tmp_kz;
    real_T in3_tmp_tmp_lo;
    real_T in3_tmp_tmp_j;
    real_T in3_tmp_tmp_tmp;
    real_T in3_tmp_tmp_mq;
    real_T in3_tmp_tmp_jh;
    real_T in3_tmp_eu;
    real_T in3_tmp_tmp_dt;
    real_T in3_tmp_tmp_tmp_j;
    real_T in3_tmp_tmp_tmp_k;
    real_T in3_tmp_tmp_oc;
    real_T in3_tmp_nc4;
    real_T in3_tmp_bz;
    real_T in3_tmp_tmp_tmp_i;
    real_T in3_tmp_tmp_tmp_d;
    real_T in3_tmp_dp;
    real_T in3_tmp_pa;
    real_T in3_tmp_es;
    real_T in3_tmp_ne;
    real_T in3_tmp_dz;
    real_T in3_tmp_md;
    real_T in3_tmp_gm;
    real_T in3_tmp_ij;
    real_T in3_tmp_km;
    real_T in3_tmp_im;
    real_T in3_tmp_mc;
    real_T in3_tmp_jm;
    real_T in3_tmp_ap;
    real_T in3_tmp_iw;
    real_T in3_tmp_ec;
    real_T in3_tmp_ik;
    real_T in3_tmp_hv;
    real_T in3_tmp_mg;
    real_T in3_tmp_a4;
    real_T in3_tmp_of;
    real_T in3_tmp_os;
    real_T in3_tmp_nt0;
    real_T in3_tmp_k2;
    real_T in3_tmp_hnb;
    real_T in3_tmp_d4y;
    real_T in3_tmp_ae;
    real_T in3_tmp_hg;
    real_T in3_tmp_cc;
    real_T in3_tmp_bv;
    real_T in3_tmp_ch;
    real_T in3_tmp_gk;
    real_T in3_tmp_pj;
    real_T in3_tmp_ib;
    real_T in3_tmp_jj;
    real_T in3_tmp_ce;
    real_T in3_tmp_ceq;
    real_T in3_tmp_fe;
    real_T ct_tmp_dy;
    real_T ct_tmp_nr;
    real_T ct_tmp_br;
    real_T ct_tmp_f0v;
    real_T ct_tmp_j1;
    real_T ct_tmp_hc;
    real_T ct_tmp_hg;
    real_T ct_tmp_c2;
    real_T ct_tmp_gr;
    real_T ct_tmp_ej;
    real_T ct_tmp_eq;
    real_T ct_tmp_av;
    real_T ct_tmp_hz;
    real_T ct_tmp_gc;
    real_T ct_tmp_ak;
    real_T ct_tmp_gux;
    real_T ct_tmp_oav;
    real_T ct_tmp_tmp_ak;
    real_T ct_tmp_tmp_e;
    real_T ct_tmp_tmp_ha;
    real_T ct_tmp_tmp_j;
    real_T ct_tmp_tmp_bq;
    real_T ct_tmp_kq;
    real_T ct_tmp_hq;
    real_T ct_tmp_dd;
    real_T ct_tmp_oh;
    real_T ct_tmp_ku;
    real_T ct_tmp_k0;
    real_T ct_tmp_on;
    real_T ct_tmp_do;
    real_T ct_tmp_lo;
    real_T ct_tmp_me;
    real_T ct_tmp_oi;
    real_T ct_tmp_at;
    real_T ct_tmp_i2;
    real_T ct_tmp_fi;
    real_T ct_tmp_as;
    real_T ct_tmp_g1;
    real_T ct_tmp_k1;
    real_T ct_tmp_l3;
    real_T ct_tmp_eu;
    real_T ct_tmp_equ;
    real_T ct_tmp_ft;
    real_T ct_tmp_dw;
    real_T ct_tmp_bc;
    real_T ct_tmp_ol;
    real_T ct_tmp_py;
    real_T ct_tmp_lf;
    real_T ct_tmp_doq;
    real_T ct_tmp_lt;
    real_T ct_tmp_ad1;
    real_T ct_tmp_nk;
    real_T ct_tmp_es;
    real_T ct_tmp_nf;
    real_T ct_tmp_hh;
    real_T ct_tmp_ah;
    real_T ct_tmp_b5;
    real_T ct_tmp_k5;
    real_T ct_tmp_aw;
    real_T ct_tmp_km;
    real_T ct_tmp_pa;
    real_T ct_tmp_o3;
    real_T ct_tmp_c4;
    real_T ct_tmp_kh;
    real_T ct_tmp_hsb;
    real_T ct_tmp_bv;
    real_T ct_tmp_ez;
    real_T ct_tmp_co;
    real_T ct_tmp_om;
    real_T ct_tmp_ar;
    real_T ct_tmp_pe;
    real_T ct_tmp_ok;
    real_T ct_tmp_l2;
    real_T ct_tmp_fr;
    real_T ct_tmp_tmp_pn;
    real_T ct_tmp_tmp_p5;
    real_T ct_tmp_br5;
    real_T ct_tmp_k0a;
    real_T ct_tmp_mea;
    real_T ct_tmp_gk;
    real_T ct_tmp_b5t;
    real_T ct_tmp_ilo;
    real_T ct_tmp_bs;
    real_T ct_tmp_h2;
    real_T ct_tmp_df;
    real_T ct_tmp_f5;
    real_T ct_tmp_dkn;
    real_T ct_tmp_pps;
    real_T ct_tmp_gs;
    real_T ct_tmp_f3;
    real_T ct_tmp_o2;
    real_T ct_tmp_f4;
    real_T ct_tmp_o32;
    real_T ct_tmp_l0;
    real_T ct_tmp_e3;
    real_T ct_tmp_gnm;
    real_T ct_tmp_ba5;
    real_T ct_tmp_je;
    real_T ct_tmp_fp;
    real_T ct_tmp_cos;
    real_T ct_tmp_fo;
    real_T ct_tmp_bn;
    real_T ct_tmp_def;
    real_T ct_tmp_jm;
    real_T ct_tmp_oe;
    real_T ct_tmp_li;
    real_T ct_tmp_gj;
    real_T ct_tmp_mc;
    real_T ct_tmp_gh;
    real_T ct_tmp_an;
    real_T ct_tmp_ey;
    real_T ct_tmp_b0;
    real_T ct_tmp_ezf;
    real_T ct_tmp_mz;
    real_T ct_tmp_hze;
    real_T ct_tmp_br5z;
    real_T ct_tmp_dm;
    real_T ct_tmp_oht;
    real_T ct_tmp_kk;
    real_T ct_tmp_mr;
    real_T ct_tmp_fjz;
    real_T ct_tmp_ox;
    real_T ct_tmp_it;
    real_T ct_tmp_ka;
    real_T ct_tmp_kg;
    real_T ct_tmp_n1;
    real_T ct_tmp_fq;
    real_T ct_tmp_mzs;
    real_T ct_tmp_ia;
    real_T ct_tmp_ii;
    real_T ct_tmp_bl;
    real_T ct_tmp_nt;
    real_T ct_tmp_ir;
    real_T ct_tmp_nj;
    real_T ct_tmp_m0;
    real_T ct_tmp_ppg;
    real_T ct_tmp_k1e;
    real_T ct_tmp_p3;
    real_T ct_tmp_eqa;
    real_T ct_tmp_k2u;
    real_T ct_tmp_bro;
    real_T ct_tmp_lm;
    real_T ct_tmp_j1n;
    real_T ct_tmp_jx;
    real_T ct_tmp_kz;
    real_T ct_tmp_pf;
    real_T ct_tmp_p3r;
    real_T ct_tmp_et;
    real_T ct_tmp_hl;
    real_T ct_tmp_i1;
    real_T ct_tmp_jdd;
    real_T t3179;
    real_T t3180;
    real_T t3181;
    real_T t3182;
    real_T t3183;
    real_T t3184;
    real_T t3185;
    real_T t3186;
    real_T t3190;
    real_T t3191;
    real_T t3192;
    real_T t3196;
    real_T t3197;
    real_T t3198;
    real_T t3199;
    real_T t3200;
    real_T t3201;
    real_T t3202;
    real_T t3203;
    real_T t3204;
    real_T t3205;
    real_T t3206;
    real_T t3207;
    real_T t3208;
    real_T t3209;
    real_T t3224;
    real_T t3225;
    real_T t3228;
    real_T t3229;
    real_T t3230;
    real_T t3231;
    real_T t3232;
    real_T t3233;
    real_T t3234;
    real_T t3235;
    real_T t3236;
    real_T t3237;
    real_T t3238;
    real_T t3239;
    real_T t3240;
    real_T t3241;
    real_T t3242;
    real_T t3210;
    real_T t3211;
    real_T t3212;
    real_T t3213;
    real_T t3214;
    real_T t3215;
    real_T t3216;
    real_T t3217;
    real_T t3218;
    real_T t3219;
    real_T t3220;
    real_T t3221;
    real_T t3243;
    real_T t3244;
    real_T t3245;
    real_T t3247;
    real_T t3247_tmp;
    real_T t3247_tmp_a;
    real_T Anq_tmp;
    real_T Anq_tmp_tmp;
    real_T Anq_tmp_j;
    real_T Anq_tmp_g;
    real_T Anq_tmp_n;
    real_T Anq_tmp_l;
    real_T Anq_tmp_e;
    real_T Anq_tmp_c;
    real_T Anq_tmp_tmp_h;
    real_T t2;
    real_T t3;
    real_T t4_o;
    real_T t5_d;
    real_T t6_d;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t17_j;
    real_T t18_f;
    real_T t19_k;
    real_T t20_n;
    real_T t21_n;
    real_T t22_i;
    real_T t23_e;
    real_T t24_k;
    real_T t25_k;
    real_T t26_p;
    real_T t27_k;
    real_T t28_p;
    real_T t29_p;
    real_T t30_b;
    real_T t31_c;
    real_T t32_d;
    real_T t33_c;
    real_T t34_a;
    real_T t39_i;
    real_T t40_d;
    real_T t41_f;
    real_T t42_n;
    real_T t43_g;
    real_T t44_o;
    real_T t45_m;
    real_T t55;
    real_T t56;
    real_T t57_h;
    real_T t58_e;
    real_T t59_m;
    real_T t61_i;
    real_T t62_h;
    real_T t65_n;
    real_T t68;
    real_T t35_e;
    real_T t36_e;
    real_T t37_o;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp_o;
    real_T t32_tmp;
    real_T t25_tmp_f;
    real_T t29_tmp_m;
    real_T Kx;
    real_T Kr;
    real_T Ku1;
    real_T Kv;
    real_T Kut;
    real_T rMin_g;
    real_T Xnorm0_c;
    real_T cMin_k;
    real_T zTa;
    real_T t_d;
    real_T Linv;
    real_T atmp_c;
    real_T xnorm;
    real_T temp_k;
    real_T c_kl;
    real_T tst;
    real_T ab;
    real_T ba;
    real_T aa;
    real_T bb;
    real_T h12;
    real_T sn;
    real_T tst_tmp;
    real_T tst_tmp_tmp;
    real_T temp_f;
    real_T p_g;
    real_T bcmax;
    real_T bcmis;
    real_T scale_k;
    real_T z_n;
    real_T a_p;
    real_T s_e;
    real_T atmp_l;
    real_T temp_a;
    real_T c_e4;
    real_T s_g;
    real_T atmp_f;
    real_T temp_e;
    real_T s_n;
    real_T atmp_m;
    real_T temp_b;
    real_T s_nh;
    real_T atmp_c4;
    real_T temp_m;
    real_T d_j;
    real_T s_h;
    real_T d_c;
    real_T s_m;
    real_T b_r;
    real_T t8_n;
    real_T t9_e;
    real_T t11_c;
    real_T t12_b;
    real_T t13_p;
    real_T t14_i;
    real_T t15_o;
    real_T t16_n;
    real_T t25_m;
    real_T t29_m;
    real_T t31_d;
    real_T t50_i;
    real_T t53;
    real_T t54;
    real_T t17_e;
    real_T t18_k;
    real_T t19_p;
    real_T t57_j;
    real_T t64;
    real_T t65_c;
    real_T t68_b;
    real_T t69_l;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp_nxl;
    real_T out1_tmp_alf;
    real_T out1_tmp_nd;
    real_T out1_tmp_dy;
    real_T out1_tmp_gw;
    real_T out1_tmp_f1;
    real_T out1_tmp_ggn;
    real_T out1_tmp_la;
    real_T out1_tmp_laf;
    real_T s_o;
    real_T atmp_k;
    real_T temp_g;
    real_T xnorm_k;
    real_T scale_j;
    real_T absxk_k;
    real_T t_g;
    real_T xnorm_h;
    real_T b_alpha1_tmp;
    real_T scale_m;
    real_T absxk_kr;
    real_T t_c;
    real_T b_index;
    real_T scale_h;
    real_T absxk_h;
    real_T t_dl;
    real_T c_b;
    real_T normH;
    real_T absx;
    real_T ssq;
    real_T c_p;
    real_T s_c;
    real_T atmp_b;
    real_T tau_idx_0;
    real_T scale_l;
    real_T absxk_oy;
    real_T t_dd;
    SL_Bus_proc_control_std_msgs_UInt8 In1_i2;// '<S339>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_e;// '<S75>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_om;// '<S82>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_f1;// '<S342>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_cx;// '<S338>/In1'
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_m[8];
    boolean_T umin_incr_flag_n[8];
    boolean_T bv3[8];
    uint32_T b_u[2];
    int32_T s1_size[2];
    int32_T b_s1_size[2];
    int32_T k_size[2];
    int32_T s1_size_m[2];
    int32_T s1_size_i[2];
    int32_T j_size[2];
    int32_T str_size[2];
    int32_T str_size_o[2];
    int32_T str_size_a[2];
    int32_T s1_size_k[2];
    int32_T s1_size_mi[2];
    int32_T s1_size_g[2];
    int32_T s1_size_n[2];
    int32_T s1_size_ic[2];
    int32_T s1_size_e[2];
    int32_T s1_size_e0[2];
    int32_T s1_size_b[2];
    int32_T s1_size_iv[2];
    int32_T s1_size_kh[2];
    int32_T s1_size_d[2];
    int32_T s1_size_ke[2];
    int32_T s1_size_a[2];
    int32_T s1_size_if[2];
    int32_T s1_size_bs[2];
    int32_T s1_size_e5[2];
    int32_T s1_size_l[2];
    int32_T s1_size_iq[2];
    int32_T s1_size_bq[2];
    int32_T s1_size_el[2];
    int32_T s1_size_bb[2];
    int32_T s1_size_ir[2];
    int32_T s1_size_m1[2];
    int32_T s1_size_l4[2];
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
    int32_T y_size[2];
    int32_T varargin_4_size[2];
    int32_T cb_size[2];
    int32_T tmp_size[2];
    int32_T Su_size[2];
    int32_T Cineq_size[2];
    int32_T JacCineqTrans_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T a__4_size[2];
    int32_T varargin_1_size_o[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_n[2];
    int32_T tmp_size_i[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_o[2];
    int32_T b_x_size[2];
    int32_T b_H_size_m[2];
    int32_T b_A_size[2];
    int32_T idx[2];
    int32_T tmp_size_a[2];
    int32_T b_size_c[2];
    boolean_T b_d[4];
    int16_T Jx_g[2];
    int16_T varargin_2[2];
    int16_T Je_h[2];
    real32_T rtb_Merge4_Data;
    int32_T ibmat;
    int32_T b_k;
    int32_T n_b;
    int32_T b_n_d;
    int32_T itoken;
    int32_T f_c;
    int32_T idx_h;
    int32_T ntoread;
    int32_T b_idx;
    int32_T k_data;
    int32_T j_data;
    int32_T Ns;
    int32_T Ns_f;
    int32_T i;
    int32_T d_size;
    int32_T e_size;
    int32_T b_x_size_n;
    int32_T str_size_idx_1;
    int32_T cleanStr_size_idx_1;
    int32_T st_Value_size_idx_1;
    int32_T pny;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ii;
    int32_T c_t;
    int32_T i_d;
    int32_T pny_e;
    int32_T varargin_1;
    int32_T i_input_sizes_idx_1;
    int32_T nmoves_tmp;
    int32_T isMrows_size;
    int32_T tmp_size_e;
    int32_T Mu_size_idx_0;
    int32_T Mv_aux_size_idx_0;
    int32_T Mu_size_idx_1_tmp;
    int32_T Mv_aux_size_idx_1_tmp;
    int32_T j_tmp;
    int32_T varargin_1_p;
    int32_T i_n;
    int32_T loop_ub;
    int32_T i1;
    int32_T loop_ub_f;
    int32_T loop_ub_e;
    int32_T input_sizes_idx_0;
    int32_T i2;
    int32_T CA_tmp;
    int32_T varargin_1_size_idx_1;
    int32_T Sx_size_tmp;
    int32_T mc;
    int32_T coffset;
    int32_T boffset;
    int32_T aoffset;
    int32_T j_k;
    int32_T i_f;
    int32_T b_i;
    int32_T i3;
    int32_T ii_k;
    int32_T i_p;
    int32_T i4;
    int32_T i5;
    int32_T i_h;
    int32_T I2Jm_tmp;
    int32_T nA;
    int32_T tmp;
    int32_T iSave;
    int32_T i_i;
    int32_T i_dc;
    int32_T U_tmp;
    int32_T b_i_d;
    int32_T d_i;
    int32_T c_j;
    int32_T g_i;
    int32_T iC_d;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_j;
    int32_T jA;
    int32_T jy;
    int32_T b_i_a;
    int32_T b_k_a;
    int32_T i_a;
    int32_T b_i_l;
    int32_T Ac_tmp;
    int32_T Ac_tmp_i;
    int32_T j_n;
    int32_T b_k_b;
    int32_T eint;
    int32_T i_hs;
    int32_T i6;
    int32_T b_k_bk;
    int32_T i7;
    int32_T b_A2_tmp;
    int32_T n_a;
    int32_T nb;
    int32_T nbitson;
    int32_T n_bx;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T QPObjective_nvar;
    int32_T QPObjective_objtype;
    int32_T QPObjective_prev_objtype;
    int32_T QPObjective_prev_nvar;
    int32_T ix_l;
    int32_T ia;
    int32_T i_hh;
    int32_T loop_ub_d;
    int32_T tmp_size_g;
    int32_T tmp_size_j;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_m;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_le;
    int32_T iy;
    int32_T c_o;
    int32_T ia_p;
    int32_T b_ix;
    int32_T b_iy;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_ds;
    int32_T y_size_idx_0_g;
    int32_T i_m;
    int32_T i_o;
    int32_T wtYerr_tmp;
    int32_T sizes_idx_0;
    int32_T k;
    int32_T i_ft;
    int32_T b_size_idx_0;
    int32_T c_idx_col;
    int32_T b_k_i;
    int32_T sizes_idx_0_d;
    int32_T c_k_f;
    int32_T d_k;
    int32_T i_nq;
    int32_T b_c_size;
    int32_T b_size_idx_0_d;
    int32_T i8;
    int32_T i9;
    int32_T loop_ub_c;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T mc_b;
    int32_T coffset_b;
    int32_T boffset_h;
    int32_T aoffset_g;
    int32_T bkj_c;
    int32_T b_s;
    int32_T e_j;
    int32_T e_i;
    int32_T i10;
    int32_T b_s_d;
    int32_T A2_tmp;
    int32_T A4_tmp;
    int32_T n_a1;
    int32_T nb_h;
    int32_T nbitson_c;
    int32_T b_n_c;
    int32_T i_m1;
    int32_T i_ok;
    int32_T i_e;
    int32_T i_jq;
    int32_T i_l;
    int32_T b_i_n;
    int32_T loop_ub_en;
    int32_T i11;
    int32_T nA_c;
    int32_T kDrop;
    int32_T kNext;
    int32_T last;
    int32_T idx_j;
    int32_T b_H_m;
    int32_T status;
    int32_T z_size;
    int32_T d_k_e;
    int32_T b_m;
    int32_T b_n_h;
    int32_T RLinv_c;
    int32_T b_A_j;
    int32_T b_A_a;
    int32_T tau_size;
    int32_T TL_size_idx_0;
    int32_T Q_size_idx_0;
    int32_T R_size_idx_0;
    int32_T b_m_d;
    int32_T n_bb;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_c;
    int32_T mmi;
    int32_T mmip1;
    int32_T i_ah;
    int32_T knt_i;
    int32_T b_k_p;
    int32_T c_k_m;
    int32_T jA_b;
    int32_T jy_e;
    int32_T ix_f;
    int32_T j_m;
    int32_T b_ax;
    int32_T ijA;
    int32_T ia_o;
    int32_T i_l1;
    int32_T itau_p;
    int32_T iaii;
    int32_T lastv;
    int32_T lastc;
    int32_T iac;
    int32_T d_d;
    int32_T coltop_b;
    int32_T j_d;
    int32_T i_dcj;
    int32_T L;
    int32_T k_e;
    int32_T m_l;
    int32_T nr;
    int32_T hoffset;
    int32_T its;
    int32_T coffset_k;
    int32_T aoffset_l;
    int32_T j_j;
    int32_T ii_h;
    int32_T knt_k;
    int32_T ia_e;
    int32_T k_g;
    int32_T b_i_c;
    int32_T coffset_o;
    int32_T aoffset_lw;
    int32_T j_e;
    int32_T ii_m;
    int32_T knt_o;
    int32_T ia_eh;
    int32_T coffset_m;
    int32_T aoffset_j;
    int32_T j_h;
    int32_T ii_n;
    int32_T knt_j;
    int32_T ia_d;
    int32_T coffset_j;
    int32_T aoffset_k;
    int32_T j_b;
    int32_T ii_l;
    int32_T knt_je;
    int32_T ia_n;
    int32_T g_k_g;
    int32_T jj;
    int32_T jp1j;
    int32_T kAcol;
    int32_T e_k;
    int32_T jj_d;
    int32_T ix_o;
    int32_T coffset_a;
    int32_T aoffset_e;
    int32_T j_o;
    int32_T knt_im;
    int32_T coltop_bv;
    int32_T ia_a;
    int32_T knt_jl;
    int32_T i_ay;
    int32_T in;
    int32_T ia0;
    int32_T b_i_g;
    int32_T knt_oe;
    int32_T lastv_a;
    int32_T ix_c;
    int32_T iac_d;
    int32_T jA_d;
    int32_T s_l;
    int32_T u_d;
    int32_T i12;
    int32_T isMrows_tmp;
    int32_T tmp_size_jj;
    int32_T ibcol;
    int32_T itilerow;
    int32_T k_k;
    int32_T s_d;
    int32_T u_c;
    int32_T i13;
    int32_T isMrows_tmp_k;
    int32_T tmp_size_p;
    int32_T ibcol_e;
    int32_T itilerow_i;
    int32_T i_b;
    int32_T itau_i;
    int32_T iaii_h;
    int32_T ic0;
    int32_T lastv_d;
    int32_T lastc_g;
    int32_T coltop_m;
    int32_T b_ia_g;
    int32_T ix_h;
    int32_T b_iy_a;
    int32_T b_ee;
    int32_T iac_i;
    int32_T d_h;
    int32_T ia_k;
    int32_T b_degrees;
    int32_T emlN;
    int32_T Tries;
    int32_T loop_ub_fd;
    int32_T tmp_size_l;
    int32_T loop_ub_tmp;
    int32_T idxAjj;
    int32_T j_ob;
    int32_T iy_l;
    int32_T iac_dz;
    int32_T d_a;
    int32_T ia_j;
    int32_T b_ix_o;
    int32_T b_iy_e;
    int32_T b_k_m;
    int32_T coffset_d;
    int32_T loop_ub_c5;
    uint32_T receivedLength;
    uint32_T b_q;
    SL_Bus_proc_control_std_msgs_Float32 b_varargout_2_i5;
    SL_Bus_proc_control_std_msgs_Float32 BusAssignment_h;// '<S91>/Bus Assignment' 
    char_T expl_temp_k[3];
    int8_T empty_non_axis_sizes[2];
    int8_T empty_non_axis_sizes_c[2];
    int8_T empty_non_axis_sizes_f[2];
    int16_T b_Mrows;
    int16_T j_jn;
    uint8_T empty_non_axis_sizes_i[2];
    uint8_T empty_non_axis_sizes_c3[2];
    uint8_T empty_non_axis_sizes_d[2];
    uint8_T varargin_1_a[2];
    int8_T rtPrevAction;
    int8_T rtAction;
    int8_T sizes_idx_1;
    int8_T pny1_h;
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T ZeroOrderHold_c;           // '<S10>/Zero-Order Hold'
    uint8_T mode;                      // '<S322>/Data Type Conversion'
    uint8_T u_k;
    uint8_T i_k;
    boolean_T NOT;                     // '<S241>/NOT'
    boolean_T isReached;               // '<S9>/Merge'
    boolean_T isTrajDone;              // '<S9>/Merge'
    boolean_T SourceBlock_o1;          // '<S308>/SourceBlock'
    boolean_T blockOrdering_o;         // '<S286>/Correct'
    boolean_T thrustersStatus[8];      // '<S129>/MPC manager'
    boolean_T success;
    boolean_T foundsign;
    boolean_T c_success;
    boolean_T mask2;
    boolean_T b_varargout_1;
    boolean_T b_varargout_1_n;
    boolean_T Merge;                   // '<S3>/Merge'
    boolean_T NewDvlMsg;               // '<S3>/Merge3'
    boolean_T newPressureMsg;          // '<S3>/Merge6'
    boolean_T empty_non_axis_sizes_j;
    boolean_T cTolComputed;
    boolean_T isT1Inf;
    boolean_T tempOK;
    boolean_T VECTOR_INPUT_AND_P_IS_INF;
    boolean_T MATRIX_INPUT_AND_P_IS_INF;
    boolean_T haspoint;
    SL_Bus_proc_control_std_msgs_Bool b_varargout_2_bl;
    SL_Bus_proc_control_std_msgs_Bool BusAssignment_e;
    SL_Bus_proc_control_std_msgs_UInt8 b_varargout_2_m;
    char_T b_y_tmp;
    char_T c_oh;
    B_CurrentTime_proc_control_T CurrentTime_e;// '<S101>/Current Time'
    B_CurrentTime_proc_control_T CurrentTime;// '<S101>/Current Time'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S303>/MATLAB System'
    MultiTrajectoryManager_proc_c_T obj_o;// '<S302>/MATLAB System'
    mpcManager_proc_control_T obj_f;   // '<S129>/MPC manager'
    String2DoubleArray_proc_c_pr3_T obj_l;// '<S324>/MATLAB System11'
    TrimPlant_proc_control_T obj_b;    // '<S131>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_fo;// '<S330>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_oe;// '<S329>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_bm;// '<S328>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_e;// '<S327>/MATLAB System'
    String2DoubleArray_proc_pr351_T obj_f5;// '<S324>/MATLAB System6'
    String2DoubleArray_proc_con_p_T obj_bn;// '<S331>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_p;// '<S330>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_g;// '<S330>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_fb;// '<S329>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_i;// '<S329>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_b0;// '<S328>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_n;// '<S328>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_a;// '<S327>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_ew;// '<S327>/MATLAB System1'
    String2DoubleArray_proc__pr35_T obj_d;// '<S324>/MATLAB System5'
    String2DoubleArray_proc__pr35_T obj_oo;// '<S324>/MATLAB System4'
    String2DoubleArray_proc__pr35_T obj_c;// '<S324>/MATLAB System3'
    String2DoubleArray_proc_co_pr_T obj_a0;// '<S324>/MATLAB System9'
    String2DoubleArray_proc_co_pr_T obj_ig;// '<S324>/MATLAB System8'
    String2DoubleArray_proc_co_pr_T obj_fbb;// '<S324>/MATLAB System7'
    String2DoubleArray_proc_co_pr_T obj_k;// '<S324>/MATLAB System2'
    String2DoubleArray_proc_co_pr_T obj_o0;// '<S324>/MATLAB System10'
    String2DoubleArray_proc_co_pr_T obj_cn;// '<S324>/MATLAB System1'
    AuvDifferentialEquation_proc__T obj_c3;// '<S1>/MATLAB System'
    OpenLoopController_proc_contr_T obj_m;// '<S133>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_j;// '<S318>/Rotation Trajectory'
    robotics_slcore_internal_bl_p_T obj_jo;// '<S320>/Polynomial Trajectory1'
    AddPose_proc_control_T obj_ab;     // '<S303>/MATLAB System1'
    rosCommandManager_proc_contro_T obj_mv;// '<S322>/MATLAB System'
    HydroModel_proc_control_T obj_fj;  // '<S34>/MATLAB System'
    ros_slros_internal_block_Curr_T obj_oi;// '<S170>/Current Time'
    ros_slros_internal_block_GetP_T obj_iu;// '<S324>/Get Parameter9'
    ros_slros_internal_block_GetP_T obj_fr;// '<S324>/Get Parameter8'
    ros_slros_internal_block_GetP_T obj_ez;// '<S324>/Get Parameter7'
    ros_slros_internal_block_GetP_T obj_jm;// '<S324>/Get Parameter6'
    ros_slros_internal_block_GetP_T obj_lz;// '<S324>/Get Parameter5'
    ros_slros_internal_block_GetP_T obj_n2;// '<S324>/Get Parameter4'
    ros_slros_internal_block_GetP_T obj_de;// '<S324>/Get Parameter3'
    ros_slros_internal_block_GetP_T obj_lr;// '<S324>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_a0t;// '<S324>/Get Parameter15'
    ros_slros_internal_block_GetP_T obj_n1;// '<S324>/Get Parameter14'
    ros_slros_internal_block_GetP_T obj_lm;// '<S324>/Get Parameter13'
    ros_slros_internal_block_GetP_T obj_gr;// '<S324>/Get Parameter12'
    ros_slros_internal_block_GetP_T obj_nu;// '<S324>/Get Parameter11'
    ros_slros_internal_block_GetP_T obj_pv;// '<S324>/Get Parameter10'
    ros_slros_internal_block_GetP_T obj_h;// '<S324>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_nw;// '<S324>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_gy;// '<S326>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_mh;// '<S326>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_iy;// '<S326>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_er;// '<S325>/Get Parameter3'
    ros_slros_internal_block_GetP_T obj_f0;// '<S325>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_fk;// '<S325>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_kc;// '<S325>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_im;// '<S331>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_ll;// '<S330>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_ps;// '<S330>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_hs;// '<S330>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_j2;// '<S329>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_l4;// '<S329>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_hu;// '<S329>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_ku;// '<S328>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_frx;// '<S328>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_k2;// '<S328>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_kf;// '<S327>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_dj;// '<S327>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_f1;// '<S327>/Get Parameter'
    ros_slroscpp_internal_block_P_T obj_ik;// '<S312>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ba;// '<S172>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S126>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_eb;// '<S122>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S118>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_po;// '<S114>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_og;// '<S113>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S108>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_cs;// '<S105>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_abu;// '<S103>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kd;// '<S99>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S97>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_dt;// '<S42>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_jj;// '<S28>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_bh;// '<S337>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S336>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S335>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_oz;// '<S334>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S333>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S332>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S316>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S308>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_csq;// '<S306>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hhu;// '<S233>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k4;// '<S232>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_p0;// '<S72>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S71>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_dh;// '<S70>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_lu;// '<S69>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hx;// '<S80>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S79>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df1;// '<S78>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i4;// '<S77>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ne;// '<S43>/SourceBlock'
    real_T _DSTATE[8];                 // '<S243>/ '
    real_T Delay_DSTATE_e;             // '<S322>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S318>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S263>/Delay'
    real_T Delay_DSTATE_k;             // '<S130>/Delay'
    real_T Delay_DSTATE_a[8];          // '<S135>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S210>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S210>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S210>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S177>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S134>/Delay1'
    real_T UD_DSTATE[6];               // '<S173>/UD'
    real_T Delay1_DSTATE_e[8];         // '<S131>/Delay1'
    real_T last_mv_DSTATE_f[8];        // '<S139>/last_mv'
    real_T DiscreteTransferFcn1_states;// '<S18>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_k;// '<S19>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_o;// '<S20>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_i;// '<S21>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_g;// '<S22>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_h;// '<S23>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_l;// '<S24>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_ge;// '<S25>/Discrete Transfer Fcn1'
    real_T UnitDelay_DSTATE[13];       // '<S1>/Unit Delay'
    real_T DiscreteTimeIntegrator_DSTATE_f[3];// '<S1>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator1_DSTATE[3];// '<S1>/Discrete-Time Integrator1' 
    real_T DiscreteTimeIntegrator2_DSTATE[4];// '<S1>/Discrete-Time Integrator2' 
    real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S1>/Discrete-Time Integrator3' 
    real_T P[169];                     // '<S285>/DataStoreMemory - P'
    real_T x[13];                      // '<S285>/DataStoreMemory - x'
    real_T Drift_NextOutput[6];        // '<S12>/ Drift'
    real_T NextOutput;                 // '<S29>/White Noise'
    real_T NextOutput_b;               // '<S30>/White Noise'
    real_T NextOutput_g;               // '<S31>/White Noise'
    real_T NextOutput_l;               // '<S32>/White Noise'
    real_T NextOutput_e;               // '<S33>/White Noise'
    int32_T clockTickCounter;          // '<S135>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S134>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S131>/Pulse Generator'
    int32_T counter[6];                // '<S12>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S130>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S130>/N to PWM'
    uint32_T m_bpIndex_m[8];           // '<S11>/ PWM to N'
    uint32_T RandSeed[6];              // '<S12>/ Drift'
    uint32_T m_bpIndex_cj[8];          // '<S17>/N to RPM'
    uint32_T RandSeed_j;               // '<S29>/White Noise'
    uint32_T RandSeed_d;               // '<S30>/White Noise'
    uint32_T RandSeed_e;               // '<S31>/White Noise'
    uint32_T RandSeed_n;               // '<S32>/White Noise'
    uint32_T RandSeed_b;               // '<S33>/White Noise'
    uint32_T state;                    // '<S34>/MATLAB System'
    uint32_T state_k[2];               // '<S34>/MATLAB System'
    uint32_T state_i[625];             // '<S34>/MATLAB System'
    uint32_T method;                   // '<S34>/MATLAB System'
    uint16_T Delay_DSTATE_g[8];        // '<S7>/Delay'
    boolean_T Delay1_DSTATE_c;         // '<S303>/Delay1'
    boolean_T DelayInput1_DSTATE;      // '<S313>/Delay Input1'
    int8_T If_ActiveSubsystem;         // '<S10>/If'
    int8_T SwitchCase_ActiveSubsystem; // '<S9>/Switch Case'
    int8_T If_ActiveSubsystem_i;       // '<S7>/If'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S128>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S1>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S1>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S1>/Discrete-Time Integrator'
    uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S1>/Discrete-Time Integrator2'
    boolean_T icLoad;                  // '<S210>/mv_Delay'
    boolean_T icLoad_a;                // '<S210>/x_Delay'
    boolean_T icLoad_j;                // '<S210>/slack_delay'
    boolean_T Memory_PreviousInput[226];// '<S177>/Memory'
    boolean_T Memory_PreviousInput_g[226];// '<S139>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S88>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S89>/Memory'
    boolean_T state_not_empty_e;       // '<S34>/MATLAB System'
    boolean_T ROSOutput_MODE;          // '<Root>/ROS Output'
    boolean_T Plotvalues_MODE;         // '<Root>/Plot values'
    boolean_T ModlePhysique_MODE;      // '<Root>/Modèle Physique'
    DW_CurrentTime_proc_control_T CurrentTime_e;// '<S101>/Current Time'
    DW_CurrentTime_proc_control_T CurrentTime;// '<S101>/Current Time'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S303>/Trajectory generator'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                             //  Referenced by: '<S133>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S322>/MATLAB System'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S130>/N to A'
                                          //    '<S130>/N to PWM'
                                          //    '<S17>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S17>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S133>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S12>/ Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S12>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S130>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S130>/N to PWM'

    real_T BandLimitedWhiteNoise_Cov;
                                    // Mask Parameter: BandLimitedWhiteNoise_Cov
                                       //  Referenced by: '<S29>/Output'

    real_T BandLimitedWhiteNoise1_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise1_Cov
                                      //  Referenced by: '<S30>/Output'

    real_T BandLimitedWhiteNoise2_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise2_Cov
                                      //  Referenced by: '<S31>/Output'

    real_T BandLimitedWhiteNoise3_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise3_Cov
                                      //  Referenced by: '<S32>/Output'

    real_T BandLimitedWhiteNoise4_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise4_Cov
                                      //  Referenced by: '<S33>/Output'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S173>/UD'

    real_T BandLimitedWhiteNoise_seed;
                                   // Mask Parameter: BandLimitedWhiteNoise_seed
                                      //  Referenced by: '<S29>/White Noise'

    real_T BandLimitedWhiteNoise1_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise1_seed
                                     //  Referenced by: '<S30>/White Noise'

    real_T BandLimitedWhiteNoise2_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise2_seed
                                     //  Referenced by: '<S31>/White Noise'

    real_T BandLimitedWhiteNoise3_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise3_seed
                                     //  Referenced by: '<S32>/White Noise'

    real_T BandLimitedWhiteNoise4_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise4_seed
                                     //  Referenced by: '<S33>/White Noise'

    boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S88>/Initial Condition'
                                   //    '<S88>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S89>/Initial Condition'
                                  //    '<S89>/Memory'

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S313>/Delay Input1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Out1_Y0;// Computed Parameter: Out1_Y0
                                                                    //  Referenced by: '<S309>/Out1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S308>/Constant'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                //  Referenced by: '<S234>/Out1'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S232>/Constant'

    SL_Bus_proc_control_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                 //  Referenced by: '<S116>/Constant'

    SL_Bus_proc_control_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                           //  Referenced by: '<S235>/Out1'

    SL_Bus_proc_control_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                  //  Referenced by: '<S233>/Constant'

    SL_Bus_proc_control_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S26>/Constant'

    SL_Bus_proc_control_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S110>/Constant'

    SL_Bus_proc_control_std_msgs_Int8MultiArray Constant_Value_lv;// Computed Parameter: Constant_Value_lv
                                                                     //  Referenced by: '<S109>/Constant'

    mpcParams MPC_Y0;                  // Computed Parameter: MPC_Y0
                                          //  Referenced by: '<S321>/MPC'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                               //  Referenced by: '<S123>/Constant'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_ck;// Computed Parameter: Constant_Value_ck
                                                               //  Referenced by: '<S169>/Constant'

    physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S321>/physics Constants'

    SL_Bus_proc_control_sensor_msgs_Imu Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                     //  Referenced by: '<S81>/Out1'

    SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                            //  Referenced by: '<S77>/Constant'

    SL_Bus_proc_control_sensor_msgs_Imu Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                     //  Referenced by: '<S73>/Out1'

    SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_l1;// Computed Parameter: Constant_Value_l1
                                                             //  Referenced by: '<S69>/Constant'

    SL_Bus_proc_control_sensor_msgs_Imu Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                            //  Referenced by: '<S100>/Constant'

    struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S129>/MPC param'

    SL_Bus_proc_control_sonia_common_BodyVelocityDVL Out1_Y0_ma;// Computed Parameter: Out1_Y0_ma
                                                                   //  Referenced by: '<S83>/Out1'

    SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                      //  Referenced by: '<S79>/Constant'

    SL_Bus_proc_control_sonia_common_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                                  //  Referenced by: '<S74>/Out1'

    SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_f2;// Computed Parameter: Constant_Value_f2
                                                                      //  Referenced by: '<S70>/Constant'

    SL_Bus_proc_control_sonia_common_BodyVelocityDVL Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S95>/Constant'

    SL_Bus_proc_control_sonia_common_PingAngles Out1_Y0_cv;// Computed Parameter: Out1_Y0_cv
                                                              //  Referenced by: '<S84>/Out1'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_oi;// Computed Parameter: Constant_Value_oi
                                                                     //  Referenced by: '<S80>/Constant'

    SL_Bus_proc_control_sonia_common_PingAngles Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                             //  Referenced by: '<S76>/Out1'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                    //  Referenced by: '<S72>/Constant'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_k5;// Computed Parameter: Constant_Value_k5
                                                                     //  Referenced by: '<S104>/Constant'

    struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                              //  Referenced by: '<S6>/Output'

    struct_ovWlOQLLs0y1mSxaL5ZDmG SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                      //  Referenced by: '<S1>/Sensors Output'

    struct_rlScCGcQggJ5TYrxrqGJfF CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S1>/Clean Output'

    struct_rlScCGcQggJ5TYrxrqGJfF Output_Y0_k;// Computed Parameter: Output_Y0_k
                                                 //  Referenced by: '<S4>/Output'

    SL_Bus_proc_control_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                          //  Referenced by: '<S319>/Out1'

    SL_Bus_proc_control_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                  //  Referenced by: '<S316>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                //  Referenced by: '<S106>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                                //  Referenced by: '<S310>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S343>/Out1'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                               //  Referenced by: '<S337>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurments_Y0;// Computed Parameter: DVLMeasurments_Y0
                                                       //  Referenced by: '<S238>/DVL Measurments'

    SL_Bus_proc_control_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                          //  Referenced by: '<S307>/Out1'

    SL_Bus_proc_control_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                 //  Referenced by: '<S306>/Constant'

    SL_Bus_proc_control_geometry_msgs_Vector3 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                           //  Referenced by: '<S45>/Out1'

    SL_Bus_proc_control_geometry_msgs_Vector3 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                  //  Referenced by: '<S43>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                          //  Referenced by: '<S121>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                   //  Referenced by: '<S338>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                           //  Referenced by: '<S332>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                   //  Referenced by: '<S340>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                           //  Referenced by: '<S334>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_os;// Computed Parameter: Out1_Y0_os
                                                    //  Referenced by: '<S341>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                          //  Referenced by: '<S335>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                   //  Referenced by: '<S342>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_pt;// Computed Parameter: Constant_Value_pt
                                                           //  Referenced by: '<S336>/Constant'

    SL_Bus_proc_control_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                      //  Referenced by: '<S82>/Out1'

    SL_Bus_proc_control_std_msgs_Float32 Constant_Value_dr;// Computed Parameter: Constant_Value_dr
                                                              //  Referenced by: '<S78>/Constant'

    SL_Bus_proc_control_std_msgs_Float32 Out1_Y0_nb;// Computed Parameter: Out1_Y0_nb
                                                       //  Referenced by: '<S75>/Out1'

    SL_Bus_proc_control_std_msgs_Float32 Constant_Value_oz;// Computed Parameter: Constant_Value_oz
                                                              //  Referenced by: '<S71>/Constant'

    SL_Bus_proc_control_std_msgs_Float32 Constant_Value_bv;// Computed Parameter: Constant_Value_bv
                                                              //  Referenced by: '<S98>/Constant'

    SL_Bus_proc_control_std_msgs_UInt8 Out1_Y0_kc;// Computed Parameter: Out1_Y0_kc
                                                     //  Referenced by: '<S339>/Out1'

    SL_Bus_proc_control_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                           //  Referenced by: '<S333>/Constant'

    real_T Constant1_Value;            // Expression: simulation.wave.damp.B
                                          //  Referenced by: '<S12>/Constant1'

    real_T Constant_Value_h0;          // Expression: simulation.wave.damp.A
                                          //  Referenced by: '<S12>/Constant'

    real_T Saturation_UpperSat;        // Expression: simulation.wave.damp.min
                                          //  Referenced by: '<S12>/Saturation'

    real_T Saturation_LowerSat;        // Expression: simulation.wave.damp.max
                                          //  Referenced by: '<S12>/Saturation'

    real_T Constant2_Value[6];         // Expression: zeros(1,6)
                                          //  Referenced by: '<S12>/Constant2'

    real_T DiscreteTransferFcn1_NumCoef[2];// Expression: [physics.thruster.a1 0 ]
                                              //  Referenced by: '<S18>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef[2];// Expression: [1  physics.thruster.b0]
                                              //  Referenced by: '<S18>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialSta;// Expression: 0
                                              //  Referenced by: '<S18>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_k[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S19>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_n[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S19>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialS_k;// Expression: 0
                                              //  Referenced by: '<S19>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_n[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S20>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_m[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S20>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialS_g;// Expression: 0
                                              //  Referenced by: '<S20>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_e[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S21>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_b[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S21>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialS_h;// Expression: 0
                                              //  Referenced by: '<S21>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_b[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S22>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_l[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S22>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialS_m;// Expression: 0
                                              //  Referenced by: '<S22>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_i[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S23>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_l0[2];// Expression: [1  physics.thruster.b0]
                                                 //  Referenced by: '<S23>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_InitialS_b;// Expression: 0
                                              //  Referenced by: '<S23>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_c[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S24>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_a[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S24>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_Initial_mm;// Expression: 0
                                              //  Referenced by: '<S24>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_NumCoef_m[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S25>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_DenCoef_g[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S25>/Discrete Transfer Fcn1'

    real_T DiscreteTransferFcn1_Initial_gv;// Expression: 0
                                              //  Referenced by: '<S25>/Discrete Transfer Fcn1'

    real_T SineWave_Amp[6];            // Expression: simulation.wave.amplitudes
                                          //  Referenced by: '<S12>/Sine Wave'

    real_T SineWave_Bias;              // Expression: 0
                                          //  Referenced by: '<S12>/Sine Wave'

    real_T SineWave_Offset[6];         // Expression: waveDiscretePhase
                                          //  Referenced by: '<S12>/Sine Wave'

    real_T UnitDelay_InitialCondition[13];// Expression: MPC.Xi
                                             //  Referenced by: '<S1>/Unit Delay'

    real_T Switch_Threshold;           // Expression: 0
                                          //  Referenced by: '<S12>/Switch'

    real_T Initialxy_Value[2];         // Expression: [0,0]
                                          //  Referenced by: '<S15>/Initial xy'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S1>/Discrete-Time Integrator'

    real_T InitialAngularRates_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S1>/Initial Angular Rates'

    real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator1'

    real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

    real_T InitialBodyvelocity_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S1>/Initial Body velocity '

    real_T DiscreteTimeIntegrator3_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator3_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

    real_T WhiteNoise_Mean;            // Expression: 0
                                          //  Referenced by: '<S29>/White Noise'

    real_T WhiteNoise_StdDev;          // Computed Parameter: WhiteNoise_StdDev
                                          //  Referenced by: '<S29>/White Noise'

    real_T WhiteNoise_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S30>/White Noise'

    real_T WhiteNoise_StdDev_d;       // Computed Parameter: WhiteNoise_StdDev_d
                                         //  Referenced by: '<S30>/White Noise'

    real_T WhiteNoise_Mean_c;          // Expression: 0
                                          //  Referenced by: '<S31>/White Noise'

    real_T WhiteNoise_StdDev_e;       // Computed Parameter: WhiteNoise_StdDev_e
                                         //  Referenced by: '<S31>/White Noise'

    real_T WhiteNoise_Mean_p;          // Expression: 0
                                          //  Referenced by: '<S32>/White Noise'

    real_T WhiteNoise_StdDev_j;       // Computed Parameter: WhiteNoise_StdDev_j
                                         //  Referenced by: '<S32>/White Noise'

    real_T WhiteNoise_Mean_l;          // Expression: 0
                                          //  Referenced by: '<S33>/White Noise'

    real_T WhiteNoise_StdDev_p;       // Computed Parameter: WhiteNoise_StdDev_p
                                         //  Referenced by: '<S33>/White Noise'

    real_T Constant1_Value_m[3];  // Expression: simulation.sensors.imu.acc.bias
                                     //  Referenced by: '<S14>/Constant1'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S51>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S51>/Gain1'

    real_T Constant_Value_mj;          // Expression: 0.5
                                          //  Referenced by: '<S51>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S51>/Gain2'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S41>/1//2'

    real_T Constant_Value_k2;          // Expression: 0.5
                                          //  Referenced by: '<S55>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S55>/Gain2'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S55>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S55>/Gain1'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S56>/Gain'

    real_T Constant_Value_gp;          // Expression: 0.5
                                          //  Referenced by: '<S56>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S56>/Gain2'

    real_T Gain1_Gain_eg;              // Expression: 2
                                          //  Referenced by: '<S56>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S57>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S57>/Gain1'

    real_T Constant_Value_iw;          // Expression: 0.5
                                          //  Referenced by: '<S57>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S57>/Gain2'

    real_T Gain_Gain_n;       // Expression: simulation.sensors.depth.resolution
                                 //  Referenced by: '<S14>/Gain'

    real_T Gain1_Gain_h;        // Expression: simulation.sensors.dvl.resolution
                                   //  Referenced by: '<S14>/Gain1'

    real_T Constant_Value_ah;          // Expression: 0.5
                                          //  Referenced by: '<S61>/Constant'

    real_T Gain_Gain_a;                // Expression: 2
                                          //  Referenced by: '<S61>/Gain'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S61>/Gain1'

    real_T Gain2_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S61>/Gain2'

    real_T Constant_Value_ar;          // Expression: 0.5
                                          //  Referenced by: '<S62>/Constant'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S62>/Gain'

    real_T Gain1_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S62>/Gain1'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S62>/Gain2'

    real_T Constant_Value_i2;          // Expression: 0.5
                                          //  Referenced by: '<S63>/Constant'

    real_T Gain_Gain_b;                // Expression: 2
                                          //  Referenced by: '<S63>/Gain'

    real_T Gain1_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S63>/Gain1'

    real_T Gain2_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S63>/Gain2'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S68>/y'

    real_T Constant_Value_f2j;         // Expression: 0
                                          //  Referenced by: '<S68>/Constant'

    real_T Constant1_Value_h;          // Expression: 0
                                          //  Referenced by: '<S68>/Constant1'

    real_T Constant_Value_pr;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S101>/Constant'

    real_T Constant1_Value_a;          // Expression: SetFrameID
                                          //  Referenced by: '<S101>/Constant1'

    real_T Constant_Value_lo;          // Expression: MPC.nx
                                          //  Referenced by: '<S115>/Constant'

    real_T Constant1_Value_d;          // Expression: MPC.nu
                                          //  Referenced by: '<S115>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_j;           // Expression: InsertTimeStamp
                                          //  Referenced by: '<S124>/Constant'

    real_T Constant1_Value_l;          // Expression: SetFrameID
                                          //  Referenced by: '<S124>/Constant1'

    real_T Constant_Value_a5;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S170>/Constant'

    real_T Constant1_Value_d4;         // Expression: SetFrameID
                                          //  Referenced by: '<S170>/Constant1'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S131>/Delay1'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S136>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S136>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S136>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S139>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S136>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S139>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S139>/last_mv'

    real_T Constant_Value_e3[6];       // Expression: zeros(1,6)
                                          //  Referenced by: '<S131>/Constant'

    real_T Constant1_Value_mt[2];      // Expression: zeros(1,2)
                                          //  Referenced by: '<S131>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S139>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S136>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S136>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S136>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S139>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S139>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S136>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S139>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S136>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S136>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S139>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S136>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S139>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S131>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S131>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S131>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S131>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S133>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S133>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S133>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S173>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S134>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S177>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S177>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S175>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S175>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S175>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S175>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S177>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S175>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S177>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S175>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S175>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S177>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S175>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S175>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S177>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S175>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S177>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S175>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S134>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(MPC.Xi.',11,1)
                                           //  Referenced by: '<S134>/Delay2'

    real_T Constant3_Value;            // Expression: MPC.Ts
                                          //  Referenced by: '<S134>/Constant3'

    real_T Constant1_Value_k;          // Expression: MPC.dts
                                          //  Referenced by: '<S134>/Constant1'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S177>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S177>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S177>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S177>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S135>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S208>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S208>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S208>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S210>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S210>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S210>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S135>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S135>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S135>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S135>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S132>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S132>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S132>/Constant2'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S128>/Merge'

    real_T Merge_2_InitialOutput;   // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S128>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S128>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S130>/Delay'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S266>/Quat'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S267>/1//2'

    real_T Constant1_Value_aa;
                             // Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S238>/Constant1'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S263>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S263>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S269>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S269>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S269>/Gain1'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S269>/Gain2'

    real_T Constant_Value_j5;          // Expression: 0.5
                                          //  Referenced by: '<S270>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S270>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S270>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S270>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S271>/Constant'

    real_T Gain_Gain_nh;               // Expression: 2
                                          //  Referenced by: '<S271>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S271>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S271>/Gain2'

    real_T DepthMeasurments_Y0;       // Computed Parameter: DepthMeasurments_Y0
                                         //  Referenced by: '<S239>/Depth Measurments'

    real_T Constant_Value_ay;          // Expression: 0.5
                                          //  Referenced by: '<S279>/Constant'

    real_T Gain_Gain_bk;               // Expression: 2
                                          //  Referenced by: '<S279>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S279>/Gain1'

    real_T Gain2_Gain_dh;              // Expression: 2
                                          //  Referenced by: '<S279>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S242>/xhat'

    real_T Constant_Value_lx;          // Expression: 1
                                          //  Referenced by: '<S242>/Constant'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S285>/Q'

    real_T R3_Value;                   // Expression: p.R{3}
                                          //  Referenced by: '<S285>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S285>/MeasurementFcn3Inputs'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S285>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S285>/MeasurementFcn2Inputs'

    real_T R1_Value[49];               // Expression: p.R{1}
                                          //  Referenced by: '<S285>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S285>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S285>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S285>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S298>/Constant7'

    real_T Constant3_Value_f;          // Expression: MPC.p
                                          //  Referenced by: '<S298>/Constant3'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S303>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S303>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S303>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S315>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S315>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S315>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S315>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S315>/Constant1'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S317>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S320>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S318>/Constant'

    real_T DiscreteTimeIntegrator_gainva_e;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_e
                             //  Referenced by: '<S318>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S318>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S303>/Constant'

    real_T Constant_Value_m5[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S296>/Constant'

    real_T Constant3_Value_o;          // Expression: MPC.p
                                          //  Referenced by: '<S296>/Constant3'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S322>/Delay'

    real_T Constant_Value_pu;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S243>/ '

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S299>/Gain'

    real_T Merge_1_InitialOutput_l;
                                  // Computed Parameter: Merge_1_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S9>/Merge'

    std::string StringConstant1_String;
                                   // Computed Parameter: StringConstant1_String
                                      //  Referenced by: '<S101>/String Constant1'

    std::string StringConstant1_String_p;
                                 // Computed Parameter: StringConstant1_String_p
                                    //  Referenced by: '<S124>/String Constant1'

    std::string StringConstant1_String_f;
                                 // Computed Parameter: StringConstant1_String_f
                                    //  Referenced by: '<S170>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S205>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

    boolean_T hydronew_Y0;             // Computed Parameter: hydronew_Y0
                                          //  Referenced by: '<S67>/hydro new'

    boolean_T hydronew_Y0_a;           // Computed Parameter: hydronew_Y0_a
                                          //  Referenced by: '<S66>/hydro new'

    boolean_T Memory_InitialCondition[226];// Expression: iA
                                              //  Referenced by: '<S139>/Memory'

    boolean_T Memory_InitialCondition_p[226];// Expression: iA
                                                //  Referenced by: '<S177>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S286>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S287>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_i;    // Computed Parameter: yBlockOrdering_Y0_i
                                         //  Referenced by: '<S288>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S285>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S285>/Enable1'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S285>/Enable3'

    boolean_T Constant1_Value_ds;      // Expression: false
                                          //  Referenced by: '<S298>/Constant1'

    boolean_T Constant2_Value_l;       // Expression: false
                                          //  Referenced by: '<S298>/Constant2'

    boolean_T Constant_Value_hm;       // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S314>/Constant'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S303>/Delay1'

    boolean_T Constant2_Value_i;       // Expression: false
                                          //  Referenced by: '<S303>/Constant2'

    boolean_T Constant5_Value;         // Expression: false
                                          //  Referenced by: '<S296>/Constant5'

    boolean_T Constant4_Value;         // Expression: false
                                          //  Referenced by: '<S296>/Constant4'

    boolean_T Merge_2_InitialOutput_l;
                                  // Computed Parameter: Merge_2_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    boolean_T Merge_3_InitialOutput_l;
                                  // Computed Parameter: Merge_3_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_proc_control_T {
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

  // Copy Constructor
  proc_control(proc_control const&) = delete;

  // Assignment Operator
  proc_control& operator= (proc_control const&) & = delete;

  // Move Constructor
  proc_control(proc_control &&) = delete;

  // Move Assignment Operator
  proc_control& operator= (proc_control &&) = delete;

  // Real-Time Model get method
  proc_control::RT_MODEL_proc_control_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  proc_control();

  // Destructor
  ~proc_control();

  // private data and function members
 private:
  // Block signals
  B_proc_control_T proc_control_B;

  // Block states
  DW_proc_control_T proc_control_DW;

  // Tunable parameters
  static P_proc_control_T proc_control_P;

  // Triggered events
  PrevZCX_proc_control_T proc_control_PrevZCX;

  // private member function(s) for subsystem '<S101>/Current Time'
  static void proc_control_CurrentTime_Init(DW_CurrentTime_proc_control_T
    *localDW);
  void proc_control_CurrentTime(B_CurrentTime_proc_control_T *localB);
  static void proc_control_CurrentTime_Term(DW_CurrentTime_proc_control_T
    *localDW);

  // private member function(s) for subsystem '<Root>'
  void proc_control_binary_expand_op(real_T in1[3], const real_T in3_data[],
    const int32_T *in3_size, const real_T in4_data[], const int32_T *in4_size);
  void proc_control_rand(real_T r[3]);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2(const real_T ct[812], real_T out1[13]);
  void proc_control_ft_1(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_mldivide(const real_T A[36], const real_T B[48], real_T Y[48]);
  void proc_control_znlmpc_getXUe(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_wW6vUT_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_AUV8QuatSimFcn_AbfqyrNU(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  void proc_co_stateEvolution_p6X6Q73G(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  boolean_T proc_control_any(const boolean_T x[26]);
  void proc_control_mtimes_f(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_cont_znlmpc_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    *Je_size, real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_outputBounds(const real_T runtimedata_OutputMin[130], const
    real_T runtimedata_OutputMax[130], const real_T X[143], real_T e, real_T
    c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_co_eML_blk_kernel_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[18070]);
  void proc_control_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj);
  void proc_cont_factoryConstruct_lnz4(int32_T MaxVars, int32_T *obj_grad_size,
    int32_T *obj_Hx_size, boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_lnz42(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj);
  void proc_control_loadProblem(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    mIneq, int32_T mLinIneq, const real_T Aineq_data[], int32_T mLB, int32_T mUB,
    int32_T mFixed, int32_T mConstrMax);
  int32_T proc_contr_checkVectorNonFinite(int32_T N, const real_T vec_data[],
    int32_T iv0);
  void computeObjectiveAndUserGradient(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T x[139], real_T
    grad_workspace_data[], real_T *fval, int32_T *status);
  int32_T proc_contr_checkMatrixNonFinite(int32_T ncols, const real_T mat_data[],
    int32_T col0, int32_T ldm);
  int32_T computeConstraintsAndUserJacobi(const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[139],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    real_T JacIneqTrans_workspace_data[], int32_T iJI_col, int32_T ldJI, real_T
    JacEqTrans_workspace_data[], int32_T ldJE);
  void evalObjAndConstrAndDerivatives(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[139],
    real_T grad_workspace_data[], real_T Cineq_workspace_data[], int32_T ineq0,
    real_T Ceq_workspace[130], real_T JacIneqTrans_workspace_data[], int32_T
    iJI_col, int32_T ldJI, real_T JacEqTrans_workspace_data[], int32_T ldJE,
    real_T *fval, int32_T *status);
  void proc_c_updateWorkingSetForNewQP(const real_T xk[139],
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet, int32_T mIneq, const real_T
    cIneq_data[], const real_T cEq[130], int32_T mLB, const real_T lb[139],
    int32_T mUB, int32_T mFixed);
  void proc_co_modifyOverheadPhaseOne_(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj);
  void proc_control_setProblemType(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    PROBLEM_TYPE);
  void proc_control_initActiveSet(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj);
  void proc_control_factoryConstruct_l(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *objfun_workspace_runtimedata, real_T objfun_workspace_userdata_Ts, const
    real_T objfun_workspace_userdata_Curre[13], const real_T
    objfun_workspace_userdata_LastM[8], const real_T
    objfun_workspace_userdata_Refer[130], const real_T
    objfun_workspace_userdata_MVTar[80], real_T objfun_workspace_userdata_Predi,
    real_T objfun_workspace_userdata_NumOf, real_T
    objfun_workspace_userdata_Num_0, real_T objfun_workspace_userdata_Num_1,
    const real_T objfun_workspace_userdata_MVInd[8], const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlin_workspace_runtimedata, const
    s6FZHgorTEIlMmVIrDGGTjF_proc__T *nonlin_workspace_userdata, int32_T mCineq,
    const real_T lb[139], s_IDHIEhzA2KtfYk7ehxTmaH_proc_T *obj);
  void proc_contro_factoryConstruct_ln(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T *obj_jpvt_size, int32_T *obj_mrows, int32_T
    *obj_ncols, int32_T *obj_tau_size, int32_T *obj_minRowCol, boolean_T
    *obj_usedPivoting);
  void proc_contr_factoryConstruct_lnz(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_xgemv_m(int32_T m, int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_computeGradLag(real_T workspace_data[], int32_T ldA, int32_T
    nVar, const real_T grad_data[], int32_T mIneq, const real_T AineqTrans_data[],
    const real_T AeqTrans_data[], const int32_T finiteFixed_data[], int32_T
    mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[139], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_saveJacobian(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj, int32_T
    nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T ineqCol0,
    const real_T JacCeqTrans_data[], int32_T ldJ);
  void proc_control_saveState(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj);
  real_T proc_control_computeComplError(const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    const real_T xCurrent[139], int32_T mIneq, const real_T cIneq_data[], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[], int32_T iL0);
  void proc_control_xgemv_mt(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_computeGradLag_b(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  void proc_con_computeDualFeasError_b(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_updateWorkingSetForNewQP_l(const real_T xk[139],
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet, int32_T mIneq, int32_T
    mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], int32_T mLB,
    const real_T lb[139], int32_T mUB, int32_T mFixed);
  real_T proc_control_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  real_T proc_control_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_xgemv(int32_T b_m, int32_T n, const real_T b_A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
  void proc_control_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T
    C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void proc_control_qrf(real_T A_data[], const int32_T A_size[2], int32_T m,
                        int32_T n, int32_T nfxd, real_T tau_data[]);
  void proc_control_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
  void proc_control_qrpf(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
  void proc_control_xgeqp3(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T jpvt_data[], real_T tau_data[], int32_T *tau_size);
  void proc_control_factorQRE(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, const real_T
    A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_xorgqr_k(int32_T m, int32_T n, int32_T k, real_T A_data[],
    const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_computeQ_(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, int32_T
    nrows);
  void proc_control_xgemv_mtmc(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xtrsv(int32_T n, const real_T A_data[], int32_T lda, real_T
    x_data[]);
  void proc_control_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  int32_T proc_control_ixamax(int32_T n, const real_T x_data[]);
  void proc_control_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T *fscales_lineq_constraint_size, const int32_T *
    fscales_cineq_constraint_size, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet,
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, s_Ref0liQlfQOPmAop9i3aPH_proc_T
    *QRManager, const real_T lb[139]);
  void proc_contro_xgemv_mtmcjbiadz2ic(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0,
    real_T y_data[]);
  boolean_T proc_control_BFGSUpdate(int32_T nvar, real_T Bk[19321], const real_T
    sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_factorQRE_f(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, int32_T
    mrows, int32_T ncols);
  void proc_control_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_removeConstr(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    idx_global);
  int32_T proc_control_RemoveDependentEq_(s_j0X3urodUv3ospvkLXsspC_proc_T
    *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *workingset,
    s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager);
  void proc_contro_removeAllIneqConstr(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj);
  void proc_contr_RemoveDependentIneq_(s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace);
  void proc_control_xgeqrf_d(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, real_T tau_data[], int32_T *tau_size);
  void proc_control_factorQR_h(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_factorQR(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, int32_T mrows,
    int32_T ncols);
  void proc_control_xgemv_mtmcjb(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xgemv_mtmcj(int32_T n, const real_T A_data[], int32_T lda,
    const real_T x_data[], real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    const real_T x_data[]);
  void proc_control_xgemv_mtmcjbi(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  real_T proc_c_maxConstraintViolation_d(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    const real_T x_data[], int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(real_T workspace_data[], const
    int32_T workspace_size[2], real_T xCurrent_data[],
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T
    *qrmanager);
  void proc_con_RemoveDependentIneq__f(s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace);
  void proc_control_xgemv_mtmcjbiad(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xgemv_mtmcjbia(int32_T n, const real_T A_data[], int32_T lda,
    const real_T x_data[], real_T y_data[]);
  real_T proc__maxConstraintViolation_du(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager);
  void proc_control_xgemv_mtmcjbiadz(int32_T m, int32_T n, const real_T A[19321],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_wbACub5hw4pAYPfHb1hrsB_proc_T *obj,
    const real_T H[19321], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_wbACub5hw4pAYPfHb1hrsB_proc_T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_deleteColMoveEnd(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_strcmp(const char_T a[7]);
  void proc_control_xgemm(int32_T m, int32_T n, int32_T k, const real_T A[19321],
    int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb, real_T C_data[],
    int32_T ldc);
  void proc_control_xgemm_m(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  int32_T proc_control_ixamax_k(int32_T n, const real_T x_data[], int32_T incx);
  void proc_control_fullColLDL2_(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, int32_T
    LD_offset, int32_T NColsRemain);
  void proc_control_partialColLDL3_(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_xpotrf_h(int32_T n, real_T A_data[], int32_T lda);
  void proc_control_xgemv_mtmcjbiadz2(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_factor(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, const real_T A
    [19321], int32_T ndims, int32_T ldA);
  void proc_control_solve(const s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_factor_p(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, const real_T
    A[19321], int32_T ndims, int32_T ldA);
  void proc_control_solve_l(const s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_compute_deltax(const real_T H[19321],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution, s_j0X3urodUv3ospvkLXsspC_proc_T
    *memspace, const s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager,
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T *cholmanager, const
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_xnrm2_md(int32_T n, const real_T x_data[]);
  void proc_control_xgemv_mtmcjbiadz2i(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_feasibleratiotest(const real_T solution_xstar_data[], const
    real_T solution_searchDir_data[], real_T workspace_data[], const int32_T
    workspace_size[2], int32_T workingset_nVar, int32_T workingset_ldA, const
    real_T workingset_Aineq_data[], const real_T workingset_bineq_data[], const
    real_T workingset_lb_data[], const int32_T workingset_indexLB_data[], const
    int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
    boolean_T workingset_isActiveConstr_data[], const int32_T
    workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
    *newBlocking, int32_T *constrType, int32_T *constrIdx);
  void proc_c_checkUnboundedOrIllPosed(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution,
    const s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective);
  void proc_addBoundToActiveSetMatrix_(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_addAineqConstr(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    idx_local);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, const
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *
    workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
    updateFval);
  void proc_control_iterate(const real_T H[19321], const real_T f_data[],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution, s_j0X3urodUv3ospvkLXsspC_proc_T
    *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *workingset,
    s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager, s_8RbNZtrzTH63iHAPCwMh6G_proc_T *
    cholmanager, s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective, const char_T
    options_SolverName[7], real_T options_StepTolerance, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
  void proc_control_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  real_T proc_control_computeFval(const s_wbACub5hw4pAYPfHb1hrsB_proc_T *obj,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  void proc_control_phaseone(const real_T H[19321], const real_T f_data[],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution, s_j0X3urodUv3ospvkLXsspC_proc_T
    *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *workingset,
    s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager, s_8RbNZtrzTH63iHAPCwMh6G_proc_T *
    cholmanager, s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_driver_i(const real_T H[19321], const real_T f_data[],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *solution, s_j0X3urodUv3ospvkLXsspC_proc_T
    *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *workingset,
    s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager, s_8RbNZtrzTH63iHAPCwMh6G_proc_T *
    cholmanager, s_wbACub5hw4pAYPfHb1hrsB_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, somzaGboVhDG7PNQS6E98jD_proc__T
    *runTimeOptions);
  void proc_control_addAeqConstr(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    idx_local);
  boolean_T proc_control_soc(const real_T Hessian[19321], const real_T
    grad_data[], s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *WorkingSet, s_Ref0liQlfQOPmAop9i3aPH_proc_T *QRManager,
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T *CholManager,
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_normal(const real_T Hessian[19321], const real_T grad_data[],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_j0X3urodUv3ospvkLXsspC_proc_T *memspace,
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet, s_Ref0liQlfQOPmAop9i3aPH_proc_T
    *QRManager, s_8RbNZtrzTH63iHAPCwMh6G_proc_T *CholManager,
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_relaxed(const real_T Hessian[19321], const real_T grad_data[],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_j0X3urodUv3ospvkLXsspC_proc_T *memspace,
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet, s_Ref0liQlfQOPmAop9i3aPH_proc_T
    *QRManager, s_8RbNZtrzTH63iHAPCwMh6G_proc_T *CholManager,
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  boolean_T proc_control_step_k(int32_T *STEP_TYPE, real_T Hessian[19321], const
    real_T lb[139], s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *WorkingSet, s_Ref0liQlfQOPmAop9i3aPH_proc_T *QRManager,
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T *CholManager,
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_outputBounds_p(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_co_stateEvolution_IBbdjakB(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc__eML_blk_kernel_anonFcn2_g(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130]);
  void proc_control_evalObjAndConstr(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[139],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[139], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T *workspaceIneq_size, int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_objfun_workspace_r, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_nonlcon_workspace_, int32_T
    FcnEvaluator_mCineq, boolean_T socTaken, real_T *alpha, int32_T *exitflag);
  void proc_control_driver(const real_T bineq_data[], const real_T lb[139],
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const s_lkFpKxHZB0M4xOcTLHVN2_proc__T *FcnEvaluator,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *WorkingSet, s_Ref0liQlfQOPmAop9i3aPH_proc_T *QRManager,
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T *CholManager,
    s_wbACub5hw4pAYPfHb1hrsB_proc_T *QPObjective, const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    real_T Hessian[19321]);
  void proc_control_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, real_T fun_workspace_userdata_Ts, const real_T
    fun_workspace_userdata_CurrentS[13], const real_T
    fun_workspace_userdata_LastMV[8], const real_T
    fun_workspace_userdata_Referenc[130], const real_T
    fun_workspace_userdata_MVTarget[80], real_T fun_workspace_userdata_Predicti,
    real_T fun_workspace_userdata_NumOfSta, real_T
    fun_workspace_userdata_NumOfOut, real_T fun_workspace_userdata_NumOfInp,
    const real_T fun_workspace_userdata_MVIndex[8], const real_T x0[139], const
    real_T Aineq_data[], const real_T bineq_data[], const int32_T *bineq_size,
    const real_T lb[139], const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *nonlcon_workspace_runtimedata, const s6FZHgorTEIlMmVIrDGGTjF_proc__T
    *nonlcon_workspace_userdata, real_T x[139], real_T *fval, real_T *exitflag,
    real_T *output_iterations, real_T *output_funcCount, char_T
    output_algorithm[3], real_T *output_constrviolation, real_T *output_stepsize,
    real_T *output_lssteplength, real_T *output_firstorderopt);
  void proc_control_znlmpc_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T *Bu_size);
  void mpc_constraintcoefLTV_j7mSZmy_g(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  void proc_control_xgerc_LQbeTO3S(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[9], real_T b_A[81], int32_T ia0);
  void proc_control_qr_MNq6sfUL(const real_T b_A[81], real_T Q[81], real_T R[81]);
  void proc_contro_KWIKfactor_Vb6zpQ7O(const real_T b_Ac[2034], const int32_T
    iC[226], int32_T nA, const real_T b_Linv[81], real_T b_D[81], real_T b_H[81],
    int32_T n, real_T RLinv[81], real_T *Status);
  void proc_control_qpkwik_l(const real_T b_Linv[81], const real_T b_Hinv[81],
    const real_T f[9], const real_T b_Ac[2034], const real_T b[226], boolean_T
    iA[226], int32_T maxiter, real_T FeasTol, real_T x[9], real_T lambda[226],
    int32_T *status);
  void proc_control_mpcblock_optimizer(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[226], const real_T b_Mlim[226],
    real_T b_Mx[4746], real_T b_Mu1[1808], real_T b_Mv[2486], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[81], real_T b_Ac[2034],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[640], const real_T b_I1[640], const real_T b_A[4851], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[3003], const real_T
    Dv[143], const int32_T b_Mrows[226], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[226]);
  void proc_c_mpc_plantupdate_opKkKWqM(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  boolean_T proc_control_anyNonFinite(const real_T x[169]);
  void proc_control_mpower_k(const real_T a[169], real_T b, real_T c[169]);
  void proc_padeApproximation_NWSCAcaS(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  real_T proc_control_xzlarfg_RGPUCK3Y(int32_T n, real_T *alpha1, real_T x[3]);
  void proc_control_xdlanv2_W63kZdPv(real_T *a, real_T *b, real_T *c, real_T *d,
    real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T
    *sn);
  int32_T proc_contro_eml_dlahqr_HmsDpVfQ(real_T h[169], real_T z[169]);
  void proc_control_schur_o(const real_T A[169], real_T V[169], real_T T[169]);
  void proc_control_expm_m(real_T A[169], real_T F[169]);
  boolean_T proc_control_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_isequal_p(const real_T varargin_1[6], const real_T
    varargin_2[6]);
  void proc_control_emxFree_real_T(emxArray_real_T_proc_control_T **pEmxArray);
  void proc_control_emxFree_int32_T(emxArray_int32_T_proc_control_T **pEmxArray);
  void proc_control_emxFree_boolean_T(emxArray_boolean_T_proc_contr_T
    **pEmxArray);
  void proc_control_emxInit_boolean_T(emxArray_boolean_T_proc_contr_T
    **pEmxArray, int32_T numDimensions);
  void pro_emxEnsureCapacity_boolean_T(emxArray_boolean_T_proc_contr_T *emxArray,
    int32_T oldNumel);
  void proc_control_emxInit_real_T(emxArray_real_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
  void proc_c_emxEnsureCapacity_real_T(emxArray_real_T_proc_control_T *emxArray,
    int32_T oldNumel);
  void proc_control_emxInit_int32_T(emxArray_int32_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
  void proc__emxEnsureCapacity_int32_T(emxArray_int32_T_proc_control_T *emxArray,
    int32_T oldNumel);
  real_T proc_control_norm(const real_T x_data[], const int32_T *x_size);
  void proc_control_maximum2(const emxArray_real_T_proc_control_T *x,
    emxArray_real_T_proc_control_T *ex);
  void proc_control_xgerc(int32_T b_m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], real_T b_A_data[], int32_T ia0, int32_T lda);
  void proc_control_xgeqrf(real_T b_A_data[], const int32_T b_A_size[2], real_T
    tau_data[], int32_T *tau_size);
  void proc_control_xorgqr(int32_T b_m, int32_T n, int32_T k, real_T b_A_data[],
    const int32_T b_A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_mtimes_kcnhu0(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], real_T b_C_data[], int32_T *b_C_size);
  real_T proc_control_KWIKfactor(const emxArray_real_T_proc_control_T *b_Ac,
    const emxArray_int32_T_proc_control_T *iC, int32_T nA, const real_T
    Linv_data[], const int32_T Linv_size[2], real_T RLinv_data[], const int32_T
    RLinv_size[2], real_T b_D_data[], const int32_T b_D_size[2], real_T
    b_H_data[], const int32_T b_H_size[2], int32_T n);
  real_T proc_control_mtimes_kcnhu0x(const real_T b_A_data[], const int32_T
    *b_A_size, const real_T b_B_data[]);
  void proc__binary_expand_op_pr351ewp(real_T in1_data[], int32_T *in1_size,
    real_T in2, const real_T in3_data[], const int32_T *in3_size);
  void proc_c_binary_expand_op_pr351ew(real_T in1_data[], int32_T in1_size[2],
    const emxArray_real_T_proc_control_T *in2, int32_T in3, const real_T
    in4_data[], const int32_T *in4_size);
  void proc_control_qpkwik(const real_T Linv_data[], const int32_T Linv_size[2],
    const real_T Hinv_data[], const int32_T Hinv_size[2], const real_T f_data[],
    const emxArray_real_T_proc_control_T *b_Ac, const
    emxArray_real_T_proc_control_T *b, emxArray_boolean_T_proc_contr_T *iA,
    int32_T b_m, int32_T n, real_T x_data[], int32_T *x_size,
    emxArray_real_T_proc_control_T *lambda, int32_T *status);
  void proc_control_mpc_solveQP(const real_T xQP[21], int32_T nCon, int32_T
    b_degrees, const real_T Kx_data[], const real_T Kr_data[], const int32_T
    Kr_size[2], const emxArray_real_T_proc_control_T *rseq, const real_T
    Ku1_data[], const real_T old_u[8], const real_T Kv_data[], const int32_T
    Kv_size[2], const emxArray_real_T_proc_control_T *vseq, const real_T
    Kut_data[], const int32_T Kut_size[2], const real_T b_utarget_data[], const
    real_T Linv_data[], const int32_T Linv_size[2], const real_T Hinv_data[],
    const int32_T Hinv_size[2], const emxArray_real_T_proc_control_T *b_Ac,
    const emxArray_real_T_proc_control_T *Bc, const
    emxArray_boolean_T_proc_contr_T *iA, real_T zopt_data[], int32_T *zopt_size,
    real_T f_data[], int32_T *f_size, real_T *status);
  void proc_control_mtimes_k(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_mtimes_kcnhu(const emxArray_real_T_proc_control_T *b_A,
    const emxArray_real_T_proc_control_T *b_B, emxArray_real_T_proc_control_T
    *b_C);
  void proc_control_mtimes_kcnh(const emxArray_real_T_proc_control_T *b_A, const
    real_T b_B[8], emxArray_real_T_proc_control_T *b_C);
  void proc_control_mtimes_kcn(const emxArray_real_T_proc_control_T *b_A, const
    real_T b_B[21], emxArray_real_T_proc_control_T *b_C);
  void proc_co_binary_expand_op_pr351e(emxArray_real_T_proc_control_T *in1,
    const emxArray_real_T_proc_control_T *in2, const
    emxArray_real_T_proc_control_T *in3, real_T in4[21], const
    emxArray_real_T_proc_control_T *in5, real_T in6[8], const
    emxArray_real_T_proc_control_T *in7, const emxArray_real_T_proc_control_T
    *in8);
  void proc_control_trisolve(const real_T b_A_data[], const int32_T b_A_size[2],
    real_T b_B_data[], const int32_T b_B_size[2]);
  void proc_control_linsolve(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_eye_b(int32_T varargin_1, real_T b_I_data[], int32_T
    b_I_size[2]);
  int32_T proc_control_xpotrf(int32_T n, real_T b_A_data[], int32_T lda);
  void proc_control_diag(const real_T v_data[], const int32_T v_size[2], real_T
    d_data[], int32_T *d_size);
  real_T proc_control_minimum(const real_T x_data[], const int32_T *x_size);
  void proc_con_binary_expand_op_pr351(real_T in1_data[], int32_T in1_size[2],
    real_T in2, const int8_T in3_data[], const int32_T in3_size[2]);
  void proc_control_mpc_checkhessian(real_T b_H_data[], int32_T b_H_size[2],
    real_T L_data[], int32_T L_size[2], real_T *BadH);
  void proc_control_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_cont_binary_expand_op_pr35(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    real_T in5[8], const real_T in6_data[], const int32_T in6_size[2], const
    real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_mtimes_kc(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_contr_binary_expand_op_pr3(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5_data[], const int32_T in5_size[2]);
  void proc_contr_mpc_calculatehessian(const real_T b_Wy[13], const real_T b_Wu
    [8], const real_T b_Wdu[8], const real_T SuJm_data[], const int32_T
    SuJm_size[2], const real_T I2Jm_data[], const int32_T I2Jm_size[2], const
    real_T Jm_data[], const int32_T Jm_size[2], const real_T I1_data[], const
    int32_T I1_size[2], const real_T Su1_data[], const int32_T Su1_size[2],
    const real_T Sx_data[], const int32_T Sx_size[2], const real_T Hv_data[],
    const int32_T Hv_size[2], real_T b_H_data[], int32_T b_H_size[2], real_T
    Ku1_data[], int32_T Ku1_size[2], real_T Kut_data[], int32_T Kut_size[2],
    real_T Kx_data[], int32_T Kx_size[2], real_T Kv_data[], int32_T Kv_size[2],
    real_T Kr_data[], int32_T Kr_size[2]);
  void proc_control_mtimes(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_kron_b(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B[64], real_T K_data[], int32_T K_size[2]);
  void proc_control_tril(real_T x_data[], const int32_T x_size[2]);
  void proc_control_eye(real_T b_I[64]);
  int32_T proc_cont_combineVectorElements(const boolean_T x_data[], const
    int32_T *x_size);
  void proc_control_repmat_f(const boolean_T a[8], int32_T varargin_1, boolean_T
    b_data[], int32_T *b_size);
  void proc_control_repmat(const real_T a[8], int32_T varargin_1, real_T b_data[],
    int32_T *b_size);
  void proc_contro_Mrows_reshape_c5gfi(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_c5gf(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_c5g(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_c5(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_c(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p);
  void proc_control_mpc_constraintcoef(const real_T b_A[441], const real_T Bu
    [168], const real_T Bv[21], const real_T b_C[273], const real_T Dv[13],
    const real_T Jm_data[], const int32_T Jm_size[2], real_T SuJm_data[],
    int32_T SuJm_size[2], real_T Sx_data[], int32_T Sx_size[2], real_T Su1_data[],
    int32_T Su1_size[2], real_T Hv_data[], int32_T Hv_size[2]);
  void proc_control_kron(const int32_T *b_A_size, real_T K_data[], int32_T
    K_size[2]);
  void proc_contr_mpcblock_optimizerPM(const emxArray_real_T_proc_control_T
    *rseq, const emxArray_real_T_proc_control_T *vseq, const real_T umin[8],
    const real_T umax[8], const real_T x[21], const real_T old_u[8], const
    real_T Mlim0[226], const real_T utargetseq[80], int32_T b_p, int32_T moves,
    const real_T b_uoff[8], const real_T ywt[13], const real_T uwt[8], const
    real_T duwt[8], const real_T b_A[441], const emxArray_real_T_proc_control_T *
    Bu, const emxArray_real_T_proc_control_T *Bv, const real_T b_C[273], const
    emxArray_real_T_proc_control_T *Dv, real_T u[8], real_T useq[88], real_T
    *status);
  void proc_control_eul2quat(const real_T eul[3], real_T q[4]);
  void proc_control_xgetrf(const real_T A[36], real_T b_A[36], int32_T ipiv[6],
    int32_T *info);
  void proc_control_mldivide_p(const real_T A[36], const real_T B[48], real_T Y
    [48]);
  void proc_control_quatmultiply(const real_T q[4], const real_T r[4], real_T
    qout[4]);
  void proc_control_ft_6(const real_T ct[2166], real_T Anq[169]);
  void proc_control_ft_5(const real_T ct[1959], real_T Anq[169]);
  void proc_control_ft_4(const real_T ct[1640], real_T Anq[169]);
  void proc_control_ft_3_p(const real_T ct[1260], real_T Anq[169]);
  void proc_control_ft_2_p(const real_T ct[805], real_T Anq[169]);
  void proc_control_ft_1_p(const real_T ct[433], real_T Anq[169]);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], const real_T in3[38],
    real_T Anq[169]);
  real_T proc_control_norm_p(const real_T x[169]);
  void proc_control_mpower(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2(real_T x);
  void proc_control_padeApproximation(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void proc_control_recomputeBlockDiag(const real_T A[169], const real_T F[169],
    const int32_T blockFormat[12], real_T b_F[169]);
  real_T proc_control_xnrm2_p(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xgerc_p(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y[13], const real_T A[169], int32_T ia0, real_T b_A[169]);
  void proc_control_xgehrd(const real_T a[169], real_T b_a[169], real_T tau[12]);
  real_T proc_control_xnrm2_pr(int32_T n, const real_T x[3]);
  void proc_control_xdlanv2(real_T a, real_T b, real_T c, real_T d, real_T *rt1r,
    real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *b_a, real_T *b_b, real_T
    *b_c, real_T *b_d, real_T *cs, real_T *sn);
  void proc_control_xrot(int32_T n, const real_T x[169], int32_T ix0, int32_T
    iy0, real_T c, real_T s, real_T b_x[169]);
  void proc_control_xrot_p(int32_T n, const real_T x[169], int32_T ix0, int32_T
    iy0, real_T c, real_T s, real_T b_x[169]);
  void proc_control_xrot_pr(const real_T x[169], int32_T ix0, int32_T iy0,
    real_T c, real_T s, real_T b_x[169]);
  void proc_control_eml_dlahqr(const real_T h[169], const real_T z[169], real_T
    b_h[169], int32_T *info, real_T b_z[169]);
  void proc_control_schur(const real_T A[169], real_T V[169], real_T T[169]);
  void proc_control_expm(real_T A[169], real_T F[169]);
  void proc_control_ft_3_pr(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2_pr(const real_T ct[804], real_T out1[13]);
  void proc_control_ft_1_pr(const real_T ct[435], real_T out1[13]);
  void proc_control_AUVQuatSimFcn(const real_T in1[13], const real_T in3[38],
    real_T out1[13]);
  real_T proc_control_norm_pr(const real_T x[4]);
  void proc_control_mldivide_pr(const real_T A[36], const real_T B[36], real_T
    Y[36]);
  void proc_control_TrimPlant_stepImpl(TrimPlant_proc_control_T *b_this, const
    real_T u[8], real_T y[13], const real_T ref[130], real_T constMec_rho,
    real_T constMec_g, real_T constMec_mass, real_T constMec_volume, real_T
    constMec_sub_height, const real_T constMec_rg[3], const real_T constMec_rb[3],
    const real_T constMec_cdl[6], const real_T constMec_cdq[6], const real_T
    constMec_added_mass[6], const real_T constMec_I[9], const real_T
    constMec_thrusters[48], real_T A[169], real_T B[104], real_T C[169], real_T
    D[104], real_T U[8], real_T Y[13], real_T X[13], real_T DX[13], real_T
    b_ref[130], real_T Z[13]);
  void proc_control_binary_expand_op_p(real_T in1[3], const int32_T in2_data[],
    const int32_T in2_size[2], const real_T in3_data[], const int32_T *in3_size,
    const real_T in4_data[], const int32_T *in4_size);
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_T *b_this);
  real_T proc_control_norm_pr3(const real_T x[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    real_T reset, const real_T poses[13], const real_T target[7], const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_control_ppval_p(const real_T pp_breaks[4], const real_T pp_coefs[36],
    real_T x, real_T v[3]);
  void pr_binary_expand_op_pr351ewpk3k(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void pro_binary_expand_op_pr351ewpk3(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void proc_binary_expand_op_pr351ewpk(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  quaternion_proc_control_T proc_computeFirstQuatDerivative(real_T pn_a, real_T
    pn_b, real_T pn_c, real_T pn_d, real_T qn_a, real_T qn_b, real_T qn_c,
    real_T qn_d, real_T sd, real_T qinterp_a, real_T qinterp_b, real_T qinterp_c,
    real_T qinterp_d);
  void proc__quaternion_parenReference(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, boolean_T varargin_1, real_T o_a_data[], int32_T o_a_size[2],
    real_T o_b_data[], int32_T o_b_size[2], real_T o_c_data[], int32_T o_c_size
    [2], real_T o_d_data[], int32_T o_d_size[2]);
  void proc_con_quaternion_parenAssign(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, const real_T rhs_a_data[], const int32_T rhs_a_size[2], const
    real_T rhs_b_data[], const int32_T rhs_b_size[2], const real_T rhs_c_data[],
    const int32_T rhs_c_size[2], const real_T rhs_d_data[], const int32_T
    rhs_d_size[2], real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d);
  void proc_con_quaternionBase_slerp_p(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T t,
    real_T *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void proc_contr_quaternionBase_slerp(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T
    *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void proc_contro_binary_expand_op_pr(real_T in1[3], const int32_T in2_data[],
    const int32_T in2_size[2], const real_T in3_data[], const int32_T *in3_size,
    const real_T in4_data[], const int32_T *in4_size);
  void MultiTrajectoryManager_resetImp(MultiTrajectoryManager_proc_c_T *b_this);
  void proc_control_quat2eul(real_T q[4], real_T eul[3]);
  void MultiTrajectoryManager_stepImpl(MultiTrajectoryManager_proc_c_T *b_this,
    boolean_T isNew, const SL_Bus_proc_control_geometry_msgs_Transform
    trajMsg_Transforms[2000], uint32_T trajMsg_Transforms_SL_Info_Rece, const
    SL_Bus_proc_control_geometry_msgs_Twist trajMsg_Velocities[2000], real_T
    reset, const real_T mesuredPose[13], real_T mpcParams_targetReached_linearT,
    real_T mpcParams_targetReached_angular, real_T
    mpcParams_targetReached_timeInT, real_T currentPose[130], boolean_T
    *isReached, boolean_T *isTrajDone, real_T initWpt[7]);
  void proc_control_xgerc_XyRtLi2r(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[338], int32_T ia0);
  void proc_control_qrFactor_O58Jhapw(const real_T A[169], real_T S[169], const
    real_T Ns[169]);
  void proc_control_xgerc_ay1ZSOWu(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[182], int32_T ia0);
  void proc_control_qrFactor_TeAoo2Mt(const real_T A[169], real_T S[169], const
    real_T Ns[13]);
  real_T proc_control_xnrm2_bRDMjHYG(int32_T n, const real_T x[14], int32_T ix0);
  void EKFCorrectorAdditive_g_6pDXID_k(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  void proc_control_xgerc_4X4H4v2V(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[208], int32_T ia0);
  void proc_control_qrFactor_3bJrEoRT(const real_T A[169], real_T S[169], const
    real_T Ns[39]);
  real_T proc_control_xnrm2_kj8IiC0H(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_qrFactor_qGSgSIIm(const real_T A[39], const real_T S[169],
    const real_T Ns[9], real_T b_S[9]);
  void proc_control_xgerc_ZLmTruVs(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[260], int32_T ia0);
  void proc_control_qrFactor_1jDj6Vzn(const real_T A[169], real_T S[169], const
    real_T Ns[91]);
  void proc_control_xgerc_aQMWzodX(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[7], real_T A[140], int32_T ia0);
  void proc_control_qrFactor_MMa7wW5h(const real_T A[91], const real_T S[169],
    const real_T Ns[49], real_T b_S[49]);
  void proc_control_copydigits(const char_T s1_data[], const int32_T s1_size[2],
    int32_T idx, const char_T s_data[], int32_T k, int32_T n, boolean_T
    allowpoint, char_T b_s1_data[], int32_T b_s1_size[2], int32_T *b_idx,
    int32_T *b_k, boolean_T *success);
  void proc__readfloat_pr351ewpk3k4u0o(const char_T s1_data[], const int32_T
    s1_size[2], int32_T idx, const char_T s_data[], int32_T k, int32_T n,
    boolean_T allowimag, char_T b_s1_data[], int32_T b_s1_size[2], int32_T
    *b_idx, int32_T *b_k, boolean_T *isimag, boolean_T *b_finite, real_T *nfv,
    boolean_T *foundsign, boolean_T *success);
  void proc_control_readfloat(const char_T s1_data[], const int32_T s1_size[2],
    int32_T idx, const char_T s_data[], int32_T k, int32_T n, boolean_T
    allowimag, char_T b_s1_data[], int32_T b_s1_size[2], int32_T *b_idx, int32_T
    *b_k, boolean_T *isimag, boolean_T *b_finite, real_T *nfv, boolean_T
    *foundsign, boolean_T *success);
  void proc_control_readfloat_i(const char_T s1_data[], const int32_T s1_size[2],
    int32_T idx, const char_T s_data[], int32_T k, int32_T n, boolean_T
    allowimag, char_T b_s1_data[], int32_T b_s1_size[2], int32_T *b_idx, int32_T
    *b_k, boolean_T *isimag, boolean_T *b_finite, real_T *nfv, boolean_T
    *foundsign, boolean_T *success);

  // Real-Time Model
  RT_MODEL_proc_control_T proc_control_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S34>/Scope' : Unused code path elimination
//  Block '<S34>/phi' : Unused code path elimination
//  Block '<S34>/rho' : Unused code path elimination
//  Block '<S34>/tetha' : Unused code path elimination
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
//  Block '<S50>/Constant' : Unused code path elimination
//  Block '<S50>/Gain' : Unused code path elimination
//  Block '<S50>/Gain1' : Unused code path elimination
//  Block '<S50>/Gain2' : Unused code path elimination
//  Block '<S50>/Product' : Unused code path elimination
//  Block '<S50>/Product1' : Unused code path elimination
//  Block '<S50>/Product2' : Unused code path elimination
//  Block '<S50>/Product3' : Unused code path elimination
//  Block '<S50>/Product4' : Unused code path elimination
//  Block '<S50>/Product5' : Unused code path elimination
//  Block '<S50>/Product6' : Unused code path elimination
//  Block '<S50>/Product7' : Unused code path elimination
//  Block '<S50>/Product8' : Unused code path elimination
//  Block '<S50>/Sum' : Unused code path elimination
//  Block '<S50>/Sum1' : Unused code path elimination
//  Block '<S50>/Sum2' : Unused code path elimination
//  Block '<S50>/Sum3' : Unused code path elimination
//  Block '<S2>/Scope1' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S3>/Display' : Unused code path elimination
//  Block '<S86>/Data Type Duplicate' : Unused code path elimination
//  Block '<S88>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S87>/Data Type Duplicate' : Unused code path elimination
//  Block '<S89>/FixPt Data Type Duplicate2' : Unused code path elimination
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
//  Block '<S157>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S158>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S159>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S160>/Vector Dimension Check' : Unused code path elimination
//  Block '<S161>/Vector Dimension Check' : Unused code path elimination
//  Block '<S162>/Vector Dimension Check' : Unused code path elimination
//  Block '<S163>/Vector Dimension Check' : Unused code path elimination
//  Block '<S164>/Vector Dimension Check' : Unused code path elimination
//  Block '<S165>/Vector Dimension Check' : Unused code path elimination
//  Block '<S139>/last_x' : Unused code path elimination
//  Block '<S166>/Vector Dimension Check' : Unused code path elimination
//  Block '<S139>/useq_scale' : Unused code path elimination
//  Block '<S139>/useq_scale1' : Unused code path elimination
//  Block '<S128>/Display' : Unused code path elimination
//  Block '<S132>/Constant3' : Unused code path elimination
//  Block '<S173>/Data Type Duplicate' : Unused code path elimination
//  Block '<S177>/Floor' : Unused code path elimination
//  Block '<S177>/Floor1' : Unused code path elimination
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
//  Block '<S191>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S192>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S193>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S194>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S195>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S196>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S197>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S198>/Vector Dimension Check' : Unused code path elimination
//  Block '<S199>/Vector Dimension Check' : Unused code path elimination
//  Block '<S200>/Vector Dimension Check' : Unused code path elimination
//  Block '<S201>/Vector Dimension Check' : Unused code path elimination
//  Block '<S202>/Vector Dimension Check' : Unused code path elimination
//  Block '<S203>/Vector Dimension Check' : Unused code path elimination
//  Block '<S177>/last_x' : Unused code path elimination
//  Block '<S204>/Vector Dimension Check' : Unused code path elimination
//  Block '<S175>/m_zero' : Unused code path elimination
//  Block '<S175>/p_zero' : Unused code path elimination
//  Block '<S211>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S212>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S213>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S214>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S215>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S216>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S217>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S218>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S219>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S220>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S221>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S222>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S223>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S224>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S225>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S226>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S227>/Vector Dimension Check' : Unused code path elimination
//  Block '<S228>/Vector Dimension Check' : Unused code path elimination
//  Block '<S229>/Vector Dimension Check' : Unused code path elimination
//  Block '<S230>/Vector Dimension Check' : Unused code path elimination
//  Block '<S208>/mv.init_zero' : Unused code path elimination
//  Block '<S208>/x.init_zero' : Unused code path elimination
//  Block '<S236>/Data Type Duplicate' : Unused code path elimination
//  Block '<S236>/Data Type Propagation' : Unused code path elimination
//  Block '<S130>/Scope1' : Unused code path elimination
//  Block '<S130>/Scope2' : Unused code path elimination
//  Block '<S237>/Constant1' : Unused code path elimination
//  Block '<S237>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S251>/Product' : Unused code path elimination
//  Block '<S251>/Product1' : Unused code path elimination
//  Block '<S251>/Product2' : Unused code path elimination
//  Block '<S251>/Product3' : Unused code path elimination
//  Block '<S256>/Product' : Unused code path elimination
//  Block '<S256>/Product1' : Unused code path elimination
//  Block '<S256>/Product2' : Unused code path elimination
//  Block '<S256>/Product3' : Unused code path elimination
//  Block '<S256>/Sum' : Unused code path elimination
//  Block '<S255>/sqrt' : Unused code path elimination
//  Block '<S252>/Constant' : Unused code path elimination
//  Block '<S252>/Gain' : Unused code path elimination
//  Block '<S252>/Gain1' : Unused code path elimination
//  Block '<S252>/Gain2' : Unused code path elimination
//  Block '<S252>/Product' : Unused code path elimination
//  Block '<S252>/Product1' : Unused code path elimination
//  Block '<S252>/Product2' : Unused code path elimination
//  Block '<S252>/Product3' : Unused code path elimination
//  Block '<S252>/Product4' : Unused code path elimination
//  Block '<S252>/Product5' : Unused code path elimination
//  Block '<S252>/Product6' : Unused code path elimination
//  Block '<S252>/Product7' : Unused code path elimination
//  Block '<S252>/Product8' : Unused code path elimination
//  Block '<S252>/Sum' : Unused code path elimination
//  Block '<S252>/Sum1' : Unused code path elimination
//  Block '<S252>/Sum2' : Unused code path elimination
//  Block '<S252>/Sum3' : Unused code path elimination
//  Block '<S253>/Constant' : Unused code path elimination
//  Block '<S253>/Gain' : Unused code path elimination
//  Block '<S253>/Gain1' : Unused code path elimination
//  Block '<S253>/Gain2' : Unused code path elimination
//  Block '<S253>/Product' : Unused code path elimination
//  Block '<S253>/Product1' : Unused code path elimination
//  Block '<S253>/Product2' : Unused code path elimination
//  Block '<S253>/Product3' : Unused code path elimination
//  Block '<S253>/Product4' : Unused code path elimination
//  Block '<S253>/Product5' : Unused code path elimination
//  Block '<S253>/Product6' : Unused code path elimination
//  Block '<S253>/Product7' : Unused code path elimination
//  Block '<S253>/Product8' : Unused code path elimination
//  Block '<S253>/Sum' : Unused code path elimination
//  Block '<S253>/Sum1' : Unused code path elimination
//  Block '<S253>/Sum2' : Unused code path elimination
//  Block '<S253>/Sum3' : Unused code path elimination
//  Block '<S254>/Constant' : Unused code path elimination
//  Block '<S254>/Gain' : Unused code path elimination
//  Block '<S254>/Gain1' : Unused code path elimination
//  Block '<S254>/Gain2' : Unused code path elimination
//  Block '<S254>/Product' : Unused code path elimination
//  Block '<S254>/Product1' : Unused code path elimination
//  Block '<S254>/Product2' : Unused code path elimination
//  Block '<S254>/Product3' : Unused code path elimination
//  Block '<S254>/Product4' : Unused code path elimination
//  Block '<S254>/Product5' : Unused code path elimination
//  Block '<S254>/Product6' : Unused code path elimination
//  Block '<S254>/Product7' : Unused code path elimination
//  Block '<S254>/Product8' : Unused code path elimination
//  Block '<S254>/Sum' : Unused code path elimination
//  Block '<S254>/Sum1' : Unused code path elimination
//  Block '<S254>/Sum2' : Unused code path elimination
//  Block '<S254>/Sum3' : Unused code path elimination
//  Block '<S257>/Product' : Unused code path elimination
//  Block '<S257>/Product1' : Unused code path elimination
//  Block '<S257>/Product2' : Unused code path elimination
//  Block '<S257>/Product3' : Unused code path elimination
//  Block '<S262>/Product' : Unused code path elimination
//  Block '<S262>/Product1' : Unused code path elimination
//  Block '<S262>/Product2' : Unused code path elimination
//  Block '<S262>/Product3' : Unused code path elimination
//  Block '<S262>/Sum' : Unused code path elimination
//  Block '<S261>/sqrt' : Unused code path elimination
//  Block '<S258>/Constant' : Unused code path elimination
//  Block '<S258>/Gain' : Unused code path elimination
//  Block '<S258>/Gain1' : Unused code path elimination
//  Block '<S258>/Gain2' : Unused code path elimination
//  Block '<S258>/Product' : Unused code path elimination
//  Block '<S258>/Product1' : Unused code path elimination
//  Block '<S258>/Product2' : Unused code path elimination
//  Block '<S258>/Product3' : Unused code path elimination
//  Block '<S258>/Product4' : Unused code path elimination
//  Block '<S258>/Product5' : Unused code path elimination
//  Block '<S258>/Product6' : Unused code path elimination
//  Block '<S258>/Product7' : Unused code path elimination
//  Block '<S258>/Product8' : Unused code path elimination
//  Block '<S258>/Sum' : Unused code path elimination
//  Block '<S258>/Sum1' : Unused code path elimination
//  Block '<S258>/Sum2' : Unused code path elimination
//  Block '<S258>/Sum3' : Unused code path elimination
//  Block '<S259>/Constant' : Unused code path elimination
//  Block '<S259>/Gain' : Unused code path elimination
//  Block '<S259>/Gain1' : Unused code path elimination
//  Block '<S259>/Gain2' : Unused code path elimination
//  Block '<S259>/Product' : Unused code path elimination
//  Block '<S259>/Product1' : Unused code path elimination
//  Block '<S259>/Product2' : Unused code path elimination
//  Block '<S259>/Product3' : Unused code path elimination
//  Block '<S259>/Product4' : Unused code path elimination
//  Block '<S259>/Product5' : Unused code path elimination
//  Block '<S259>/Product6' : Unused code path elimination
//  Block '<S259>/Product7' : Unused code path elimination
//  Block '<S259>/Product8' : Unused code path elimination
//  Block '<S259>/Sum' : Unused code path elimination
//  Block '<S259>/Sum1' : Unused code path elimination
//  Block '<S259>/Sum2' : Unused code path elimination
//  Block '<S259>/Sum3' : Unused code path elimination
//  Block '<S260>/Constant' : Unused code path elimination
//  Block '<S260>/Gain' : Unused code path elimination
//  Block '<S260>/Gain1' : Unused code path elimination
//  Block '<S260>/Gain2' : Unused code path elimination
//  Block '<S260>/Product' : Unused code path elimination
//  Block '<S260>/Product1' : Unused code path elimination
//  Block '<S260>/Product2' : Unused code path elimination
//  Block '<S260>/Product3' : Unused code path elimination
//  Block '<S260>/Product4' : Unused code path elimination
//  Block '<S260>/Product5' : Unused code path elimination
//  Block '<S260>/Product6' : Unused code path elimination
//  Block '<S260>/Product7' : Unused code path elimination
//  Block '<S260>/Product8' : Unused code path elimination
//  Block '<S260>/Sum' : Unused code path elimination
//  Block '<S260>/Sum1' : Unused code path elimination
//  Block '<S260>/Sum2' : Unused code path elimination
//  Block '<S260>/Sum3' : Unused code path elimination
//  Block '<S237>/Scope' : Unused code path elimination
//  Block '<S237>/Sum4' : Unused code path elimination
//  Block '<S238>/Scope' : Unused code path elimination
//  Block '<S239>/Discrete Transfer Fcn1' : Unused code path elimination
//  Block '<S274>/Data Type Duplicate' : Unused code path elimination
//  Block '<S274>/Diff' : Unused code path elimination
//  Block '<S274>/TSamp' : Unused code path elimination
//  Block '<S274>/UD' : Unused code path elimination
//  Block '<S277>/Constant' : Unused code path elimination
//  Block '<S277>/Gain' : Unused code path elimination
//  Block '<S277>/Gain1' : Unused code path elimination
//  Block '<S277>/Gain2' : Unused code path elimination
//  Block '<S277>/Product' : Unused code path elimination
//  Block '<S277>/Product1' : Unused code path elimination
//  Block '<S277>/Product2' : Unused code path elimination
//  Block '<S277>/Product3' : Unused code path elimination
//  Block '<S277>/Product4' : Unused code path elimination
//  Block '<S277>/Product5' : Unused code path elimination
//  Block '<S277>/Product6' : Unused code path elimination
//  Block '<S277>/Product7' : Unused code path elimination
//  Block '<S277>/Product8' : Unused code path elimination
//  Block '<S277>/Sum' : Unused code path elimination
//  Block '<S277>/Sum1' : Unused code path elimination
//  Block '<S277>/Sum2' : Unused code path elimination
//  Block '<S277>/Sum3' : Unused code path elimination
//  Block '<S278>/Constant' : Unused code path elimination
//  Block '<S278>/Gain' : Unused code path elimination
//  Block '<S278>/Gain1' : Unused code path elimination
//  Block '<S278>/Gain2' : Unused code path elimination
//  Block '<S278>/Product' : Unused code path elimination
//  Block '<S278>/Product1' : Unused code path elimination
//  Block '<S278>/Product2' : Unused code path elimination
//  Block '<S278>/Product3' : Unused code path elimination
//  Block '<S278>/Product4' : Unused code path elimination
//  Block '<S278>/Product5' : Unused code path elimination
//  Block '<S278>/Product6' : Unused code path elimination
//  Block '<S278>/Product7' : Unused code path elimination
//  Block '<S278>/Product8' : Unused code path elimination
//  Block '<S278>/Sum' : Unused code path elimination
//  Block '<S278>/Sum1' : Unused code path elimination
//  Block '<S278>/Sum2' : Unused code path elimination
//  Block '<S278>/Sum3' : Unused code path elimination
//  Block '<S240>/Scope' : Unused code path elimination
//  Block '<S240>/Scope1' : Unused code path elimination
//  Block '<S240>/Scope2' : Unused code path elimination
//  Block '<S240>/Scope3' : Unused code path elimination
//  Block '<S286>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S287>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S288>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S290>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S285>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S285>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S285>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S285>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S297>/Matrix Concatenate' : Unused code path elimination
//  Block '<S297>/Scope' : Unused code path elimination
//  Block '<S297>/Scope1' : Unused code path elimination
//  Block '<S297>/Scope2' : Unused code path elimination
//  Block '<S297>/Scope3' : Unused code path elimination
//  Block '<S297>/Selector' : Unused code path elimination
//  Block '<S297>/Selector5' : Unused code path elimination
//  Block '<S297>/Selector6' : Unused code path elimination
//  Block '<S297>/Selector7' : Unused code path elimination
//  Block '<S297>/Selector8' : Unused code path elimination
//  Block '<S297>/Sum' : Unused code path elimination
//  Block '<S297>/e angulars rates' : Unused code path elimination
//  Block '<S297>/e position' : Unused code path elimination
//  Block '<S297>/e quaternion' : Unused code path elimination
//  Block '<S297>/e velocity' : Unused code path elimination
//  Block '<S299>/Scope1' : Unused code path elimination
//  Block '<S315>/Display' : Unused code path elimination
//  Block '<S315>/Selector3' : Unused code path elimination
//  Block '<S303>/Scope' : Unused code path elimination
//  Block '<S324>/Display' : Unused code path elimination
//  Block '<S324>/Display1' : Unused code path elimination
//  Block '<S91>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S139>/Reshape' : Reshape block reduction
//  Block '<S139>/Reshape1' : Reshape block reduction
//  Block '<S139>/Reshape2' : Reshape block reduction
//  Block '<S139>/Reshape3' : Reshape block reduction
//  Block '<S139>/Reshape4' : Reshape block reduction
//  Block '<S139>/Reshape5' : Reshape block reduction
//  Block '<S177>/Reshape' : Reshape block reduction
//  Block '<S177>/Reshape1' : Reshape block reduction
//  Block '<S177>/Reshape2' : Reshape block reduction
//  Block '<S177>/Reshape3' : Reshape block reduction
//  Block '<S177>/Reshape4' : Reshape block reduction
//  Block '<S177>/Reshape5' : Reshape block reduction
//  Block '<S209>/Reshape1' : Reshape block reduction
//  Block '<S209>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S209>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S210>/reshape_mv' : Reshape block reduction
//  Block '<S285>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S285>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S242>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S242>/Zero-Order Hold1' : Eliminated since input and output rates are identical


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
//  '<S1>'   : 'proc_control/Modèle Physique'
//  '<S2>'   : 'proc_control/Plot values'
//  '<S3>'   : 'proc_control/ROS Input'
//  '<S4>'   : 'proc_control/ROS Output'
//  '<S5>'   : 'proc_control/Send Data to ROS'
//  '<S6>'   : 'proc_control/Sensor Manager'
//  '<S7>'   : 'proc_control/Subsystem Controller'
//  '<S8>'   : 'proc_control/Subsystem ProcNav'
//  '<S9>'   : 'proc_control/Subsystem Trajectory'
//  '<S10>'  : 'proc_control/Subsystem1'
//  '<S11>'  : 'proc_control/Modèle Physique/Modele Thruster'
//  '<S12>'  : 'proc_control/Modèle Physique/Perturbations'
//  '<S13>'  : 'proc_control/Modèle Physique/Quaternion Normalise'
//  '<S14>'  : 'proc_control/Modèle Physique/Sensor Model'
//  '<S15>'  : 'proc_control/Modèle Physique/Subsystem1'
//  '<S16>'  : 'proc_control/Modèle Physique/Modele Thruster/MATLAB Function1'
//  '<S17>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity'
//  '<S18>'  : 'proc_control/Modèle Physique/Modele Thruster/T1'
//  '<S19>'  : 'proc_control/Modèle Physique/Modele Thruster/T2'
//  '<S20>'  : 'proc_control/Modèle Physique/Modele Thruster/T3'
//  '<S21>'  : 'proc_control/Modèle Physique/Modele Thruster/T4'
//  '<S22>'  : 'proc_control/Modèle Physique/Modele Thruster/T5'
//  '<S23>'  : 'proc_control/Modèle Physique/Modele Thruster/T6'
//  '<S24>'  : 'proc_control/Modèle Physique/Modele Thruster/T7'
//  '<S25>'  : 'proc_control/Modèle Physique/Modele Thruster/T8'
//  '<S26>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/Blank Message2'
//  '<S27>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/MATLAB Function3'
//  '<S28>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/Publish2'
//  '<S29>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise'
//  '<S30>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise1'
//  '<S31>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise2'
//  '<S32>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise3'
//  '<S33>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise4'
//  '<S34>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model'
//  '<S35>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse'
//  '<S36>'  : 'proc_control/Modèle Physique/Sensor Model/MATLAB Function'
//  '<S37>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Conjugate'
//  '<S38>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation'
//  '<S39>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1'
//  '<S40>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2'
//  '<S41>'  : 'proc_control/Modèle Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S42>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Publish'
//  '<S43>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subscribe'
//  '<S44>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subsystem'
//  '<S45>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subscribe/Enabled Subsystem'
//  '<S46>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S47>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S48>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S49>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S50>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S51>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S52>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S53>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S54>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S55>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S56>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S57>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S58>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S59>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S60>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S61>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V1'
//  '<S62>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V2'
//  '<S63>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V3'
//  '<S64>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S65>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S66>'  : 'proc_control/ROS Input/AUV8'
//  '<S67>'  : 'proc_control/ROS Input/Simulation'
//  '<S68>'  : 'proc_control/ROS Input/Subsystem'
//  '<S69>'  : 'proc_control/ROS Input/AUV8/Subscribe'
//  '<S70>'  : 'proc_control/ROS Input/AUV8/Subscribe1'
//  '<S71>'  : 'proc_control/ROS Input/AUV8/Subscribe2'
//  '<S72>'  : 'proc_control/ROS Input/AUV8/Subscribe3'
//  '<S73>'  : 'proc_control/ROS Input/AUV8/Subscribe/Enabled Subsystem'
//  '<S74>'  : 'proc_control/ROS Input/AUV8/Subscribe1/Enabled Subsystem'
//  '<S75>'  : 'proc_control/ROS Input/AUV8/Subscribe2/Enabled Subsystem'
//  '<S76>'  : 'proc_control/ROS Input/AUV8/Subscribe3/Enabled Subsystem'
//  '<S77>'  : 'proc_control/ROS Input/Simulation/Subscribe'
//  '<S78>'  : 'proc_control/ROS Input/Simulation/Subscribe depth'
//  '<S79>'  : 'proc_control/ROS Input/Simulation/Subscribe1'
//  '<S80>'  : 'proc_control/ROS Input/Simulation/Subscribe2'
//  '<S81>'  : 'proc_control/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S82>'  : 'proc_control/ROS Input/Simulation/Subscribe depth/Enabled Subsystem'
//  '<S83>'  : 'proc_control/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S84>'  : 'proc_control/ROS Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S85>'  : 'proc_control/ROS Input/Subsystem/MATLAB Function'
//  '<S86>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable'
//  '<S87>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable1'
//  '<S88>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable/Subsystem'
//  '<S89>'  : 'proc_control/ROS Input/Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S90>'  : 'proc_control/ROS Output/Send DVL msg'
//  '<S91>'  : 'proc_control/ROS Output/Send Depth msg'
//  '<S92>'  : 'proc_control/ROS Output/Send IMU msg'
//  '<S93>'  : 'proc_control/ROS Output/Send Ping msg'
//  '<S94>'  : 'proc_control/ROS Output/Send to Unity'
//  '<S95>'  : 'proc_control/ROS Output/Send DVL msg/   '
//  '<S96>'  : 'proc_control/ROS Output/Send DVL msg/MATLAB Function'
//  '<S97>'  : 'proc_control/ROS Output/Send DVL msg/Publish'
//  '<S98>'  : 'proc_control/ROS Output/Send Depth msg/Blank Message'
//  '<S99>'  : 'proc_control/ROS Output/Send Depth msg/Publish Depth'
//  '<S100>' : 'proc_control/ROS Output/Send IMU msg/   '
//  '<S101>' : 'proc_control/ROS Output/Send IMU msg/Header Assignment'
//  '<S102>' : 'proc_control/ROS Output/Send IMU msg/MATLAB Function'
//  '<S103>' : 'proc_control/ROS Output/Send IMU msg/Publish imu_info'
//  '<S104>' : 'proc_control/ROS Output/Send Ping msg/Blank Message'
//  '<S105>' : 'proc_control/ROS Output/Send Ping msg/Publish Ping'
//  '<S106>' : 'proc_control/ROS Output/Send to Unity/   '
//  '<S107>' : 'proc_control/ROS Output/Send to Unity/MATLAB Function'
//  '<S108>' : 'proc_control/ROS Output/Send to Unity/Publish'
//  '<S109>' : 'proc_control/Send Data to ROS/Blank Message'
//  '<S110>' : 'proc_control/Send Data to ROS/Blank Message2'
//  '<S111>' : 'proc_control/Send Data to ROS/MATLAB Function1'
//  '<S112>' : 'proc_control/Send Data to ROS/MATLAB Function3'
//  '<S113>' : 'proc_control/Send Data to ROS/Publish'
//  '<S114>' : 'proc_control/Send Data to ROS/Publish2'
//  '<S115>' : 'proc_control/Send Data to ROS/Subsystem'
//  '<S116>' : 'proc_control/Send Data to ROS/Subsystem/Blank Message5'
//  '<S117>' : 'proc_control/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S118>' : 'proc_control/Send Data to ROS/Subsystem/Publish5'
//  '<S119>' : 'proc_control/Sensor Manager/Send Sensor ON'
//  '<S120>' : 'proc_control/Sensor Manager/Send auv states'
//  '<S121>' : 'proc_control/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S122>' : 'proc_control/Sensor Manager/Send Sensor ON/Publish'
//  '<S123>' : 'proc_control/Sensor Manager/Send auv states/Blank Message'
//  '<S124>' : 'proc_control/Sensor Manager/Send auv states/Header Assignment'
//  '<S125>' : 'proc_control/Sensor Manager/Send auv states/MATLAB Function1'
//  '<S126>' : 'proc_control/Sensor Manager/Send auv states/Publish'
//  '<S127>' : 'proc_control/Sensor Manager/Send auv states/bus2mux'
//  '<S128>' : 'proc_control/Subsystem Controller/Controller list'
//  '<S129>' : 'proc_control/Subsystem Controller/MPC manager'
//  '<S130>' : 'proc_control/Subsystem Controller/Post traitements'
//  '<S131>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S132>' : 'proc_control/Subsystem Controller/Controller list/IDLE'
//  '<S133>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S134>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S135>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
//  '<S136>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S137>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual'
//  '<S139>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Blank Message'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Header Assignment'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/MATLAB Function1'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Publish'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S200>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S225>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S226>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S227>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S228>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S229>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S230>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S231>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S232>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe'
//  '<S233>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1'
//  '<S234>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S235>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S236>' : 'proc_control/Subsystem Controller/Post traitements/PSU safe'
//  '<S237>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S238>' : 'proc_control/Subsystem ProcNav/DVL Mesurments'
//  '<S239>' : 'proc_control/Subsystem ProcNav/Detph Mesurments'
//  '<S240>' : 'proc_control/Subsystem ProcNav/Mux2Bus'
//  '<S241>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S242>' : 'proc_control/Subsystem ProcNav/Subsystem'
//  '<S243>' : 'proc_control/Subsystem ProcNav/Thursters Mesurments'
//  '<S244>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S245>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S246>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S247>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S249>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S251>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S252>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S253>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S254>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S255>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S256>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S257>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S258>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S259>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S260>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S261>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S262>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S263>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S264>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S265>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S266>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S267>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S268>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S269>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S270>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S271>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S272>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S273>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S274>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Discrete Derivative'
//  '<S275>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation'
//  '<S276>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S277>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V1'
//  '<S278>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V2'
//  '<S279>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V3'
//  '<S280>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S281>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S282>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S283>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S284>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S285>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S286>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S287>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S288>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3'
//  '<S289>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S290>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S291>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S292>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S293>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3/Correct'
//  '<S294>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S295>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S296>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S297>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S298>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S299>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S300>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S301>' : 'proc_control/Subsystem Trajectory/Subsystem2'
//  '<S302>' : 'proc_control/Subsystem Trajectory/SubsystemAuto'
//  '<S303>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory'
//  '<S304>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function1'
//  '<S305>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function1'
//  '<S306>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S307>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S308>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S309>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S310>' : 'proc_control/Subsystem Trajectory/Subsystem2/Blank Message5'
//  '<S311>' : 'proc_control/Subsystem Trajectory/Subsystem2/MATLAB Function2'
//  '<S312>' : 'proc_control/Subsystem Trajectory/Subsystem2/Publish5'
//  '<S313>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S314>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S315>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S316>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S317>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S318>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S319>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S320>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S321>' : 'proc_control/Subsystem1/Get_ROS_param '
//  '<S322>' : 'proc_control/Subsystem1/ROS Command Manager'
//  '<S323>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters'
//  '<S324>' : 'proc_control/Subsystem1/Get_ROS_param /physics constants'
//  '<S325>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains'
//  '<S326>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/targetReached param'
//  '<S327>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains defaut'
//  '<S328>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 10'
//  '<S329>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 11'
//  '<S330>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 19'
//  '<S331>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains no dvl'
//  '<S332>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe1'
//  '<S333>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe2'
//  '<S334>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe3'
//  '<S335>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe4'
//  '<S336>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe5'
//  '<S337>' : 'proc_control/Subsystem1/ROS Command Manager/startSim'
//  '<S338>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe1/Enabled Subsystem'
//  '<S339>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe2/Enabled Subsystem'
//  '<S340>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe3/Enabled Subsystem'
//  '<S341>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe4/Enabled Subsystem'
//  '<S342>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe5/Enabled Subsystem'
//  '<S343>' : 'proc_control/Subsystem1/ROS Command Manager/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
