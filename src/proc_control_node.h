//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_node.h
//
// Code generated for Simulink model 'proc_control_node'.
//
// Model version                  : 2.13
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Mon Jan 31 17:55:14 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_proc_control_node_h_
#define RTW_HEADER_proc_control_node_h_
#include <cmath>
#include <cstring>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "proc_control_node_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_zcfcn.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
struct ODE3_IntgData {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
};

#endif

// Class declaration for model proc_control_node
class proc_control_nodeModelClass
{
  // public data and function members
 public:
  // Block signals for system '<S353>/MATLAB Function1'
  struct B_MATLABFunction1_proc_contro_T {
    real_T matrix[13];
  };

  // Block signals (default storage)
  struct B_proc_control_node_T {
    s_2F24x1ekvOt8ZUO1knVMv_proc__T QRManager;
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T CholManager;
    real_T y_data[3404025];
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T WorkingSet;
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T b_WorkingSet;
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T c_WorkingSet;
    s_OnOuVjEActeQRN4FyNqSwB_proc_T memspace;
    real_T B_data[1822860];
    real_T h_data[1822860];
    real_T rhs_data[1822860];
    real_T c_data[1822860];
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T TrialState;
    real_T b_this[78013];
    real_T A_data[67520];
    real_T JacCineqTrans_data[38220];
    real_T b_varargin_1_data[38220];
    real_T a__4_data[38220];
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T Au[25600];
    real_T Auf_data[25600];
    real_T unusedExpr[21609];
    real_T tmp_data[20800];
    real_T JacCeqTrans[19110];
    real_T JacEqTrans_tmp[19110];
    real_T Jx_m[16900];
    real_T Su[10400];
    real_T a[10400];
    real_T Jmv[10400];
    real_T Su_c[9600];
    real_T dv[6400];
    real_T tmp_data_k[5120];
    real_T tmp_data_c[5120];
    real_T b_A[4851];
    real_T varargin_2_data[4160];
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_C[3003];
    real_T b_Sx[2730];
    real_T b_Sx_b[2730];
    real_T b_Sx_p[2400];
    real_T b_SuJm[2080];
    real_T WySuJm[2080];
    real_T b_SuJm_c[2080];
    real_T WySuJm_f[2080];
    real_T Jmv_g[2080];
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T QPObjective;
    real_T b_SuJm_g[1920];
    real_T WySuJm_m[1920];
    real_T A_g[1859];                  // '<S148>/MATLAB Function2'
    real_T C_c[1859];                  // '<S148>/MATLAB Function2'
    real_T Bu[1848];
    real_T y_data_n[1845];
    real_T y_data_p[1845];
    real_T work_data[1845];
    real_T work_data_l[1845];
    real_T vn1_data[1845];
    real_T vn2_data[1845];
    real_T work_data_j[1845];
    real_T y_data_d[1845];
    real_T y_data_g[1845];
    real_T y_data_l[1845];
    real_T y_data_dh[1845];
    real_T y_data_dy[1845];
    real_T y_data_lx[1845];
    real_T y_data_o[1845];
    real_T Bu_b[1760];
    real_T b_Hv[1430];
    real_T b_Hv_n[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T b_Hv_b[1320];
    real_T I2Jm[1280];
    real_T WuI2Jm[1280];
    real_T dv1[1280];
    real_T I2Jm_l[1280];
    real_T WuI2Jm_h[1280];
    real_T dv2[1280];
    real_T I2Jm_b[1280];
    real_T WuI2Jm_d[1280];
    real_T dv3[1280];
    real_T CovMat[1156];
    real_T B_n[1144];                  // '<S148>/MATLAB Function2'
    real_T b_Su1[1040];
    real_T Sum_e[1040];
    real_T b_Su1_b[1040];
    real_T c_data_j[988];
    real_T b_tmp[986];
    real_T b_Su1_f[960];
    real_T Sum_a[960];
    int8_T a_j[6400];
    int8_T a_jz[6400];
    real_T dv4[672];
    real_T dv5[640];
    real_T b_B[630];
    real_T b_B_o[580];
    real_T k[544];
    real_T b_A_n[441];
    real_T AA_i[441];
    SL_Bus_proc_control_node_sonia_common_MpcInfo msg;// '<S118>/MATLAB Function' 
    real_T b_A_o[400];
    real_T b_D[390];
    SL_Bus_proc_control_node_sonia_common_MpcGains In1;// '<S288>/In1'
    SL_Bus_proc_control_node_sonia_common_MpcGains b_varargout_2;
    SL_Bus_proc_control_node_std_msgs_Float32MultiArray In1_f;// '<S287>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32MultiArray b_varargout_2_n;
    real_T dv6[352];
    real_T b_A_m[338];
    real_T b_Kx[336];
    real_T b_Kx_c[336];
    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray msg_k;// '<S5>/MATLAB Function3' 
    real_T B_data_m[320];
    real_T b_Kx_m[320];
    real_T b_Bu[320];
    real_T h[289];
    real_T b_Linv[289];
    real_T c_Linv[289];
    real_T b_D_j[289];
    real_T b_H[289];
    real_T U[289];
    real_T RLinv[289];
    real_T TL[289];
    real_T QQ[289];
    real_T RR[289];
    real_T c_A[289];
    real_T b_Linv_h[289];
    real_T c_Linv_c[289];
    real_T L[289];
    real_T b_D_c[289];
    real_T b_H_p[289];
    real_T U_p[289];
    real_T RLinv_a[289];
    real_T b_D_e[289];
    real_T b_H_a[289];
    real_T U_a[289];
    real_T RLinv_i[289];
    real_T TL_l[289];
    real_T QQ_o[289];
    real_T RR_o[289];
    real_T TL_i[289];
    real_T QQ_f[289];
    real_T RR_i[289];
    real_T c_A_f[289];
    real_T c_A_g[289];
    real_T b_A_c[286];
    real_T b_C_o[273];
    real_T Nk[273];
    real_T CA[273];
    real_T CA_l[273];
    real_T b_C_m[273];
    real_T Cineq_data[260];
    real_T b_data[260];
    real_T varargin_1_data_m[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_c[260];
    real_T b_c_f[260];
    real_T b_c_data_p[260];
    real_T Je_data[260];
    real_T g[256];
    real_T b_SuJm_e[256];
    real_T b_Jm[256];
    real_T b_SuJm_o[256];
    real_T b_Jm_h[256];
    real_T b_SuJm_l[256];
    real_T b_Jm_h2[256];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T b_C_me[240];
    real_T CA_m[240];
    real_T CA_h[240];
    real_T Bv[231];
    real_T Bv_c[220];
    real_T b_A_k[208];
    real_T b_A_p[198];
    real_T b_Kv[176];
    real_T b_Kv_p[176];
    real_T b_Kv_p4[176];
    real_T A[169];
    real_T Ac[169];
    real_T A_i[169];                   // '<S145>/MATLAB Function2'
    real_T A_a[169];
    real_T A2[169];
    real_T U_j[169];
    real_T V[169];
    real_T A3[169];
    real_T A4[169];
    real_T A4_e[169];
    real_T b_A_ol[169];
    real_T A2_b[169];
    real_T U_ao[169];
    real_T V_g[169];
    real_T A3_e[169];
    real_T A4_f[169];
    real_T A4_h[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T y_e[169];
    real_T y_c[169];
    real_T y_a[169];
    real_T b_A_d[169];
    real_T z[147];
    real_T rtb_Selector_a[147];
    real_T dv7[147];
    real_T b_x[147];
    real_T A_p[144];                   // '<S144>/MATLAB Function2'
    real_T dv8[144];
    real_T dv9[144];
    real_T F[144];
    real_T A2_m[144];
    real_T U_o[144];
    real_T V_n[144];
    real_T A3_l[144];
    real_T A4_p[144];
    real_T A4_pt[144];
    real_T b_A_f[144];
    real_T Dv[143];
    real_T Y_e[143];                   // '<S148>/MATLAB Function2'
    real_T X_b[143];                   // '<S148>/MATLAB Function2'
    real_T DX_i[143];                  // '<S148>/MATLAB Function2'
    real_T CA_i[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_o[143];
    real_T X_k[143];
    real_T X_i[143];
    real_T b_X_o[143];
    real_T b_X_m[143];
    real_T b_X_c[143];
    real_T Dv_f[132];
    real_T CA_hc[132];
    real_T rseq[130];
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_m[130];
    real_T gfX[130];
    real_T z_a[130];
    real_T b[130];
    real_T b_Ku1[128];
    real_T b_Su1_k[128];
    real_T b_I1[128];
    real_T b_Ku1_p[128];
    real_T b_Su1_bp[128];
    real_T b_I1_c[128];
    real_T b_Ku1_n[128];
    real_T b_Su1_i[128];
    real_T b_I1_m[128];
    SL_Bus_proc_control_node_nav_msgs_Odometry msg_o;// '<S123>/MATLAB Function1' 
    real_T rseq_j[120];
    real_T y_ae[120];                  // '<S144>/MATLAB Function'
    real_T K[117];
    real_T C[117];
    real_T b_C_e[117];
    real_T Selector_m[117];            // '<S263>/Selector'
    real_T y_m[117];
    real_T rtb_B_n_j[104];
    real_T Sum_f[104];
    real_T b_C_a[104];
    real_T Sum_g[96];
    real_T useq_a[88];                 // '<S224>/FixedHorizonOptimizer'
    real_T U_n[88];
    real_T b_U[88];
    real_T U_d[88];
    real_T U_na[88];
    real_T U_c[88];
    real_T b_U_f[88];
    real_T Umv[88];
    real_T b_U_p[88];
    real_T b_U_p2[88];
    real_T Sy[81];
    real_T Sy_n[81];
    real_T R[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv10[80];
    real_T dv11[80];
    real_T b_I1_k[80];
    real_T dv12[80];
    real_T gfU[80];
    real_T y_n[80];
    real_T Selector1_n[72];            // '<S263>/Selector1'
    int16_T b_data_o[260];
    int16_T b_data_g[260];
    int16_T d_data[260];
    real_T b_I[64];
    SL_Bus_proc_control_node_sensor_msgs_Imu In1_p;// '<S64>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu In1_pd;// '<S70>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu msg_i;// '<S80>/MATLAB Function'
    real_T b_newCoefs[48];
    real_T b_A_cq[48];
    SL_Bus_proc_control_node_gazebo_msgs_ModelState msg_g;// '<S81>/MATLAB Function' 
    real_T constValues[41];
    boolean_T x[320];
    real_T dHdx[39];
    real_T K_c[39];
    real_T C_m[39];
    real_T b_C_j[39];
    real_T y_k[39];
    int8_T c_B[289];
    int8_T b_B_m[289];
    int8_T b_p[289];
    int8_T b_d[289];
    int8_T b_g[289];
    real_T dCoefs[36];
    real_T b_newCoefs_c[36];
    real_T rtb_A_g_c[36];
    real_T constValues_i[36];
    real_T b_A_dx[36];
    real_T b_A_g[36];
    real_T Opt[34];
    real_T Rhs[34];
    real_T Opt_l[34];
    real_T Rhs_f[34];
    real_T Opt_d[34];
    real_T Rhs_j[34];
    boolean_T icf[260];
    boolean_T icf_i[260];
    int8_T Je[260];
    real_T b_Mlim[32];
    real_T Bc[32];
    real_T b_Mlim_h[32];
    real_T b_Mu1[32];
    real_T cTol[32];
    real_T dv13[32];
    real_T Bc_n[32];
    real_T b_Mlim_o[32];
    real_T b_Mu1_c[32];
    real_T b_Mlim_b[32];
    real_T b_Mu1_e[32];
    real_T b_Mlim_d[32];
    real_T cTol_i[32];
    real_T dv14[32];
    real_T cTol_g[32];
    real_T dv15[32];
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_i;// '<S65>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_c;// '<S72>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL msg_iq;// '<S78>/MATLAB Function' 
    real_T coefsWithFlatStart[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T dv16[21];
    real_T b_xoff_n[20];
    real_T dv17[20];
    int8_T C_l[144];                   // '<S144>/MATLAB Function2'
    real_T Transpose_i[18];            // '<S366>/Transpose'
    real_T zopt[17];
    real_T f[17];
    real_T r[17];
    real_T z_c[17];
    real_T b_Ac[17];
    real_T tau[17];
    real_T work[17];
    real_T zopt_n[17];
    real_T f_p[17];
    real_T zopt_d[17];
    real_T varargin_1[17];
    real_T r_o[17];
    real_T z_j[17];
    real_T b_Ac_c[17];
    real_T r_h[17];
    real_T z_d[17];
    real_T b_Ac_c5[17];
    real_T tau_p[17];
    real_T work_p[17];
    real_T tau_a[17];
    real_T work_o[17];
    real_T varargin_1_j[17];
    real_T varargin_1_p[17];
    boolean_T bv[130];
    boolean_T bv1[130];
    real_T a_o[16];
    real_T b_l[16];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    int32_T ic[26];
    int32_T ic_k[26];
    real_T z_jk[13];
    real_T imz[13];
    real_T TmpSignalConversionAtTransp[13];
    real_T TmpSignalConversionAtSFun_b[13];// '<S145>/MATLAB Function2'
    real_T Bu_f[13];
    real_T rows[13];
    real_T CA_c[13];
    real_T b_Wy[13];
    real_T b_C_f[13];
    real_T ic_n[13];
    real_T ic_i[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_l[13];
    real_T ic_i3[13];
    real_T dv18[13];
    real_T dv19[13];
    real_T tau_k[13];
    real_T work_f[13];
    real_T tau_al[13];
    real_T work_d[13];
    real_T tau_e[13];
    real_T work_e[13];
    real_T ic_b[13];
    real_T dv20[13];
    real_T dv21[13];
    real_T a_a[13];
    real_T Y[12];
    real_T coeffMat[12];
    real_T TmpSignalConversionAtSFun_p[12];// '<S123>/MATLAB Function1'
    real_T rtb_C_i[12];
    real_T dv22[12];
    real_T b_C_fa[12];
    real_T vseq[11];
    real_T z_ji[9];
    real_T TmpSignalConversionAtBuffer[9];
    real_T tau_o[9];
    real_T work_fr[9];
    real_T R_o[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_l;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_lu;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_g;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_d;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_dv;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_j;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_f;
    int8_T b_B_j[64];
    int8_T b_B_c[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_f[64];
    real_T u[8];                       // '<S294>/ '
    real_T U_jz[8];
    real_T ZeroOrderHold_k[8];         // '<S294>/Zero-Order Hold'
    real_T dv23[8];
    real_T dv24[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T b_Wu_b[8];
    real_T b_Wdu_h[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_e[8];
    real_T duk_h[8];
    real_T gfU_k[8];
    real_T ic_j[8];
    real_T c_o[8];
    real_T runtimedata_MVRateMin[8];
    int16_T iAnew[32];
    int16_T iC[32];
    int16_T iAnew_h[32];
    int16_T iAnew_n[32];
    int16_T iC_k[32];
    int16_T iC_a[32];
    SL_Bus_proc_control_node_sonia_common_AddPose b_varargout_2_c;
    SL_Bus_proc_control_node_geometry_msgs_Pose In1_n;// '<S401>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Pose b_varargout_2_h;
    real_T TmpSignalConversionAtMATLAB[7];
    real_T y_i[7];
    real_T x_p[7];
    int32_T iv[13];
    SL_Bus_proc_control_node_geometry_msgs_Twist In1_o;// '<S363>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Twist b_varargout_2_f;
    real_T MultiportSwitch[6];         // '<S357>/Multiport Switch'
    real_T Gain3[6];                   // '<S357>/Gain3'
    real_T Saturation[6];              // '<S362>/Saturation'
    real_T Sum_ew[6];                  // '<S357>/Sum'
    real_T Gain_n[6];                  // '<S357>/Gain'
    real_T rtb_Gain3_h[6];
    real_T constValues_h[6];
    real_T constValues_f[6];
    char_T b_zeroDelimTopic[39];
    char_T b_zeroDelimTopic_i[34];
    char_T b_zeroDelimTopic_f[32];
    quaternion_proc_control_node_T expl_temp_c;
    quaternion_proc_control_node_T expl_temp_n;
    real_T MATLABSystem_o1[4];         // '<S10>/MATLAB System'
    real_T n[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S290>/MATLAB Function1'
    real_T qRel[4];
    boolean_T bv2[32];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    char_T b_zeroDelimTopic_h[31];
    char_T b_zeroDelimTopic_k[30];
    char_T b_zeroDelimTopic_tmp[30];
    char_T b_zeroDelimTopic_hz[29];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_b[28];
    char_T b_zeroDelimTopic_o[27];
    char_T b_zeroDelimTopic_ku[26];
    char_T b_zeroDelimTopic_tmp_j[26];
    boolean_T icf_n[26];
    boolean_T icf_m[26];
    char_T b_zeroDelimTopic_hc[24];
    real_T MATLABSystem_o2[3];         // '<S10>/MATLAB System'
    real_T c_f[3];
    real_T u2[3];                      // '<S332>/1//2'
    real_T dv25[3];
    real_T target[3];
    real_T work_dy[3];
    char_T b_zeroDelimTopic_l[23];
    char_T b_zeroDelimTopic_tmp_k[23];
    char_T b_zeroDelimTopic_ic[22];
    char_T b_zeroDelimTopic_h5[21];
    char_T b_zeroDelimTopic_m[20];
    char_T b_zeroDelimTopic_g[19];
    char_T b_zeroDelimTopic_lf[16];
    real_T DataTypeConversion1[2];     // '<S370>/Data Type Conversion1'
    real_T Selector1[8];               // '<S366>/Selector1'
    real_T Selector4[7];               // '<S366>/Selector4'
    real_T DataStoreRead[13];          // '<S345>/Data Store Read'
    real_T mvwt[8];                    // '<S142>/MPC manager'
    real_T dmwwt[8];                   // '<S142>/MPC manager'
    real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    uint16_T pwm[8];                   // '<S143>/N to PWM'
    uint16_T current[8];               // '<S143>/N to A'
    uint8_T b_Su1_tmp[13];
    uint8_T rows_m[13];
    int8_T ipiv[13];
    boolean_T x_n[13];
    boolean_T x_g[13];
    boolean_T x_d[13];
    int8_T rows_mq[12];
    int8_T ipiv_f[12];
    int32_T i_data[3];
    int32_T ii_data_g[3];
    int32_T Jx_size[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T MATLABSystem_o3;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o4;            // '<S10>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S370>/Data Type Conversion'
    real_T DataTypeConversion2;        // '<S370>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S366>/Matrix Concatenate'
    real_T Selector[6];                // '<S366>/Selector'
    real_T Sum;                        // '<S334>/Sum'
    real_T Sum_o;                      // '<S335>/Sum'
    real_T Sum_c;                      // '<S336>/Sum'
    real_T enable;                     // '<S290>/MATLAB Function1'
    real_T q0;                         // '<S332>/q0'
    real_T q1;                         // '<S332>/q1'
    real_T q2;                         // '<S332>/q2'
    real_T q3;                         // '<S332>/q3'
    real_T Probe[2];                   // '<S302>/Probe'
    real_T Merge[10];                  // '<S141>/Merge'
    real_T mvmin[8];                   // '<S142>/MPC manager'
    real_T mvmax[8];                   // '<S142>/MPC manager'
    real_T ywt[13];                    // '<S142>/MPC manager'
    real_T ZeroOrderHold;              // '<S5>/Zero-Order Hold'
    real_T BufferToMakeInportVirtual_Inser[8];
             // '<S5>/BufferToMakeInportVirtual_InsertedFor_thrust_at_inport_0'
    real_T q2_l;                       // '<S96>/q2'
    real_T q0_j;                       // '<S96>/q0'
    real_T q1_g;                       // '<S96>/q1'
    real_T q3_h;                       // '<S96>/q3'
    real_T Gain2;                      // '<S104>/Gain2'
    real_T Gain;                       // '<S104>/Gain'
    real_T Gain1;                      // '<S104>/Gain1'
    real_T Gain_j;                     // '<S105>/Gain'
    real_T Gain2_d;                    // '<S105>/Gain2'
    real_T Gain1_d;                    // '<S105>/Gain1'
    real_T Gain_f;                     // '<S106>/Gain'
    real_T Gain1_c;                    // '<S106>/Gain1'
    real_T Gain2_k;                    // '<S106>/Gain2'
    real_T y;                          // '<S60>/MATLAB Function'
    real_T XDrift;                     // '<S14>/X Drift'
    real_T YDrift;                     // '<S14>/Y Drift'
    real_T WorldPosition_d[3];         // '<S1>/Integrator'
    real_T InitialBodyvelocity[3];     // '<S1>/Initial Body velocity '
    real_T InitialAngularRates[3];     // '<S1>/Initial Angular Rates'
    real_T PWMtoN[8];                  // '<S13>/ PWM to N'
    real_T Output;                     // '<S25>/Output'
    real_T Output_i;                   // '<S26>/Output'
    real_T Output_l;                   // '<S27>/Output'
    real_T Output_o;                   // '<S28>/Output'
    real_T Output_j;                   // '<S29>/Output'
    real_T Gain2_k0;                   // '<S46>/Gain2'
    real_T Gain_c;                     // '<S46>/Gain'
    real_T Gain1_cn;                   // '<S46>/Gain1'
    real_T Gain_cr;                    // '<S47>/Gain'
    real_T Gain2_n;                    // '<S47>/Gain2'
    real_T Gain1_d2;                   // '<S47>/Gain1'
    real_T Gain_l;                     // '<S48>/Gain'
    real_T Gain1_o;                    // '<S48>/Gain1'
    real_T Gain2_i;                    // '<S48>/Gain2'
    real_T PressureDepth;              // '<S16>/Gain'
    real_T Quaternion[4];              // '<S16>/Sum1'
    real_T AngularRate_d[3];           // '<S16>/Sum3'
    real_T LinearAcceleration[3];      // '<S16>/Sum5'
    real_T y_p[3];                     // '<S16>/MATLAB Function'
    real_T y_h[4];                     // '<S1>/Quaternion Normalise'
    real_T Position_dot[3];            // '<S1>/AUV State Equation'
    real_T Quaternion_dot[4];          // '<S1>/AUV State Equation'
    real_T BodyVelocity_dot[3];        // '<S1>/AUV State Equation'
    real_T AngularRates_dot[3];        // '<S1>/AUV State Equation'
    real_T d;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T epsilon;
    real_T t53;
    real_T t54;
    real_T t55;
    real_T t22;
    real_T t23;
    real_T t51;
    real_T t31;
    real_T t32;
    real_T t37;
    real_T t38;
    real_T t39;
    real_T t40;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t13;
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t65;
    real_T t56;
    real_T t57;
    real_T t70;
    real_T Divide1;                    // '<S339>/Divide1'
    real_T Divide2;                    // '<S339>/Divide2'
    real_T Divide3;                    // '<S339>/Divide3'
    real_T ZeroOrderHold_b;            // '<S79>/Zero-Order Hold'
    real_T Sum_ll;                     // '<S341>/Sum'
    real_T Product1_n;                 // '<S341>/Product1'
    real_T Product2_l;                 // '<S341>/Product2'
    real_T fcn2_e;                     // '<S130>/fcn2'
    real_T MATLABSystem_o7;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o6;            // '<S10>/MATLAB System'
    real_T TSamp;                      // '<S295>/TSamp'
    real_T rtb_u2_jc;
    real_T rtb_sincos_o2_idx_2;
    real_T rtb_sincos_o1_idx_1;
    real_T rtb_sincos_o2_idx_1;
    real_T rtb_sincos_o1_idx_0;
    real_T rtb_sincos_o2_idx_0;
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
    real_T d36;
    real_T d37;
    real_T d38;
    real_T b_Ku1_e;
    real_T b_Kv_m;
    real_T WuI2Jm_o;
    real_T Sum_ai;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_j;
    real_T b_Ac_g;
    real_T b_Linv_j;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T b_Ku1_ee;
    real_T b_Kv_j;
    real_T WuI2Jm_j;
    real_T ywt_g;
    real_T uwt_o;
    real_T d39;
    real_T normH;
    real_T s;
    real_T b_Ku1_h;
    real_T b_Kv_c;
    real_T WuI2Jm_a;
    real_T c_l;
    real_T b_c_j;
    real_T scale_i;
    real_T absxk_m;
    real_T t_f;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_o;
    real_T umvk_i;
    real_T duk_e;
    real_T e;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_j;
    real_T runtimedata_OutputMin_o;
    real_T runtimedata_OutputMax_f;
    real_T rMin_m;
    real_T Xnorm0_a;
    real_T cMin_h;
    real_T cVal_o;
    real_T t_h;
    real_T b_Ac_j;
    real_T scale_g;
    real_T absxk_j;
    real_T rMin_l;
    real_T Xnorm0_k;
    real_T cMin_d;
    real_T cVal_n;
    real_T t_j5;
    real_T b_Ac_a;
    real_T scale_h;
    real_T fs_i;
    real_T e_d;
    real_T wtYerr_b;
    real_T obj_objfun_workspace_runtimed_h;
    real_T wtYerr_p;
    real_T obj_objfun_workspace_runtimed_n;
    real_T duk_j;
    real_T d_o;
    real_T smax;
    real_T s_b;
    real_T normA;
    real_T c_s;
    real_T d_j;
    real_T smax_e;
    real_T s_i;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5;
    real_T t6;
    real_T t7_n;
    real_T t8_i;
    real_T t9_p;
    real_T t10_o;
    real_T t11_m;
    real_T t12;
    real_T t13_o;
    real_T t17_g;
    real_T t18;
    real_T t19;
    real_T t20;
    real_T t21;
    real_T t22_e;
    real_T t23_i;
    real_T t24;
    real_T t25;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t30;
    real_T t31_g;
    real_T t32_g;
    real_T t33;
    real_T t34;
    real_T t39_g;
    real_T t40_g;
    real_T t41;
    real_T t42;
    real_T t43;
    real_T t44;
    real_T t45;
    real_T t55_c;
    real_T t56_k;
    real_T t57_d;
    real_T t58;
    real_T t59;
    real_T t61;
    real_T t62;
    real_T t65_k;
    real_T t68;
    real_T t35;
    real_T t36;
    real_T t37_p;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T t32_tmp;
    real_T t25_tmp;
    real_T t29_tmp;
    real_T s_p;
    real_T atmp_m;
    real_T temp_k;
    real_T c_a;
    real_T s_f;
    real_T atmp_c;
    real_T temp_j;
    real_T s_k;
    real_T atmp_h;
    real_T temp_d;
    real_T s_j;
    real_T atmp_n;
    real_T temp_j0;
    real_T t8_l;
    real_T t9_ph;
    real_T t11_p;
    real_T t12_l;
    real_T t13_l;
    real_T t14_h;
    real_T t15_c;
    real_T t16_g;
    real_T t25_e;
    real_T t29_n;
    real_T t31_f;
    real_T t50;
    real_T t53_n;
    real_T t54_e;
    real_T t17_b;
    real_T t18_a;
    real_T t19_i;
    real_T t57_n;
    real_T t64;
    real_T t65_f;
    real_T t68_i;
    real_T t69;
    real_T t70_k;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp;
    real_T out1_tmp_b;
    real_T out1_tmp_d;
    real_T out1_tmp_h;
    real_T out1_tmp_n;
    real_T out1_tmp_f;
    real_T out1_tmp_a;
    real_T out1_tmp_m;
    real_T scale_gu;
    real_T absxk_n;
    real_T t_c;
    real_T s_d;
    real_T atmp_k;
    real_T tau_idx_0;
    real_T scale_c;
    real_T absxk_jd;
    real_T t_m;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T rho;
    real_T qpfvalLinearExcess;
    real_T qpfvalQuadExcess;
    real_T y_ie;
    real_T maxConstr_new;
    real_T normDelta;
    real_T s_bj;
    real_T temp_o;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T c_g;
    real_T b_atmp;
    real_T xnorm;
    real_T a_e;
    real_T scale_in;
    real_T absxk_e;
    real_T t_i;
    real_T normH_m;
    real_T s_dl;
    real_T ssq;
    real_T c_j;
    real_T t2_p;
    real_T t3_b;
    real_T t4_p;
    real_T t5_n;
    real_T t6_c;
    real_T t7_nh;
    real_T t8_d;
    real_T t9_i;
    real_T t10_n;
    real_T t11_b;
    real_T t12_b;
    real_T t13_j;
    real_T t17_n;
    real_T t18_f;
    real_T t19_e;
    real_T t20_i;
    real_T t21_a;
    real_T t22_f;
    real_T t23_k;
    real_T t24_c;
    real_T t25_j;
    real_T t26_l;
    real_T t27_a;
    real_T t28_i;
    real_T t29_o;
    real_T t30_b;
    real_T t31_a;
    real_T t32_a;
    real_T t33_i;
    real_T t34_i;
    real_T t39_l;
    real_T t40_o;
    real_T t41_p;
    real_T t42_o;
    real_T t43_c;
    real_T t44_o;
    real_T t45_o;
    real_T t55_h;
    real_T t56_i;
    real_T t57_g;
    real_T t58_c;
    real_T t59_o;
    real_T t61_g;
    real_T t62_o;
    real_T t65_g;
    real_T t68_a;
    real_T t35_g;
    real_T t2_b;
    real_T t3_k;
    real_T t4_c;
    real_T t5_j;
    real_T t6_a;
    real_T t7_d;
    real_T t8_c;
    real_T t9_d;
    real_T t10_a;
    real_T t11_bo;
    real_T t12_g;
    real_T t13_f;
    real_T t17_c;
    real_T t18_p;
    real_T t19_a;
    real_T t20_n;
    real_T t21_h;
    real_T t22_m;
    real_T t23_f;
    real_T t24_b;
    real_T t25_ec;
    real_T t26_n;
    real_T t27_p;
    real_T t28_ih;
    real_T t29_j;
    real_T t30_l;
    real_T t31_c;
    real_T t32_gr;
    real_T t33_c;
    real_T t34_l;
    real_T t39_e;
    real_T t40_d;
    real_T t41_m;
    real_T t42_f;
    real_T t43_n;
    real_T t44_oi;
    real_T t45_e;
    real_T t55_m;
    real_T t56_c;
    real_T t57_g4;
    real_T t58_b;
    real_T t59_p;
    real_T t61_p;
    real_T t62_a;
    real_T t65_fm;
    real_T t68_g;
    real_T t35_b;
    real_T qn_a;
    real_T qn_b;
    real_T qn_c;
    real_T qn_d;
    real_T pnCorrected_b;
    real_T pnCorrected_c;
    real_T pnCorrected_d;
    real_T linearScaling;
    real_T n_k;
    real_T q2n_a;
    real_T q2n_c;
    real_T q2n_d;
    real_T dp;
    real_T theta0;
    real_T oa;
    real_T ob;
    real_T oc;
    real_T od;
    real_T sinv_tmp;
    real_T n_tmp;
    real_T n_tmp_k;
    real_T n_tmp_b;
    real_T q1n_b_tmp;
    real_T q1n_c_tmp;
    real_T q1n_d_tmp;
    real_T q2n_b_tmp;
    real_T q2n_c_tmp;
    real_T b_idx_0;
    real_T e_idx_0;
    real_T dp_tmp;
    real_T q1n_a;
    real_T q1n_b;
    real_T q1n_c;
    real_T q1n_d;
    real_T q2n_a_i;
    real_T q2n_b;
    real_T q2n_c_n;
    real_T dp_h;
    real_T oldDirIdx;
    real_T constrViolation;
    real_T tol;
    real_T qtb;
    real_T smax_n;
    real_T s_m;
    real_T temp_g;
    real_T t8_j;
    real_T t9_f;
    real_T t10_ng;
    real_T t11_g;
    real_T t12_d;
    real_T t13_c;
    real_T t15_m;
    real_T t20_d;
    real_T t33_n;
    real_T t37_b;
    real_T t39_p;
    real_T t63;
    real_T t67;
    real_T t68_k;
    real_T t16_c;
    real_T t17_n2;
    real_T t18_n;
    real_T t19_c;
    real_T t21_d;
    real_T t22_n;
    real_T t23_g;
    real_T t71;
    real_T t80;
    real_T t81;
    real_T t84;
    real_T t45_l;
    real_T t55_g;
    real_T t65_p;
    real_T t86;
    real_T t87;
    real_T t56_ko;
    real_T t85;
    real_T out1_tmp_l;
    real_T out1_tmp_bf;
    real_T out1_tmp_c;
    real_T out1_tmp_fb;
    real_T out1_tmp_o;
    real_T out1_tmp_dd;
    real_T out1_tmp_ld;
    real_T out1_tmp_ls;
    real_T out1_tmp_dr;
    real_T absx;
    real_T z_k;
    real_T s_fo;
    real_T R_p;
    real_T smax_k;
    real_T s_k4;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T c_i;
    real_T y_ew;
    real_T t8_f;
    real_T t9_k;
    real_T t10_ne;
    real_T t11_i;
    real_T t12_i;
    real_T t13_o2;
    real_T t15_d;
    real_T t20_iu;
    real_T t33_g;
    real_T t37_c;
    real_T t39_ee;
    real_T t63_a;
    real_T t67_h;
    real_T t68_e;
    real_T t16_d;
    real_T t17_g5;
    real_T t18_e;
    real_T t19_eq;
    real_T t21_g;
    real_T t22_g;
    real_T t23_d;
    real_T t71_n;
    real_T t80_p;
    real_T t81_b;
    real_T t84_i;
    real_T t45_b;
    real_T t55_j;
    real_T t65_gz;
    real_T t86_n;
    real_T t87_p;
    real_T t56_f;
    real_T t85_f;
    real_T out1_tmp_aa;
    real_T out1_tmp_g;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T t5_e;
    real_T t6_e;
    real_T t9_dl;
    real_T t11_j;
    real_T t12_n;
    real_T t13_ju;
    real_T t20_p;
    real_T t24_a;
    real_T t26_d;
    real_T t46;
    real_T t49;
    real_T t50_p;
    real_T t14_d;
    real_T t53_p;
    real_T t62_f;
    real_T t63_g;
    real_T t66;
    real_T t68_d;
    real_T t69_h;
    real_T out1_tmp_i;
    real_T out1_tmp_mz;
    real_T out1_tmp_cy;
    real_T out1_tmp_lv;
    real_T out1_tmp_p;
    real_T out1_tmp_i1;
    real_T out1_tmp_b3;
    real_T out1_tmp_gn;
    real_T out1_tmp_oq;
    real_T out1_tmp_b1;
    real_T out1_tmp_e;
    real_T out1_tmp_e1;
    real_T t8_lg;
    real_T t9_c;
    real_T t11_e;
    real_T t12_dw;
    real_T t13_oe;
    real_T t14_l;
    real_T t15_h;
    real_T t16_l;
    real_T t25_c;
    real_T t29_c;
    real_T t31_ag;
    real_T t50_i;
    real_T t53_l;
    real_T t54_i;
    real_T t17_a;
    real_T t18_i;
    real_T t19_c3;
    real_T t57_m;
    real_T t64_n;
    real_T t65_c;
    real_T t68_n;
    real_T t69_hk;
    real_T t70_i;
    real_T t12_tmp_e;
    real_T t13_tmp_p;
    real_T t14_tmp_k;
    real_T t15_tmp_i;
    real_T out1_tmp_nl;
    real_T t8_o;
    real_T t9_l;
    real_T t11_pr;
    real_T t12_br;
    real_T t13_fy;
    real_T t14_i;
    real_T t15_ci;
    real_T t16_gl;
    real_T t25_i;
    real_T t29_b;
    real_T t31_n;
    real_T t50_pn;
    real_T t53_o;
    real_T t54_b;
    real_T t17_o;
    real_T t18_c;
    real_T t19_j;
    real_T t57_e;
    real_T t64_p;
    real_T t65_n;
    real_T t68_o;
    real_T t69_d;
    real_T t70_g;
    real_T t12_tmp_i;
    real_T t13_tmp_i;
    real_T t14_tmp_c;
    real_T t15_tmp_b;
    real_T out1_tmp_gh;
    real_T optimRelativeFactor_d;
    real_T nlpComplErrorTmp;
    real_T tol_f;
    real_T d40;
    real_T c_j1;
    real_T denomTol;
    real_T phaseOneCorrectionP;
    real_T pk_corrected;
    real_T ratio;
    real_T c_e;
    real_T c_p;
    real_T c_c;
    real_T b_s;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_d;
    real_T ads;
    real_T bds;
    real_T y_a_f;
    real_T y_b;
    real_T y_c_n;
    real_T y_d;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T ssq_o;
    real_T c_d;
    real_T alpha1;
    real_T y_l;
    real_T temp_f;
    real_T c_jf;
    real_T c_ge;
    real_T c_lt;
    real_T tol_k;
    real_T temp_p;
    real_T tol_b;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_i;
    real_T temp_pm;
    real_T temp_l;
    real_T t_e;
    real_T absxk_es;
    real_T t_p;
    real_T c_jg;
    real_T d41;
    real_T c_gy;
    real_T temp_le;
    real_T b_Hinv;
    real_T d42;
    real_T d43;
    real_T c_jo;
    real_T c_pk;
    real_T c_d0;
    real_T scale_k;
    real_T a_m;
    real_T out1_tmp_fv;
    real_T c_m;
    real_T scale_n;
    real_T c_mi;
    real_T scale_b;
    real_T c_cc;
    real_T c_gw;
    real_T scale_ck;
    real_T c_iz;
    real_T scale_kv;
    real_T lbLambda;
    real_T temp_go;
    real_T smax_p;
    real_T smax_f;
    SL_Bus_proc_control_node_std_msgs_UInt8 In1_i2;// '<S397>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_e;// '<S66>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_om;// '<S71>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool In1_f1;// '<S400>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool ZeroOrderHold_h;// '<S122>/Zero-Order Hold' 
    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg In1_cx;// '<S396>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
                 // '<S5>/BufferToMakeInportVirtual_InsertedFor_mv_at_inport_0'
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_m[8];
    boolean_T umin_incr_flag_m[8];
    boolean_T bv3[8];
    int32_T A_size[2];
    int32_T Cineq_size[2];
    int32_T JacCineqTrans_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T a__4_size[2];
    int32_T varargin_1_size_l[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_j[2];
    int32_T tmp_size[2];
    int32_T idx[2];
    int32_T tmp_size_m[2];
    int32_T h_size[2];
    int32_T c_size[2];
    int8_T ipiv_j[6];
    int8_T ipiv_i[6];
    int16_T Jx_a[2];
    real32_T rtb_PressureDepth_Data;
    int32_T idx_h;
    int32_T ibmat;
    int32_T b_s_d;
    int32_T c_ix;
    int32_T Ns;
    int32_T Ns_i;
    int32_T Ns_h;
    int32_T i;
    int32_T idx_d;
    int32_T idx_l;
    int32_T idx_f;
    int32_T idx_lt;
    int32_T idx_l3;
    int32_T b_D_tmp;
    int32_T B_size;
    int32_T i_f;
    int32_T i1;
    int32_T i2;
    int32_T kidx;
    int32_T j2;
    int32_T i1_g;
    int32_T i_g;
    int32_T i3;
    int32_T CA_tmp;
    int32_T Sum_tmp;
    int32_T b_Linv_tmp;
    int32_T i_a;
    int32_T i4;
    int32_T U_tmp;
    int32_T U_tmp_d;
    int32_T lambda_tmp_tmp;
    int32_T i_b;
    int32_T f_i;
    int32_T iC_d;
    int32_T RLinv_tmp_tmp;
    int32_T RLinv_tmp;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_fv;
    int32_T jA;
    int32_T jy;
    int32_T ix_a;
    int32_T j;
    int32_T b_m;
    int32_T ijA;
    int32_T ii;
    int32_T i_i;
    int32_T i5;
    int32_T i6;
    int32_T i_ir;
    int32_T I2Jm_tmp;
    int32_T i_k;
    int32_T i_au;
    int32_T j2_m;
    int32_T i2_c;
    int32_T Tries;
    int32_T i_bo;
    int32_T i7;
    int32_T kidx_k;
    int32_T CA_tmp_l;
    int32_T Sum_tmp_n;
    int32_T ix_p;
    int32_T b_iy;
    int32_T b_f;
    int32_T iac;
    int32_T d_k;
    int32_T ia;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T b_idx;
    int32_T ix_e;
    int32_T ia_n;
    int32_T i_o;
    int32_T loop_ub;
    int32_T tmp_size_a;
    int32_T tmp_size_b;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_b;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_m;
    int32_T iy;
    int32_T c_mc;
    int32_T ia_k;
    int32_T b_ix;
    int32_T b_iy_m;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_h;
    int32_T y_size_idx_0_i;
    int32_T i_c;
    int32_T i_n;
    int32_T wtYerr_tmp;
    int32_T sizes_idx_0;
    int32_T k_i;
    int32_T i_oc;
    int32_T c_idx_col;
    int32_T b_k;
    int32_T sizes_idx_0_h;
    int32_T c_k;
    int32_T d_k_p;
    int32_T i_go;
    int32_T b_c_size;
    int32_T b_size_idx_0;
    int32_T i8;
    int32_T i9;
    int32_T loop_ub_c;
    int32_T empty_non_axis_sizes_idx_0;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T mc;
    int32_T coffset;
    int32_T boffset;
    int32_T aoffset;
    int32_T i_gn;
    int32_T e_k;
    int32_T i10;
    int32_T i11;
    int32_T e_k_b;
    int32_T A2_tmp;
    int32_T A_tmp;
    int32_T jj;
    int32_T b_j;
    int32_T b_s_j;
    int32_T b_j_h;
    int32_T b_i;
    int32_T i12;
    int32_T i13;
    int32_T i14;
    int32_T F_tmp;
    int32_T e_k_d;
    int32_T i15;
    int32_T i16;
    int32_T e_k_o;
    int32_T A2_tmp_k;
    int32_T A_tmp_j;
    int32_T jj_d;
    int32_T b_j_f;
    int32_T coffset_a;
    int32_T aoffset_e;
    int32_T j_n;
    int32_T ii_o;
    int32_T knt_d;
    int32_T ia_c;
    int32_T k_m;
    int32_T b_i_o;
    int32_T idx_b;
    int32_T coffset_m;
    int32_T aoffset_i;
    int32_T j_i;
    int32_T ii_g;
    int32_T knt_m;
    int32_T ia_no;
    int32_T coffset_c;
    int32_T aoffset_j;
    int32_T j_e;
    int32_T knt_e;
    int32_T coltop_k;
    int32_T ia_k4;
    int32_T coffset_i;
    int32_T aoffset_eh;
    int32_T j_l;
    int32_T ii_l;
    int32_T knt_l;
    int32_T ia_o;
    int32_T coffset_i5;
    int32_T nVar;
    int32_T b_k_e;
    int32_T iH0;
    int32_T y_size_idx_0_l;
    int32_T nVarOrig;
    int32_T temp_n;
    int32_T mIneq_e;
    int32_T mLBOrig;
    int32_T idx_positive;
    int32_T i17;
    int32_T nVar_c;
    int32_T b_idx_a;
    int32_T y_size_idx_0_m;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr;
    int32_T mEqFixed;
    int32_T nVar_tmp;
    int32_T activeSetChangeID;
    int32_T nVar_ck;
    int32_T globalActiveConstrIdx;
    int32_T TYPE;
    int32_T idx_fg;
    int32_T ix_mj;
    int32_T iyend;
    int32_T b_ix_k;
    int32_T b_iy_b;
    int32_T c_iy;
    int32_T g_h;
    int32_T ia_h;
    int32_T loop_ub_h2;
    int32_T y_size_idx_0_b;
    int32_T nVar_tmp_tmp_b;
    int32_T nVar_d;
    int32_T ldq;
    int32_T ix_j;
    int32_T iy_d;
    int32_T jBcol;
    int32_T iAcol;
    int32_T f_l;
    int32_T g_j;
    int32_T b_ic;
    int32_T b_br;
    int32_T b_ar;
    int32_T mWConstr_tmp_tmp;
    int32_T idx_bi;
    int32_T b_idx_f;
    int32_T ix0;
    int32_T k_p;
    int32_T minmana;
    int32_T minmn;
    int32_T lda;
    int32_T ii_lr;
    int32_T mmi;
    int32_T i_l;
    int32_T knt_i;
    int32_T Tries_o;
    int32_T j_b;
    int32_T Tries_i;
    int32_T idxAjj;
    int32_T j_g;
    int32_T iy_p;
    int32_T nVar_h;
    int32_T mConstrMax_d;
    int32_T idx_Aineq;
    int32_T idx_upper;
    int32_T idx_Partition;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T iy_f;
    int32_T iac_f;
    int32_T b_ia_c;
    int32_T idx_Aineq_tmp_tmp;
    int32_T b_dk;
    int32_T nVar_ca;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_b;
    int32_T iy_pw;
    int32_T b_k_h;
    int32_T ma;
    int32_T minmana_e;
    int32_T minmn_l;
    int32_T c_j_h;
    int32_T ma_n;
    int32_T minmn_k;
    int32_T ii_b;
    int32_T nmi;
    int32_T mmi_o;
    int32_T pvt;
    int32_T j_ni;
    int32_T ix_f;
    int32_T k_g;
    int32_T loop_ub_d;
    int32_T lastv;
    int32_T lastc;
    int32_T coltop_d;
    int32_T ia_e;
    int32_T jA_c;
    int32_T jj_a;
    int32_T b_j_hp;
    int32_T k_e;
    int32_T nVar_n;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_ldw;
    int32_T b_nullStart;
    int32_T idx_col;
    int32_T order;
    int32_T ix_h;
    int32_T b_ix_o;
    int32_T b_ldw_tmp;
    int32_T rhs_size_idx_1;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T order_f;
    int32_T b_k_k;
    int32_T LDimSizeP1_e;
    int32_T subRows;
    int32_T LD_diagOffset_i;
    int32_T FMat_offset;
    int32_T k_o;
    int32_T idx_j;
    int32_T ix_k;
    int32_T d_ja;
    int32_T ia_d;
    int32_T nVar_g;
    int32_T mFixed_c;
    int32_T mIneq_k;
    int32_T mLB_j;
    int32_T mUB_h;
    int32_T mLambda_c;
    int32_T nActiveConstr;
    int32_T fullRank_R;
    int32_T rankR;
    int32_T iQR_diag;
    int32_T iQR0;
    int32_T idx_dh;
    int32_T n_a;
    int32_T k_pu;
    int32_T i18;
    int32_T i_fk;
    int32_T itau_h;
    int32_T iaii;
    int32_T c_j5;
    int32_T b_k_n;
    int32_T ix_o;
    int32_T totalIneq;
    int32_T ldw;
    int32_T iyend_o;
    int32_T ix_d;
    int32_T b_iy_a;
    int32_T iac_k;
    int32_T d_ct;
    int32_T ia_j;
    int32_T iy_b;
    int32_T i_nc;
    int32_T k_d;
    int32_T idx_hf;
    int32_T b_idx_b;
    int32_T ix0_p;
    int32_T k_b;
    int32_T idxA1j;
    int32_T idxAjj_p;
    int32_T b_j_n;
    int32_T ix_j2;
    int32_T iy_bn;
    int32_T LDimSizeP1_n;
    int32_T LD_diagOffset_b;
    int32_T subMatrixDim;
    int32_T mLB_jr;
    int32_T mUB_k;
    int32_T mFixed_d;
    int32_T mIneq_d;
    int32_T b_k_o;
    int32_T iy_c;
    int32_T ix_oz;
    int32_T mLB_a;
    int32_T mUB_d;
    int32_T mFixed_e;
    int32_T mIneq_i;
    int32_T b_k_b;
    int32_T iy_a;
    int32_T ix_kz;
    int32_T mLB_m;
    int32_T mUB_j;
    int32_T mFixed_j;
    int32_T mIneq_kg;
    int32_T b_k_kp;
    int32_T iy_ar;
    int32_T ix_kc;
    int32_T nFixedConstr;
    int32_T nVar_f;
    int32_T idx_c;
    int32_T idx_col_o;
    int32_T nFixedConstr_k;
    int32_T nVar_p;
    int32_T idx_f4;
    int32_T idx_col_d;
    int32_T nDepIneq;
    int32_T k_eb;
    int32_T nWFixed;
    int32_T idx_global;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T b_idx_local;
    int32_T c_i_l;
    int32_T mIneq_ez;
    int32_T colOffsetATw;
    int32_T aoffset_h;
    int32_T j_gg;
    int32_T knt_p;
    int32_T coltop_n;
    int32_T maxRegVar;
    int32_T d_i;
    int32_T iy_o;
    int32_T iy_l;
    int32_T lastColC;
    int32_T br;
    int32_T lastColC_f;
    int32_T br_h;
    int32_T ar;
    int32_T ia_d4;
    int32_T kend;
    int32_T k_mf;
    int32_T idx_i;
    int32_T iy_j;
    int32_T jBcol_p;
    int32_T kAcol;
    int32_T idx_db;
    int32_T b_idx_j;
    int32_T ix0_k;
    int32_T k_mc;
    int32_T ix_do;
    int32_T jjA;
    int32_T i_p;
    int32_T jBcol_i;
    int32_T jBcol_g;
    int32_T iy_e;
    int32_T iy_h;
    int32_T iL0;
    int32_T c_idx;
    int32_T ix_g;
    int32_T iL0_c;
    int32_T c_idx_a;
    int32_T ix_fp;
    int32_T nDepIneq_i;
    int32_T k_c;
    int32_T idx_n;
    int32_T jy_c;
    int32_T iy_c4;
    int32_T b_index;
    int32_T iCol;
    int32_T idx_ik;
    int32_T colOffsetAeq;
    int32_T b_iy_h;
    uint32_T bpIdx;
    SL_Bus_proc_control_node_std_msgs_Float32 b_varargout_2_m;
    SL_Bus_proc_control_node_std_msgs_Float32 BusAssignment_h;// '<S79>/Bus Assignment' 
    ZCEventType zcEvent;
    boolean_T b_go[4];
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T DataTypeConversion_j;      // '<S10>/Data Type Conversion'
    boolean_T NOT;                     // '<S292>/NOT'
    boolean_T Merge1;                  // '<S9>/Merge1'
    boolean_T isMpcAlive;              // '<S143>/Data Type Conversion3'
    boolean_T thrustersStatus[8];      // '<S142>/MPC manager'
    boolean_T ZeroOrderHold2;          // '<S5>/Zero-Order Hold2'
    boolean_T ZeroOrderHold1;          // '<S5>/Zero-Order Hold1'
    B_MATLABFunction1_proc_contro_T sf_MATLABFunction1_p;// '<S351>/MATLAB Function1' 
    B_MATLABFunction1_proc_contro_T sf_MATLABFunction1_n;// '<S353>/MATLAB Function1' 
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_node_T {
    TrajectoryManager_proc_contro_T obj;// '<S355>/MATLAB System'
    OpenLoopController_proc_contr_T obj_m;// '<S147>/MATLAB System'
    mpcManager_proc_control_node_T obj_f;// '<S142>/MPC manager'
    robotics_slcore_internal_bloc_T obj_j;// '<S371>/Rotation Trajectory'
    robotics_slcore_internal_bl_b_T obj_jo;// '<S389>/Polynomial Trajectory1'
    AddPose_proc_control_node_T obj_a; // '<S355>/MATLAB System1'
    rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
    ros_slroscpp_internal_block_S_T obj_b;// '<S395>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S394>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_h;// '<S393>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_o;// '<S392>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S391>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S390>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S369>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_c;// '<S358>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S286>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k;// '<S285>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S63>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_d;// '<S62>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_l;// '<S61>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S69>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S68>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i;// '<S67>/SourceBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S129>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_e;// '<S125>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S121>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_lf;// '<S117>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_mj;// '<S116>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_p;// '<S115>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_lfs;// '<S114>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_fh;// '<S92>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ab;// '<S89>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kd;// '<S86>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S84>/SinkBlock'
    real_T _DSTATE[8];                 // '<S294>/ '
    real_T Delay_DSTATE;               // '<S3>/Delay'
    real_T Integrator_DSTATE[6];       // '<S361>/Integrator'
    real_T Integrator_DSTATE_l[6];     // '<S362>/Integrator'
    real_T Delay_DSTATE_e;             // '<S10>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S371>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S328>/Delay'
    real_T Integrator_DSTATE_o;        // '<S307>/Integrator'
    real_T UD_DSTATE;                  // '<S295>/UD'
    real_T Delay_DSTATE_k;             // '<S143>/Delay'
    real_T last_mv_DSTATE[8];          // '<S154>/last_mv'
    real_T Delay1_DSTATE[8];           // '<S144>/Delay1'
    real_T Delay_DSTATE_a[8];          // '<S149>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S263>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S263>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S263>/slack_delay'
    real_T last_mv_DSTATE_n[8];        // '<S230>/last_mv'
    real_T Delay1_DSTATE_g[88];        // '<S148>/Delay1'
    real_T UD_DSTATE_i[6];             // '<S226>/UD'
    real_T last_mv_DSTATE_f[8];        // '<S196>/last_mv'
    real_T Delay1_DSTATE_e[8];         // '<S145>/Delay1'
    real_T P[169];                     // '<S342>/DataStoreMemory - P'
    real_T x[13];                      // '<S342>/DataStoreMemory - x'
    real_T XDrift_NextOutput;          // '<S14>/X Drift'
    real_T YDrift_NextOutput;          // '<S14>/Y Drift'
    real_T NextOutput;                 // '<S25>/White Noise'
    real_T NextOutput_b;               // '<S26>/White Noise'
    real_T NextOutput_g;               // '<S27>/White Noise'
    real_T NextOutput_l;               // '<S28>/White Noise'
    real_T NextOutput_e;               // '<S29>/White Noise'
    int32_T clockTickCounter;          // '<S144>/Pulse Generator'
    int32_T clockTickCounter_p;        // '<S149>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S148>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S145>/Pulse Generator'
    uint32_T m_bpIndex[8];             // '<S143>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S143>/N to PWM'
    uint32_T RandSeed;                 // '<S14>/X Drift'
    uint32_T RandSeed_a;               // '<S14>/Y Drift'
    uint32_T m_bpIndex_m[8];           // '<S13>/ PWM to N'
    uint32_T RandSeed_j;               // '<S25>/White Noise'
    uint32_T RandSeed_d;               // '<S26>/White Noise'
    uint32_T RandSeed_e;               // '<S27>/White Noise'
    uint32_T RandSeed_n;               // '<S28>/White Noise'
    uint32_T RandSeed_b;               // '<S29>/White Noise'
    int_T Integrator_IWORK;            // '<S1>/Integrator'
    int_T Integrator1_IWORK;           // '<S1>/Integrator1'
    int_T Integrator2_IWORK;           // '<S1>/Integrator2'
    int_T Integrator3_IWORK;           // '<S1>/Integrator3'
    uint16_T Delay_DSTATE_g[8];        // '<S7>/Delay'
    boolean_T Delay1_DSTATE_c;         // '<S355>/Delay1'
    int8_T SwitchCase_ActiveSubsystem; // '<S3>/Switch Case'
    int8_T Integrator_PrevResetState;  // '<S361>/Integrator'
    int8_T Integrator_PrevResetState_h;// '<S362>/Integrator'
    int8_T SwitchCase_ActiveSubsystem_m;// '<S9>/Switch Case'
    int8_T Integrator_PrevResetState_d;// '<S307>/Integrator'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S141>/Switch Case'
    uint8_T Integrator_IC_LOADING;     // '<S307>/Integrator'
    boolean_T Memory_PreviousInput[32];// '<S154>/Memory'
    boolean_T icLoad;                  // '<S263>/mv_Delay'
    boolean_T icLoad_a;                // '<S263>/x_Delay'
    boolean_T icLoad_j;                // '<S263>/slack_delay'
    boolean_T Memory_PreviousInput_p[32];// '<S230>/Memory'
    boolean_T Memory_PreviousInput_g[32];// '<S196>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S76>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S77>/Memory'
    boolean_T Subsystem_MODE;          // '<S8>/Subsystem'
    boolean_T MPCmanager_MODE;         // '<S7>/MPC manager'
    boolean_T SensorManager_MODE;      // '<Root>/Sensor Manager'
    boolean_T SendDatatoROS_MODE;      // '<Root>/Send Data to ROS'
    boolean_T ROSOutput_MODE;          // '<Root>/ROS Output'
    boolean_T Plotvalues_MODE;         // '<Root>/Plot values'
    boolean_T ModlePhysique_MODE;      // '<Root>/Modèle Physique'
  };

  // Continuous states (default storage)
  struct X_proc_control_node_T {
    real_T TransferFcn_CSTATE;         // '<S17>/Transfer Fcn'
    real_T TransferFcn_CSTATE_o;       // '<S18>/Transfer Fcn'
    real_T TransferFcn_CSTATE_p;       // '<S19>/Transfer Fcn'
    real_T TransferFcn_CSTATE_a;       // '<S20>/Transfer Fcn'
    real_T TransferFcn_CSTATE_f;       // '<S21>/Transfer Fcn'
    real_T TransferFcn_CSTATE_e;       // '<S22>/Transfer Fcn'
    real_T TransferFcn_CSTATE_ft;      // '<S23>/Transfer Fcn'
    real_T TransferFcn_CSTATE_fu;      // '<S24>/Transfer Fcn'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T Integrator1_CSTATE[4];      // '<S1>/Integrator1'
    real_T Integrator2_CSTATE[3];      // '<S1>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
  };

  // State derivatives (default storage)
  struct XDot_proc_control_node_T {
    real_T TransferFcn_CSTATE;         // '<S17>/Transfer Fcn'
    real_T TransferFcn_CSTATE_o;       // '<S18>/Transfer Fcn'
    real_T TransferFcn_CSTATE_p;       // '<S19>/Transfer Fcn'
    real_T TransferFcn_CSTATE_a;       // '<S20>/Transfer Fcn'
    real_T TransferFcn_CSTATE_f;       // '<S21>/Transfer Fcn'
    real_T TransferFcn_CSTATE_e;       // '<S22>/Transfer Fcn'
    real_T TransferFcn_CSTATE_ft;      // '<S23>/Transfer Fcn'
    real_T TransferFcn_CSTATE_fu;      // '<S24>/Transfer Fcn'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T Integrator1_CSTATE[4];      // '<S1>/Integrator1'
    real_T Integrator2_CSTATE[3];      // '<S1>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
  };

  // State disabled
  struct XDis_proc_control_node_T {
    boolean_T TransferFcn_CSTATE;      // '<S17>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_o;    // '<S18>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_p;    // '<S19>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_a;    // '<S20>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_f;    // '<S21>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_e;    // '<S22>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_ft;   // '<S23>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_fu;   // '<S24>/Transfer Fcn'
    boolean_T Integrator_CSTATE[3];    // '<S1>/Integrator'
    boolean_T Integrator1_CSTATE[4];   // '<S1>/Integrator1'
    boolean_T Integrator2_CSTATE[3];   // '<S1>/Integrator2'
    boolean_T Integrator3_CSTATE[3];   // '<S1>/Integrator3'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_node_T {
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S355>/Trajectory generator'
    ZCSigState Integrator_Reset_ZCE;   // '<S1>/Integrator'
    ZCSigState Integrator1_Reset_ZCE;  // '<S1>/Integrator1'
    ZCSigState Integrator2_Reset_ZCE;  // '<S1>/Integrator2'
    ZCSigState Integrator3_Reset_ZCE;  // '<S1>/Integrator3'
  };

  // Parameters (default storage)
  struct P_proc_control_node_T {
    struct_FqrHx7QY0wpF1HYahFYzXB MPC; // Variable: MPC
                                          //  Referenced by:
                                          //    '<S118>/Constant'
                                          //    '<S118>/Constant1'
                                          //    '<S143>/PSU safe'
                                          //    '<S351>/Constant3'
                                          //    '<S353>/Constant3'
                                          //    '<S354>/Constant3'
                                          //    '<S144>/Constant1'
                                          //    '<S144>/Constant3'
                                          //    '<S145>/Constant1'
                                          //    '<S145>/Constant3'
                                          //    '<S148>/Constant1'
                                          //    '<S148>/Constant3'

    struct_ZrQKn1ZmSobvV9swgXlOXB physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S16>/Constant'
                                             //    '<S81>/Constant'
                                             //    '<S289>/Constant'
                                             //    '<S147>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S10>/MATLAB System'

    struct_AffJq6cCxQVAMZUY7gzatF simulation;// Variable: simulation
                                                //  Referenced by:
                                                //    '<S16>/Constant1'
                                                //    '<S16>/Gain'
                                                //    '<S16>/Gain1'
                                                //    '<S81>/ '
                                                //    '<S81>/  '
                                                //    '<S290>/Constant1'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S13>/ PWM to N'
                                          //    '<S143>/N to A'
                                          //    '<S143>/N to PWM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S147>/MATLAB System'

    real_T dMaxX;                      // Variable: dMaxX
                                          //  Referenced by: '<S14>/X Drift'

    real_T dMaxY;                      // Variable: dMaxY
                                          //  Referenced by: '<S14>/Y Drift'

    real_T dMinX;                      // Variable: dMinX
                                          //  Referenced by: '<S14>/X Drift'

    real_T dMinY;                      // Variable: dMinY
                                          //  Referenced by: '<S14>/Y Drift'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S14>/X Drift'

    real_T dSeedY;                     // Variable: dSeedY
                                          //  Referenced by: '<S14>/Y Drift'

    real_T dampA;                      // Variable: dampA
                                          //  Referenced by: '<S14>/Constant'

    real_T dampB;                      // Variable: dampB
                                          //  Referenced by: '<S14>/Constant1'

    real_T ratioMax;                   // Variable: ratioMax
                                          //  Referenced by: '<S14>/Saturation'

    real_T ratioMin;                   // Variable: ratioMin
                                          //  Referenced by: '<S14>/Saturation'

    real_T waPhi;                      // Variable: waPhi
                                          //  Referenced by: '<S14>/Roll Wave'

    real_T waPsi;                      // Variable: waPsi
                                          //  Referenced by: '<S14>/Yaw Wave'

    real_T waTheta;                    // Variable: waTheta
                                          //  Referenced by: '<S14>/Pitch Wave'

    real_T waX;                        // Variable: waX
                                          //  Referenced by: '<S14>/X Wave'

    real_T waY;                        // Variable: waY
                                          //  Referenced by: '<S14>/Y Wave'

    real_T waZ;                        // Variable: waZ
                                          //  Referenced by: '<S14>/Z Wave'

    real_T wfPhi;                      // Variable: wfPhi
                                          //  Referenced by: '<S14>/Roll Wave'

    real_T wfPsi;                      // Variable: wfPsi
                                          //  Referenced by: '<S14>/Yaw Wave'

    real_T wfTheta;                    // Variable: wfTheta
                                          //  Referenced by: '<S14>/Pitch Wave'

    real_T wfX;                        // Variable: wfX
                                          //  Referenced by: '<S14>/X Wave'

    real_T wfY;                        // Variable: wfY
                                          //  Referenced by: '<S14>/Y Wave'

    real_T wfZ;                        // Variable: wfZ
                                          //  Referenced by: '<S14>/Z Wave'

    real_T wn_l;                       // Variable: wn_l
                                          //  Referenced by: '<S357>/Gain'

    real_T wpPhi;                      // Variable: wpPhi
                                          //  Referenced by: '<S14>/Roll Wave'

    real_T wpPsi;                      // Variable: wpPsi
                                          //  Referenced by: '<S14>/Yaw Wave'

    real_T wpTheta;                    // Variable: wpTheta
                                          //  Referenced by: '<S14>/Pitch Wave'

    real_T wpX;                        // Variable: wpX
                                          //  Referenced by: '<S14>/X Wave'

    real_T wpY;                        // Variable: wpY
                                          //  Referenced by: '<S14>/Y Wave'

    real_T wpZ;                        // Variable: wpZ
                                          //  Referenced by: '<S14>/Z Wave'

    real_T zeta_l;                     // Variable: zeta_l
                                          //  Referenced by: '<S357>/Gain'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S143>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S13>/ PWM to N'
                                          //    '<S143>/N to PWM'

    real_T BandLimitedWhiteNoise_Cov;
                                    // Mask Parameter: BandLimitedWhiteNoise_Cov
                                       //  Referenced by: '<S25>/Output'

    real_T BandLimitedWhiteNoise1_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise1_Cov
                                      //  Referenced by: '<S26>/Output'

    real_T BandLimitedWhiteNoise2_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise2_Cov
                                      //  Referenced by: '<S27>/Output'

    real_T BandLimitedWhiteNoise3_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise3_Cov
                                      //  Referenced by: '<S28>/Output'

    real_T BandLimitedWhiteNoise4_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise4_Cov
                                      //  Referenced by: '<S29>/Output'

    real_T SecondOrderFilter_FilterType;
                                 // Mask Parameter: SecondOrderFilter_FilterType
                                    //  Referenced by: '<S357>/Constant4'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S226>/UD'

    real_T DiscreteDerivative_ICPrevScal_m;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_m
                                 //  Referenced by: '<S295>/UD'

    real_T LowPassFilter_K;            // Mask Parameter: LowPassFilter_K
                                          //  Referenced by: '<S296>/K'

    real_T LowPassFilter_T;            // Mask Parameter: LowPassFilter_T
                                          //  Referenced by: '<S302>/Time constant'

    real_T BandLimitedWhiteNoise_seed;
                                   // Mask Parameter: BandLimitedWhiteNoise_seed
                                      //  Referenced by: '<S25>/White Noise'

    real_T BandLimitedWhiteNoise1_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise1_seed
                                     //  Referenced by: '<S26>/White Noise'

    real_T BandLimitedWhiteNoise2_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise2_seed
                                     //  Referenced by: '<S27>/White Noise'

    real_T BandLimitedWhiteNoise3_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise3_seed
                                     //  Referenced by: '<S28>/White Noise'

    real_T BandLimitedWhiteNoise4_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise4_seed
                                     //  Referenced by: '<S29>/White Noise'

    boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S76>/Initial Condition'
                                   //    '<S76>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S77>/Initial Condition'
                                  //    '<S77>/Memory'

    SL_Bus_proc_control_node_sonia_common_MpcInfo Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S119>/Constant'

    SL_Bus_proc_control_node_sonia_common_MpcGains Out1_Y0;// Computed Parameter: Out1_Y0
                                                              //  Referenced by: '<S288>/Out1'

    SL_Bus_proc_control_node_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                      //  Referenced by: '<S286>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                     //  Referenced by: '<S287>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S285>/Constant'

    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S110>/Constant'

    SL_Bus_proc_control_node_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                                    //  Referenced by: '<S126>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                          //  Referenced by: '<S70>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                 //  Referenced by: '<S67>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                          //  Referenced by: '<S64>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_l1;// Computed Parameter: Constant_Value_l1
                                                                  //  Referenced by: '<S61>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                 //  Referenced by: '<S87>/Constant'

    SL_Bus_proc_control_node_gazebo_msgs_ModelState Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S90>/Constant'

    struct_fCppgaREqjbtxAN9QqIjrB MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S142>/MPC param'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_ma;// Computed Parameter: Out1_Y0_ma
                                                                      //  Referenced by: '<S72>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                      //  Referenced by: '<S69>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                                      //  Referenced by: '<S65>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_f2;// Computed Parameter: Constant_Value_f2
                                                                      //  Referenced by: '<S62>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S82>/Constant'

    struct_4PbJwSXWqPjMkDpID5GvdG Output_Y0;// Computed Parameter: Output_Y0
                                               //  Referenced by: '<S6>/Output'

    struct_PfHmiUbQ4BloXTikN7th4F CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S1>/Clean Output'

    struct_PfHmiUbQ4BloXTikN7th4F Output_Y0_k;// Computed Parameter: Output_Y0_k
                                                 //  Referenced by: '<S4>/Output'

    struct_nUfw8kBPNF0FwLMMzG6AD SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                     //  Referenced by: '<S1>/Sensors Output'

    SL_Bus_proc_control_node_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                               //  Referenced by: '<S388>/Out1'

    SL_Bus_proc_control_node_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                      //  Referenced by: '<S369>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                             //  Referenced by: '<S401>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                    //  Referenced by: '<S395>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                               //  Referenced by: '<S363>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                      //  Referenced by: '<S358>/Constant'

    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                                     //  Referenced by: '<S396>/Out1'

    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                                      //  Referenced by: '<S390>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                               //  Referenced by: '<S109>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_c2;// Computed Parameter: Constant_Value_c2
                                                                //  Referenced by: '<S112>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                               //  Referenced by: '<S124>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                        //  Referenced by: '<S398>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                                //  Referenced by: '<S392>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                        //  Referenced by: '<S399>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S393>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                        //  Referenced by: '<S400>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                               //  Referenced by: '<S394>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                           //  Referenced by: '<S71>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                  //  Referenced by: '<S68>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_nb;// Computed Parameter: Out1_Y0_nb
                                                            //  Referenced by: '<S66>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_oz;// Computed Parameter: Constant_Value_oz
                                                                   //  Referenced by: '<S63>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_bv;// Computed Parameter: Constant_Value_bv
                                                                   //  Referenced by: '<S85>/Constant'

    SL_Bus_proc_control_node_std_msgs_Int8 Constant_Value_ly;// Computed Parameter: Constant_Value_ly
                                                                //  Referenced by: '<S111>/Constant'

    SL_Bus_proc_control_node_std_msgs_UInt8 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                         //  Referenced by: '<S397>/Out1'

    SL_Bus_proc_control_node_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                //  Referenced by: '<S391>/Constant'

    real_T TransferFcn_A;              // Computed Parameter: TransferFcn_A
                                          //  Referenced by: '<S17>/Transfer Fcn'

    real_T TransferFcn_C;              // Computed Parameter: TransferFcn_C
                                          //  Referenced by: '<S17>/Transfer Fcn'

    real_T TransferFcn_A_j;            // Computed Parameter: TransferFcn_A_j
                                          //  Referenced by: '<S18>/Transfer Fcn'

    real_T TransferFcn_C_m;            // Computed Parameter: TransferFcn_C_m
                                          //  Referenced by: '<S18>/Transfer Fcn'

    real_T TransferFcn_A_h;            // Computed Parameter: TransferFcn_A_h
                                          //  Referenced by: '<S19>/Transfer Fcn'

    real_T TransferFcn_C_l;            // Computed Parameter: TransferFcn_C_l
                                          //  Referenced by: '<S19>/Transfer Fcn'

    real_T TransferFcn_A_i;            // Computed Parameter: TransferFcn_A_i
                                          //  Referenced by: '<S20>/Transfer Fcn'

    real_T TransferFcn_C_f;            // Computed Parameter: TransferFcn_C_f
                                          //  Referenced by: '<S20>/Transfer Fcn'

    real_T TransferFcn_A_jp;           // Computed Parameter: TransferFcn_A_jp
                                          //  Referenced by: '<S21>/Transfer Fcn'

    real_T TransferFcn_C_n;            // Computed Parameter: TransferFcn_C_n
                                          //  Referenced by: '<S21>/Transfer Fcn'

    real_T TransferFcn_A_l;            // Computed Parameter: TransferFcn_A_l
                                          //  Referenced by: '<S22>/Transfer Fcn'

    real_T TransferFcn_C_nr;           // Computed Parameter: TransferFcn_C_nr
                                          //  Referenced by: '<S22>/Transfer Fcn'

    real_T TransferFcn_A_p;            // Computed Parameter: TransferFcn_A_p
                                          //  Referenced by: '<S23>/Transfer Fcn'

    real_T TransferFcn_C_h;            // Computed Parameter: TransferFcn_C_h
                                          //  Referenced by: '<S23>/Transfer Fcn'

    real_T TransferFcn_A_n;            // Computed Parameter: TransferFcn_A_n
                                          //  Referenced by: '<S24>/Transfer Fcn'

    real_T TransferFcn_C_fa;           // Computed Parameter: TransferFcn_C_fa
                                          //  Referenced by: '<S24>/Transfer Fcn'

    real_T ZDrift_Value;               // Expression: 0
                                          //  Referenced by: '<S14>/Z Drift'

    real_T XWave_Bias;                 // Expression: 0
                                          //  Referenced by: '<S14>/X Wave'

    real_T YWave_Bias;                 // Expression: 0
                                          //  Referenced by: '<S14>/Y Wave'

    real_T ZWave_Bias;                 // Expression: 0
                                          //  Referenced by: '<S14>/Z Wave'

    real_T RollWave_Bias;              // Expression: 0
                                          //  Referenced by: '<S14>/Roll Wave'

    real_T PitchWave_Bias;             // Expression: 0
                                          //  Referenced by: '<S14>/Pitch Wave'

    real_T YawWave_Bias;               // Expression: 0
                                          //  Referenced by: '<S14>/Yaw Wave'

    real_T Constant2_Value[6];         // Expression: zeros(1,6)
                                          //  Referenced by: '<S14>/Constant2'

    real_T Switch_Threshold;           // Expression: 0
                                          //  Referenced by: '<S14>/Switch'

    real_T InitialBodyvelocity_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S1>/Initial Body velocity '

    real_T InitialAngularRates_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S1>/Initial Angular Rates'

    real_T ydevantZhaut_Value[3];      // Expression: [0,pi,pi/2]
                                          //  Referenced by: '<S16>/ y devant Z haut'

    real_T WhiteNoise_Mean;            // Expression: 0
                                          //  Referenced by: '<S25>/White Noise'

    real_T WhiteNoise_StdDev;          // Computed Parameter: WhiteNoise_StdDev
                                          //  Referenced by: '<S25>/White Noise'

    real_T WhiteNoise_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S26>/White Noise'

    real_T WhiteNoise_StdDev_d;       // Computed Parameter: WhiteNoise_StdDev_d
                                         //  Referenced by: '<S26>/White Noise'

    real_T WhiteNoise_Mean_c;          // Expression: 0
                                          //  Referenced by: '<S27>/White Noise'

    real_T WhiteNoise_StdDev_e;       // Computed Parameter: WhiteNoise_StdDev_e
                                         //  Referenced by: '<S27>/White Noise'

    real_T WhiteNoise_Mean_p;          // Expression: 0
                                          //  Referenced by: '<S28>/White Noise'

    real_T WhiteNoise_StdDev_j;       // Computed Parameter: WhiteNoise_StdDev_j
                                         //  Referenced by: '<S28>/White Noise'

    real_T WhiteNoise_Mean_l;          // Expression: 0
                                          //  Referenced by: '<S29>/White Noise'

    real_T WhiteNoise_StdDev_p;       // Computed Parameter: WhiteNoise_StdDev_p
                                         //  Referenced by: '<S29>/White Noise'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S42>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S42>/Gain1'

    real_T Constant_Value_mj;          // Expression: 0.5
                                          //  Referenced by: '<S42>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S42>/Gain2'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S36>/1//2'

    real_T Constant_Value_k2;          // Expression: 0.5
                                          //  Referenced by: '<S46>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S46>/Gain2'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S46>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S46>/Gain1'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S47>/Gain'

    real_T Constant_Value_gp;          // Expression: 0.5
                                          //  Referenced by: '<S47>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S47>/Gain2'

    real_T Gain1_Gain_eg;              // Expression: 2
                                          //  Referenced by: '<S47>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S48>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S48>/Gain1'

    real_T Constant_Value_iw;          // Expression: 0.5
                                          //  Referenced by: '<S48>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S48>/Gain2'

    real_T Constant_Value_ah;          // Expression: 0.5
                                          //  Referenced by: '<S52>/Constant'

    real_T Gain_Gain_a;                // Expression: 2
                                          //  Referenced by: '<S52>/Gain'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S52>/Gain1'

    real_T Gain2_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S52>/Gain2'

    real_T Constant_Value_ar;          // Expression: 0.5
                                          //  Referenced by: '<S53>/Constant'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S53>/Gain'

    real_T Gain1_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S53>/Gain1'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S53>/Gain2'

    real_T Constant_Value_i2;          // Expression: 0.5
                                          //  Referenced by: '<S54>/Constant'

    real_T Gain_Gain_b;                // Expression: 2
                                          //  Referenced by: '<S54>/Gain'

    real_T Gain1_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S54>/Gain1'

    real_T Gain2_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S54>/Gain2'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S60>/y'

    real_T Constant_Value_f2j;         // Expression: 0
                                          //  Referenced by: '<S60>/Constant'

    real_T Constant1_Value;            // Expression: 0
                                          //  Referenced by: '<S60>/Constant1'

    real_T ENU2NED_Value[3];           // Expression: [pi,0,0]
                                          //  Referenced by: '<S81>/ENU 2 NED'

    real_T u2_Gain_g;                  // Expression: 0.5
                                          //  Referenced by: '<S96>/1//2'

    real_T Constant_Value_pm;          // Expression: 0.5
                                          //  Referenced by: '<S104>/Constant'

    real_T Gain2_Gain_ao;              // Expression: 2
                                          //  Referenced by: '<S104>/Gain2'

    real_T Gain_Gain_l;                // Expression: 2
                                          //  Referenced by: '<S104>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S104>/Gain1'

    real_T Gain_Gain_d;                // Expression: 2
                                          //  Referenced by: '<S105>/Gain'

    real_T Constant_Value_fk;          // Expression: 0.5
                                          //  Referenced by: '<S105>/Constant'

    real_T Gain2_Gain_i;               // Expression: 2
                                          //  Referenced by: '<S105>/Gain2'

    real_T Gain1_Gain_h;               // Expression: 2
                                          //  Referenced by: '<S105>/Gain1'

    real_T Gain_Gain_f;                // Expression: 2
                                          //  Referenced by: '<S106>/Gain'

    real_T Gain1_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S106>/Gain1'

    real_T Constant_Value_ek;          // Expression: 0.5
                                          //  Referenced by: '<S106>/Constant'

    real_T Gain2_Gain_db;              // Expression: 2
                                          //  Referenced by: '<S106>/Gain2'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_pz;          // Expression: 1
                                          //  Referenced by: '<S136>/Constant'

    real_T Constant_Value_pmj;         // Expression: 1
                                          //  Referenced by: '<S137>/Constant'

    real_T Gain_Gain_ei;               // Expression: 180/pi
                                          //  Referenced by: '<S132>/Gain'

    real_T Gain_Gain_i;                // Expression: 180/pi
                                          //  Referenced by: '<S131>/Gain'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S193>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S193>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S193>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S196>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S193>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S196>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S196>/last_mv'

    real_T Constant_Value_e3[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S145>/Constant'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S196>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S193>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S193>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S193>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S196>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S196>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S193>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S196>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S193>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S193>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S196>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S193>/ecr.wt_zero'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S145>/Delay1'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S196>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S147>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S147>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S147>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S226>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S148>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S230>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S230>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S228>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S228>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S228>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S228>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S230>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S228>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S230>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S228>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S228>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S230>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S228>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S228>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S230>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S228>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S230>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S228>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S148>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(Xi.',11,1)
                                           //  Referenced by: '<S148>/Delay2'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S230>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S230>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S148>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S148>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S148>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S148>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S230>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S230>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S149>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S261>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S261>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S261>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S261>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S261>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S261>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S261>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S261>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S261>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S261>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S263>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S263>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S263>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S261>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T Constant_Value_lp;          // Expression: 1
                                          //  Referenced by: '<S188>/Constant'

    real_T Constant_Value_du;          // Expression: 1
                                          //  Referenced by: '<S189>/Constant'

    real_T E_zero_Value_e[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S150>/E_zero'

    real_T F_zero_Value_f[12];         // Expression: zeros(1,12)
                                          //  Referenced by: '<S150>/F_zero'

    real_T G_zero_Value_c;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/G_zero'

    real_T LastPcov_InitialCondition_g[400];// Expression: lastPcov
                                               //  Referenced by: '<S154>/LastPcov'

    real_T ywt_zero_Value[12];         // Expression: zeros(12,1)
                                          //  Referenced by: '<S150>/y.wt_zero'

    real_T uwt_zero_Value[8];          // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/u.wt_zero'

    real_T duwt_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/du.wt_zero'

    real_T extmv_zero_Value_k[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/ext.mv_zero'

    real_T extmv_scale_Gain_i[8];      // Expression: RMVscale
                                          //  Referenced by: '<S154>/ext.mv_scale'

    real_T last_mv_InitialCondition_j[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S154>/last_mv'

    real_T Constant_Value_oq[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S144>/Constant'

    real_T ym_zero_Value_k[12];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S154>/ym_zero'

    real_T md_zero_Value_m;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/md_zero'

    real_T umin_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/umin_zero'

    real_T umax_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/umax_zero'

    real_T ymin_zero_Value_j5[12];     // Expression: zeros(12,1)
                                          //  Referenced by: '<S150>/ymin_zero'

    real_T ymax_zero_Value_gg[12];     // Expression: zeros(12,1)
                                          //  Referenced by: '<S150>/ymax_zero'

    real_T umin_scale4_Gain_f[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S154>/umin_scale4'

    real_T ymin_scale1_Gain_j[12];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S154>/ymin_scale1'

    real_T S_zero_Value_d;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/S_zero'

    real_T ymin_scale2_Gain_b;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S154>/ymin_scale2'

    real_T switch_zero_Value_g;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/switch_zero'

    real_T mvtarget_zero_Value_o[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/mv.target_zero'

    real_T uref_scale_Gain_m[8];       // Expression: RMVscale
                                          //  Referenced by: '<S154>/uref_scale'

    real_T ecrwt_zero_Value_j;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/ecr.wt_zero'

    real_T Delay1_InitialCondition_l[8];// Expression: zeros(MPC.nu,1)
                                           //  Referenced by: '<S144>/Delay1'

    real_T u_scale_Gain_k[8];          // Expression: MVscale
                                          //  Referenced by: '<S154>/u_scale'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Period_g;    // Expression: 2
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_h;// Expression: 0
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S146>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S146>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S146>/Constant2'

    real_T Constant_Value_hf;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant1_Value_f;          // Expression: 0
                                          //  Referenced by: '<S7>/Constant1'

    real_T Merge_InitialOutput;       // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S141>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S143>/Delay'

    real_T Constant_Value_fa;          // Expression: 0
                                          //  Referenced by: '<S305>/Constant'

    real_T Gain_Gain_jj;               // Expression: 2
                                          //  Referenced by: '<S313>/Gain'

    real_T Gain1_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S313>/Gain1'

    real_T Constant_Value_a1;          // Expression: 0.5
                                          //  Referenced by: '<S313>/Constant'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S313>/Gain2'

    real_T Integrator_gainval;         // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S307>/Integrator'

    real_T Integrator_UpperSat;        // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S307>/Integrator'

    real_T Integrator_LowerSat;        // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S307>/Integrator'

    real_T Saturation_UpperSat;        // Expression: windupUpperLimit
                                          //  Referenced by: '<S307>/Saturation'

    real_T Saturation_LowerSat;        // Expression: windupLowerLimit
                                          //  Referenced by: '<S307>/Saturation'

    real_T TSamp_WtEt_d;               // Computed Parameter: TSamp_WtEt_d
                                          //  Referenced by: '<S295>/TSamp'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S331>/Quat'

    real_T siydevant_Value[3];         // Expression: [0,pi,pi/2]
                                          //  Referenced by: '<S331>/si y devant'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S332>/1//2'

    real_T enable_Y0;                  // Computed Parameter: enable_Y0
                                          //  Referenced by: '<S290>/enable'

    real_T error_Y0;                   // Computed Parameter: error_Y0
                                          //  Referenced by: '<S290>/error'

    real_T BodyVelocity_Y0;            // Computed Parameter: BodyVelocity_Y0
                                          //  Referenced by: '<S290>/Body Velocity'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S328>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S328>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S334>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S334>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S334>/Gain1'

    real_T Gain2_Gain_oj;              // Expression: 2
                                          //  Referenced by: '<S334>/Gain2'

    real_T Constant_Value_j;           // Expression: 0.5
                                          //  Referenced by: '<S335>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S335>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S335>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S335>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S336>/Constant'

    real_T Gain_Gain_n;                // Expression: 2
                                          //  Referenced by: '<S336>/Gain'

    real_T Gain1_Gain_ch;              // Expression: 2
                                          //  Referenced by: '<S336>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S336>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S293>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S342>/Q'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S342>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S342>/MeasurementFcn2Inputs'

    real_T R1_Value[81];               // Expression: p.R{1}
                                          //  Referenced by: '<S342>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S342>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S342>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S342>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S354>/Constant7'

    real_T Constant_Value_fi[13];     // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<S353>/Constant'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S355>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S355>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S355>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S366>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S366>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S366>/time'

    real_T Input_Y0;                   // Computed Parameter: Input_Y0
                                          //  Referenced by: '<S366>/Input'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S366>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S366>/Constant1'

    real_T Constant_Value_dt;          // Expression: 1
                                          //  Referenced by: '<S375>/Constant'

    real_T Constant_Value_eq;          // Expression: 1
                                          //  Referenced by: '<S376>/Constant'

    real_T Constant_Value_mn;          // Expression: 1
                                          //  Referenced by: '<S383>/Constant'

    real_T Constant_Value_jt;          // Expression: 1
                                          //  Referenced by: '<S384>/Constant'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S370>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S389>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S371>/Constant'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S371>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S371>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S355>/Constant'

    real_T Constant_Value_m5[13];     // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<S351>/Constant'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

    real_T Constant_Value_de;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S294>/ '

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T Constant_Value_as;          // Expression: 0
                                          //  Referenced by: '<S357>/Constant'

    real_T Constant3_Value;            // Expression: x0
                                          //  Referenced by: '<S357>/Constant3'

    real_T Integrator_gainval_o;     // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S361>/Integrator'

    real_T Integrator_UpperSat_a;      // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S361>/Integrator'

    real_T Integrator_LowerSat_g;      // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S361>/Integrator'

    real_T Saturation_UpperSat_f;      // Expression: windupUpperLimit
                                          //  Referenced by: '<S361>/Saturation'

    real_T Saturation_LowerSat_f;      // Expression: windupLowerLimit
                                          //  Referenced by: '<S361>/Saturation'

    real_T Gain3_Gain;                 // Expression: (2*pi*fn).^2
                                          //  Referenced by: '<S357>/Gain3'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S352>/Gain'

    real_T Constant1_Value_d;          // Expression: 0
                                          //  Referenced by: '<S357>/Constant1'

    real_T Constant2_Value_m;          // Expression: xdot0
                                          //  Referenced by: '<S357>/Constant2'

    real_T Integrator_gainval_e;     // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S362>/Integrator'

    real_T Integrator_UpperSat_f;      // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S362>/Integrator'

    real_T Integrator_LowerSat_p;      // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S362>/Integrator'

    real_T Saturation_UpperSat_m;      // Expression: windupUpperLimit
                                          //  Referenced by: '<S362>/Saturation'

    real_T Saturation_LowerSat_c;      // Expression: windupLowerLimit
                                          //  Referenced by: '<S362>/Saturation'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S224>/FixedHorizonOptimizer'

    int32_T FixedHorizonOptimizer_Ndis_d;// Expression: Ndis
                                            //  Referenced by: '<S258>/FixedHorizonOptimizer'

    int32_T FixedHorizonOptimizer_Ndis_l;// Expression: Ndis
                                            //  Referenced by: '<S182>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

    boolean_T depthnew_Y0;             // Computed Parameter: depthnew_Y0
                                          //  Referenced by: '<S59>/depth new'

    boolean_T depthnew_Y0_l;           // Computed Parameter: depthnew_Y0_l
                                          //  Referenced by: '<S58>/depth new'

    boolean_T Memory_InitialCondition[32];// Expression: iA
                                             //  Referenced by: '<S196>/Memory'

    boolean_T Memory_InitialCondition_p[32];// Expression: iA
                                               //  Referenced by: '<S230>/Memory'

    boolean_T Memory_InitialCondition_c[32];// Expression: iA
                                               //  Referenced by: '<S154>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S343>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S344>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S342>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S342>/Enable1'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S355>/Delay1'

    boolean_T Merge1_InitialOutput;  // Computed Parameter: Merge1_InitialOutput
                                        //  Referenced by: '<S9>/Merge1'

    uint8_T Switch_Threshold_d;        // Computed Parameter: Switch_Threshold_d
                                          //  Referenced by: '<S7>/Switch'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_proc_control_node_T {
    const char_T *errorStatus;
    RTWSolverInfo solverInfo;
    X_proc_control_node_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    real_T odeY[21];
    real_T odeF[3][21];
    ODE3_IntgData intgData;

    //
    //  Sizes:
    //  The following substructure contains sizes information
    //  for many of the model attributes such as inputs, outputs,
    //  dwork, sample times, etc.

    struct {
      int_T numContStates;
      int_T numPeriodicContStates;
      int_T numSampTimes;
    } Sizes;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_T clockTick0;
      uint32_T clockTickH0;
      time_T stepSize0;
      uint32_T clockTick1;
      uint32_T clockTickH1;
      boolean_T firstInitCondFlag;
      struct {
        uint16_T TID[7];
      } TaskCounters;

      SimTimeStep simTimeStep;
      boolean_T stopRequestedFlag;
      time_T *t;
      time_T tArray[7];
    } Timing;
  };

  // Copy Constructor
  proc_control_nodeModelClass(proc_control_nodeModelClass const&) =delete;

  // Assignment Operator
  proc_control_nodeModelClass& operator= (proc_control_nodeModelClass const&) & =
    delete;

  // Real-Time Model get method
  proc_control_nodeModelClass::RT_MODEL_proc_control_node_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  proc_control_nodeModelClass();

  // Destructor
  ~proc_control_nodeModelClass();

  // private data and function members
 private:
  // Block signals
  B_proc_control_node_T proc_control_node_B;

  // Block states
  DW_proc_control_node_T proc_control_node_DW;

  // Tunable parameters
  static P_proc_control_node_T proc_control_node_P;

  // Block continuous states
  X_proc_control_node_T proc_control_node_X;

  // Triggered events
  PrevZCX_proc_control_node_T proc_control_node_PrevZCX;

  // private member function(s) for subsystem '<S353>/MATLAB Function1'
  static void proc_control_no_MATLABFunction1(const real_T rtu_matrix[13],
    real_T rty_y[130], B_MATLABFunction1_proc_contro_T *localB);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_node_xnrm2_e(int32_T n, const real_T x[198], int32_T ix0);
  real_T proc_control_node_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_node_xgemv_k(int32_T m, int32_T n, const real_T A[198],
    int32_T ia0, const real_T x[198], int32_T ix0, real_T y[9]);
  void proc_control_node_xgerc_k(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[9], real_T A[198], int32_T ia0);
  void proc_control_node_qrFactor(const real_T A[117], const real_T S[169],
    const real_T Ns[81], real_T b_S[81]);
  void proc_control_node_trisolve_g(const real_T A[81], real_T B[117]);
  void proc_control_node_trisolve_ga(const real_T A[81], real_T B[117]);
  real_T proc_control_node_xnrm2_en(int32_T n, const real_T x[286], int32_T ix0);
  void proc_control_node_xgemv_kv(int32_T m, int32_T n, const real_T A[286],
    int32_T ia0, const real_T x[286], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_kg(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[286], int32_T ia0);
  void proc_control_node_qrFactor_a(const real_T A[169], real_T S[169], const
    real_T Ns[117]);
  real_T proc_control_node_xnrm2_k(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_node_xgemv_bs(int32_T m, int32_T n, const real_T A[48],
    int32_T ia0, const real_T x[48], int32_T ix0, real_T y[3]);
  void proc_control_node_xgerc_o(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[3], real_T A[48], int32_T ia0);
  void proc_control_node_qrFactor_l(const real_T A[39], const real_T S[169],
    const real_T Ns[9], real_T b_S[9]);
  void proc_control_node_trisolve_i(const real_T A[9], real_T B[39]);
  void proc_control_node_trisolve_iq(const real_T A[9], real_T B[39]);
  real_T proc_control_node_xnrm2_kt(int32_T n, const real_T x[208], int32_T ix0);
  void proc_control_node_xgemv_bsn(int32_T m, int32_T n, const real_T A[208],
    int32_T ia0, const real_T x[208], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_og(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[208], int32_T ia0);
  void proc_control_node_qrFactor_lm(const real_T A[169], real_T S[169], const
    real_T Ns[39]);
  real_T proc_control_node_erf(real_T x);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  real_T proc_control_node_xnrm2_cf(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_node_xgemv_l(int32_T m, int32_T n, const real_T A[338],
    int32_T ia0, const real_T x[338], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_eo(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[338], int32_T ia0);
  void proc_control_node_qrFactor_d(const real_T A[169], real_T S[169], const
    real_T Ns[169]);
  void proc_contr_quaternionBase_slerp(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T t,
    real_T *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  quaternion_proc_control_node_T proc_computeFirstQuatDerivative(real_T pn_a,
    real_T pn_b, real_T pn_c, real_T pn_d, real_T qn_a, real_T qn_b, real_T qn_c,
    real_T qn_d, real_T sd, real_T qinterp_a, real_T qinterp_b, real_T qinterp_c,
    real_T qinterp_d);
  void proc_control_node_rottraj(const real_T R0[4], const real_T RF[4], const
    real_T timeInterval[2], real_T t, real_T R[4], real_T omega[3], real_T
    alpha[3]);
  void proc_control_node_ppval_b(const real_T pp_breaks[4], const real_T
    pp_coefs[36], real_T x, real_T v[3]);
  real_T proc_control_node_norm_b4(const real_T x[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    const real_T poses[13], const real_T target[7], real_T reset, const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], real_T Anqv[169]);
  void proc_control_node_lusolve(const real_T A[169], const real_T B[169],
    real_T X[169]);
  void proc_co_PadeApproximantOfDegree(const real_T A[169], uint8_T m, real_T F
    [169]);
  void proc_control_node_WtMult(const real_T W[8], const real_T M[1280], int32_T
    nwt, real_T WM[1280]);
  int32_T proc_control_node_xpotrf(real_T b_A[289]);
  real_T proc_control_node_minimum(const real_T x[17]);
  void proc_control_n_mpc_checkhessian(real_T b_H[289], real_T L[289], real_T
    *BadH);
  void proc_control_node_trisolve(const real_T b_A[289], real_T b_B[289]);
  void proc_control_node_Unconstrained(const real_T b_Hinv[289], const real_T f
    [17], real_T x[17], int16_T n);
  real_T proc_control_node_norm(const real_T x[17]);
  void proc_control_node_abs(const real_T x[17], real_T y[17]);
  real_T proc_control_node_maximum(const real_T x[17]);
  void proc_control_node_abs_m(const real_T x[32], real_T y[32]);
  void proc_control_node_maximum2(const real_T x[32], real_T y, real_T ex[32]);
  real_T proc_control_node_xnrm2(int32_T n, const real_T x[289], int32_T ix0);
  void proc_control_node_xgemv(int32_T b_m, int32_T n, const real_T b_A[289],
    int32_T ia0, const real_T x[289], int32_T ix0, real_T y[17]);
  void proc_control_node_xgerc(int32_T b_m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[17], real_T b_A[289], int32_T ia0);
  void proc_control_node_qr(const real_T b_A[289], real_T Q[289], real_T R[289]);
  void proc_control_node_KWIKfactor(const real_T b_Ac[544], const int16_T iC[32],
    int16_T nA, const real_T b_Linv[289], real_T b_D[289], real_T b_H[289],
    int16_T n, real_T RLinv[289], real_T *Status);
  real_T proc_control_node_mtimes(const real_T b_A[17], const real_T b_B[17]);
  void proc_control_nod_DropConstraint(int16_T kDrop, int16_T iA[32], int16_T
    *nA, int16_T iC[32]);
  void proc_control_node_qpkwik(const real_T b_Linv[289], const real_T b_Hinv
    [289], const real_T f[17], const real_T b_Ac[544], const real_T b[32],
    int16_T iA[32], int16_T maxiter, real_T FeasTol, real_T x[17], real_T
    lambda[32], real_T *status);
  void proc_control_mpcblock_optimizer(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[32], const real_T b_Mlim[32],
    real_T b_Mx[672], real_T b_Mu1[256], real_T b_Mv[352], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[289], real_T b_Ac[544],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[1280], const real_T b_I1[640], const real_T b_A[441], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[273], const real_T
    Dv[143], const int32_T b_Mrows[32], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[32]);
  void proc_control_node_AUVQuatSimFcn(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  boolean_T proc_control_node_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_node_isequal_b(const real_T varargin_1[6], const real_T
    varargin_2[6]);
  void proc_control_node_mldivide(const real_T A[36], const real_T B[36], real_T
    Y[36]);
  void proc_control_no_mpc_plantupdate(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void proc_cont_mpc_constraintcoefLTV(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[1280], real_T b_SuJm[2080], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  void proc_control_node_kron(const real_T b_A[100], const real_T b_B[64],
    real_T K[6400]);
  void proc_contr_mpcblock_optimizer_d(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[32], const real_T b_Mlim[32],
    real_T b_Mx[672], real_T b_Mu1[256], real_T b_Mv[352], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[289], real_T b_Ac[544],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[1280], const real_T b_I1[640], const real_T b_A[4851], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[3003], const real_T
    Dv[143], const int32_T b_Mrows[32], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[32]);
  void proc_control_node_isfinite(const real_T x[8], boolean_T b[8]);
  void proc_control_node_mtimes_f(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control__znlmpc_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T *Bu_size);
  void proc_control_node_znlmpc_getXUe(const real_T z[147], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void proc_control_nod_stateEvolution(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[19110]);
  void proc_control_node_all(const boolean_T x[130], boolean_T y[13]);
  boolean_T proc_control_node_any(const boolean_T x[26]);
  void proc_cont_znlmpc_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    *Je_size, real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_node_outputBounds(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_co_eML_blk_kernel_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[147], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[19110]);
  void proc_control_n_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_UjlJWoQEHmSUKFcPTad7eC_proc_T *obj);
  void proc_cont_factoryConstruct_lnz4(int32_T MaxVars, int32_T *obj_grad_size,
    int32_T *obj_Hx_size, boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_lnz42(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj);
  void proc_control_node_loadProblem(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T mIneq, int32_T mLinIneq, const real_T Aineq_data[], int32_T mLB,
    int32_T mUB, int32_T mFixed, int32_T mConstrMax);
  int32_T proc_contr_checkVectorNonFinite(int32_T N, const real_T vec_data[],
    int32_T iv0);
  void computeObjectiveAndUserGradient(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T x[147], real_T
    grad_workspace_data[], real_T *fval, int32_T *status);
  int32_T proc_con_checkVectorNonFinite_g(const real_T vec[130]);
  int32_T proc_contr_checkMatrixNonFinite(int32_T ncols, const real_T mat_data[],
    int32_T col0, int32_T ldm);
  int32_T computeConstraintsAndUserJacobi(const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[147],
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
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[147],
    real_T grad_workspace_data[], real_T Cineq_workspace_data[], int32_T ineq0,
    real_T Ceq_workspace[130], real_T JacIneqTrans_workspace_data[], int32_T
    iJI_col, int32_T ldJI, real_T JacEqTrans_workspace_data[], int32_T ldJE,
    real_T *fval, int32_T *status);
  void proc_c_updateWorkingSetForNewQP(const real_T xk[147],
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *WorkingSet, int32_T mIneq, const real_T
    cIneq_data[], const real_T cEq[130], int32_T mLB, const real_T lb[147],
    int32_T mUB, int32_T mFixed);
  void proc_co_modifyOverheadPhaseOne_(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj);
  void proc_control_nod_setProblemType(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T PROBLEM_TYPE);
  void proc_control_node_initActiveSet(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj);
  void proc_contro_factoryConstruct_ln(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T *obj_jpvt_size, int32_T *obj_mrows, int32_T
    *obj_ncols, int32_T *obj_tau_size, int32_T *obj_minRowCol, boolean_T
    *obj_usedPivoting);
  void proc_contr_factoryConstruct_lnz(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_node_xgemv_m(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_nod_computeGradLag(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[147], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[147], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_node_saveJacobian(s_UjlJWoQEHmSUKFcPTad7eC_proc_T *obj,
    int32_T nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T
    ineqCol0, const real_T JacCeqTrans_data[], int32_T ldJ);
  void proc_control_node_saveState(s_UjlJWoQEHmSUKFcPTad7eC_proc_T *obj);
  real_T proc_control__computeComplError(const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    const real_T xCurrent[147], int32_T mIneq, const real_T cIneq_data[], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[147], const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[], int32_T iL0);
  void proc_control_node_xgemv_mt(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_n_computeGradLag_b(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  void proc_con_computeDualFeasError_b(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_updateWorkingSetForNewQP_l(const real_T xk[147],
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *WorkingSet, int32_T mIneq, int32_T
    mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], int32_T mLB,
    const real_T lb[147], int32_T mUB, int32_T mFixed);
  real_T proc_control_node_xnrm2_m(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_node_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_node_xgemv_mtm(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_node_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
  void proc_control_node_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void proc_control_node_qrf(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T nfxd, real_T tau_data[]);
  void proc_control_node_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T
    iy0);
  void proc_control_node_qrpf(real_T A_data[], const int32_T A_size[2], int32_T
    m, int32_T n, int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
  void proc_control_node_xgeqp3(real_T A_data[], const int32_T A_size[2],
    int32_T m, int32_T n, int32_T jpvt_data[], real_T tau_data[], int32_T
    *tau_size);
  void proc_control_node_factorQRE(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_node_xorgqr(int32_T m, int32_T n, int32_T k, real_T A_data[],
    const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_node_computeQ_(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj, int32_T
    nrows);
  void proc_control_node_xgemv_mtmc(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_xtrsv(int32_T n, const real_T A_data[], int32_T lda,
    real_T x_data[]);
  void proc_control_node_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  int32_T proc_control_node_ixamax(int32_T n, const real_T x_data[]);
  void proc_control_node_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T *fscales_lineq_constraint_size, const int32_T *
    fscales_cineq_constraint_size, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *WorkingSet,
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState, s_2F24x1ekvOt8ZUO1knVMv_proc__T
    *QRManager, const real_T lb[147]);
  void proc_contro_xgemv_mtmcjbiadz2ic(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0,
    real_T y_data[]);
  boolean_T proc_control_node_BFGSUpdate(int32_T nvar, real_T Bk[21609], const
    real_T sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_node_factorQRE_f(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj,
    int32_T mrows, int32_T ncols);
  void proc_control_node_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_node_removeConstr(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T idx_global);
  int32_T proc_control_RemoveDependentEq_(s_OnOuVjEActeQRN4FyNqSwB_proc_T
    *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *workingset,
    s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager);
  void proc_contro_removeAllIneqConstr(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj);
  void proc_contr_RemoveDependentIneq_(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *workingset, s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace);
  void proc_control_node_xgeqrf(real_T A_data[], const int32_T A_size[2],
    int32_T m, int32_T n, real_T tau_data[], int32_T *tau_size);
  void proc_control_node_factorQR_h(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_node_factorQR(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj, int32_T
    mrows, int32_T ncols);
  void proc_control_node_xgemv_mtmcjb(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_xgemv_mtmcj(int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_node_xgemv_mtmcjbi(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  real_T proc_c_maxConstraintViolation_d(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    const real_T x_data[], int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(real_T workspace_data[], const
    int32_T workspace_size[2], real_T xCurrent_data[],
    s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *workingset, s_2F24x1ekvOt8ZUO1knVMv_proc__T
    *qrmanager);
  void proc_con_RemoveDependentIneq__f(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *workingset, s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace);
  void proc_control_no_xgemv_mtmcjbiad(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_nod_xgemv_mtmcjbia(int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], real_T y_data[]);
  real_T proc__maxConstraintViolation_du(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *workingset, s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager);
  void proc_control_n_xgemv_mtmcjbiadz(int32_T m, int32_T n, const real_T A
    [21609], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_oZGbvi5mjKKebHB9aR5DoG_proc_T *obj,
    const real_T H[21609], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_oZGbvi5mjKKebHB9aR5DoG_proc_T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_node_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void proc_control_n_deleteColMoveEnd(s_2F24x1ekvOt8ZUO1knVMv_proc__T *obj,
    int32_T idx);
  boolean_T proc_control_node_strcmp(const char_T a[7]);
  void proc_control_node_xgemm(int32_T m, int32_T n, int32_T k, const real_T A
    [21609], int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb,
    real_T C_data[], int32_T ldc);
  void proc_control_node_xgemm_m(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  int32_T proc_control_node_ixamax_k(int32_T n, const real_T x_data[], int32_T
    incx);
  void proc_control_node_fullColLDL2_(s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  void proc_control_no_partialColLDL3_(s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_node_xpotrf_h(int32_T n, real_T A_data[], int32_T lda);
  void proc_control__xgemv_mtmcjbiadz2(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_factor(s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj, const
    real_T A[21609], int32_T ndims, int32_T ldA);
  void proc_control_node_solve(const s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_node_factor_p(s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj, const
    real_T A[21609], int32_T ndims, int32_T ldA);
  void proc_control_node_solve_l(const s_TNXzMnREVvDmNpLFpsTLBC_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_nod_compute_deltax(const real_T H[21609],
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution, s_OnOuVjEActeQRN4FyNqSwB_proc_T
    *memspace, const s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *cholmanager, const
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_node_xnrm2_md(int32_T n, const real_T x_data[]);
  void proc_control_xgemv_mtmcjbiadz2i(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control__feasibleratiotest(const real_T solution_xstar_data[], const
    real_T solution_searchDir_data[], real_T workspace_data[], const int32_T
    workspace_size[2], int32_T workingset_nVar, int32_T workingset_ldA, const
    real_T workingset_Aineq_data[], const real_T workingset_bineq_data[], const
    real_T workingset_lb_data[], const int32_T workingset_indexLB_data[], const
    int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
    boolean_T workingset_isActiveConstr_data[], const int32_T
    workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
    *newBlocking, int32_T *constrType, int32_T *constrIdx);
  void proc_c_checkUnboundedOrIllPosed(s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution,
    const s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective);
  void proc_addBoundToActiveSetMatrix_(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_nod_addAineqConstr(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T idx_local);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, const
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *
    workingset, s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
    updateFval);
  void proc_control_node_iterate(const real_T H[21609], const real_T f_data[],
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution, s_OnOuVjEActeQRN4FyNqSwB_proc_T
    *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *workingset,
    s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager, s_TNXzMnREVvDmNpLFpsTLBC_proc_T *
    cholmanager, s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective, const char_T
    options_SolverName[7], real_T options_StepTolerance, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
  void proc_control_node_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[21609], const real_T f_data[], const
    real_T x_data[]);
  real_T proc_control_node_computeFval(const s_oZGbvi5mjKKebHB9aR5DoG_proc_T
    *obj, real_T workspace_data[], const real_T H[21609], const real_T f_data[],
    const real_T x_data[]);
  void proc_control_node_phaseone(const real_T H[21609], const real_T f_data[],
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution, s_OnOuVjEActeQRN4FyNqSwB_proc_T
    *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *workingset,
    s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager, s_TNXzMnREVvDmNpLFpsTLBC_proc_T *
    cholmanager, s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_node_driver_i(const real_T H[21609], const real_T f_data[],
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *solution, s_OnOuVjEActeQRN4FyNqSwB_proc_T
    *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *workingset,
    s_2F24x1ekvOt8ZUO1knVMv_proc__T *qrmanager, s_TNXzMnREVvDmNpLFpsTLBC_proc_T *
    cholmanager, s_oZGbvi5mjKKebHB9aR5DoG_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, somzaGboVhDG7PNQS6E98jD_proc__T
    *runTimeOptions);
  void proc_control_node_addAeqConstr(s_UO30ZLdjVaUTEWcJEu5YnC_proc_T *obj,
    int32_T idx_local);
  boolean_T proc_control_node_soc(const real_T Hessian[21609], const real_T
    grad_data[], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *WorkingSet, s_2F24x1ekvOt8ZUO1knVMv_proc__T *QRManager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *CholManager,
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_node_normal(const real_T Hessian[21609], const real_T
    grad_data[], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *WorkingSet, s_2F24x1ekvOt8ZUO1knVMv_proc__T *QRManager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *CholManager,
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_node_relaxed(const real_T Hessian[21609], const real_T
    grad_data[], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *WorkingSet, s_2F24x1ekvOt8ZUO1knVMv_proc__T *QRManager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *CholManager,
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  boolean_T proc_control_node_step_k(int32_T *STEP_TYPE, real_T Hessian[21609],
    const real_T lb[147], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *WorkingSet, s_2F24x1ekvOt8ZUO1knVMv_proc__T *QRManager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *CholManager,
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_nod_outputBounds_p(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_control_n_stateEvolution_g(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc__eML_blk_kernel_anonFcn2_g(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[147], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130]);
  void proc_control_n_evalObjAndConstr(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[147],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[147], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T *workspaceIneq_size, int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_no_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_node_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_objfun_workspace_r, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_nonlcon_workspace_, int32_T
    FcnEvaluator_mCineq, boolean_T socTaken, real_T *alpha, int32_T *exitflag);
  void proc_control_node_driver(const real_T bineq_data[], const real_T lb[147],
    s_UjlJWoQEHmSUKFcPTad7eC_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const s_lkFpKxHZB0M4xOcTLHVN2_proc__T *FcnEvaluator,
    s_OnOuVjEActeQRN4FyNqSwB_proc_T *memspace, s_UO30ZLdjVaUTEWcJEu5YnC_proc_T
    *WorkingSet, s_2F24x1ekvOt8ZUO1knVMv_proc__T *QRManager,
    s_TNXzMnREVvDmNpLFpsTLBC_proc_T *CholManager,
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T *QPObjective, const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    real_T Hessian[21609]);
  void proc_control_node_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, real_T fun_workspace_userdata_Ts, const real_T
    fun_workspace_userdata_CurrentS[13], const real_T
    fun_workspace_userdata_LastMV[8], const real_T
    fun_workspace_userdata_Referenc[130], const real_T
    fun_workspace_userdata_MVTarget[80], real_T fun_workspace_userdata_Predicti,
    real_T fun_workspace_userdata_NumOfSta, real_T
    fun_workspace_userdata_NumOfOut, real_T fun_workspace_userdata_NumOfInp,
    const real_T fun_workspace_userdata_MVIndex[8], const real_T x0[147], const
    real_T Aineq_data[], const real_T bineq_data[], const int32_T *bineq_size,
    const real_T lb[147], const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *nonlcon_workspace_runtimedata, const s6FZHgorTEIlMmVIrDGGTjF_proc__T
    *nonlcon_workspace_userdata, real_T x[147], real_T *fval, real_T *exitflag,
    real_T *output_iterations, real_T *output_funcCount, char_T
    output_algorithm[3], real_T *output_constrviolation, real_T *output_stepsize,
    real_T *output_lssteplength, real_T *output_firstorderopt);
  void proc_control_node_lusolve_j(const real_T A[144], const real_T B[144],
    real_T X[144]);
  void proc__PadeApproximantOfDegree_k(const real_T A[144], uint8_T m, real_T F
    [144]);
  void proc_control_node_expm(real_T A[144], real_T F[144]);
  void proc_contr_mpcblock_optimizer_l(const real_T rseq[120], const real_T
    vseq[11], const real_T x[20], const real_T old_u[8], const boolean_T iA[32],
    const real_T b_Mlim[32], real_T b_Mx[640], real_T b_Mu1[256], real_T b_Mv
    [352], const real_T b_utarget[80], const real_T b_uoff[8], real_T b_H[289],
    real_T b_Ac[544], const real_T b_Wy[12], const real_T b_Wdu[8], const real_T
    b_Jm[1280], const real_T b_Wu[8], const real_T b_I1[640], const real_T b_A
    [400], const real_T Bu[1760], const real_T Bv[220], const real_T b_C[240],
    const real_T Dv[132], const int32_T b_Mrows[32], real_T u[8], real_T useq[88],
    real_T *status, boolean_T iAout[32]);
  void proc_control_nod_AUVEulerSimFcn(const real_T in1[12], const real_T in2[8],
    real_T out1[12]);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void proc_control_node_derivatives();

  // Real-Time Model
  RT_MODEL_proc_control_node_T proc_control_node_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S13>/N to RPM' : Unused code path elimination
//  Block '<S13>/Scope' : Unused code path elimination
//  Block '<S14>/Scope1' : Unused code path elimination
//  Block '<S40>/Constant' : Unused code path elimination
//  Block '<S40>/Gain' : Unused code path elimination
//  Block '<S40>/Gain1' : Unused code path elimination
//  Block '<S40>/Gain2' : Unused code path elimination
//  Block '<S40>/Product' : Unused code path elimination
//  Block '<S40>/Product1' : Unused code path elimination
//  Block '<S40>/Product2' : Unused code path elimination
//  Block '<S40>/Product3' : Unused code path elimination
//  Block '<S40>/Product4' : Unused code path elimination
//  Block '<S40>/Product5' : Unused code path elimination
//  Block '<S40>/Product6' : Unused code path elimination
//  Block '<S40>/Product7' : Unused code path elimination
//  Block '<S40>/Product8' : Unused code path elimination
//  Block '<S40>/Sum' : Unused code path elimination
//  Block '<S40>/Sum1' : Unused code path elimination
//  Block '<S40>/Sum2' : Unused code path elimination
//  Block '<S40>/Sum3' : Unused code path elimination
//  Block '<S41>/Constant' : Unused code path elimination
//  Block '<S41>/Gain' : Unused code path elimination
//  Block '<S41>/Gain1' : Unused code path elimination
//  Block '<S41>/Gain2' : Unused code path elimination
//  Block '<S41>/Product' : Unused code path elimination
//  Block '<S41>/Product1' : Unused code path elimination
//  Block '<S41>/Product2' : Unused code path elimination
//  Block '<S41>/Product3' : Unused code path elimination
//  Block '<S41>/Product4' : Unused code path elimination
//  Block '<S41>/Product5' : Unused code path elimination
//  Block '<S41>/Product6' : Unused code path elimination
//  Block '<S41>/Product7' : Unused code path elimination
//  Block '<S41>/Product8' : Unused code path elimination
//  Block '<S41>/Sum' : Unused code path elimination
//  Block '<S41>/Sum1' : Unused code path elimination
//  Block '<S41>/Sum2' : Unused code path elimination
//  Block '<S41>/Sum3' : Unused code path elimination
//  Block '<S16>/Scope' : Unused code path elimination
//  Block '<S2>/Scope' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S3>/Display' : Unused code path elimination
//  Block '<S74>/Data Type Duplicate' : Unused code path elimination
//  Block '<S76>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S75>/Data Type Duplicate' : Unused code path elimination
//  Block '<S77>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S154>/Floor' : Unused code path elimination
//  Block '<S154>/Floor1' : Unused code path elimination
//  Block '<S155>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S156>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S157>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S158>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S159>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S160>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S161>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S162>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S163>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S164>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S165>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S166>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S167>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S168>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S169>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S170>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S171>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S172>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S173>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S174>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S175>/Vector Dimension Check' : Unused code path elimination
//  Block '<S176>/Vector Dimension Check' : Unused code path elimination
//  Block '<S177>/Vector Dimension Check' : Unused code path elimination
//  Block '<S178>/Vector Dimension Check' : Unused code path elimination
//  Block '<S179>/Vector Dimension Check' : Unused code path elimination
//  Block '<S180>/Vector Dimension Check' : Unused code path elimination
//  Block '<S154>/last_x' : Unused code path elimination
//  Block '<S181>/Vector Dimension Check' : Unused code path elimination
//  Block '<S154>/useq_scale' : Unused code path elimination
//  Block '<S154>/useq_scale1' : Unused code path elimination
//  Block '<S150>/m_zero' : Unused code path elimination
//  Block '<S150>/p_zero' : Unused code path elimination
//  Block '<S196>/Floor' : Unused code path elimination
//  Block '<S196>/Floor1' : Unused code path elimination
//  Block '<S197>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S198>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S199>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S200>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S201>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S202>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S203>/Matrix Dimension Check' : Unused code path elimination
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
//  Block '<S217>/Vector Dimension Check' : Unused code path elimination
//  Block '<S218>/Vector Dimension Check' : Unused code path elimination
//  Block '<S219>/Vector Dimension Check' : Unused code path elimination
//  Block '<S220>/Vector Dimension Check' : Unused code path elimination
//  Block '<S221>/Vector Dimension Check' : Unused code path elimination
//  Block '<S222>/Vector Dimension Check' : Unused code path elimination
//  Block '<S196>/last_x' : Unused code path elimination
//  Block '<S223>/Vector Dimension Check' : Unused code path elimination
//  Block '<S196>/useq_scale' : Unused code path elimination
//  Block '<S196>/useq_scale1' : Unused code path elimination
//  Block '<S193>/m_zero' : Unused code path elimination
//  Block '<S193>/p_zero' : Unused code path elimination
//  Block '<S141>/Display' : Unused code path elimination
//  Block '<S226>/Data Type Duplicate' : Unused code path elimination
//  Block '<S230>/Floor' : Unused code path elimination
//  Block '<S230>/Floor1' : Unused code path elimination
//  Block '<S231>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S232>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S233>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S234>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S235>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S236>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S237>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S238>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S239>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S240>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S241>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S242>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S243>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S244>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S245>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S246>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S247>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S248>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S249>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S250>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S251>/Vector Dimension Check' : Unused code path elimination
//  Block '<S252>/Vector Dimension Check' : Unused code path elimination
//  Block '<S253>/Vector Dimension Check' : Unused code path elimination
//  Block '<S254>/Vector Dimension Check' : Unused code path elimination
//  Block '<S255>/Vector Dimension Check' : Unused code path elimination
//  Block '<S256>/Vector Dimension Check' : Unused code path elimination
//  Block '<S230>/last_x' : Unused code path elimination
//  Block '<S257>/Vector Dimension Check' : Unused code path elimination
//  Block '<S228>/m_zero' : Unused code path elimination
//  Block '<S228>/p_zero' : Unused code path elimination
//  Block '<S264>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S265>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S266>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S267>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S268>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S269>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S270>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S271>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S272>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S273>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S274>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S275>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S276>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S277>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S278>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S279>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S280>/Vector Dimension Check' : Unused code path elimination
//  Block '<S281>/Vector Dimension Check' : Unused code path elimination
//  Block '<S282>/Vector Dimension Check' : Unused code path elimination
//  Block '<S283>/Vector Dimension Check' : Unused code path elimination
//  Block '<S261>/mv.init_zero' : Unused code path elimination
//  Block '<S261>/x.init_zero' : Unused code path elimination
//  Block '<S143>/Scope1' : Unused code path elimination
//  Block '<S289>/Constant1' : Unused code path elimination
//  Block '<S295>/Data Type Duplicate' : Unused code path elimination
//  Block '<S289>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S311>/Constant' : Unused code path elimination
//  Block '<S311>/Gain' : Unused code path elimination
//  Block '<S311>/Gain1' : Unused code path elimination
//  Block '<S311>/Gain2' : Unused code path elimination
//  Block '<S311>/Product' : Unused code path elimination
//  Block '<S311>/Product1' : Unused code path elimination
//  Block '<S311>/Product2' : Unused code path elimination
//  Block '<S311>/Product3' : Unused code path elimination
//  Block '<S311>/Product4' : Unused code path elimination
//  Block '<S311>/Product5' : Unused code path elimination
//  Block '<S311>/Product6' : Unused code path elimination
//  Block '<S311>/Product7' : Unused code path elimination
//  Block '<S311>/Product8' : Unused code path elimination
//  Block '<S311>/Sum' : Unused code path elimination
//  Block '<S311>/Sum1' : Unused code path elimination
//  Block '<S311>/Sum2' : Unused code path elimination
//  Block '<S311>/Sum3' : Unused code path elimination
//  Block '<S312>/Constant' : Unused code path elimination
//  Block '<S312>/Gain' : Unused code path elimination
//  Block '<S312>/Gain1' : Unused code path elimination
//  Block '<S312>/Gain2' : Unused code path elimination
//  Block '<S312>/Product' : Unused code path elimination
//  Block '<S312>/Product1' : Unused code path elimination
//  Block '<S312>/Product2' : Unused code path elimination
//  Block '<S312>/Product3' : Unused code path elimination
//  Block '<S312>/Product4' : Unused code path elimination
//  Block '<S312>/Product5' : Unused code path elimination
//  Block '<S312>/Product6' : Unused code path elimination
//  Block '<S312>/Product7' : Unused code path elimination
//  Block '<S312>/Product8' : Unused code path elimination
//  Block '<S312>/Sum' : Unused code path elimination
//  Block '<S312>/Sum1' : Unused code path elimination
//  Block '<S312>/Sum2' : Unused code path elimination
//  Block '<S312>/Sum3' : Unused code path elimination
//  Block '<S316>/Product' : Unused code path elimination
//  Block '<S316>/Product1' : Unused code path elimination
//  Block '<S316>/Product2' : Unused code path elimination
//  Block '<S316>/Product3' : Unused code path elimination
//  Block '<S321>/Product' : Unused code path elimination
//  Block '<S321>/Product1' : Unused code path elimination
//  Block '<S321>/Product2' : Unused code path elimination
//  Block '<S321>/Product3' : Unused code path elimination
//  Block '<S321>/Sum' : Unused code path elimination
//  Block '<S320>/sqrt' : Unused code path elimination
//  Block '<S317>/Constant' : Unused code path elimination
//  Block '<S317>/Gain' : Unused code path elimination
//  Block '<S317>/Gain1' : Unused code path elimination
//  Block '<S317>/Gain2' : Unused code path elimination
//  Block '<S317>/Product' : Unused code path elimination
//  Block '<S317>/Product1' : Unused code path elimination
//  Block '<S317>/Product2' : Unused code path elimination
//  Block '<S317>/Product3' : Unused code path elimination
//  Block '<S317>/Product4' : Unused code path elimination
//  Block '<S317>/Product5' : Unused code path elimination
//  Block '<S317>/Product6' : Unused code path elimination
//  Block '<S317>/Product7' : Unused code path elimination
//  Block '<S317>/Product8' : Unused code path elimination
//  Block '<S317>/Sum' : Unused code path elimination
//  Block '<S317>/Sum1' : Unused code path elimination
//  Block '<S317>/Sum2' : Unused code path elimination
//  Block '<S317>/Sum3' : Unused code path elimination
//  Block '<S318>/Constant' : Unused code path elimination
//  Block '<S318>/Gain' : Unused code path elimination
//  Block '<S318>/Gain1' : Unused code path elimination
//  Block '<S318>/Gain2' : Unused code path elimination
//  Block '<S318>/Product' : Unused code path elimination
//  Block '<S318>/Product1' : Unused code path elimination
//  Block '<S318>/Product2' : Unused code path elimination
//  Block '<S318>/Product3' : Unused code path elimination
//  Block '<S318>/Product4' : Unused code path elimination
//  Block '<S318>/Product5' : Unused code path elimination
//  Block '<S318>/Product6' : Unused code path elimination
//  Block '<S318>/Product7' : Unused code path elimination
//  Block '<S318>/Product8' : Unused code path elimination
//  Block '<S318>/Sum' : Unused code path elimination
//  Block '<S318>/Sum1' : Unused code path elimination
//  Block '<S318>/Sum2' : Unused code path elimination
//  Block '<S318>/Sum3' : Unused code path elimination
//  Block '<S319>/Constant' : Unused code path elimination
//  Block '<S319>/Gain' : Unused code path elimination
//  Block '<S319>/Gain1' : Unused code path elimination
//  Block '<S319>/Gain2' : Unused code path elimination
//  Block '<S319>/Product' : Unused code path elimination
//  Block '<S319>/Product1' : Unused code path elimination
//  Block '<S319>/Product2' : Unused code path elimination
//  Block '<S319>/Product3' : Unused code path elimination
//  Block '<S319>/Product4' : Unused code path elimination
//  Block '<S319>/Product5' : Unused code path elimination
//  Block '<S319>/Product6' : Unused code path elimination
//  Block '<S319>/Product7' : Unused code path elimination
//  Block '<S319>/Product8' : Unused code path elimination
//  Block '<S319>/Sum' : Unused code path elimination
//  Block '<S319>/Sum1' : Unused code path elimination
//  Block '<S319>/Sum2' : Unused code path elimination
//  Block '<S319>/Sum3' : Unused code path elimination
//  Block '<S322>/Product' : Unused code path elimination
//  Block '<S322>/Product1' : Unused code path elimination
//  Block '<S322>/Product2' : Unused code path elimination
//  Block '<S322>/Product3' : Unused code path elimination
//  Block '<S327>/Product' : Unused code path elimination
//  Block '<S327>/Product1' : Unused code path elimination
//  Block '<S327>/Product2' : Unused code path elimination
//  Block '<S327>/Product3' : Unused code path elimination
//  Block '<S327>/Sum' : Unused code path elimination
//  Block '<S326>/sqrt' : Unused code path elimination
//  Block '<S323>/Constant' : Unused code path elimination
//  Block '<S323>/Gain' : Unused code path elimination
//  Block '<S323>/Gain1' : Unused code path elimination
//  Block '<S323>/Gain2' : Unused code path elimination
//  Block '<S323>/Product' : Unused code path elimination
//  Block '<S323>/Product1' : Unused code path elimination
//  Block '<S323>/Product2' : Unused code path elimination
//  Block '<S323>/Product3' : Unused code path elimination
//  Block '<S323>/Product4' : Unused code path elimination
//  Block '<S323>/Product5' : Unused code path elimination
//  Block '<S323>/Product6' : Unused code path elimination
//  Block '<S323>/Product7' : Unused code path elimination
//  Block '<S323>/Product8' : Unused code path elimination
//  Block '<S323>/Sum' : Unused code path elimination
//  Block '<S323>/Sum1' : Unused code path elimination
//  Block '<S323>/Sum2' : Unused code path elimination
//  Block '<S323>/Sum3' : Unused code path elimination
//  Block '<S324>/Constant' : Unused code path elimination
//  Block '<S324>/Gain' : Unused code path elimination
//  Block '<S324>/Gain1' : Unused code path elimination
//  Block '<S324>/Gain2' : Unused code path elimination
//  Block '<S324>/Product' : Unused code path elimination
//  Block '<S324>/Product1' : Unused code path elimination
//  Block '<S324>/Product2' : Unused code path elimination
//  Block '<S324>/Product3' : Unused code path elimination
//  Block '<S324>/Product4' : Unused code path elimination
//  Block '<S324>/Product5' : Unused code path elimination
//  Block '<S324>/Product6' : Unused code path elimination
//  Block '<S324>/Product7' : Unused code path elimination
//  Block '<S324>/Product8' : Unused code path elimination
//  Block '<S324>/Sum' : Unused code path elimination
//  Block '<S324>/Sum1' : Unused code path elimination
//  Block '<S324>/Sum2' : Unused code path elimination
//  Block '<S324>/Sum3' : Unused code path elimination
//  Block '<S325>/Constant' : Unused code path elimination
//  Block '<S325>/Gain' : Unused code path elimination
//  Block '<S325>/Gain1' : Unused code path elimination
//  Block '<S325>/Gain2' : Unused code path elimination
//  Block '<S325>/Product' : Unused code path elimination
//  Block '<S325>/Product1' : Unused code path elimination
//  Block '<S325>/Product2' : Unused code path elimination
//  Block '<S325>/Product3' : Unused code path elimination
//  Block '<S325>/Product4' : Unused code path elimination
//  Block '<S325>/Product5' : Unused code path elimination
//  Block '<S325>/Product6' : Unused code path elimination
//  Block '<S325>/Product7' : Unused code path elimination
//  Block '<S325>/Product8' : Unused code path elimination
//  Block '<S325>/Sum' : Unused code path elimination
//  Block '<S325>/Sum1' : Unused code path elimination
//  Block '<S325>/Sum2' : Unused code path elimination
//  Block '<S325>/Sum3' : Unused code path elimination
//  Block '<S289>/Scope1' : Unused code path elimination
//  Block '<S289>/Sum4' : Unused code path elimination
//  Block '<S291>/Scope' : Unused code path elimination
//  Block '<S291>/Scope1' : Unused code path elimination
//  Block '<S291>/Scope2' : Unused code path elimination
//  Block '<S291>/Scope3' : Unused code path elimination
//  Block '<S8>/Scope' : Unused code path elimination
//  Block '<S293>/Constant' : Unused code path elimination
//  Block '<S343>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S344>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S346>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S342>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S342>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S342>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S9>/Scope' : Unused code path elimination
//  Block '<S352>/Scope1' : Unused code path elimination
//  Block '<S353>/Scope' : Unused code path elimination
//  Block '<S353>/Scope1' : Unused code path elimination
//  Block '<S366>/Display' : Unused code path elimination
//  Block '<S366>/Selector3' : Unused code path elimination
//  Block '<S355>/Scope' : Unused code path elimination
//  Block '<S355>/Scope1' : Unused code path elimination
//  Block '<S355>/Scope2' : Unused code path elimination
//  Block '<S355>/Scope3' : Unused code path elimination
//  Block '<S371>/Scope' : Unused code path elimination
//  Block '<S154>/Reshape' : Reshape block reduction
//  Block '<S154>/Reshape1' : Reshape block reduction
//  Block '<S154>/Reshape2' : Reshape block reduction
//  Block '<S154>/Reshape3' : Reshape block reduction
//  Block '<S154>/Reshape4' : Reshape block reduction
//  Block '<S154>/Reshape5' : Reshape block reduction
//  Block '<S196>/Reshape' : Reshape block reduction
//  Block '<S196>/Reshape1' : Reshape block reduction
//  Block '<S196>/Reshape2' : Reshape block reduction
//  Block '<S196>/Reshape3' : Reshape block reduction
//  Block '<S196>/Reshape4' : Reshape block reduction
//  Block '<S196>/Reshape5' : Reshape block reduction
//  Block '<S230>/Reshape' : Reshape block reduction
//  Block '<S230>/Reshape1' : Reshape block reduction
//  Block '<S230>/Reshape2' : Reshape block reduction
//  Block '<S230>/Reshape3' : Reshape block reduction
//  Block '<S230>/Reshape4' : Reshape block reduction
//  Block '<S230>/Reshape5' : Reshape block reduction
//  Block '<S262>/Reshape1' : Reshape block reduction
//  Block '<S262>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S262>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S263>/reshape_mv' : Reshape block reduction
//  Block '<S342>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S342>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S293>/Zero-Order Hold' : Eliminated since input and output rates are identical


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
//  '<Root>' : 'proc_control_node'
//  '<S1>'   : 'proc_control_node/Modèle Physique'
//  '<S2>'   : 'proc_control_node/Plot values'
//  '<S3>'   : 'proc_control_node/ROS Input'
//  '<S4>'   : 'proc_control_node/ROS Output'
//  '<S5>'   : 'proc_control_node/Send Data to ROS'
//  '<S6>'   : 'proc_control_node/Sensor Manager'
//  '<S7>'   : 'proc_control_node/Subsystem Controller'
//  '<S8>'   : 'proc_control_node/Subsystem ProcNav'
//  '<S9>'   : 'proc_control_node/Subsystem Trajectory'
//  '<S10>'  : 'proc_control_node/Subsystem1'
//  '<S11>'  : 'proc_control_node/Modèle Physique/AUV State Equation'
//  '<S12>'  : 'proc_control_node/Modèle Physique/MATLAB Function'
//  '<S13>'  : 'proc_control_node/Modèle Physique/Modele Thruster'
//  '<S14>'  : 'proc_control_node/Modèle Physique/Perturbations'
//  '<S15>'  : 'proc_control_node/Modèle Physique/Quaternion Normalise'
//  '<S16>'  : 'proc_control_node/Modèle Physique/Sensor Model'
//  '<S17>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T1'
//  '<S18>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T2'
//  '<S19>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T3'
//  '<S20>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T4'
//  '<S21>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T5'
//  '<S22>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T6'
//  '<S23>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T7'
//  '<S24>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T8'
//  '<S25>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise'
//  '<S26>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise1'
//  '<S27>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise2'
//  '<S28>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise3'
//  '<S29>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise4'
//  '<S30>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse'
//  '<S31>'  : 'proc_control_node/Modèle Physique/Sensor Model/MATLAB Function'
//  '<S32>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Conjugate'
//  '<S33>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation'
//  '<S34>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1'
//  '<S35>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2'
//  '<S36>'  : 'proc_control_node/Modèle Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S37>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S38>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S39>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S40>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S41>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S42>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S43>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S44>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S45>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S46>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S47>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S48>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S49>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S50>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S51>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S52>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V1'
//  '<S53>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V2'
//  '<S54>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V3'
//  '<S55>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S56>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S57>'  : 'proc_control_node/ROS Input/Quaternion Normalise'
//  '<S58>'  : 'proc_control_node/ROS Input/Real System'
//  '<S59>'  : 'proc_control_node/ROS Input/Simulation'
//  '<S60>'  : 'proc_control_node/ROS Input/Subsystem'
//  '<S61>'  : 'proc_control_node/ROS Input/Real System/Subscribe'
//  '<S62>'  : 'proc_control_node/ROS Input/Real System/Subscribe1'
//  '<S63>'  : 'proc_control_node/ROS Input/Real System/Subscribe2'
//  '<S64>'  : 'proc_control_node/ROS Input/Real System/Subscribe/Enabled Subsystem'
//  '<S65>'  : 'proc_control_node/ROS Input/Real System/Subscribe1/Enabled Subsystem'
//  '<S66>'  : 'proc_control_node/ROS Input/Real System/Subscribe2/Enabled Subsystem'
//  '<S67>'  : 'proc_control_node/ROS Input/Simulation/Subscribe'
//  '<S68>'  : 'proc_control_node/ROS Input/Simulation/Subscribe depth'
//  '<S69>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1'
//  '<S70>'  : 'proc_control_node/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S71>'  : 'proc_control_node/ROS Input/Simulation/Subscribe depth/Enabled Subsystem'
//  '<S72>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S73>'  : 'proc_control_node/ROS Input/Subsystem/MATLAB Function'
//  '<S74>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable'
//  '<S75>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1'
//  '<S76>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable/Subsystem'
//  '<S77>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S78>'  : 'proc_control_node/ROS Output/Send DVL msg'
//  '<S79>'  : 'proc_control_node/ROS Output/Send Depth msg'
//  '<S80>'  : 'proc_control_node/ROS Output/Send IMU msg'
//  '<S81>'  : 'proc_control_node/ROS Output/Send to Gazebo'
//  '<S82>'  : 'proc_control_node/ROS Output/Send DVL msg/   '
//  '<S83>'  : 'proc_control_node/ROS Output/Send DVL msg/MATLAB Function'
//  '<S84>'  : 'proc_control_node/ROS Output/Send DVL msg/Publish'
//  '<S85>'  : 'proc_control_node/ROS Output/Send Depth msg/Blank Message'
//  '<S86>'  : 'proc_control_node/ROS Output/Send Depth msg/Publish Depth'
//  '<S87>'  : 'proc_control_node/ROS Output/Send IMU msg/   '
//  '<S88>'  : 'proc_control_node/ROS Output/Send IMU msg/MATLAB Function'
//  '<S89>'  : 'proc_control_node/ROS Output/Send IMU msg/Publish imu_info'
//  '<S90>'  : 'proc_control_node/ROS Output/Send to Gazebo/   '
//  '<S91>'  : 'proc_control_node/ROS Output/Send to Gazebo/MATLAB Function'
//  '<S92>'  : 'proc_control_node/ROS Output/Send to Gazebo/Publish'
//  '<S93>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse'
//  '<S94>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication'
//  '<S95>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation'
//  '<S96>'  : 'proc_control_node/ROS Output/Send to Gazebo/Rotation Angles to Quaternions'
//  '<S97>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse/Quaternion Conjugate'
//  '<S98>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse/Quaternion Norm'
//  '<S99>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q0'
//  '<S100>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q1'
//  '<S101>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q2'
//  '<S102>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q3'
//  '<S103>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize'
//  '<S104>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V1'
//  '<S105>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V2'
//  '<S106>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V3'
//  '<S107>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S108>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S109>' : 'proc_control_node/Send Data to ROS/Blank Message1'
//  '<S110>' : 'proc_control_node/Send Data to ROS/Blank Message2'
//  '<S111>' : 'proc_control_node/Send Data to ROS/Blank Message3'
//  '<S112>' : 'proc_control_node/Send Data to ROS/Blank Message4'
//  '<S113>' : 'proc_control_node/Send Data to ROS/MATLAB Function3'
//  '<S114>' : 'proc_control_node/Send Data to ROS/Publish1'
//  '<S115>' : 'proc_control_node/Send Data to ROS/Publish2'
//  '<S116>' : 'proc_control_node/Send Data to ROS/Publish3'
//  '<S117>' : 'proc_control_node/Send Data to ROS/Publish4'
//  '<S118>' : 'proc_control_node/Send Data to ROS/Subsystem'
//  '<S119>' : 'proc_control_node/Send Data to ROS/Subsystem/Blank Message5'
//  '<S120>' : 'proc_control_node/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S121>' : 'proc_control_node/Send Data to ROS/Subsystem/Publish5'
//  '<S122>' : 'proc_control_node/Sensor Manager/Send Sensor ON'
//  '<S123>' : 'proc_control_node/Sensor Manager/Send To Telemetry '
//  '<S124>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S125>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Publish'
//  '<S126>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Blank Message'
//  '<S127>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité'
//  '<S128>' : 'proc_control_node/Sensor Manager/Send To Telemetry /MATLAB Function1'
//  '<S129>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Publish'
//  '<S130>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles'
//  '<S131>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees'
//  '<S132>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees1'
//  '<S133>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation'
//  '<S134>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S135>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S136>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S137>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S138>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S139>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S140>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S141>' : 'proc_control_node/Subsystem Controller/Controller list'
//  '<S142>' : 'proc_control_node/Subsystem Controller/MPC manager'
//  '<S143>' : 'proc_control_node/Subsystem Controller/Post traitements'
//  '<S144>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler '
//  '<S145>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S146>' : 'proc_control_node/Subsystem Controller/Controller list/IDLE'
//  '<S147>' : 'proc_control_node/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S148>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S149>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
//  '<S150>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller'
//  '<S151>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux'
//  '<S152>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /MATLAB Function'
//  '<S153>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /MATLAB Function2'
//  '<S154>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC'
//  '<S155>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S156>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S157>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S158>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S159>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S160>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S161>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S162>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S163>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S164>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S165>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S166>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S167>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S168>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S169>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S170>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S171>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S172>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S173>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S174>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S175>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S176>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S177>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S178>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S179>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S180>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S181>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/moorx'
//  '<S182>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer'
//  '<S183>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S184>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles'
//  '<S185>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation'
//  '<S186>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S187>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S188>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S189>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S190>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S191>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S192>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S193>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S194>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S195>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /MATLAB Function2'
//  '<S196>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S197>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S198>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S199>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S200>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S201>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S202>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S203>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S204>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S205>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S206>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S207>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S208>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S209>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S210>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S211>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S212>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S213>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S214>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S215>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S216>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S217>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S218>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S219>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S220>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S221>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S222>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S223>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S224>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S225>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S226>' : 'proc_control_node/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S227>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S228>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S229>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S230>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S231>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S232>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S233>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S234>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S235>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S236>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S237>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S238>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S239>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S240>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S241>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S242>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S243>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S244>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S245>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S246>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S247>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S248>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S249>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S250>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S251>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S252>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S253>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S254>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S255>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S256>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S257>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S258>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S259>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S260>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S261>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S262>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S263>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S264>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S265>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S266>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S267>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S268>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S269>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S270>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S271>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S272>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S273>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S274>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S275>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S276>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S277>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S278>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S279>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S280>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S281>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S282>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S283>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S284>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S285>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe'
//  '<S286>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe1'
//  '<S287>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S288>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S289>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S290>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments'
//  '<S291>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus'
//  '<S292>' : 'proc_control_node/Subsystem ProcNav/Reset Logic'
//  '<S293>' : 'proc_control_node/Subsystem ProcNav/Subsystem'
//  '<S294>' : 'proc_control_node/Subsystem ProcNav/Thursters Mesurments'
//  '<S295>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Discrete Derivative'
//  '<S296>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter '
//  '<S297>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S298>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S299>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation'
//  '<S300>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S301>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S302>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Enable//disable time constant'
//  '<S303>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Initialization'
//  '<S304>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Integrator (Discrete or Continuous)'
//  '<S305>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Enable//disable time constant/Compare To Zero'
//  '<S306>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Initialization/Init_u'
//  '<S307>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Integrator (Discrete or Continuous)/Discrete'
//  '<S308>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S309>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S310>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S311>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V1'
//  '<S312>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V2'
//  '<S313>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V3'
//  '<S314>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S315>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S316>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S317>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S318>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S319>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S320>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S321>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S322>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S323>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S324>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S325>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S326>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S327>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S328>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S329>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S330>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S331>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S332>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S333>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S334>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S335>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S336>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S337>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S338>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S339>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S340>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S341>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S342>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S343>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S344>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S345>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S346>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S347>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S348>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S349>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S350>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S351>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem'
//  '<S352>' : 'proc_control_node/Subsystem Trajectory/Subsystem'
//  '<S353>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto'
//  '<S354>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual'
//  '<S355>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory'
//  '<S356>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem/MATLAB Function1'
//  '<S357>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter'
//  '<S358>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S359>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)'
//  '<S360>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1'
//  '<S361>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)/Discrete'
//  '<S362>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1/Discrete'
//  '<S363>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S364>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/MATLAB Function1'
//  '<S365>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual/MATLAB Function1'
//  '<S366>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S367>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles'
//  '<S368>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1'
//  '<S369>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S370>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S371>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S372>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation'
//  '<S373>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S374>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S375>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S376>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S377>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S378>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S379>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S380>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation'
//  '<S381>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize'
//  '<S382>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input'
//  '<S383>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S384>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S385>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S386>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus'
//  '<S387>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S388>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S389>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S390>' : 'proc_control_node/Subsystem1/Subscribe1'
//  '<S391>' : 'proc_control_node/Subsystem1/Subscribe2'
//  '<S392>' : 'proc_control_node/Subsystem1/Subscribe3'
//  '<S393>' : 'proc_control_node/Subsystem1/Subscribe4'
//  '<S394>' : 'proc_control_node/Subsystem1/Subscribe5'
//  '<S395>' : 'proc_control_node/Subsystem1/startSim'
//  '<S396>' : 'proc_control_node/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S397>' : 'proc_control_node/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S398>' : 'proc_control_node/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S399>' : 'proc_control_node/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S400>' : 'proc_control_node/Subsystem1/Subscribe5/Enabled Subsystem'
//  '<S401>' : 'proc_control_node/Subsystem1/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_node_h_

//
// File trailer for generated code.
//
// [EOF]
//
