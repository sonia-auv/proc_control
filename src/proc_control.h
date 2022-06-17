//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 3.66
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Thu Jun 16 22:48:09 2022
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
  // Block signals (default storage)
  struct B_proc_control_T {
    std::string Switch1;               // '<S123>/Switch1'
    s_Ref0liQlfQOPmAop9i3aPH_proc_T QRManager;
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T CholManager;
    real_T y_data[3345241];
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T b_WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T c_WorkingSet;
    s_j0X3urodUv3ospvkLXsspC_proc_T memspace;
    real_T B_data[1792420];
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T TrialState;
    real_T b_this[78013];
    real_T b_this_m[78000];
    real_T A_data[67520];
    real_T Mu_data[46400];
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w In1;// '<S301>/In1'
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
    real_T y_data_k[10400];
    real_T varargin_2_data[10400];
    real_T a[10400];
    real_T Jmv[10400];
    real_T tmp_data_c[6561];
    real_T tmp_data_b[6561];
    real_T tmp_data_p[6561];
    real_T b_H_data[6561];
    real_T b_Linv_data[6561];
    real_T tmp_data_cv[6561];
    real_T RLinv_data[6561];
    real_T b_D_data[6561];
    real_T b_H_data_f[6561];
    real_T b_H_data_g[6561];
    real_T TL_data[6561];
    real_T Q_data[6561];
    real_T R_data[6561];
    real_T b_A_data[6561];
    real_T tmp_data_g[6561];
    real_T tmp_data_m[6561];
    real_T tmp_data_n[6561];
    real_T in1_data[6561];
    real_T tmp_data_pp[6400];
    real_T Jm_data[6400];
    real_T I2Jm_data[6400];
    real_T I3_data[6400];
    real_T varargin_4_data[6400];
    real_T varargin_6_data[6400];
    real_T dv[6400];
    real_T tmp_data_l[6400];
    real_T Mv_aux_data[6380];
    real_T b_A[4851];
    real_T q[4746];
    real_T Su1_data[4640];
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_C[3003];
    real_T Sx_data_j[2730];
    real_T b_Sx[2730];
    real_T tmp_data_d[2560];
    real_T tmp_data_gu[2560];
    real_T dv1[2486];
    real_T varargin_2_data_l[2080];
    real_T u_d[2034];
    s_wbACub5hw4pAYPfHb1hrsB_proc_T QPObjective;
    real_T A[1859];                    // '<S132>/MATLAB Function2'
    real_T C[1859];                    // '<S132>/MATLAB Function2'
    real_T Bu[1848];
    real_T y_data_d[1829];
    real_T y_data_l[1829];
    real_T work_data[1829];
    real_T work_data_o[1829];
    real_T vn1_data[1829];
    real_T vn2_data[1829];
    real_T work_data_b[1829];
    real_T y_data_n[1829];
    real_T y_data_b[1829];
    real_T y_data_ln[1829];
    real_T y_data_h[1829];
    real_T y_data_bn[1829];
    real_T y_data_da[1829];
    real_T y_data_e[1829];
    real_T s[1808];
    real_T Kx_data[1680];
    real_T Hv_data[1430];
    real_T varargin_1_data_b[1430];
    real_T b_Hv[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T CovMat[1156];
    real_T B[1144];                    // '<S132>/MATLAB Function2'
    real_T varargin_1_data_j[1040];
    real_T Su1_data_f[1040];
    real_T b_SuJm[1040];
    real_T b_Su1[1040];
    real_T WySuJm[1040];
    real_T Jmv_a[1040];
    real_T b_tmp[986];
    real_T c_data[980];
    int8_T b_data[6561];
    real_T tmp_data_j[640];
    real_T tmp_data_jz[640];
    real_T I1_data[640];
    real_T Ku1_data[640];
    real_T I2Jm[640];
    real_T WuI2Jm[640];
    real_T dv2[640];
    real_T tmp_data_o[640];
    real_T tmp_data_ny[640];
    real_T b_B[630];
    real_T Mlimfull_data[580];
    real_T Vfull_data[580];
    real_T b_A_i[441];
    real_T AA_o[441];
    real_T Mlimfull0[436];
    real_T Vfull0[436];
    SL_Bus_proc_control_std_msgs_Float64MultiArray In1_f;// '<S227>/In1'
    SL_Bus_proc_control_std_msgs_Float64MultiArray b_varargout_2_n;
    SL_Bus_proc_control_sonia_common_MpcInfo msg_m;// '<S113>/MATLAB Function'
    real_T b_D[390];
    SL_Bus_proc_control_sonia_common_MpcGains In1_o;// '<S228>/In1'
    SL_Bus_proc_control_sonia_common_MpcGains b_varargout_2_c;
    real_T b_A_m[338];
    SL_Bus_proc_control_std_msgs_Int16MultiArray msg_p;// '<S16>/MATLAB Function3' 
    SL_Bus_proc_control_std_msgs_UInt16MultiArray msg_h;// '<S5>/MATLAB Function3' 
    real_T B_data_m[320];
    real_T b_Bu[320];
    uint32_T c_mt[625];
    SL_Bus_proc_control_std_msgs_Int8MultiArray msg_n;// '<S5>/MATLAB Function1' 
    real_T Nk[273];
    real_T b_C_j[273];
    real_T CA[273];
    real_T CA_h[273];
    real_T b_C_c[273];
    real_T Cineq_data[260];
    real_T b_data_c[260];
    real_T varargin_1_data_p[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_p5[260];
    real_T b_c_a[260];
    real_T b_c_data_e[260];
    real_T Je_data[260];
    real_T b_A_a[260];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T Bv[231];
    real_T b_Mlim[226];
    real_T Bc[226];
    real_T b_Mlim_a[226];
    real_T b_Mu1[226];
    real_T cTol[226];
    real_T dv3[226];
    real_T b_A_if[208];
    real_T b_A_l[182];
    real_T A_o[169];
    real_T dv4[169];
    real_T dv5[169];
    real_T dv6[169];
    real_T dv7[169];
    real_T b_A2[169];
    real_T b_A4[169];
    real_T b_A6[169];
    real_T y_o[169];
    real_T dv8[169];
    real_T b_A4_i[169];
    real_T a_f[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_i[169];
    real_T cBuffer_f[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T dv9[169];
    real_T A4_g[169];
    real_T dv10[169];
    real_T b_a[169];
    real_T cBuffer_c[169];
    real_T aBuffer_o[169];
    real_T cBuffer_l[169];
    real_T cBuffer_m[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T b_A_mj[169];
    real_T V[169];
    real_T b_h[169];
    real_T y_c[169];
    real_T y_f[169];
    real_T y_p[169];
    real_T y_e1[169];
    real_T V_o[169];
    real_T A6_h[169];
    real_T V_l[169];
    real_T A6_h2[169];
    real_T S[169];
    real_T b_a_m[169];
    real_T b_Kx[168];
    int16_T q_data[580];
    int16_T r_data[580];
    int16_T s_data[580];
    int16_T t_data[580];
    int16_T v_data[580];
    int16_T w_data[580];
    real_T Dv[143];
    real_T Y_p[143];                   // '<S132>/MATLAB Function2'
    real_T X_d[143];                   // '<S132>/MATLAB Function2'
    real_T DX[143];                    // '<S132>/MATLAB Function2'
    real_T CA_data[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_m[143];
    real_T X_h[143];
    real_T X_c[143];
    real_T b_X_k[143];
    real_T b_X_p[143];
    real_T b_X_px[143];
    real_T b_A_p[140];
    real_T z[139];
    real_T rtb_Selector_a[139];
    real_T dv11[139];
    real_T b_x[139];
    real_T y_j[130];                   // '<S290>/MATLAB Function1'
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_j[130];
    real_T gfX[130];
    real_T z_e[130];
    real_T b[130];
    real_T readCurrent[128];
    SL_Bus_proc_control_nav_msgs_Odometry msg_po;// '<S118>/MATLAB Function1'
    real_T Selector_o[117];            // '<S203>/Selector'
    int32_T iC[226];
    real_T b_B_b[104];
    real_T Sum_a[104];
    real_T b_C_g[104];
    real_T cb_data[100];
    real_T dHdx[91];
    real_T K[91];
    real_T C_e[91];
    real_T b_C_f[91];
    real_T y_h[91];
    real_T U[88];                      // '<S132>/MATLAB Function2'
    real_T b_Kv[88];
    real_T U_e[88];
    real_T b_U[88];
    real_T U_c[88];
    real_T U_a[88];
    real_T U_d[88];
    real_T b_U_a[88];
    real_T Umv[88];
    real_T b_U_p[88];
    real_T b_U_m[88];
    real_T t[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T b_Linv[81];
    real_T c_Linv[81];
    real_T b_D_o[81];
    real_T b_H[81];
    real_T U_n[81];
    real_T RLinv[81];
    real_T TL[81];
    real_T QQ[81];
    real_T RR[81];
    real_T c_A[81];
    real_T r_data_l[81];
    real_T z_data[81];
    real_T b_x_data[81];
    real_T b_Ac_data[81];
    real_T tau_data[81];
    real_T b_Ac_data_p[81];
    real_T work_data_p[81];
    real_T work_data_f[81];
    real_T tmp_data_i[81];
    real_T in1_data_o[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv12[80];
    real_T utargetseq_data[80];
    real_T dv13[80];
    real_T b_I1[80];
    real_T dv14[80];
    real_T gfU[80];
    real_T y_k[80];
    real_T tmp_data_ie[80];
    real_T tmp_data_oc[80];
    boolean_T isMrows_data[580];
    real_T Selector1_n[72];            // '<S203>/Selector1'
    int16_T b_data_m[260];
    int16_T b_data_cu[260];
    int16_T d_data[260];
    int32_T b_data_f[130];
    real_T y_tmp[64];
    real_T b_I[64];
    real_T b_Jm[64];
    real_T b_Su1_h[64];
    real_T b_I1_m[64];
    SL_Bus_proc_control_sensor_msgs_Imu In1_p;// '<S72>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu In1_pd;// '<S80>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu msg_c;// '<S91>/MATLAB Function'
    boolean_T isMrows0[436];
    real_T Sy[49];
    real_T Sy_a[49];
    real_T R[49];
    real_T dv15[48];
    real_T dv16[48];
    real_T b_A_k[48];
    real_T constValues[41];
    boolean_T x[320];
    int32_T b_data_p[80];
    int32_T b_data_b[80];
    real_T dHdx_c[39];
    real_T K_n[39];
    real_T C_i[39];
    real_T b_C_m[39];
    real_T y_jg[39];
    real_T dCoefs[36];
    real_T b_newCoefs[36];
    real_T constValues_e[36];
    real_T constValues_m[36];
    real_T dv17[36];
    real_T A_m[36];
    real_T dv18[36];
    real_T c_x[36];
    real_T b_A_j[36];
    boolean_T icf[260];
    boolean_T icf_f[260];
    int8_T Je[260];
    boolean_T bv[226];
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_i;// '<S73>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_c;// '<S82>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL msg_b;// '<S89>/MATLAB Function' 
    real_T coefsWithFlatStart[24];
    SL_Bus_proc_control_sonia_common_PingMsg BusAssignment;// '<S92>/Bus Assignment' 
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T z_a[21];
    real_T Transpose_i[18];            // '<S307>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cv[128];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    real_T A_g[14];
    int32_T ic[26];
    int32_T ic_n[26];
    real_T K_d[13];
    real_T z_n[13];
    real_T imz[13];
    real_T TmpSignalConversionAtMAT_lt[13];// '<S129>/Bus2Mux'
    real_T dv19[13];
    real_T b_C_cg[13];
    real_T b_Wy[13];
    real_T x_dot_kk[13];
    real_T x_dot_k[13];
    real_T ic_f[13];
    real_T ic_p[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_p[13];
    real_T b_C_n[13];
    real_T ic_k[13];
    real_T dv20[13];
    real_T dv21[13];
    real_T work[13];
    real_T tau[13];
    real_T work_n[13];
    real_T tau_o[13];
    real_T work_g[13];
    real_T tau_c[13];
    real_T work_c[13];
    real_T tau_m[13];
    real_T work_j[13];
    real_T ic_kn[13];
    real_T dv22[13];
    real_T dv23[13];
    real_T b_x_m[13];
    real_T work_p[13];
    real_T a_d[13];
    real_T work_g4[13];
    real_T tamp[13];
    real_T coefMat[12];
    real_T coeffMat[12];
    real_T tau_c3[12];
    real_T tau_cx[12];
    real_T vseq[11];
    int8_T b_B_i[81];
    int8_T b_d[81];
    boolean_T tmp_data_g4[80];
    boolean_T tmp_data_lg[80];
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_b[9];// '<S295>/Subsystem1'
    real_T zopt[9];
    real_T f[9];
    real_T r[9];
    real_T z_f[9];
    real_T b_Ac[9];
    real_T tau_d[9];
    real_T work_jr[9];
    real_T R_i[9];
    real_T varargin_1[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_h;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_n;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_o;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_c;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_b;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_e;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_d;
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_i[64];
    real_T u[8];                       // '<S235>/ '
    real_T U_g[8];
    real_T u_scale[8];                 // '<S136>/u_scale'
    real_T rtb_u_scale_n[8];
    real_T dv24[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_l[8];
    real_T duk_c[8];
    real_T gfU_n[8];
    real_T ic_ph[8];
    real_T c_d[8];
    real_T runtimedata_MVRateMin[8];
    SL_Bus_proc_control_sonia_common_AddPose b_varargout_2_o;
    SL_Bus_proc_control_geometry_msgs_Pose ZeroOrderHold;// '<S293>/Zero-Order Hold' 
    SL_Bus_proc_control_geometry_msgs_Pose In1_n;// '<S324>/In1'
    SL_Bus_proc_control_geometry_msgs_Pose msg;// '<S293>/MATLAB Function2'
    SL_Bus_proc_control_geometry_msgs_Pose b_varargout_2_j;
    SL_Bus_proc_control_geometry_msgs_Pose msg_i;// '<S93>/MATLAB Function'
    real_T target[7];                  // '<S9>/Merge'
    real_T z_c[7];
    real_T TmpSignalConversionAtMATLAB[7];
    real_T tau_h[7];
    real_T work_d[7];
    real_T y_c5[7];
    real_T x_p[7];
    int32_T iv[13];
    SL_Bus_proc_control_geometry_msgs_Twist In1_od;// '<S299>/In1'
    SL_Bus_proc_control_geometry_msgs_Twist b_varargout_2_a;
    real_T TSamp[6];                   // '<S166>/TSamp'
    real_T dv25[6];
    real_T rtb_TSamp_o[6];
    real_T constValues_j[6];
    real_T constValues_p[6];
    int32_T blockFormat[12];
    int32_T blockFormat_p[12];
    char_T b_zeroDelimTopic[39];
    char_T b_zeroDelimTopic_o[37];
    int8_T b_I_l[36];
    char_T b_zeroDelimTopic_k[35];
    char_T b_zeroDelimTopic_j[34];
    char_T b_zeroDelimTopic_f[33];
    quaternion_proc_control_T expl_temp_c;
    char_T b_zeroDelimTopic_fq[32];
    real_T MATLABSystem_o1[4];         // '<S10>/MATLAB System'
    real_T n[4];
    real_T TmpSignalConversionAtSFun_f[4];// '<S230>/MATLAB Function1'
    real_T qRel[4];
    real_T qRel_n[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T v_data_i[8];
    int32_T v_data_l[8];
    char_T b_zeroDelimTopic_i[31];
    char_T b_zeroDelimTopic_k1[30];
    char_T b_zeroDelimTopic_fc[30];
    char_T b_zeroDelimTopic_a[29];
    char_T b_zeroDelimTopic_d[28];
    char_T b_zeroDelimTopic_e[27];
    char_T b_zeroDelimTopic_a0[26];
    char_T b_zeroDelimTopic_il[26];
    boolean_T icf_e[26];
    boolean_T icf_b[26];
    SL_Bus_proc_control_geometry_msgs_Vector3 b_varargout_2_f;
    real_T Gain[3];                    // '<S291>/Gain'
    real_T Reference[130];             // '<S9>/Merge'
    real_T MATLABSystem_o2[3];         // '<S10>/MATLAB System'
    real_T c_j[3];
    real_T u2[3];                      // '<S259>/1//2'
    real_T sincos_o2[3];               // '<S40>/sincos'
    real_T u2_j[3];                    // '<S40>/1//2'
    real_T v[3];
    real_T target_o[3];
    real_T work_f[3];
    real_T v_o[3];
    real_T c_l[3];
    char_T b_zeroDelimTopic_l[23];
    char_T b_zeroDelimTopic_g[23];
    char_T b_zeroDelimTopic_d4[22];
    char_T b_zeroDelimTopic_dv[22];
    char_T b_zeroDelimTopic_jo[20];
    char_T b_zeroDelimTopic_f1[19];
    char_T b_zeroDelimTopic_js[17];
    int16_T NtoRPM[8];                 // '<S16>/N to RPM'
    uint16_T current[8];               // '<S128>/N to A'
    uint16_T pwm[8];                   // '<S128>/N to PWM'
    uint8_T rows[13];
    uint8_T rows_n[13];
    int8_T b_ipiv[13];
    int8_T ipiv[13];
    boolean_T x_h[13];
    boolean_T x_c[13];
    boolean_T x_k[13];
    boolean_T x_a[13];
    int32_T Jx_size[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T MATLABSystem_o4;            // '<S10>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S309>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S309>/Data Type Conversion1'
    real_T DataTypeConversion2;        // '<S309>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S307>/Matrix Concatenate'
    real_T Selector[6];                // '<S307>/Selector'
    real_T Selector1[8];               // '<S307>/Selector1'
    real_T Selector4[7];               // '<S307>/Selector4'
    real_T DataStoreRead[13];          // '<S281>/Data Store Read'
    real_T zposition;                  // '<S231>/Sum'
    real_T Sum;                        // '<S261>/Sum'
    real_T Sum_o;                      // '<S262>/Sum'
    real_T Sum_c;                      // '<S263>/Sum'
    real_T q0;                         // '<S259>/q0'
    real_T q1;                         // '<S259>/q1'
    real_T q2;                         // '<S259>/q2'
    real_T q3;                         // '<S259>/q3'
    real_T mv[8];                      // '<S126>/Merge'
    real_T MpcStatus;                  // '<S126>/Merge'
    real_T alive;                      // '<S126>/Merge'
    real_T mvmin[8];                   // '<S127>/MPC manager'
    real_T mvmax[8];                   // '<S127>/MPC manager'
    real_T ywt[13];                    // '<S127>/MPC manager'
    real_T mvwt[8];                    // '<S127>/MPC manager'
    real_T dmwwt[8];                   // '<S127>/MPC manager'
    real_T m;                          // '<S127>/MPC manager'
    real_T p;                          // '<S127>/MPC manager'
    real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BufferToMakeInportVirtual_Inser[8];
    real_T y;                          // '<S67>/MATLAB Function'
    real_T PWMtoN[8];                  // '<S11>/ PWM to N'
    real_T Drift[6];                   // '<S12>/ Drift'
    real_T WorldPosition_n[3];         // '<S1>/Discrete-Time Integrator'
    real_T PressureDepth;              // '<S14>/Gain'
    real_T Quaternion[4];              // '<S14>/Sum1'
    real_T AngularRate_d[3];           // '<S14>/Sum3'
    real_T LinearAcceleration[3];      // '<S14>/Sum5'
    real_T y_e[3];                     // '<S14>/MATLAB Function'
    real_T MATLABSystem_o2_k[3];       // '<S33>/MATLAB System'
    real_T y_d[4];                     // '<S1>/Quaternion Normalise'
    real_T d_data_f;
    real_T d;
    real_T scale;
    real_T absxk;
    real_T t_j;
    real_T b_norm;
    real_T aSinInput;
    real_T e_data;
    real_T b_x_data_k;
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
    real_T t16;
    real_T t21;
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
    real_T ob;
    real_T oa;
    real_T oc;
    real_T od;
    real_T xtmp;
    real_T Product8;                   // '<S62>/Product8'
    real_T MATLABSystem_o3;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o6;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o7;            // '<S10>/MATLAB System'
    real_T Product2_j;                 // '<S59>/Product2'
    real_T Product5;                   // '<S61>/Product5'
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T n_b;
    real_T rtb_u2_h;
    real_T rtb_Sum6_idx_2;
    real_T rtb_Sum6_idx_1;
    real_T rtb_Sum6_idx_0;
    real_T AngularRate_a_idx_1;
    real_T BodyVelocity_c_idx_2;
    real_T t57_tmp;
    real_T t57_tmp_e;
    real_T t35_tmp;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T b_norm_tmp;
    real_T t25_tmp;
    real_T t29_tmp;
    real_T d_h;
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
    real_T A_tmp;
    real_T b_j;
    real_T b_p;
    real_T pny1;
    real_T varargin_1_size_idx_1_tmp_tmp;
    real_T bkj;
    real_T b_I_k;
    real_T b_Kv_j;
    real_T WuI2Jm_o;
    real_T ywt_c;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_h;
    real_T b_Ac_i;
    real_T b_Linv_p;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T t2;
    real_T t3;
    real_T t4_f;
    real_T t5_e;
    real_T t6_n;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t17;
    real_T t18;
    real_T t19;
    real_T t20;
    real_T t21_h;
    real_T t22;
    real_T t23;
    real_T t24_h;
    real_T t25_f;
    real_T t26_i;
    real_T t27_f;
    real_T t28;
    real_T t29_c;
    real_T t30_n;
    real_T t31_h;
    real_T t32;
    real_T t33_k;
    real_T t34_h;
    real_T t39_b;
    real_T t40_o;
    real_T t41_n;
    real_T t42;
    real_T t43_m;
    real_T t44_k;
    real_T t45_j;
    real_T t55;
    real_T t56;
    real_T t57_h;
    real_T t58_f;
    real_T t59_d;
    real_T t61_l;
    real_T t62_k;
    real_T t65_i;
    real_T t68;
    real_T t60_h;
    real_T t35_tmp_m;
    real_T t36_tmp;
    real_T t37_tmp;
    real_T t27_tmp_g;
    real_T t31_tmp_l;
    real_T t24_tmp_m;
    real_T t32_tmp;
    real_T t25_tmp_n;
    real_T t29_tmp_g;
    real_T d33;
    real_T d34;
    real_T d35;
    real_T d36;
    real_T d37;
    real_T d38;
    real_T d39;
    real_T d40;
    real_T d41;
    real_T d42;
    real_T d43;
    real_T d44;
    real_T d45;
    real_T d46;
    real_T d47;
    real_T d48;
    real_T d49;
    real_T d50;
    real_T d51;
    real_T d52;
    real_T d53;
    real_T d54;
    real_T d55;
    real_T d56;
    real_T d57;
    real_T d58;
    real_T d59;
    real_T d60;
    real_T d61;
    real_T d62;
    real_T d63;
    real_T d64;
    real_T d65;
    real_T d66;
    real_T d67;
    real_T d68;
    real_T d69;
    real_T d70;
    real_T d71;
    real_T d72;
    real_T d73;
    real_T d74;
    real_T d75;
    real_T exptj;
    real_T d6_d;
    real_T eta1;
    real_T x_m;
    real_T e;
    real_T ed2;
    real_T b_c_f;
    real_T scale_g;
    real_T absxk_j;
    real_T t_c;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_e;
    real_T umvk_m;
    real_T duk_o;
    real_T e_a;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_j;
    real_T runtimedata_OutputMin_g;
    real_T runtimedata_OutputMax_j;
    real_T exptj_e;
    real_T d6_j;
    real_T eta1_j;
    real_T b_varargin_1;
    real_T e_g;
    real_T ed2_o;
    real_T fs_h;
    real_T e_c;
    real_T wtYerr_a;
    real_T obj_objfun_workspace_runtimed_l;
    real_T wtYerr_j;
    real_T obj_objfun_workspace_runtimed_i;
    real_T duk_m;
    real_T d76;
    real_T t2_f;
    real_T t3_o;
    real_T t4_i;
    real_T t5_e0;
    real_T t6_j;
    real_T t7_o;
    real_T t8_f;
    real_T t9_m;
    real_T t10_a;
    real_T t11_h;
    real_T t12_o;
    real_T t13_h;
    real_T t17_j;
    real_T t18_g;
    real_T t19_j;
    real_T t20_l;
    real_T t21_k;
    real_T t22_d;
    real_T t23_n;
    real_T t24_j;
    real_T t25_a;
    real_T t26_h;
    real_T t27_i;
    real_T t28_d;
    real_T t29_b;
    real_T t30_h;
    real_T t31_p;
    real_T t32_n;
    real_T t33_j;
    real_T t34_o;
    real_T t39_bj;
    real_T t40_j;
    real_T t41_e;
    real_T t42_i;
    real_T t43_n;
    real_T t44_i;
    real_T t45_p;
    real_T t55_o;
    real_T t56_m;
    real_T t57_o;
    real_T t58_g;
    real_T t59_e;
    real_T t61_i;
    real_T t62_g;
    real_T t65_g;
    real_T t68_g;
    real_T t35_g;
    real_T t36;
    real_T t37;
    real_T t27_tmp_c;
    real_T t31_tmp_k;
    real_T t24_tmp_d;
    real_T t32_tmp_k;
    real_T t25_tmp_p;
    real_T t29_tmp_p;
    real_T Kx;
    real_T Kr;
    real_T Ku1;
    real_T Kv;
    real_T Kut;
    real_T rMin_m;
    real_T Xnorm0_k;
    real_T cMin_a;
    real_T zTa;
    real_T t_f;
    real_T Linv;
    real_T atmp_c;
    real_T xnorm;
    real_T temp_j;
    real_T c_k;
    real_T tst;
    real_T ab;
    real_T ba;
    real_T aa;
    real_T bb;
    real_T h12;
    real_T sn;
    real_T tst_tmp;
    real_T tst_tmp_tmp;
    real_T temp_h;
    real_T p_d;
    real_T bcmax;
    real_T bcmis;
    real_T scale_j;
    real_T z_np;
    real_T a_j;
    real_T s_l;
    real_T atmp_p;
    real_T temp_p;
    real_T c_ly;
    real_T s_ld;
    real_T atmp_h;
    real_T temp_c;
    real_T s_g;
    real_T atmp_e;
    real_T temp_n;
    real_T s_f;
    real_T atmp_n;
    real_T temp_e;
    real_T d_b;
    real_T s_a;
    real_T d_i;
    real_T s_n;
    real_T b_r;
    real_T t8_fx;
    real_T t9_i;
    real_T t11_k;
    real_T t12_b;
    real_T t13_d;
    real_T t14;
    real_T t15_h;
    real_T t16_n;
    real_T t25_fj;
    real_T t29_a;
    real_T t31_m;
    real_T t50;
    real_T t53;
    real_T t54;
    real_T t17_g;
    real_T t18_n;
    real_T t19_c;
    real_T t57_d;
    real_T t64;
    real_T t65_k;
    real_T t68_c;
    real_T t69_j;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp;
    real_T out1_tmp_m;
    real_T out1_tmp_i;
    real_T out1_tmp_b;
    real_T out1_tmp_o;
    real_T out1_tmp_g;
    real_T out1_tmp_e;
    real_T out1_tmp_in;
    real_T s_e;
    real_T atmp_i;
    real_T temp_m;
    real_T xnorm_d;
    real_T scale_j4;
    real_T absxk_p;
    real_T t_b;
    real_T xnorm_p;
    real_T b_alpha1_tmp;
    real_T scale_n;
    real_T absxk_c;
    real_T t_n;
    real_T scale_d;
    real_T absxk_i;
    real_T t_no;
    real_T c_b;
    real_T normH;
    real_T absx;
    real_T ssq;
    real_T c_bt;
    real_T s_j;
    real_T atmp_n0;
    real_T tau_idx_0;
    real_T scale_f;
    real_T absxk_e;
    real_T t_i;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T rho;
    real_T qpfvalLinearExcess;
    real_T qpfvalQuadExcess;
    real_T y_a;
    real_T maxConstr_new;
    real_T normDelta;
    real_T s_fd;
    real_T temp_k;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T c_c;
    real_T b_atmp;
    real_T xnorm_j;
    real_T a_l;
    real_T scale_a;
    real_T absxk_iy;
    real_T t_o;
    real_T beta1_b;
    real_T alpha1_tmp;
    real_T tst_a;
    real_T htmp1;
    real_T ab_a;
    real_T ba_i;
    real_T aa_i;
    real_T h12_l;
    real_T a__4;
    real_T tst_tmp_o;
    real_T tst_tmp_tmp_p;
    real_T temp_o;
    real_T p_c;
    real_T bcmax_o;
    real_T bcmis_o;
    real_T scale_h;
    real_T z_i;
    real_T oldDirIdx;
    real_T constrViolation;
    real_T tol;
    real_T qtb;
    real_T smax;
    real_T s_gn;
    real_T temp_c1;
    real_T t8_o;
    real_T t9_g;
    real_T t10_o;
    real_T t11_g;
    real_T t12_a;
    real_T t13_g;
    real_T t15_b;
    real_T t20_k;
    real_T t33_c;
    real_T t37_j;
    real_T t39_a;
    real_T t63_d;
    real_T t67;
    real_T t68_cx;
    real_T t16_d;
    real_T t17_a;
    real_T t18_b;
    real_T t19_g;
    real_T t21_f;
    real_T t22_c;
    real_T t23_p;
    real_T t71;
    real_T t80;
    real_T t81;
    real_T t84;
    real_T t45_a;
    real_T t55_n;
    real_T t65_h;
    real_T t86;
    real_T t87;
    real_T t56_mv;
    real_T t85;
    real_T out1_tmp_f;
    real_T out1_tmp_bw;
    real_T out1_tmp_ec;
    real_T out1_tmp_n;
    real_T out1_tmp_p;
    real_T out1_tmp_ih;
    real_T out1_tmp_j;
    real_T out1_tmp_l;
    real_T out1_tmp_c;
    real_T absx_g;
    real_T z_c5;
    real_T s_ly;
    real_T R_e;
    real_T t8_d;
    real_T t9_my;
    real_T t10_f;
    real_T t11_n;
    real_T t12_oi;
    real_T t13_e;
    real_T t15_m;
    real_T t20_c;
    real_T t33_g;
    real_T t37_b;
    real_T t39_p;
    real_T t63_p;
    real_T t67_a;
    real_T t68_f;
    real_T t16_g;
    real_T t17_b;
    real_T t18_k;
    real_T t19_k;
    real_T t21_b;
    real_T t22_i;
    real_T t23_nj;
    real_T t71_h;
    real_T t80_n;
    real_T t81_m;
    real_T t84_g;
    real_T t45_jb;
    real_T t55_f;
    real_T t65_n;
    real_T t86_g;
    real_T t87_d;
    real_T t56_c;
    real_T t85_m;
    real_T out1_tmp_d;
    real_T out1_tmp_n4;
    real_T out1_tmp_bwe;
    real_T out1_tmp_p2;
    real_T out1_tmp_k;
    real_T out1_tmp_cl;
    real_T out1_tmp_n2;
    real_T out1_tmp_nm;
    real_T out1_tmp_cd;
    real_T absx_d;
    real_T z_nq;
    real_T s_gu;
    real_T R_l;
    real_T bkj_g;
    real_T bkj_p;
    real_T smax_k;
    real_T s_l1;
    real_T smax_b;
    real_T s_c;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T c_f;
    real_T y_oo;
    real_T aSinInput_d;
    real_T e_data_l;
    real_T b_x_data_l;
    real_T y_idx_0;
    real_T y_idx_1;
    real_T y_idx_3;
    real_T y_idx_2;
    real_T c_tmp;
    real_T c_tmp_d;
    real_T c_tmp_k;
    real_T c_idx_0;
    real_T t8_fo;
    real_T t9_p;
    real_T t11_k1;
    real_T t12_k;
    real_T t13_i;
    real_T t14_e;
    real_T t15_f;
    real_T t16_k;
    real_T t25_n;
    real_T t29_i;
    real_T t31_i;
    real_T t50_o;
    real_T t53_d;
    real_T t54_i;
    real_T t17_gy;
    real_T t18_c;
    real_T t19_e;
    real_T t57_a;
    real_T t64_h;
    real_T t65_e;
    real_T t68_d;
    real_T t69_g;
    real_T t70_e;
    real_T t12_tmp_e;
    real_T t13_tmp_g;
    real_T t14_tmp_g;
    real_T t15_tmp_d;
    real_T out1_tmp_n1;
    real_T out1_tmp_p2p;
    real_T out1_tmp_bs;
    real_T out1_tmp_iw;
    real_T out1_tmp_bi;
    real_T out1_tmp_jv;
    real_T t8_g;
    real_T t9_n;
    real_T t11_p;
    real_T t12_f;
    real_T t13_f;
    real_T t14_a;
    real_T t15_g;
    real_T t16_m;
    real_T t25_d;
    real_T t29_e;
    real_T t31_e;
    real_T t50_d;
    real_T t53_j;
    real_T t54_n;
    real_T t17_ju;
    real_T t18_p;
    real_T t19_a;
    real_T t57_df;
    real_T t64_p;
    real_T t65_d;
    real_T t68_p;
    real_T t69_f;
    real_T t70_g;
    real_T t12_tmp_d;
    real_T t13_tmp_h;
    real_T t14_tmp_i;
    real_T t15_tmp_m;
    real_T out1_tmp_cy;
    real_T normH_l;
    real_T s_p;
    real_T ssq_i;
    real_T c_b3;
    real_T bkj_gn;
    real_T scale_o;
    real_T absxk_b;
    real_T t_e;
    real_T s_e1;
    SL_Bus_proc_control_std_msgs_UInt8 In1_i2;// '<S320>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_e;// '<S74>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_om;// '<S81>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_f1;// '<S323>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_cx;// '<S319>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_l[8];
    boolean_T umin_incr_flag_c[8];
    boolean_T bv3[8];
    uint32_T b_u[2];
    int32_T k_size[2];
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
    int32_T varargin_1_size_e[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_d[2];
    int32_T tmp_size_o[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_l[2];
    int32_T b_x_size[2];
    int32_T b_H_size_h[2];
    int32_T Q_size[2];
    int32_T b_A_size[2];
    int32_T idx[2];
    int32_T tmp_size_l[2];
    int32_T b_size_c[2];
    int32_T tmp_size_c[2];
    int32_T tmp_size_a[2];
    int32_T tmp_size_i[2];
    int32_T tmp_size_lt[2];
    int32_T tmp_size_iy[2];
    int32_T tmp_size_az[2];
    int32_T tmp_size_ix[2];
    int32_T tmp_size_c3[2];
    int32_T tmp_size_m[2];
    int32_T tmp_size_n[2];
    int32_T tmp_size_ch[2];
    int32_T tmp_size_na[2];
    int32_T tmp_size_h[2];
    int32_T tmp_size_iu[2];
    int32_T tmp_size_e[2];
    int8_T b_ipiv_p[6];
    int8_T ipiv_k[6];
    boolean_T b_i[4];
    int16_T Jx_n[2];
    int16_T varargin_2[2];
    int16_T Je_o[2];
    real32_T rtb_Merge4_Data;
    int32_T idx_l;
    int32_T ibmat;
    int32_T k_data;
    int32_T Ns;
    int32_T Ns_p;
    int32_T i;
    int32_T ibmat_b;
    int32_T idx_f;
    int32_T idx_i;
    int32_T idx_c;
    int32_T idx_g;
    int32_T idx_iu;
    int32_T idx_b;
    int32_T K_tmp;
    int32_T b_D_tmp;
    int32_T d_size;
    int32_T e_size;
    int32_T b_x_size_n;
    int32_T pny;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ii;
    int32_T c_t;
    int32_T i_p;
    int32_T pny_o;
    int32_T varargin_1_b;
    int32_T i_input_sizes_idx_1;
    int32_T nmoves_tmp;
    int32_T isMrows_size;
    int32_T tmp_size_o1;
    int32_T Mu_size_idx_0;
    int32_T Mv_aux_size_idx_0;
    int32_T Mu_size_idx_1_tmp;
    int32_T Mv_aux_size_idx_1_tmp;
    int32_T j_tmp;
    int32_T varargin_1_c;
    int32_T i_j;
    int32_T loop_ub;
    int32_T i1;
    int32_T loop_ub_e;
    int32_T loop_ub_p;
    int32_T input_sizes_idx_0;
    int32_T i2;
    int32_T CA_tmp;
    int32_T varargin_1_size_idx_1;
    int32_T Sx_size_tmp;
    int32_T mc;
    int32_T coffset;
    int32_T boffset;
    int32_T aoffset;
    int32_T j_n;
    int32_T i_o;
    int32_T b_i_d;
    int32_T i3;
    int32_T ii_g;
    int32_T i_i;
    int32_T i4;
    int32_T i5;
    int32_T i_ih;
    int32_T I2Jm_tmp;
    int32_T nA;
    int32_T tmp;
    int32_T iSave;
    int32_T i_i_c;
    int32_T i_b;
    int32_T U_tmp;
    int32_T b_i_g;
    int32_T d_i_d;
    int32_T c_j_f;
    int32_T g_i;
    int32_T iC_j;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_e;
    int32_T jA;
    int32_T jy;
    int32_T b_k;
    int32_T i_pc;
    int32_T b_k_d;
    int32_T b_k_f;
    int32_T b_k_n;
    int32_T j_o;
    int32_T b_k_du;
    int32_T eint;
    int32_T i_l;
    int32_T i6;
    int32_T b_k_fu;
    int32_T i7;
    int32_T b_A2_tmp;
    int32_T n_j;
    int32_T nb;
    int32_T nbitson;
    int32_T n_g;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T b_idx;
    int32_T ix_l;
    int32_T ia;
    int32_T i_k;
    int32_T loop_ub_px;
    int32_T tmp_size_b;
    int32_T tmp_size_i3;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_p;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_lb;
    int32_T iy;
    int32_T c_e;
    int32_T ia_e;
    int32_T b_ix;
    int32_T b_iy;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_pn;
    int32_T y_size_idx_0_j;
    int32_T i_g;
    int32_T i_le;
    int32_T wtYerr_tmp;
    int32_T sizes_idx_0;
    int32_T k;
    int32_T i_jo;
    int32_T c_idx_col;
    int32_T b_k_p;
    int32_T sizes_idx_0_d;
    int32_T c_k_k;
    int32_T d_k;
    int32_T i_m;
    int32_T b_c_size;
    int32_T b_size_idx_0;
    int32_T i8;
    int32_T i9;
    int32_T loop_ub_f;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T mc_m;
    int32_T coffset_n;
    int32_T boffset_m;
    int32_T aoffset_b;
    int32_T bkj_c;
    int32_T b_s;
    int32_T e_j_g;
    int32_T e_i;
    int32_T i10;
    int32_T b_s_c;
    int32_T A2_tmp;
    int32_T A4_tmp;
    int32_T n_i;
    int32_T nb_k;
    int32_T nbitson_g;
    int32_T b_n;
    int32_T i_pd;
    int32_T i_f;
    int32_T i_mo;
    int32_T i_my;
    int32_T b_i_l;
    int32_T loop_ub_j;
    int32_T i11;
    int32_T nA_m;
    int32_T kDrop;
    int32_T kNext;
    int32_T last;
    int32_T idx_j;
    int32_T b_H_i;
    int32_T z_size;
    int32_T d_k_a;
    int32_T b_m;
    int32_T b_n_h;
    int32_T RLinv_d;
    int32_T b_A_i2;
    int32_T b_A_h;
    int32_T tau_size;
    int32_T TL_size_idx_0;
    int32_T R_size_idx_0;
    int32_T b_m_d;
    int32_T n_l;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_f;
    int32_T mmi;
    int32_T mmip1;
    int32_T i_lt;
    int32_T knt_l;
    int32_T b_k_f4;
    int32_T c_k_g;
    int32_T jA_g;
    int32_T jy_a;
    int32_T ix_d;
    int32_T j_b;
    int32_T b_dg;
    int32_T ijA;
    int32_T ia_f;
    int32_T i_a;
    int32_T itau_m;
    int32_T iaii;
    int32_T lastv;
    int32_T lastc;
    int32_T iac;
    int32_T d_ie;
    int32_T coltop_i;
    int32_T j_k;
    int32_T i_au;
    int32_T L;
    int32_T k_m;
    int32_T m_c;
    int32_T nr;
    int32_T hoffset;
    int32_T its;
    int32_T coffset_b;
    int32_T aoffset_k;
    int32_T j_l;
    int32_T ii_n;
    int32_T knt_p;
    int32_T ia_f0;
    int32_T k_k;
    int32_T b_i_e;
    int32_T coffset_na;
    int32_T aoffset_o;
    int32_T j_a;
    int32_T ii_b;
    int32_T knt_b;
    int32_T ia_m;
    int32_T coffset_m;
    int32_T aoffset_kw;
    int32_T j_m;
    int32_T ii_h;
    int32_T knt_i;
    int32_T ia_c;
    int32_T coffset_ni;
    int32_T aoffset_i;
    int32_T j_oc;
    int32_T ii_hy;
    int32_T knt_pj;
    int32_T ia_g;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T kAcol;
    int32_T e_k;
    int32_T jj_c;
    int32_T ix_g;
    int32_T coffset_bb;
    int32_T aoffset_j;
    int32_T j_h;
    int32_T knt_d;
    int32_T coltop_o;
    int32_T ia_k;
    int32_T knt_j;
    int32_T i_d;
    int32_T in;
    int32_T ia0;
    int32_T b_i_f;
    int32_T knt_a;
    int32_T lastv_e;
    int32_T ix_n;
    int32_T iac_o;
    int32_T jA_d;
    int32_T s_cu;
    int32_T u_m;
    int32_T i12;
    int32_T isMrows_tmp;
    int32_T tmp_size_oc;
    int32_T ibcol;
    int32_T itilerow;
    int32_T k_b;
    int32_T s_m;
    int32_T u_i;
    int32_T i13;
    int32_T isMrows_tmp_i;
    int32_T tmp_size_g;
    int32_T ibcol_m;
    int32_T itilerow_n;
    int32_T i_c;
    int32_T itau_j;
    int32_T iaii_e;
    int32_T ic0;
    int32_T lastv_ep;
    int32_T lastc_k;
    int32_T coltop_k;
    int32_T b_ia_i;
    int32_T ix_e;
    int32_T b_iy_l;
    int32_T b_l;
    int32_T iac_l;
    int32_T d_o;
    int32_T ia_i;
    int32_T b_degrees;
    int32_T emlN;
    int32_T Tries;
    int32_T loop_ub_e2;
    int32_T tmp_size_lo;
    int32_T loop_ub_tmp;
    int32_T idxAjj;
    int32_T j_no;
    int32_T iy_e;
    int32_T iac_c;
    int32_T d_a;
    int32_T ia_ms;
    int32_T b_ix_c;
    int32_T b_iy_f;
    int32_T b_k_m;
    int32_T coffset_k;
    int32_T i14;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T loop_ub_b;
    int32_T in1_size_idx_0;
    int32_T loop_ub_h;
    int32_T i15;
    int32_T nVar;
    int32_T b_k_h;
    int32_T iH0;
    int32_T y_size_idx_0_h;
    int32_T nVarOrig;
    int32_T temp_b;
    int32_T mIneq_b;
    int32_T mLBOrig;
    int32_T idx_positive;
    int32_T i16;
    int32_T nVar_d;
    int32_T b_idx_j;
    int32_T y_size_idx_0_d;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr;
    int32_T nVar_tmp;
    int32_T activeSetChangeID;
    int32_T nVar_l;
    int32_T globalActiveConstrIdx;
    int32_T idx_jk;
    int32_T ix_b;
    int32_T iyend;
    int32_T b_ix_f;
    int32_T b_iy_p;
    int32_T c_iy;
    int32_T g;
    int32_T ia_l;
    int32_T loop_ub_l;
    int32_T y_size_idx_0_i;
    int32_T nVar_tmp_tmp_o;
    int32_T nVar_b;
    int32_T ldq;
    int32_T ix_i;
    int32_T iy_g;
    int32_T jBcol;
    int32_T iAcol;
    int32_T f_p;
    int32_T g_h;
    int32_T b_ic;
    int32_T b_br;
    int32_T b_ar;
    int32_T mWConstr_tmp_tmp;
    int32_T idx_d;
    int32_T b_idx_f;
    int32_T ix0;
    int32_T k_f;
    int32_T minmana_c;
    int32_T minmn_d;
    int32_T lda;
    int32_T ii_c;
    int32_T mmi_b;
    int32_T i_pw;
    int32_T knt_h;
    int32_T im1n;
    int32_T in_e;
    int32_T knt_lb;
    int32_T lastc_h;
    int32_T iy_n;
    int32_T g_kr;
    int32_T b_ia_b;
    int32_T rowleft;
    int32_T jy_o;
    int32_T b_ix_n;
    int32_T i_fi;
    int32_T alpha1_tmp_g;
    int32_T i_dm;
    int32_T L_d;
    int32_T k_e;
    int32_T m_ce;
    int32_T nr_a;
    int32_T hoffset_h;
    int32_T b_k_e;
    int32_T b_j_n;
    int32_T i17;
    int32_T loop_ub_tmp_h;
    int32_T i18;
    int32_T loop_ub_tmp_o;
    int32_T nVar_f;
    int32_T mConstrMax_k;
    int32_T idx_Aineq;
    int32_T idx_upper;
    int32_T idx_Partition;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T iy_ej;
    int32_T iac_i;
    int32_T b_ia_o;
    int32_T idx_Aineq_tmp_tmp;
    int32_T b_jo;
    int32_T nVar_k;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_j;
    int32_T iy_d;
    int32_T b_k_g;
    int32_T ma;
    int32_T minmana_c5;
    int32_T minmn_k;
    int32_T c_j_j;
    int32_T ma_h;
    int32_T minmn_c;
    int32_T ii_d;
    int32_T nmi;
    int32_T mmi_a;
    int32_T pvt;
    int32_T j_p;
    int32_T ix_f;
    int32_T k_h;
    int32_T loop_ub_j5;
    int32_T lastv_n;
    int32_T lastc_o;
    int32_T coltop_on;
    int32_T ia_d;
    int32_T jA_a;
    int32_T i_kw;
    int32_T coffset_c;
    int32_T boffset_j;
    int32_T c_i;
    int32_T loop_ub_bh;
    int32_T i19;
    int32_T i20;
    int32_T i21;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T stride_0_0_n;
    int32_T stride_1_0_d;
    int32_T stride_2_0;
    int32_T stride_0_1;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T loop_ub_hf;
    int32_T loop_ub_bf;
    int32_T mc_p;
    int32_T coffset_bp;
    int32_T boffset_p;
    int32_T j_ne;
    int32_T i_j2;
    int32_T b_i_b;
    int32_T i22;
    int32_T jj_n;
    int32_T jp1j_b;
    int32_T b_j_j;
    int32_T c_k0;
    int32_T jj_d;
    int32_T b_j_d;
    int32_T ix_o;
    int32_T k_c;
    int32_T nVar_o;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_ldw;
    int32_T b_nullStart;
    int32_T idx_col;
    int32_T order;
    int32_T ix_a;
    int32_T b_ix_d;
    int32_T b_ldw_tmp;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T order_e;
    int32_T b_k_i;
    int32_T LDimSizeP1_b;
    int32_T subRows;
    int32_T LD_diagOffset_a;
    int32_T FMat_offset;
    int32_T k_kz;
    int32_T idx_m;
    int32_T ix_jx;
    int32_T d_j;
    int32_T ia_kg;
    int32_T iy_k;
    int32_T k_data_a;
    int32_T trueCount;
    int32_T nx;
    int32_T k_kc;
    int32_T b_this_f;
    int32_T e_size_c;
    int32_T Tries_o;
    int32_T j_kv;
    int32_T Tries_p;
    int32_T idxAjj_f;
    int32_T j_d;
    int32_T iy_eb;
    int32_T stride_0_0_l;
    int32_T stride_1_0_e;
    int32_T stride_2_0_h;
    int32_T stride_3_0;
    int32_T loop_ub_g;
    int32_T i23;
    int32_T mc_p5;
    int32_T aoffset_n;
    int32_T i_o2;
    int32_T b_i_lh;
    int32_T newNumel;
    int32_T i_fz;
    int32_T i24;
    int32_T i25;
    int32_T aux_0_1_h;
    int32_T aux_1_1_d;
    int32_T stride_0_1_m;
    int32_T stride_1_1_i;
    int32_T loop_ub_j4;
    int32_T coffset_p;
    int32_T boffset_d;
    int32_T j_j;
    int32_T i_kk;
    int32_T b_i_m;
    int32_T i26;
    int32_T k_d;
    int32_T i27;
    int32_T stride_0_1_p;
    int32_T stride_1_1_ig;
    int32_T loop_ub_ge;
    int32_T mc_e;
    int32_T aoffset_h;
    int32_T i_gq;
    int32_T b_i_c;
    int32_T newNumel_a;
    int32_T i_fp;
    int32_T j_i;
    int32_T i_c1;
    int32_T y_n;
    int32_T mB;
    int32_T n_c;
    int32_T jBcol_c;
    int32_T kAcol_i;
    int32_T j_hu;
    int32_T k_ml;
    int32_T i_go;
    int32_T y_ox;
    int32_T i28;
    int32_T i29;
    int32_T k_ms;
    int32_T i_ex;
    int32_T i_ea;
    int32_T i30;
    int32_T i31;
    int32_T aux_0_1_i;
    int32_T aux_1_1_f;
    int32_T stride_0_0_h;
    int32_T stride_1_0_i;
    int32_T stride_0_1_pi;
    int32_T stride_1_1_a;
    int32_T loop_ub_fj;
    int32_T loop_ub_d;
    int32_T in1_size_idx_0_c;
    int32_T in1_size_idx_1;
    int32_T i_j1;
    int32_T k_c3;
    int32_T mc_n;
    int32_T aoffset_jf;
    int32_T i_ks;
    int32_T b_i_o;
    int32_T kend;
    int32_T k_g;
    uint32_T bpIdx;
    uint32_T b_q;
    SL_Bus_proc_control_std_msgs_Float32 b_varargout_2_k;
    SL_Bus_proc_control_std_msgs_Float32 BusAssignment_h;// '<S90>/Bus Assignment' 
    char_T expl_temp_j[3];
    int8_T empty_non_axis_sizes[2];
    int8_T empty_non_axis_sizes_p[2];
    int8_T empty_non_axis_sizes_h[2];
    int16_T b_Mrows;
    int16_T j_nw;
    int16_T ixw;
    uint8_T empty_non_axis_sizes_b[2];
    uint8_T empty_non_axis_sizes_m[2];
    uint8_T empty_non_axis_sizes_k[2];
    uint8_T varargin_1_b4[2];
    int8_T rtAction;
    int8_T rtPrevAction;
    int8_T sizes_idx_1;
    int8_T pny1_l;
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T DataTypeConversion_j;      // '<S10>/Data Type Conversion'
    uint8_T u_g;
    uint8_T i_g2;
    uint8_T b_idx_0;
    boolean_T NOT;                     // '<S233>/NOT'
    boolean_T isReached;               // '<S9>/Merge'
    boolean_T isTrajDone;              // '<S9>/Merge'
    boolean_T SourceBlock_o1;          // '<S300>/SourceBlock'
    boolean_T blockOrdering_o;         // '<S278>/Correct'
    boolean_T b_varargout_1;
    boolean_T b_varargout_1_n;
    boolean_T Merge;                   // '<S3>/Merge'
    boolean_T NewDvlMsg;               // '<S3>/Merge3'
    boolean_T newPressureMsg;          // '<S3>/Merge6'
    boolean_T Reset;                   // '<S87>/Reset'
    boolean_T empty_non_axis_sizes_c;
    boolean_T cTolComputed;
    boolean_T isT1Inf;
    boolean_T tempOK;
    boolean_T VECTOR_INPUT_AND_P_IS_INF;
    boolean_T MATRIX_INPUT_AND_P_IS_INF;
    SL_Bus_proc_control_std_msgs_Bool b_varargout_2_e;
    SL_Bus_proc_control_std_msgs_Bool BusAssignment_f;
    SL_Bus_proc_control_std_msgs_UInt8 b_varargout_2_k4;
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S295>/MATLAB System'
    MultiTrajectoryManager_proc_c_T obj_o;// '<S294>/MATLAB System'
    OpenLoopController_proc_contr_T obj_m;// '<S131>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_j;// '<S310>/Rotation Trajectory'
    mpcManager_proc_control_T obj_f;   // '<S127>/MPC manager'
    robotics_slcore_internal_bl_p_T obj_jo;// '<S312>/Polynomial Trajectory1'
    AddPose_proc_control_T obj_a;      // '<S295>/MATLAB System1'
    TrimPlant_proc_control_T obj_b;    // '<S129>/MATLAB System'
    rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
    HydroModel_proc_control_T obj_fj;  // '<S33>/MATLAB System'
    quatDual_proc_control_T obj_mm;    // '<S232>/MATLAB System'
    ros_slros_internal_block_Curr_T obj_ob;// '<S123>/Current Time'
    ros_slroscpp_internal_block_P_T obj_i;// '<S304>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S125>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_e;// '<S120>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S116>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_p;// '<S112>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_og;// '<S111>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S106>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_c;// '<S103>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ab;// '<S101>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_k;// '<S98>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S96>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_d;// '<S41>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_jj;// '<S27>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_bh;// '<S318>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S317>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_h;// '<S316>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_oz;// '<S315>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S314>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S313>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S308>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S300>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_cs;// '<S298>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S226>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k4;// '<S225>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_p0;// '<S71>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S70>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_dh;// '<S69>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_l;// '<S68>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hx;// '<S79>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S78>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df1;// '<S77>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i4;// '<S76>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_n;// '<S42>/SourceBlock'
    real_T _DSTATE[8];                 // '<S235>/ '
    real_T Delay_DSTATE_e;             // '<S10>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S310>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S255>/Delay'
    real_T Delay_DSTATE_k;             // '<S128>/Delay'
    real_T Delay_DSTATE_a[8];          // '<S133>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S203>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S203>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S203>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S170>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S132>/Delay1'
    real_T UD_DSTATE[6];               // '<S166>/UD'
    real_T last_mv_DSTATE_f[8];        // '<S136>/last_mv'
    real_T Delay1_DSTATE_e[8];         // '<S129>/Delay1'
    real_T DiscreteTransferFcn1_states;// '<S17>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_k;// '<S18>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_o;// '<S19>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_i;// '<S20>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_g;// '<S21>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_h;// '<S22>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_l;// '<S23>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_ge;// '<S24>/Discrete Transfer Fcn1'
    real_T UnitDelay_DSTATE[13];       // '<S1>/Unit Delay'
    real_T DiscreteTimeIntegrator_DSTATE_f[3];// '<S1>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator1_DSTATE[3];// '<S1>/Discrete-Time Integrator1' 
    real_T DiscreteTimeIntegrator2_DSTATE[4];// '<S1>/Discrete-Time Integrator2' 
    real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S1>/Discrete-Time Integrator3' 
    real_T P[169];                     // '<S277>/DataStoreMemory - P'
    real_T x[13];                      // '<S277>/DataStoreMemory - x'
    real_T Drift_NextOutput[6];        // '<S12>/ Drift'
    real_T NextOutput;                 // '<S28>/White Noise'
    real_T NextOutput_b;               // '<S29>/White Noise'
    real_T NextOutput_g;               // '<S30>/White Noise'
    real_T NextOutput_l;               // '<S31>/White Noise'
    real_T NextOutput_e;               // '<S32>/White Noise'
    int32_T clockTickCounter;          // '<S133>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S132>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S129>/Pulse Generator'
    int32_T counter[6];                // '<S12>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S128>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S128>/N to PWM'
    uint32_T m_bpIndex_m[8];           // '<S11>/ PWM to N'
    uint32_T RandSeed[6];              // '<S12>/ Drift'
    uint32_T m_bpIndex_cj[8];          // '<S16>/N to RPM'
    uint32_T RandSeed_j;               // '<S28>/White Noise'
    uint32_T RandSeed_d;               // '<S29>/White Noise'
    uint32_T RandSeed_e;               // '<S30>/White Noise'
    uint32_T RandSeed_n;               // '<S31>/White Noise'
    uint32_T RandSeed_b;               // '<S32>/White Noise'
    uint32_T state;                    // '<S33>/MATLAB System'
    uint32_T state_k[2];               // '<S33>/MATLAB System'
    uint32_T state_i[625];             // '<S33>/MATLAB System'
    uint32_T method;                   // '<S33>/MATLAB System'
    AuvDifferentialEquation_proc__T obj_c3;// '<S1>/MATLAB System'
    uint16_T Delay_DSTATE_g[8];        // '<S7>/Delay'
    boolean_T Delay1_DSTATE_c;         // '<S295>/Delay1'
    boolean_T DelayInput1_DSTATE;      // '<S305>/Delay Input1'
    int8_T SwitchCase_ActiveSubsystem_m;// '<S9>/Switch Case'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S126>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S1>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S1>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S1>/Discrete-Time Integrator'
    uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S1>/Discrete-Time Integrator2'
    boolean_T icLoad;                  // '<S203>/mv_Delay'
    boolean_T icLoad_a;                // '<S203>/x_Delay'
    boolean_T icLoad_j;                // '<S203>/slack_delay'
    boolean_T Memory_PreviousInput[226];// '<S170>/Memory'
    boolean_T Memory_PreviousInput_g[226];// '<S136>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S87>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S88>/Memory'
    boolean_T state_not_empty_e;       // '<S33>/MATLAB System'
    boolean_T MPCmanager_MODE;         // '<S7>/MPC manager'
    boolean_T ROSOutput_MODE;          // '<Root>/ROS Output'
    boolean_T Plotvalues_MODE;         // '<Root>/Plot values'
    boolean_T ModlePhysique_MODE;      // '<Root>/Modèle Physique'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S295>/Trajectory generator'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S14>/ y devant Z haut'
                                             //    '<S14>/Constant'
                                             //    '<S231>/Constant'
                                             //    '<S131>/MATLAB System'
                                             //    '<S258>/si y devant'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S10>/MATLAB System'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S128>/N to A'
                                          //    '<S128>/N to PWM'
                                          //    '<S16>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S16>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S131>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S12>/ Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S12>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S128>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S128>/N to PWM'

    real_T BandLimitedWhiteNoise_Cov;
                                    // Mask Parameter: BandLimitedWhiteNoise_Cov
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

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S305>/Delay Input1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Out1_Y0;// Computed Parameter: Out1_Y0
                                                                    //  Referenced by: '<S301>/Out1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S300>/Constant'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                //  Referenced by: '<S227>/Out1'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S225>/Constant'

    SL_Bus_proc_control_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                 //  Referenced by: '<S114>/Constant'

    SL_Bus_proc_control_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                           //  Referenced by: '<S228>/Out1'

    SL_Bus_proc_control_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                  //  Referenced by: '<S226>/Constant'

    SL_Bus_proc_control_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S25>/Constant'

    SL_Bus_proc_control_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S108>/Constant'

    SL_Bus_proc_control_std_msgs_Int8MultiArray Constant_Value_lv;// Computed Parameter: Constant_Value_lv
                                                                     //  Referenced by: '<S107>/Constant'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                               //  Referenced by: '<S121>/Constant'

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

    struct_WeVFs8E2CxxfxzE2lduteD MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S127>/MPC param'

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
                                                                  //  Referenced by: '<S102>/Constant'

    struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                              //  Referenced by: '<S6>/Output'

    struct_ovWlOQLLs0y1mSxaL5ZDmG SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                      //  Referenced by: '<S1>/Sensors Output'

    struct_rlScCGcQggJ5TYrxrqGJfF CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S1>/Clean Output'

    struct_rlScCGcQggJ5TYrxrqGJfF Output_Y0_k;// Computed Parameter: Output_Y0_k
                                                 //  Referenced by: '<S4>/Output'

    SL_Bus_proc_control_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                          //  Referenced by: '<S311>/Out1'

    SL_Bus_proc_control_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                  //  Referenced by: '<S308>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                //  Referenced by: '<S104>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                                //  Referenced by: '<S302>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S324>/Out1'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                               //  Referenced by: '<S318>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurments_Y0;// Computed Parameter: DVLMeasurments_Y0
                                                       //  Referenced by: '<S230>/DVL Measurments'

    SL_Bus_proc_control_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                          //  Referenced by: '<S299>/Out1'

    SL_Bus_proc_control_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                 //  Referenced by: '<S298>/Constant'

    SL_Bus_proc_control_geometry_msgs_Vector3 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                           //  Referenced by: '<S44>/Out1'

    SL_Bus_proc_control_geometry_msgs_Vector3 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                  //  Referenced by: '<S42>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                          //  Referenced by: '<S119>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                   //  Referenced by: '<S319>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                           //  Referenced by: '<S313>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                   //  Referenced by: '<S321>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                           //  Referenced by: '<S315>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_os;// Computed Parameter: Out1_Y0_os
                                                    //  Referenced by: '<S322>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                          //  Referenced by: '<S316>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                   //  Referenced by: '<S323>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_pt;// Computed Parameter: Constant_Value_pt
                                                           //  Referenced by: '<S317>/Constant'

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
                                                     //  Referenced by: '<S320>/Out1'

    SL_Bus_proc_control_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                           //  Referenced by: '<S314>/Constant'

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
                                          //  Referenced by: '<S28>/White Noise'

    real_T WhiteNoise_StdDev;          // Computed Parameter: WhiteNoise_StdDev
                                          //  Referenced by: '<S28>/White Noise'

    real_T WhiteNoise_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S29>/White Noise'

    real_T WhiteNoise_StdDev_d;       // Computed Parameter: WhiteNoise_StdDev_d
                                         //  Referenced by: '<S29>/White Noise'

    real_T WhiteNoise_Mean_c;          // Expression: 0
                                          //  Referenced by: '<S30>/White Noise'

    real_T WhiteNoise_StdDev_e;       // Computed Parameter: WhiteNoise_StdDev_e
                                         //  Referenced by: '<S30>/White Noise'

    real_T WhiteNoise_Mean_p;          // Expression: 0
                                          //  Referenced by: '<S31>/White Noise'

    real_T WhiteNoise_StdDev_j;       // Computed Parameter: WhiteNoise_StdDev_j
                                         //  Referenced by: '<S31>/White Noise'

    real_T WhiteNoise_Mean_l;          // Expression: 0
                                          //  Referenced by: '<S32>/White Noise'

    real_T WhiteNoise_StdDev_p;       // Computed Parameter: WhiteNoise_StdDev_p
                                         //  Referenced by: '<S32>/White Noise'

    real_T Constant1_Value_m[3];  // Expression: simulation.sensors.imu.acc.bias
                                     //  Referenced by: '<S14>/Constant1'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S50>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S50>/Gain1'

    real_T Constant_Value_mj;          // Expression: 0.5
                                          //  Referenced by: '<S50>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S50>/Gain2'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S40>/1//2'

    real_T Constant_Value_k2;          // Expression: 0.5
                                          //  Referenced by: '<S54>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S54>/Gain2'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S54>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S54>/Gain1'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S55>/Gain'

    real_T Constant_Value_gp;          // Expression: 0.5
                                          //  Referenced by: '<S55>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S55>/Gain2'

    real_T Gain1_Gain_eg;              // Expression: 2
                                          //  Referenced by: '<S55>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S56>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S56>/Gain1'

    real_T Constant_Value_iw;          // Expression: 0.5
                                          //  Referenced by: '<S56>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S56>/Gain2'

    real_T Gain_Gain_n;       // Expression: simulation.sensors.depth.resolution
                                 //  Referenced by: '<S14>/Gain'

    real_T Gain1_Gain_h;        // Expression: simulation.sensors.dvl.resolution
                                   //  Referenced by: '<S14>/Gain1'

    real_T Constant_Value_ah;          // Expression: 0.5
                                          //  Referenced by: '<S60>/Constant'

    real_T Gain_Gain_a;                // Expression: 2
                                          //  Referenced by: '<S60>/Gain'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S60>/Gain1'

    real_T Gain2_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S60>/Gain2'

    real_T Constant_Value_ar;          // Expression: 0.5
                                          //  Referenced by: '<S61>/Constant'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S61>/Gain'

    real_T Gain1_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S61>/Gain1'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S61>/Gain2'

    real_T Constant_Value_i2;          // Expression: 0.5
                                          //  Referenced by: '<S62>/Constant'

    real_T Gain_Gain_b;                // Expression: 2
                                          //  Referenced by: '<S62>/Gain'

    real_T Gain1_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S62>/Gain1'

    real_T Gain2_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S62>/Gain2'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S67>/y'

    real_T Constant_Value_f2j;         // Expression: 0
                                          //  Referenced by: '<S67>/Constant'

    real_T Constant1_Value_h;          // Expression: 0
                                          //  Referenced by: '<S67>/Constant1'

    real_T Constant_Value_lo;          // Expression: MPC.nx
                                          //  Referenced by: '<S113>/Constant'

    real_T Constant1_Value_d;          // Expression: MPC.nu
                                          //  Referenced by: '<S113>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_dv;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S123>/Constant'

    real_T Constant1_Value_j;          // Expression: SetFrameID
                                          //  Referenced by: '<S123>/Constant1'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S134>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S134>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S136>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S136>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S136>/last_mv'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S129>/Delay1'

    real_T Constant_Value_e3[6];       // Expression: zeros(1,6)
                                          //  Referenced by: '<S129>/Constant'

    real_T Constant1_Value_mt[2];      // Expression: zeros(1,2)
                                          //  Referenced by: '<S129>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S136>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S136>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S136>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S136>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S136>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S136>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S131>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S131>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S131>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S166>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S132>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S170>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S170>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S168>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S168>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S168>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S170>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S168>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S170>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S170>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S168>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S170>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S168>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S170>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S168>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S132>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(MPC.Xi.',11,1)
                                           //  Referenced by: '<S132>/Delay2'

    real_T Constant3_Value;            // Expression: MPC.Ts
                                          //  Referenced by: '<S132>/Constant3'

    real_T Constant1_Value_k;          // Expression: MPC.dts
                                          //  Referenced by: '<S132>/Constant1'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S170>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S170>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S170>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S170>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S133>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S201>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S201>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S201>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S201>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S201>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S201>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S201>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S201>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S201>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S201>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S203>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S203>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S203>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S201>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S130>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S130>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S130>/Constant2'

    real_T Constant_Value_hf;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant1_Value_f;          // Expression: 0
                                          //  Referenced by: '<S7>/Constant1'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S126>/Merge'

    real_T Merge_2_InitialOutput;   // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S126>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S126>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S128>/Delay'

    real_T PSUsafe_UpperSat;           // Expression: MPC.tmax
                                          //  Referenced by: '<S128>/PSU safe'

    real_T PSUsafe_LowerSat;           // Expression: MPC.tmin
                                          //  Referenced by: '<S128>/PSU safe'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S258>/Quat'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S259>/1//2'

    real_T Constant1_Value_a;// Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S230>/Constant1'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S255>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S255>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S261>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S261>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S261>/Gain1'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S261>/Gain2'

    real_T Constant_Value_j;           // Expression: 0.5
                                          //  Referenced by: '<S262>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S262>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S262>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S262>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S263>/Constant'

    real_T Gain_Gain_nh;               // Expression: 2
                                          //  Referenced by: '<S263>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S263>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S263>/Gain2'

    real_T DepthMeasurments_Y0;       // Computed Parameter: DepthMeasurments_Y0
                                         //  Referenced by: '<S231>/Depth Measurments'

    real_T Constant_Value_ay;          // Expression: 0.5
                                          //  Referenced by: '<S271>/Constant'

    real_T Gain_Gain_bk;               // Expression: 2
                                          //  Referenced by: '<S271>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S271>/Gain1'

    real_T Gain2_Gain_dh;              // Expression: 2
                                          //  Referenced by: '<S271>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S234>/xhat'

    real_T Constant_Value_lx;          // Expression: 1
                                          //  Referenced by: '<S234>/Constant'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S277>/Q'

    real_T R3_Value;                   // Expression: p.R{3}
                                          //  Referenced by: '<S277>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S277>/MeasurementFcn3Inputs'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S277>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S277>/MeasurementFcn2Inputs'

    real_T R1_Value[49];               // Expression: p.R{1}
                                          //  Referenced by: '<S277>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S277>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S277>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S277>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S290>/Constant7'

    real_T Constant3_Value_f;          // Expression: MPC.p
                                          //  Referenced by: '<S290>/Constant3'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S295>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S295>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S295>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S307>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S307>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S307>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S307>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S307>/Constant1'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S309>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S312>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S310>/Constant'

    real_T DiscreteTimeIntegrator_gainva_e;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_e
                             //  Referenced by: '<S310>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S310>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S295>/Constant'

    real_T Constant_Value_m5[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S288>/Constant'

    real_T Constant3_Value_o;          // Expression: MPC.p
                                          //  Referenced by: '<S288>/Constant3'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

    real_T Constant_Value_de;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S235>/ '

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S291>/Gain'

    real_T Merge_1_InitialOutput_l;
                                  // Computed Parameter: Merge_1_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S9>/Merge'

    std::string StringConstant1_String;
                                   // Computed Parameter: StringConstant1_String
                                      //  Referenced by: '<S123>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S198>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

    boolean_T hydronew_Y0;             // Computed Parameter: hydronew_Y0
                                          //  Referenced by: '<S66>/hydro new'

    boolean_T hydronew_Y0_a;           // Computed Parameter: hydronew_Y0_a
                                          //  Referenced by: '<S65>/hydro new'

    boolean_T Memory_InitialCondition[226];// Expression: iA
                                              //  Referenced by: '<S136>/Memory'

    boolean_T Memory_InitialCondition_p[226];// Expression: iA
                                                //  Referenced by: '<S170>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S278>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S279>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_i;    // Computed Parameter: yBlockOrdering_Y0_i
                                         //  Referenced by: '<S280>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S277>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S277>/Enable1'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S277>/Enable3'

    boolean_T Constant1_Value_ds;      // Expression: false
                                          //  Referenced by: '<S290>/Constant1'

    boolean_T Constant2_Value_l;       // Expression: false
                                          //  Referenced by: '<S290>/Constant2'

    boolean_T Constant_Value_hm;       // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S306>/Constant'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S295>/Delay1'

    boolean_T Constant2_Value_i;       // Expression: false
                                          //  Referenced by: '<S295>/Constant2'

    boolean_T Constant5_Value;         // Expression: false
                                          //  Referenced by: '<S288>/Constant5'

    boolean_T Constant4_Value;         // Expression: false
                                          //  Referenced by: '<S288>/Constant4'

    boolean_T Merge_2_InitialOutput_l;
                                  // Computed Parameter: Merge_2_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    boolean_T Merge_3_InitialOutput_l;
                                  // Computed Parameter: Merge_3_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    uint8_T Switch_Threshold_d;        // Computed Parameter: Switch_Threshold_d
                                          //  Referenced by: '<S7>/Switch'

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

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_xgerc_aQMWzodX(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[7], real_T A[140], int32_T ia0);
  void proc_control_qrFactor_MMa7wW5h(const real_T A[91], const real_T S[169],
    const real_T Ns[49], real_T b_S[49]);
  void proc_control_xgerc_ZLmTruVs(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[260], int32_T ia0);
  void proc_control_qrFactor_1jDj6Vzn(const real_T A[169], real_T S[169], const
    real_T Ns[91]);
  real_T proc_control_xnrm2_kj8IiC0H(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_qrFactor_qGSgSIIm(const real_T A[39], const real_T S[169],
    const real_T Ns[9], real_T b_S[9]);
  void proc_control_xgerc_4X4H4v2V(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[208], int32_T ia0);
  void proc_control_qrFactor_3bJrEoRT(const real_T A[169], real_T S[169], const
    real_T Ns[39]);
  real_T proc_control_xnrm2_bRDMjHYG(int32_T n, const real_T x[14], int32_T ix0);
  void EKFCorrectorAdditive_g_6pDXID_k(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  void proc_control_xgerc_ay1ZSOWu(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[182], int32_T ia0);
  void proc_control_qrFactor_TeAoo2Mt(const real_T A[169], real_T S[169], const
    real_T Ns[13]);
  real_T proc_control_erf_lY1OuNdP(real_T x);
  void AUV8QuatPerturbedSimFc_Tstvmp_b(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  void proc_control_xgerc_XyRtLi2r(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[338], int32_T ia0);
  void proc_control_qrFactor_O58Jhapw(const real_T A[169], real_T S[169], const
    real_T Ns[169]);
  void MultiTrajectoryManager_resetImp(MultiTrajectoryManager_proc_c_T *b_this);
  void proc_control_binary_expand_op_p(real_T in1[3], const int32_T in2_data[],
    const real_T in3_data[], const int32_T *in3_size, const real_T in4_data[],
    const int32_T *in4_size);
  real_T proc_control_norm_pr(const real_T x[3]);
  void MultiTrajectoryManager_stepImpl(MultiTrajectoryManager_proc_c_T *b_this,
    boolean_T isNew, const SL_Bus_proc_control_geometry_msgs_Transform
    trajMsg_Transforms[2000], uint32_T trajMsg_Transforms_SL_Info_Rece, const
    SL_Bus_proc_control_geometry_msgs_Twist trajMsg_Velocities[2000], real_T
    reset, const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached, boolean_T *isTrajDone, real_T initWpt[7]);
  void proc__quaternion_parenReference(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, boolean_T varargin_1, real_T o_a_data[], int32_T o_a_size[2],
    real_T o_b_data[], int32_T o_b_size[2], real_T o_c_data[], int32_T o_c_size
    [2], real_T o_d_data[], int32_T o_d_size[2]);
  void proc_con_quaternion_parenAssign(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, const real_T rhs_a_data[], const int32_T rhs_a_size[2], const
    real_T rhs_b_data[], const int32_T rhs_b_size[2], const real_T rhs_c_data[],
    const int32_T rhs_c_size[2], const real_T rhs_d_data[], const int32_T
    rhs_d_size[2], real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d);
  void proc_contr_quaternionBase_slerp(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T
    *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void proc_con_quaternionBase_slerp_p(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T t,
    real_T *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void pro_binary_expand_op_pr351ewpk3(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void proc_binary_expand_op_pr351ewpk(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void proc__binary_expand_op_pr351ewp(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  quaternion_proc_control_T proc_computeFirstQuatDerivative(real_T pn_a, real_T
    pn_b, real_T pn_c, real_T pn_d, real_T qn_a, real_T qn_b, real_T qn_c,
    real_T qn_d, real_T sd, real_T qinterp_a, real_T qinterp_b, real_T qinterp_c,
    real_T qinterp_d);
  void proc_control_ppval_p(const real_T pp_breaks[4], const real_T pp_coefs[36],
    real_T x, real_T v[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    real_T reset, const real_T poses[13], const real_T target[7], const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_T *b_this);
  int32_T proc_co_combineVectorElements_p(const boolean_T x[3]);
  void proc_control_eml_find(const boolean_T x[3], int32_T i_data[], int32_T
    *i_size);
  real_T proc_control_sum(const real_T x_data[], const int32_T *x_size);
  void proc_co_mpcManager_getMpcWeigth(const mpcManager_proc_control_T *b_this,
    uint8_T mode, real_T OV[13], real_T MV[8], real_T MVR[8]);
  void proc_control_emxInit_real_T(emxArray_real_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
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
  void proc_control_mldivide(const real_T A[36], const real_T B[36], real_T Y[36]);
  void proc_control_AUV8QuatSimFcn(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  void proc_co_TrimPlant_trimPlantQuat(TrimPlant_proc_control_T *b_this, const
    real_T u[8], const real_T y[13], real_T A[169], real_T B[104], real_T U[8],
    real_T Y[13], real_T X[13], real_T DX[13]);
  void proc_c_emxEnsureCapacity_real_T(emxArray_real_T_proc_control_T *emxArray,
    int32_T oldNumel);
  void proc_control_emxFree_int32_T(emxArray_int32_T_proc_control_T **pEmxArray);
  void proc_control_emxFree_real_T(emxArray_real_T_proc_control_T **pEmxArray);
  void proc_control_emxFree_boolean_T(emxArray_boolean_T_proc_contr_T
    **pEmxArray);
  void proc_control_emxInit_boolean_T(emxArray_boolean_T_proc_contr_T
    **pEmxArray, int32_T numDimensions);
  void pro_emxEnsureCapacity_boolean_T(emxArray_boolean_T_proc_contr_T *emxArray,
    int32_T oldNumel);
  void proc_control_emxInit_int32_T(emxArray_int32_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
  void proc__emxEnsureCapacity_int32_T(emxArray_int32_T_proc_control_T *emxArray,
    int32_T oldNumel);
  real_T proc_control_norm(const real_T x_data[], const int32_T *x_size);
  void proc_control_maximum2(const emxArray_real_T_proc_control_T *x,
    emxArray_real_T_proc_control_T *ex);
  real_T proc_control_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  void proc_control_xgemv(int32_T b_m, int32_T n, const real_T b_A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
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
  void proc_c_binary_expand_op_pr351ew(real_T in1_data[], int32_T *in1_size,
    real_T in2, const real_T in3_data[], const int32_T *in3_size);
  void proc_co_binary_expand_op_pr351e(real_T in1_data[], int32_T in1_size[2],
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
  void proc_con_binary_expand_op_pr351(emxArray_real_T_proc_control_T *in1,
    const emxArray_real_T_proc_control_T *in2, const
    emxArray_real_T_proc_control_T *in3, const real_T in4[21], const
    emxArray_real_T_proc_control_T *in5, const real_T in6[8], const
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
  void proc_cont_binary_expand_op_pr35(real_T in1_data[], int32_T in1_size[2],
    real_T in2, const int8_T in3_data[], const int32_T in3_size[2]);
  void proc_control_mpc_checkhessian(real_T b_H_data[], int32_T b_H_size[2],
    real_T L_data[], int32_T L_size[2], real_T *BadH);
  void proc_control_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_contr_binary_expand_op_pr3(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5[8], const real_T in6_data[], const int32_T in6_size[2],
    const real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_mtimes_kc(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_contro_binary_expand_op_pr(real_T in1_data[], int32_T in1_size[2],
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
  boolean_T proc_control_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_isequal_p(const real_T varargin_1[6], const real_T
    varargin_2[6]);
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
  void proc_control_mldivide_Z0xqFpTr(const real_T A[36], const real_T B[36],
    real_T Y[36]);
  void proc_co_AUV8QuatSimFcn_AbfqyrNU(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  void proc_c_mpc_plantupdate_opKkKWqM(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void mpc_constraintcoefLTV_j7mSZmy_g(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  int32_T proc_control_xpotrf_4MFpOPH5(real_T b_A[81]);
  void proc__mpc_checkhessian_AF9zNtya(real_T b_H[81], real_T L[81], real_T
    *BadH);
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
  void proc_control_mtimes_f(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control_znlmpc_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T *Bu_size);
  void proc_control_znlmpc_getXUe(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_wW6vUT_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_stateEvolution_p6X6Q73G(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  boolean_T proc_control_any(const boolean_T x[26]);
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
  real_T proc_control_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
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
  real_T proc_control_erf(real_T x);
  void proc_co_AUV8QuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  void proc_control_rand(real_T r[3]);
  void proc_control_binary_expand_op(real_T in1[3], const real_T in3_data[],
    const int32_T *in3_size, const real_T in4_data[], const int32_T *in4_size);

  // Real-Time Model
  RT_MODEL_proc_control_T proc_control_M;
};

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
//  Block '<S126>/Display' : Unused code path elimination
//  Block '<S130>/Constant3' : Unused code path elimination
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
//  Block '<S204>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S205>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S206>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S207>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S208>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S209>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S210>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S211>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S212>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S213>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S214>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S215>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S216>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S217>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S218>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S219>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S220>/Vector Dimension Check' : Unused code path elimination
//  Block '<S221>/Vector Dimension Check' : Unused code path elimination
//  Block '<S222>/Vector Dimension Check' : Unused code path elimination
//  Block '<S223>/Vector Dimension Check' : Unused code path elimination
//  Block '<S201>/mv.init_zero' : Unused code path elimination
//  Block '<S201>/x.init_zero' : Unused code path elimination
//  Block '<S128>/Scope1' : Unused code path elimination
//  Block '<S128>/Scope2' : Unused code path elimination
//  Block '<S229>/Constant1' : Unused code path elimination
//  Block '<S229>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S243>/Product' : Unused code path elimination
//  Block '<S243>/Product1' : Unused code path elimination
//  Block '<S243>/Product2' : Unused code path elimination
//  Block '<S243>/Product3' : Unused code path elimination
//  Block '<S248>/Product' : Unused code path elimination
//  Block '<S248>/Product1' : Unused code path elimination
//  Block '<S248>/Product2' : Unused code path elimination
//  Block '<S248>/Product3' : Unused code path elimination
//  Block '<S248>/Sum' : Unused code path elimination
//  Block '<S247>/sqrt' : Unused code path elimination
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
//  Block '<S246>/Constant' : Unused code path elimination
//  Block '<S246>/Gain' : Unused code path elimination
//  Block '<S246>/Gain1' : Unused code path elimination
//  Block '<S246>/Gain2' : Unused code path elimination
//  Block '<S246>/Product' : Unused code path elimination
//  Block '<S246>/Product1' : Unused code path elimination
//  Block '<S246>/Product2' : Unused code path elimination
//  Block '<S246>/Product3' : Unused code path elimination
//  Block '<S246>/Product4' : Unused code path elimination
//  Block '<S246>/Product5' : Unused code path elimination
//  Block '<S246>/Product6' : Unused code path elimination
//  Block '<S246>/Product7' : Unused code path elimination
//  Block '<S246>/Product8' : Unused code path elimination
//  Block '<S246>/Sum' : Unused code path elimination
//  Block '<S246>/Sum1' : Unused code path elimination
//  Block '<S246>/Sum2' : Unused code path elimination
//  Block '<S246>/Sum3' : Unused code path elimination
//  Block '<S249>/Product' : Unused code path elimination
//  Block '<S249>/Product1' : Unused code path elimination
//  Block '<S249>/Product2' : Unused code path elimination
//  Block '<S249>/Product3' : Unused code path elimination
//  Block '<S254>/Product' : Unused code path elimination
//  Block '<S254>/Product1' : Unused code path elimination
//  Block '<S254>/Product2' : Unused code path elimination
//  Block '<S254>/Product3' : Unused code path elimination
//  Block '<S254>/Sum' : Unused code path elimination
//  Block '<S253>/sqrt' : Unused code path elimination
//  Block '<S250>/Constant' : Unused code path elimination
//  Block '<S250>/Gain' : Unused code path elimination
//  Block '<S250>/Gain1' : Unused code path elimination
//  Block '<S250>/Gain2' : Unused code path elimination
//  Block '<S250>/Product' : Unused code path elimination
//  Block '<S250>/Product1' : Unused code path elimination
//  Block '<S250>/Product2' : Unused code path elimination
//  Block '<S250>/Product3' : Unused code path elimination
//  Block '<S250>/Product4' : Unused code path elimination
//  Block '<S250>/Product5' : Unused code path elimination
//  Block '<S250>/Product6' : Unused code path elimination
//  Block '<S250>/Product7' : Unused code path elimination
//  Block '<S250>/Product8' : Unused code path elimination
//  Block '<S250>/Sum' : Unused code path elimination
//  Block '<S250>/Sum1' : Unused code path elimination
//  Block '<S250>/Sum2' : Unused code path elimination
//  Block '<S250>/Sum3' : Unused code path elimination
//  Block '<S251>/Constant' : Unused code path elimination
//  Block '<S251>/Gain' : Unused code path elimination
//  Block '<S251>/Gain1' : Unused code path elimination
//  Block '<S251>/Gain2' : Unused code path elimination
//  Block '<S251>/Product' : Unused code path elimination
//  Block '<S251>/Product1' : Unused code path elimination
//  Block '<S251>/Product2' : Unused code path elimination
//  Block '<S251>/Product3' : Unused code path elimination
//  Block '<S251>/Product4' : Unused code path elimination
//  Block '<S251>/Product5' : Unused code path elimination
//  Block '<S251>/Product6' : Unused code path elimination
//  Block '<S251>/Product7' : Unused code path elimination
//  Block '<S251>/Product8' : Unused code path elimination
//  Block '<S251>/Sum' : Unused code path elimination
//  Block '<S251>/Sum1' : Unused code path elimination
//  Block '<S251>/Sum2' : Unused code path elimination
//  Block '<S251>/Sum3' : Unused code path elimination
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
//  Block '<S229>/Scope' : Unused code path elimination
//  Block '<S229>/Sum4' : Unused code path elimination
//  Block '<S231>/Discrete Transfer Fcn1' : Unused code path elimination
//  Block '<S266>/Data Type Duplicate' : Unused code path elimination
//  Block '<S266>/Diff' : Unused code path elimination
//  Block '<S266>/TSamp' : Unused code path elimination
//  Block '<S266>/UD' : Unused code path elimination
//  Block '<S269>/Constant' : Unused code path elimination
//  Block '<S269>/Gain' : Unused code path elimination
//  Block '<S269>/Gain1' : Unused code path elimination
//  Block '<S269>/Gain2' : Unused code path elimination
//  Block '<S269>/Product' : Unused code path elimination
//  Block '<S269>/Product1' : Unused code path elimination
//  Block '<S269>/Product2' : Unused code path elimination
//  Block '<S269>/Product3' : Unused code path elimination
//  Block '<S269>/Product4' : Unused code path elimination
//  Block '<S269>/Product5' : Unused code path elimination
//  Block '<S269>/Product6' : Unused code path elimination
//  Block '<S269>/Product7' : Unused code path elimination
//  Block '<S269>/Product8' : Unused code path elimination
//  Block '<S269>/Sum' : Unused code path elimination
//  Block '<S269>/Sum1' : Unused code path elimination
//  Block '<S269>/Sum2' : Unused code path elimination
//  Block '<S269>/Sum3' : Unused code path elimination
//  Block '<S270>/Constant' : Unused code path elimination
//  Block '<S270>/Gain' : Unused code path elimination
//  Block '<S270>/Gain1' : Unused code path elimination
//  Block '<S270>/Gain2' : Unused code path elimination
//  Block '<S270>/Product' : Unused code path elimination
//  Block '<S270>/Product1' : Unused code path elimination
//  Block '<S270>/Product2' : Unused code path elimination
//  Block '<S270>/Product3' : Unused code path elimination
//  Block '<S270>/Product4' : Unused code path elimination
//  Block '<S270>/Product5' : Unused code path elimination
//  Block '<S270>/Product6' : Unused code path elimination
//  Block '<S270>/Product7' : Unused code path elimination
//  Block '<S270>/Product8' : Unused code path elimination
//  Block '<S270>/Sum' : Unused code path elimination
//  Block '<S270>/Sum1' : Unused code path elimination
//  Block '<S270>/Sum2' : Unused code path elimination
//  Block '<S270>/Sum3' : Unused code path elimination
//  Block '<S232>/Scope' : Unused code path elimination
//  Block '<S232>/Scope1' : Unused code path elimination
//  Block '<S232>/Scope2' : Unused code path elimination
//  Block '<S232>/Scope3' : Unused code path elimination
//  Block '<S278>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S279>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S280>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S282>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S277>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S277>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S277>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S277>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S289>/Matrix Concatenate' : Unused code path elimination
//  Block '<S289>/Scope' : Unused code path elimination
//  Block '<S289>/Scope1' : Unused code path elimination
//  Block '<S289>/Scope2' : Unused code path elimination
//  Block '<S289>/Scope3' : Unused code path elimination
//  Block '<S289>/Selector' : Unused code path elimination
//  Block '<S289>/Selector5' : Unused code path elimination
//  Block '<S289>/Selector6' : Unused code path elimination
//  Block '<S289>/Selector7' : Unused code path elimination
//  Block '<S289>/Selector8' : Unused code path elimination
//  Block '<S289>/Sum' : Unused code path elimination
//  Block '<S289>/e angulars rates' : Unused code path elimination
//  Block '<S289>/e position' : Unused code path elimination
//  Block '<S289>/e quaternion' : Unused code path elimination
//  Block '<S289>/e velocity' : Unused code path elimination
//  Block '<S291>/Scope1' : Unused code path elimination
//  Block '<S307>/Display' : Unused code path elimination
//  Block '<S307>/Selector3' : Unused code path elimination
//  Block '<S295>/Scope' : Unused code path elimination
//  Block '<S90>/Zero-Order Hold' : Eliminated since input and output rates are identical
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
//  Block '<S202>/Reshape1' : Reshape block reduction
//  Block '<S202>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S202>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S203>/reshape_mv' : Reshape block reduction
//  Block '<S232>/Reshape' : Reshape block reduction
//  Block '<S277>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S277>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S234>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S234>/Zero-Order Hold1' : Eliminated since input and output rates are identical


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
//  '<S15>'  : 'proc_control/Modèle Physique/Modele Thruster/MATLAB Function1'
//  '<S16>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity'
//  '<S17>'  : 'proc_control/Modèle Physique/Modele Thruster/T1'
//  '<S18>'  : 'proc_control/Modèle Physique/Modele Thruster/T2'
//  '<S19>'  : 'proc_control/Modèle Physique/Modele Thruster/T3'
//  '<S20>'  : 'proc_control/Modèle Physique/Modele Thruster/T4'
//  '<S21>'  : 'proc_control/Modèle Physique/Modele Thruster/T5'
//  '<S22>'  : 'proc_control/Modèle Physique/Modele Thruster/T6'
//  '<S23>'  : 'proc_control/Modèle Physique/Modele Thruster/T7'
//  '<S24>'  : 'proc_control/Modèle Physique/Modele Thruster/T8'
//  '<S25>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/Blank Message2'
//  '<S26>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/MATLAB Function3'
//  '<S27>'  : 'proc_control/Modèle Physique/Modele Thruster/Send RPM to unity/Publish2'
//  '<S28>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise'
//  '<S29>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise1'
//  '<S30>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise2'
//  '<S31>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise3'
//  '<S32>'  : 'proc_control/Modèle Physique/Sensor Model/Band-Limited White Noise4'
//  '<S33>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model'
//  '<S34>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse'
//  '<S35>'  : 'proc_control/Modèle Physique/Sensor Model/MATLAB Function'
//  '<S36>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Conjugate'
//  '<S37>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation'
//  '<S38>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1'
//  '<S39>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2'
//  '<S40>'  : 'proc_control/Modèle Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S41>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Publish'
//  '<S42>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subscribe'
//  '<S43>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subsystem'
//  '<S44>'  : 'proc_control/Modèle Physique/Sensor Model/Hydrophones Model/Subscribe/Enabled Subsystem'
//  '<S45>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S46>'  : 'proc_control/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S47>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S48>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S49>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S50>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S51>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S52>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S53>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S54>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S55>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S56>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S57>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S58>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S59>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S60>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V1'
//  '<S61>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V2'
//  '<S62>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/V3'
//  '<S63>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S64>'  : 'proc_control/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
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
//  '<S100>' : 'proc_control/ROS Output/Send IMU msg/MATLAB Function'
//  '<S101>' : 'proc_control/ROS Output/Send IMU msg/Publish imu_info'
//  '<S102>' : 'proc_control/ROS Output/Send Ping msg/Blank Message'
//  '<S103>' : 'proc_control/ROS Output/Send Ping msg/Publish Ping'
//  '<S104>' : 'proc_control/ROS Output/Send to Unity/   '
//  '<S105>' : 'proc_control/ROS Output/Send to Unity/MATLAB Function'
//  '<S106>' : 'proc_control/ROS Output/Send to Unity/Publish'
//  '<S107>' : 'proc_control/Send Data to ROS/Blank Message'
//  '<S108>' : 'proc_control/Send Data to ROS/Blank Message2'
//  '<S109>' : 'proc_control/Send Data to ROS/MATLAB Function1'
//  '<S110>' : 'proc_control/Send Data to ROS/MATLAB Function3'
//  '<S111>' : 'proc_control/Send Data to ROS/Publish'
//  '<S112>' : 'proc_control/Send Data to ROS/Publish2'
//  '<S113>' : 'proc_control/Send Data to ROS/Subsystem'
//  '<S114>' : 'proc_control/Send Data to ROS/Subsystem/Blank Message5'
//  '<S115>' : 'proc_control/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S116>' : 'proc_control/Send Data to ROS/Subsystem/Publish5'
//  '<S117>' : 'proc_control/Sensor Manager/Send Sensor ON'
//  '<S118>' : 'proc_control/Sensor Manager/Send To Telemetry '
//  '<S119>' : 'proc_control/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S120>' : 'proc_control/Sensor Manager/Send Sensor ON/Publish'
//  '<S121>' : 'proc_control/Sensor Manager/Send To Telemetry /Blank Message'
//  '<S122>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité'
//  '<S123>' : 'proc_control/Sensor Manager/Send To Telemetry /Header Assignment'
//  '<S124>' : 'proc_control/Sensor Manager/Send To Telemetry /MATLAB Function1'
//  '<S125>' : 'proc_control/Sensor Manager/Send To Telemetry /Publish'
//  '<S126>' : 'proc_control/Subsystem Controller/Controller list'
//  '<S127>' : 'proc_control/Subsystem Controller/MPC manager'
//  '<S128>' : 'proc_control/Subsystem Controller/Post traitements'
//  '<S129>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S130>' : 'proc_control/Subsystem Controller/Controller list/IDLE'
//  '<S131>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S132>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S133>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
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
//  '<S200>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S225>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe'
//  '<S226>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1'
//  '<S227>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S228>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S229>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S230>' : 'proc_control/Subsystem ProcNav/DVL Mesurments'
//  '<S231>' : 'proc_control/Subsystem ProcNav/Detph Mesurments'
//  '<S232>' : 'proc_control/Subsystem ProcNav/Mux2Bus'
//  '<S233>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S234>' : 'proc_control/Subsystem ProcNav/Subsystem'
//  '<S235>' : 'proc_control/Subsystem ProcNav/Thursters Mesurments'
//  '<S236>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S237>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S238>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S239>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S240>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S241>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S242>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S243>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S244>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S245>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S246>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S247>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S249>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S251>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S252>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S253>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S254>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S255>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S256>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S257>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S258>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S259>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S260>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S261>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S262>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S263>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S264>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S265>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S266>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Discrete Derivative'
//  '<S267>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation'
//  '<S268>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S269>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V1'
//  '<S270>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V2'
//  '<S271>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V3'
//  '<S272>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S273>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S274>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S275>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S276>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S277>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S278>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S279>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S280>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3'
//  '<S281>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S282>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S283>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S284>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S285>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3/Correct'
//  '<S286>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S287>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S288>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S289>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S290>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S291>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S292>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S293>' : 'proc_control/Subsystem Trajectory/Subsystem2'
//  '<S294>' : 'proc_control/Subsystem Trajectory/SubsystemAuto'
//  '<S295>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory'
//  '<S296>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function1'
//  '<S297>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function1'
//  '<S298>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S299>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S300>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S301>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S302>' : 'proc_control/Subsystem Trajectory/Subsystem2/Blank Message5'
//  '<S303>' : 'proc_control/Subsystem Trajectory/Subsystem2/MATLAB Function2'
//  '<S304>' : 'proc_control/Subsystem Trajectory/Subsystem2/Publish5'
//  '<S305>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S306>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S307>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S308>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S309>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S310>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S311>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S312>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S313>' : 'proc_control/Subsystem1/Subscribe1'
//  '<S314>' : 'proc_control/Subsystem1/Subscribe2'
//  '<S315>' : 'proc_control/Subsystem1/Subscribe3'
//  '<S316>' : 'proc_control/Subsystem1/Subscribe4'
//  '<S317>' : 'proc_control/Subsystem1/Subscribe5'
//  '<S318>' : 'proc_control/Subsystem1/startSim'
//  '<S319>' : 'proc_control/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S320>' : 'proc_control/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S321>' : 'proc_control/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S322>' : 'proc_control/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S323>' : 'proc_control/Subsystem1/Subscribe5/Enabled Subsystem'
//  '<S324>' : 'proc_control/Subsystem1/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
