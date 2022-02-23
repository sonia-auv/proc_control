//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_node.h
//
// Code generated for Simulink model 'proc_control_node'.
//
// Model version                  : 2.59
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Tue Feb 22 22:39:41 2022
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
    real_T b_this_m[78000];
    real_T A_data[67520];
    real_T JacCineqTrans_data[38220];
    real_T b_varargin_1_data[38220];
    real_T a__4_data[38220];
    SL_Bus_proc_control_node_MultiDOFJointTrajectoryPo_9xm16l In1;// '<S347>/In1' 
    SL_Bus_proc_control_node_MultiDOFJointTrajectoryPo_9xm16l b_varargout_2;
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T Au[25600];
    real_T Auf_data[25600];
    real_T unusedExpr[21609];
    real_T tmp_data[20800];
    real_T JacCeqTrans[19110];
    real_T JacEqTrans_tmp[19110];
    real_T Jx_c[16900];
    real_T Su[10400];
    real_T a[10400];
    real_T Jmv[10400];
    real_T Su_k[9600];
    real_T dv[6400];
    real_T tmp_data_c[5120];
    real_T tmp_data_b[5120];
    real_T b_A[4851];
    real_T varargin_2_data[4160];
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_C[3003];
    real_T b_Sx[2730];
    real_T b_Sx_p[2730];
    real_T b_Sx_c[2400];
    real_T b_SuJm[2080];
    real_T WySuJm[2080];
    real_T b_SuJm_f[2080];
    real_T WySuJm_g[2080];
    real_T Jmv_g[2080];
    s_oZGbvi5mjKKebHB9aR5DoG_proc_T QPObjective;
    real_T b_SuJm_m[1920];
    real_T WySuJm_n[1920];
    real_T A_g[1859];                  // '<S128>/MATLAB Function2'
    real_T C_c[1859];                  // '<S128>/MATLAB Function2'
    real_T Bu[1848];
    real_T y_data_p[1845];
    real_T y_data_l[1845];
    real_T work_data[1845];
    real_T work_data_j[1845];
    real_T vn1_data[1845];
    real_T vn2_data[1845];
    real_T work_data_d[1845];
    real_T y_data_g[1845];
    real_T y_data_ld[1845];
    real_T y_data_d[1845];
    real_T y_data_dy[1845];
    real_T y_data_lx[1845];
    real_T y_data_o[1845];
    real_T y_data_b[1845];
    real_T Bu_n[1760];
    real_T b_Hv[1430];
    real_T b_Hv_b[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T b_Hv_l[1320];
    real_T I2Jm[1280];
    real_T WuI2Jm[1280];
    real_T dv1[1280];
    real_T I2Jm_h[1280];
    real_T WuI2Jm_b[1280];
    real_T dv2[1280];
    real_T I2Jm_d[1280];
    real_T WuI2Jm_e[1280];
    real_T dv3[1280];
    real_T CovMat[1156];
    real_T B_n[1144];                  // '<S128>/MATLAB Function2'
    real_T b_Su1[1040];
    real_T Sum_b[1040];
    real_T b_Su1_j[1040];
    real_T c_data_f[988];
    real_T b_tmp[986];
    real_T b_Su1_a[960];
    real_T Sum_j[960];
    int8_T a_j[6400];
    int8_T a_o[6400];
    real_T dv4[672];
    real_T dv5[640];
    real_T b_B[630];
    real_T b_B_n[580];
    real_T k[544];
    real_T b_A_i[441];
    real_T AA_o[441];
    SL_Bus_proc_control_node_std_msgs_Float64MultiArray In1_f;// '<S267>/In1'
    SL_Bus_proc_control_node_std_msgs_Float64MultiArray b_varargout_2_n;
    SL_Bus_proc_control_node_sonia_common_MpcInfo msg;// '<S98>/MATLAB Function' 
    real_T b_A_m[400];
    real_T b_D[390];
    SL_Bus_proc_control_node_sonia_common_MpcGains In1_o;// '<S268>/In1'
    SL_Bus_proc_control_node_sonia_common_MpcGains b_varargout_2_c;
    real_T dv6[352];
    real_T b_A_md[338];
    real_T b_Kx[336];
    real_T b_Kx_m[336];
    SL_Bus_proc_control_node_std_msgs_Int16MultiArray msg_d;// '<S13>/MATLAB Function3' 
    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray msg_k;// '<S5>/MATLAB Function3' 
    real_T B_data_j[320];
    real_T b_Kx_h[320];
    real_T b_Bu[320];
    real_T h[289];
    real_T b_Linv[289];
    real_T c_Linv[289];
    real_T b_D_c[289];
    real_T b_H[289];
    real_T U[289];
    real_T RLinv[289];
    real_T TL[289];
    real_T QQ[289];
    real_T RR[289];
    real_T c_A[289];
    real_T b_Linv_c[289];
    real_T c_Linv_p[289];
    real_T L[289];
    real_T b_D_p[289];
    real_T b_H_a[289];
    real_T U_e[289];
    real_T RLinv_a[289];
    real_T b_D_a[289];
    real_T b_H_i[289];
    real_T U_l[289];
    real_T RLinv_o[289];
    real_T TL_o[289];
    real_T QQ_i[289];
    real_T RR_f[289];
    real_T TL_i[289];
    real_T QQ_f[289];
    real_T RR_g[289];
    real_T c_A_c[289];
    real_T c_A_o[289];
    real_T b_A_l[286];
    real_T b_C_m[273];
    real_T Nk[273];
    real_T CA[273];
    real_T CA_m[273];
    real_T b_C_c[273];
    real_T Cineq_data[260];
    real_T b_data[260];
    real_T varargin_1_data_f[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_p[260];
    real_T b_c_e[260];
    real_T b_c_data_o[260];
    real_T Je_data[260];
    real_T g[256];
    real_T b_SuJm_h[256];
    real_T b_Jm[256];
    real_T b_SuJm_l[256];
    real_T b_Jm_h[256];
    real_T b_SuJm_me[256];
    real_T b_Jm_m[256];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T b_C_h[240];
    real_T CA_c[240];
    real_T CA_k[240];
    real_T Bv[231];
    real_T Bv_p[220];
    real_T b_A_p[208];
    real_T b_A_p4[198];
    real_T b_Kv[176];
    real_T b_Kv_a[176];
    real_T b_Kv_j[176];
    real_T A[169];
    real_T Ac[169];
    real_T A_i[169];                   // '<S125>/MATLAB Function2'
    real_T A_e[169];
    real_T A2[169];
    real_T U_o[169];
    real_T V[169];
    real_T A3[169];
    real_T A4[169];
    real_T A4_b[169];
    real_T b_A_a[169];
    real_T A2_g[169];
    real_T U_ex[169];
    real_T V_f[169];
    real_T A3_h[169];
    real_T A4_e[169];
    real_T A4_c[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T y_a[169];
    real_T y_d[169];
    real_T y_af[169];
    real_T b_A_pb[169];
    real_T z[147];
    real_T rtb_Selector_m[147];
    real_T dv7[147];
    real_T b_x[147];
    real_T A_o[144];                   // '<S124>/MATLAB Function2'
    real_T dv8[144];
    real_T dv9[144];
    real_T F[144];
    real_T A2_n[144];
    real_T U_lu[144];
    real_T V_p[144];
    real_T A3_p[144];
    real_T A4_f[144];
    real_T A4_i[144];
    real_T b_A_o[144];
    real_T Dv[143];
    real_T Y_e[143];                   // '<S128>/MATLAB Function2'
    real_T X_b[143];                   // '<S128>/MATLAB Function2'
    real_T DX_i[143];                  // '<S128>/MATLAB Function2'
    real_T CA_kk[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_i[143];
    real_T X_o[143];
    real_T X_m[143];
    real_T b_X_c[143];
    real_T b_X_f[143];
    real_T b_X_h[143];
    real_T Dv_m[132];
    real_T CA_a[132];
    real_T rseq[130];
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_k[130];
    real_T gfX[130];
    real_T z_p[130];
    real_T b[130];
    real_T readCurrent[128];
    real_T b_Ku1[128];
    real_T b_Su1_b[128];
    real_T b_I1[128];
    real_T b_Ku1_c[128];
    real_T b_Su1_n[128];
    real_T b_I1_i[128];
    real_T b_Ku1_m[128];
    real_T b_Su1_jg[128];
    real_T b_I1_e[128];
    SL_Bus_proc_control_node_nav_msgs_Odometry msg_o;// '<S103>/MATLAB Function1' 
    real_T rseq_m[120];
    real_T y_a_m[120];                 // '<S124>/MATLAB Function'
    real_T K[117];
    real_T C[117];
    real_T b_C_j[117];
    real_T Selector_f[117];            // '<S243>/Selector'
    real_T y_a5[117];
    real_T rtb_B_n_g[104];
    real_T Sum_n[104];
    real_T b_C_d[104];
    real_T Sum_na[96];
    real_T useq_a[88];                 // '<S204>/FixedHorizonOptimizer'
    real_T U_c[88];
    real_T b_U[88];
    real_T U_f[88];
    real_T U_p[88];
    real_T U_p2[88];
    real_T b_U_n[88];
    real_T Umv[88];
    real_T b_U_k[88];
    real_T b_U_n3[88];
    real_T Sy[81];
    real_T Sy_o[81];
    real_T R[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv10[80];
    real_T dv11[80];
    real_T b_I1_g[80];
    real_T dv12[80];
    real_T gfU[80];
    real_T y_c[80];
    real_T Selector1_n[72];            // '<S243>/Selector1'
    int16_T b_data_c[260];
    int16_T b_data_m[260];
    int16_T d_data[260];
    real_T b_I[64];
    SL_Bus_proc_control_node_sensor_msgs_Imu In1_p;// '<S66>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu In1_pd;// '<S72>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu msg_i;// '<S82>/MATLAB Function'
    real_T b_newCoefs[48];
    real_T b_A_j[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T dHdx[39];
    real_T K_k[39];
    real_T C_m[39];
    real_T b_C_p[39];
    real_T y_dz[39];
    int8_T c_B[289];
    int8_T b_B_g[289];
    int8_T b_c3[289];
    int8_T b_cx[289];
    int8_T b_i[289];
    real_T dCoefs[36];
    real_T b_newCoefs_d[36];
    real_T Ac_g[36];
    real_T rtb_A_g_l[36];
    real_T b_A_f[36];
    real_T b_A_d[36];
    real_T b_A_jr[36];
    real_T Opt[34];
    real_T Rhs[34];
    real_T Opt_i[34];
    real_T Rhs_h[34];
    real_T Opt_n[34];
    real_T Rhs_o[34];
    boolean_T icf[260];
    boolean_T icf_c[260];
    int8_T Je[260];
    real_T b_Mlim[32];
    real_T Bc[32];
    real_T b_Mlim_b[32];
    real_T b_Mu1[32];
    real_T cTol[32];
    real_T dv13[32];
    real_T Bc_e[32];
    real_T b_Mlim_d[32];
    real_T b_Mu1_i[32];
    real_T b_Mlim_g[32];
    real_T b_Mu1_n[32];
    real_T b_Mlim_l[32];
    real_T cTol_c[32];
    real_T dv14[32];
    real_T cTol_n[32];
    real_T dv15[32];
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_i;// '<S67>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_c;// '<S74>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL msg_iq;// '<S80>/MATLAB Function' 
    real_T coefsWithFlatStart[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T dv16[21];
    real_T b_xoff_p[20];
    real_T dv17[20];
    int8_T C_d[144];                   // '<S124>/MATLAB Function2'
    real_T Transpose_i[18];            // '<S354>/Transpose'
    real_T zopt[17];
    real_T f[17];
    real_T r[17];
    real_T z_o[17];
    real_T b_Ac[17];
    real_T tau[17];
    real_T work[17];
    real_T zopt_j[17];
    real_T f_c[17];
    real_T zopt_h[17];
    real_T varargin_1[17];
    real_T r_d[17];
    real_T z_c[17];
    real_T b_Ac_p[17];
    real_T r_p[17];
    real_T z_a[17];
    real_T b_Ac_o[17];
    real_T tau_j[17];
    real_T work_p[17];
    real_T tau_o[17];
    real_T work_l[17];
    real_T varargin_1_k[17];
    real_T varargin_1_j[17];
    boolean_T bv[130];
    boolean_T bv1[130];
    real_T a_f[16];
    real_T b_cm[16];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    int32_T ic[26];
    int32_T ic_f[26];
    real_T z_n[13];
    real_T imz[13];
    real_T TmpSignalConversionAtTransp[13];
    real_T DX_p[13];                   // '<S125>/MATLAB Function2'
    real_T Bu_i[13];
    real_T rows[13];
    real_T CA_l[13];
    real_T b_Wy[13];
    real_T b_C_i[13];
    real_T ic_k[13];
    real_T ic_fc[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_a[13];
    real_T ic_d[13];
    real_T dv18[13];
    real_T dv19[13];
    real_T tau_e[13];
    real_T work_e[13];
    real_T tau_b[13];
    real_T work_a[13];
    real_T tau_i[13];
    real_T work_f[13];
    real_T ic_j[13];
    real_T dv20[13];
    real_T dv21[13];
    real_T a_oo[13];
    real_T tamp[13];
    real_T Y[12];
    real_T coeffMat[12];
    real_T TmpSignalConversionAtSFun_p[12];// '<S103>/MATLAB Function1'
    real_T rtb_C_f[12];
    real_T dv22[12];
    real_T b_C_o[12];
    real_T vseq[11];
    real_T z_l[9];
    real_T TmpSignalConversionAtBuffer[9];
    real_T tau_l[9];
    real_T work_g[9];
    real_T R_d[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_d;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_j;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_f;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_j;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_h;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_c;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_n;
    int8_T b_B_k[64];
    int8_T b_B_f[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_h[64];
    real_T u[8];                       // '<S274>/ '
    real_T U_eg[8];
    real_T ZeroOrderHold_h[8];         // '<S274>/Zero-Order Hold'
    real_T dv23[8];
    real_T dv24[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T b_Wu_k[8];
    real_T b_Wdu_j[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_o[8];
    real_T duk_c[8];
    real_T gfU_h[8];
    real_T ic_i[8];
    real_T c_p[8];
    real_T runtimedata_MVRateMin[8];
    int16_T iAnew[32];
    int16_T iC[32];
    int16_T iAnew_a[32];
    int16_T iAnew_j[32];
    int16_T iC_k[32];
    int16_T iC_b[32];
    SL_Bus_proc_control_node_sonia_common_AddPose b_varargout_2_f;
    SL_Bus_proc_control_node_geometry_msgs_Pose In1_n;// '<S389>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Pose b_varargout_2_e;
    SL_Bus_proc_control_node_geometry_msgs_Pose msg_l;// '<S83>/MATLAB Function' 
    SL_Bus_proc_control_node_geometry_msgs_Pose msg_km;// '<S335>/MATLAB Function2' 
    real_T TmpSignalConversionAtMATLAB[7];
    real_T y_n[7];
    real_T x_h[7];
    int32_T iv[13];
    SL_Bus_proc_control_node_geometry_msgs_Twist In1_od;// '<S345>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Twist b_varargout_2_h;
    real_T MultiportSwitch[6];         // '<S339>/Multiport Switch'
    real_T DataTypeConversion[6];      // '<S358>/Data Type Conversion'
    real_T Gain3[6];                   // '<S339>/Gain3'
    real_T Saturation[6];              // '<S344>/Saturation'
    real_T Sum_f[6];                   // '<S339>/Sum'
    real_T Gain_i[6];                  // '<S339>/Gain'
    real_T rtb_Gain3_f[6];
    real_T constValues_c[6];
    real_T constValues_n[6];
    char_T b_zeroDelimTopic[39];
    char_T b_zeroDelimTopic_h[35];
    char_T b_zeroDelimTopic_k[34];
    char_T b_zeroDelimTopic_hz[32];
    quaternion_proc_control_node_T expl_temp_b;
    quaternion_proc_control_node_T expl_temp_o;
    real_T MATLABSystem_o1[4];         // '<S10>/MATLAB System'
    real_T n[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S270>/MATLAB Function1'
    real_T qRel[4];
    real_T qRel_n[4];
    boolean_T bv2[32];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    char_T b_zeroDelimTopic_m[31];
    char_T b_zeroDelimTopic_ku[30];
    char_T b_zeroDelimTopic_tmp[30];
    char_T b_zeroDelimTopic_j[29];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_hc[28];
    char_T b_zeroDelimTopic_f[27];
    char_T b_zeroDelimTopic_kg[26];
    char_T b_zeroDelimTopic_tmp_i[26];
    boolean_T icf_d[26];
    boolean_T icf_l[26];
    char_T b_zeroDelimTopic_h5[24];
    real_T MATLABSystem_o2[3];         // '<S10>/MATLAB System'
    real_T c_m[3];
    real_T u2[3];                      // '<S313>/1//2'
    real_T dv25[3];
    real_T target[3];
    real_T work_gm[3];
    real_T c_l[3];
    char_T b_zeroDelimTopic_m4[23];
    char_T b_zeroDelimTopic_tmp_n[23];
    char_T b_zeroDelimTopic_g[22];
    char_T b_zeroDelimTopic_d[20];
    char_T b_zeroDelimTopic_mq[19];
    char_T b_zeroDelimTopic_ft[16];
    real_T DataTypeConversion1[2];     // '<S358>/Data Type Conversion1'
    uint16_T pwm[8];                   // '<S123>/N to PWM'
    uint16_T current[8];               // '<S123>/N to A'
    uint16_T y_p_g[8];                 // '<S1>/MATLAB Function'
    int16_T NtoRPM[8];                 // '<S13>/N to RPM'
    uint8_T b_Su1_tmp[13];
    uint8_T rows_j[13];
    int8_T ipiv[13];
    boolean_T x_c[13];
    boolean_T x_e[13];
    boolean_T x_m[13];
    boolean_T x_o[13];
    int8_T rows_a[12];
    int8_T ipiv_j[12];
    int32_T i_data[3];
    int32_T ii_data_g[3];
    int32_T Jx_size[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T MATLABSystem_o3;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o4;            // '<S10>/MATLAB System'
    real_T DataTypeConversion2;        // '<S358>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S354>/Matrix Concatenate'
    real_T Selector[6];                // '<S354>/Selector'
    real_T Selector1[8];               // '<S354>/Selector1'
    real_T Selector4[7];               // '<S354>/Selector4'
    real_T DataStoreRead[13];          // '<S326>/Data Store Read'
    real_T Sum;                        // '<S315>/Sum'
    real_T Sum_o;                      // '<S316>/Sum'
    real_T Sum_c;                      // '<S317>/Sum'
    real_T enable;                     // '<S270>/MATLAB Function1'
    real_T q0;                         // '<S313>/q0'
    real_T q1;                         // '<S313>/q1'
    real_T q2;                         // '<S313>/q2'
    real_T q3;                         // '<S313>/q3'
    real_T Probe[2];                   // '<S283>/Probe'
    real_T Merge[10];                  // '<S121>/Merge'
    real_T mvmin[8];                   // '<S122>/MPC manager'
    real_T mvmax[8];                   // '<S122>/MPC manager'
    real_T ywt[13];                    // '<S122>/MPC manager'
    real_T mvwt[8];                    // '<S122>/MPC manager'
    real_T dmwwt[8];                   // '<S122>/MPC manager'
    real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BufferToMakeInportVirtual_Inser[8];
             // '<S5>/BufferToMakeInportVirtual_InsertedFor_thrust_at_inport_0'
    real_T y;                          // '<S62>/MATLAB Function'
    real_T XDrift;                     // '<S14>/X Drift'
    real_T YDrift;                     // '<S14>/Y Drift'
    real_T WorldPosition_d[3];         // '<S1>/Integrator'
    real_T InitialBodyvelocity[3];     // '<S1>/Initial Body velocity '
    real_T InitialAngularRates[3];     // '<S1>/Initial Angular Rates'
    real_T PWMtoN[8];                  // '<S13>/ PWM to N'
    real_T Output;                     // '<S28>/Output'
    real_T Output_i;                   // '<S29>/Output'
    real_T Output_l;                   // '<S30>/Output'
    real_T Output_o;                   // '<S31>/Output'
    real_T Output_j;                   // '<S32>/Output'
    real_T Gain2;                      // '<S49>/Gain2'
    real_T Gain;                       // '<S49>/Gain'
    real_T Gain1;                      // '<S49>/Gain1'
    real_T Gain_c;                     // '<S50>/Gain'
    real_T Gain2_n;                    // '<S50>/Gain2'
    real_T Gain1_d;                    // '<S50>/Gain1'
    real_T Gain_l;                     // '<S51>/Gain'
    real_T Gain1_o;                    // '<S51>/Gain1'
    real_T Gain2_i;                    // '<S51>/Gain2'
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
    real_T t6;
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
    real_T Divide1;                    // '<S320>/Divide1'
    real_T Divide2;                    // '<S320>/Divide2'
    real_T Divide3;                    // '<S320>/Divide3'
    real_T Sum_l;                      // '<S322>/Sum'
    real_T Product2_l;                 // '<S322>/Product2'
    real_T fcn2_e;                     // '<S110>/fcn2'
    real_T sqrt_j;                     // '<S52>/sqrt'
    real_T MATLABSystem_o6;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o7;            // '<S10>/MATLAB System'
    real_T Saturation_c;               // '<S288>/Saturation'
    real_T rtb_u2_e;
    real_T rtb_sincos_o1_idx_2;
    real_T rtb_sincos_o1_idx_1;
    real_T rtb_sincos_o2_idx_1;
    real_T rtb_sincos_o1_idx_0;
    real_T rtb_sincos_o2_idx_0;
    real_T d_j;
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
    real_T b_Ku1_j;
    real_T b_Kv_g;
    real_T WuI2Jm_o;
    real_T Sum_h;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_c;
    real_T b_Ac_a;
    real_T b_Linv_l;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T b_Ku1_jc;
    real_T b_Kv_i;
    real_T WuI2Jm_m;
    real_T ywt_f;
    real_T uwt_o;
    real_T d39;
    real_T normH;
    real_T s;
    real_T b_Ku1_i;
    real_T b_Kv_e;
    real_T WuI2Jm_j;
    real_T c_o;
    real_T b_c_f;
    real_T scale_m;
    real_T absxk_a;
    real_T t_h;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_o;
    real_T umvk_h;
    real_T duk_j;
    real_T e;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_g;
    real_T runtimedata_OutputMin_j;
    real_T runtimedata_OutputMax_l;
    real_T rMin_k;
    real_T Xnorm0_d;
    real_T cMin_n;
    real_T cVal_j;
    real_T t_a;
    real_T b_Ac_h;
    real_T scale_i;
    real_T absxk_d;
    real_T rMin_b;
    real_T Xnorm0_h;
    real_T cMin_p;
    real_T cVal_n;
    real_T t_j;
    real_T b_Ac_ot;
    real_T scale_b;
    real_T fs_j;
    real_T e_e;
    real_T wtYerr_i;
    real_T obj_objfun_workspace_runtimed_n;
    real_T wtYerr_ie;
    real_T obj_objfun_workspace_runtimed_p;
    real_T d_o;
    real_T smax;
    real_T s_m;
    real_T normA;
    real_T c_s;
    real_T d_ot;
    real_T smax_g;
    real_T s_e;
    real_T d_i;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5;
    real_T t6_g;
    real_T t7_g;
    real_T t8_g;
    real_T t9_g;
    real_T t10_c;
    real_T t11_k;
    real_T t12;
    real_T t13_d;
    real_T t17_k;
    real_T t18;
    real_T t19;
    real_T t20;
    real_T t21;
    real_T t22_p;
    real_T t23_p;
    real_T t24;
    real_T t25;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t30;
    real_T t31_m;
    real_T t32_k;
    real_T t33;
    real_T t34;
    real_T t39_a;
    real_T t40_f;
    real_T t41;
    real_T t42;
    real_T t43;
    real_T t44;
    real_T t45;
    real_T t55_c;
    real_T t56_j;
    real_T t57_k;
    real_T t58;
    real_T t59;
    real_T t61;
    real_T t62;
    real_T t65_h;
    real_T t68;
    real_T t35;
    real_T t36;
    real_T t37_d;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T t32_tmp;
    real_T s_j;
    real_T atmp_n;
    real_T temp_j;
    real_T c_lc;
    real_T s_p;
    real_T atmp_p;
    real_T temp_l;
    real_T s_l;
    real_T atmp_h;
    real_T temp_c;
    real_T s_g;
    real_T atmp_e;
    real_T temp_n;
    real_T t8_f;
    real_T t9_n;
    real_T t11_e;
    real_T t12_b;
    real_T t13_a;
    real_T t14_i;
    real_T t15_n;
    real_T t16_f;
    real_T t25_i;
    real_T t29_k;
    real_T t31_b;
    real_T t50;
    real_T t53_d;
    real_T t54_h;
    real_T t17_n;
    real_T t18_f;
    real_T t19_a;
    real_T t57_m;
    real_T t64;
    real_T t65_g;
    real_T t68_n;
    real_T t69;
    real_T t70_c;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp;
    real_T out1_tmp_d;
    real_T out1_tmp_k;
    real_T out1_tmp_c;
    real_T out1_tmp_j;
    real_T out1_tmp_m;
    real_T out1_tmp_i;
    real_T scale_bj;
    real_T s_o;
    real_T atmp_g;
    real_T tau_idx_0;
    real_T scale_e;
    real_T absxk_i;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T rho;
    real_T qpfvalLinearExcess;
    real_T qpfvalQuadExcess;
    real_T y_e;
    real_T maxConstr_new;
    real_T normDelta;
    real_T s_i;
    real_T temp_m;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T c_d;
    real_T b_atmp;
    real_T xnorm;
    real_T a_j4;
    real_T scale_p;
    real_T absxk_b;
    real_T t_p;
    real_T normH_n;
    real_T s_c;
    real_T ssq;
    real_T c_n;
    real_T t2_d;
    real_T t3_i;
    real_T t4_n;
    real_T t5_b;
    real_T t6_b;
    real_T t7_j;
    real_T t8_n;
    real_T t9_f;
    real_T t10_e;
    real_T t11_i;
    real_T t12_a;
    real_T t13_f;
    real_T t17_ko;
    real_T t18_c;
    real_T t19_j;
    real_T t20_l;
    real_T t21_a;
    real_T t22_i;
    real_T t23_o;
    real_T t24_b;
    real_T t25_a;
    real_T t26_a;
    real_T t27_i;
    real_T t28_i;
    real_T t29_l;
    real_T t30_o;
    real_T t31_p;
    real_T t32_o;
    real_T t33_c;
    real_T t34_o;
    real_T t39_o;
    real_T t40_h;
    real_T t41_i;
    real_T t42_g;
    real_T t43_c;
    real_T t44_o;
    real_T t45_g;
    real_T t55_o;
    real_T t56_g;
    real_T t57_a;
    real_T t58_g;
    real_T t59_b;
    real_T t61_k;
    real_T t62_c;
    real_T t65_j;
    real_T t68_a;
    real_T t35_d;
    real_T t2_c;
    real_T t3_d;
    real_T t4_a;
    real_T t5_bo;
    real_T t6_gu;
    real_T t7_f;
    real_T t8_c;
    real_T t9_p;
    real_T t10_a;
    real_T t11_n;
    real_T t12_h;
    real_T t13_m;
    real_T t17_f;
    real_T t18_b;
    real_T t19_e;
    real_T t20_n;
    real_T t21_p;
    real_T t22_ih;
    real_T t23_j;
    real_T t24_l;
    real_T t25_c;
    real_T t26_g;
    real_T t27_c;
    real_T t28_l;
    real_T t29_e;
    real_T t30_d;
    real_T t31_my;
    real_T t32_f;
    real_T t33_n;
    real_T t34_oi;
    real_T t39_e;
    real_T t40_m;
    real_T t41_c;
    real_T t42_g4;
    real_T t43_b;
    real_T t44_p;
    real_T t45_p;
    real_T t55_a;
    real_T t56_f;
    real_T t57_g;
    real_T t58_b;
    real_T t59_k;
    real_T t61_k1;
    real_T t62_b;
    real_T t65_i;
    real_T t68_nj;
    real_T t35_h;
    real_T qn_a;
    real_T qn_b;
    real_T qn_c;
    real_T qn_d;
    real_T pnCorrected_b;
    real_T pnCorrected_c;
    real_T pnCorrected_d;
    real_T linearScaling;
    real_T n_n;
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
    real_T n_tmp_m;
    real_T n_tmp_g;
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
    real_T q2n_a_j;
    real_T q2n_b;
    real_T oldDirIdx;
    real_T constrViolation;
    real_T tol;
    real_T qtb;
    real_T smax_f;
    real_T s_n;
    real_T temp_g;
    real_T t8_d;
    real_T t9_c;
    real_T t10_m;
    real_T t11_d;
    real_T t12_n;
    real_T t13_b;
    real_T t15_p;
    real_T t20_k;
    real_T t33_cl;
    real_T t37_n;
    real_T t39_n;
    real_T t63;
    real_T t67;
    real_T t68_c;
    real_T t16_d;
    real_T t17_nq;
    real_T t18_g;
    real_T t19_l;
    real_T t21_g;
    real_T t22_pv;
    real_T t23_k;
    real_T t71;
    real_T t80;
    real_T t81;
    real_T t84;
    real_T t45_l;
    real_T t55_b;
    real_T t65_c;
    real_T t86;
    real_T t87;
    real_T t56_fb;
    real_T t85;
    real_T out1_tmp_o;
    real_T out1_tmp_dd;
    real_T out1_tmp_l;
    real_T out1_tmp_ls;
    real_T out1_tmp_dr;
    real_T out1_tmp_ku;
    real_T out1_tmp_f;
    real_T out1_tmp_p;
    real_T out1_tmp_k1;
    real_T absx;
    real_T z_k;
    real_T smax_i;
    real_T s_ew;
    real_T t8_ft;
    real_T t9_k;
    real_T t10_n;
    real_T t11_it;
    real_T t12_i;
    real_T t13_o;
    real_T t15_d;
    real_T t20_i;
    real_T t33_g;
    real_T t37_c;
    real_T t39_ee;
    real_T t63_a;
    real_T t67_h;
    real_T t68_e;
    real_T t16_dw;
    real_T t17_g;
    real_T t18_e;
    real_T t19_eq;
    real_T t21_gm;
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
    real_T t56_fbc;
    real_T t85_f;
    real_T out1_tmp_a;
    real_T out1_tmp_g;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T out1_tmp_e;
    real_T out1_tmp_ey;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T c_dl;
    real_T y_j;
    real_T aSinInput;
    real_T y_idx_3;
    real_T y_idx_2;
    real_T s_idx_0;
    real_T s_idx_2;
    real_T c_tmp;
    real_T c_tmp_n;
    real_T c_tmp_j;
    real_T c_idx_0;
    real_T b_x_data_idx_0;
    real_T e_data_idx_0;
    real_T t5_p;
    real_T t6_a;
    real_T t9_d;
    real_T t11_p;
    real_T t12_d;
    real_T t13_p;
    real_T t20_f;
    real_T t24_g;
    real_T t26_d;
    real_T t46;
    real_T t49;
    real_T t50_h;
    real_T t14_ie;
    real_T t53_m;
    real_T t62_cy;
    real_T t63_l;
    real_T t66;
    real_T t68_p;
    real_T t69_i;
    real_T out1_tmp_b;
    real_T out1_tmp_gn;
    real_T out1_tmp_oq;
    real_T out1_tmp_b1;
    real_T out1_tmp_ew;
    real_T out1_tmp_e1;
    real_T out1_tmp_lg;
    real_T out1_tmp_cf;
    real_T out1_tmp_e5;
    real_T out1_tmp_dw;
    real_T t8_o;
    real_T t9_l;
    real_T t11_h;
    real_T t12_l;
    real_T t13_c;
    real_T t14_c;
    real_T t15_a;
    real_T t16_i;
    real_T t25_l;
    real_T t29_i;
    real_T t31_a;
    real_T t50_i;
    real_T t53_c;
    real_T t54_m;
    real_T t17_nn;
    real_T t18_ch;
    real_T t19_n;
    real_T t57_h;
    real_T t64_i;
    real_T t65_e;
    real_T t68_pc;
    real_T t69_k;
    real_T t70_i;
    real_T t12_tmp_n;
    real_T t13_tmp_o;
    real_T t14_tmp_l;
    real_T t15_tmp_p;
    real_T out1_tmp_br;
    real_T t8_fy;
    real_T t9_i;
    real_T t11_c;
    real_T t12_g;
    real_T t13_i;
    real_T t14_b;
    real_T t15_na;
    real_T t16_p;
    real_T t25_o;
    real_T t29_b;
    real_T t31_o;
    real_T t50_c;
    real_T t53_j;
    real_T t54_e;
    real_T t17_p;
    real_T t18_n;
    real_T t19_o;
    real_T t57_d;
    real_T t64_g;
    real_T t65_il;
    real_T t68_i;
    real_T t69_c;
    real_T t70_b;
    real_T t12_tmp_g;
    real_T t13_tmp_d;
    real_T t14_tmp_f;
    real_T t15_tmp_j;
    real_T out1_tmp_eq;
    real_T optimRelativeFactor_p;
    real_T nlpComplErrorTmp;
    real_T tol_d;
    real_T d40;
    real_T c_f;
    real_T denomTol;
    real_T phaseOneCorrectionP;
    real_T pk_corrected;
    real_T ratio;
    real_T c_n5;
    real_T c_o5;
    real_T c_c;
    real_T b_s;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_d;
    real_T ads;
    real_T tol_l;
    real_T y_a_f;
    real_T y_b;
    real_T y_c_j;
    real_T y_d_g;
    real_T vnorm;
    real_T ssq_l;
    real_T c_k;
    real_T tol_p;
    real_T alpha1;
    real_T y_bu;
    real_T temp_i;
    real_T c_pm;
    real_T c_lb;
    real_T c_e;
    real_T temp_e;
    real_T dotSY;
    real_T c_pn;
    real_T scale_j;
    real_T c_g;
    real_T scale_l;
    real_T c_j;
    real_T c_pk;
    real_T scale_d0;
    real_T c_kh;
    real_T scale_m0;
    real_T scale_f;
    real_T c_m4;
    real_T c_nf;
    SL_Bus_proc_control_node_std_msgs_UInt8 In1_i2;// '<S385>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_e;// '<S68>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_om;// '<S73>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool In1_f1;// '<S388>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool In1_cx;// '<S384>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool ZeroOrderHold;// '<S102>/Zero-Order Hold' 
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
                 // '<S5>/BufferToMakeInportVirtual_InsertedFor_mv_at_inport_0'
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_m[8];
    boolean_T umin_incr_flag_b[8];
    boolean_T bv3[8];
    int32_T A_size[2];
    int32_T Cineq_size[2];
    int32_T JacCineqTrans_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T a__4_size[2];
    int32_T varargin_1_size_c[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_g[2];
    int32_T tmp_size[2];
    int32_T idx[2];
    int32_T tmp_size_c[2];
    int32_T h_size[2];
    int32_T c_size[2];
    int16_T Jx_i[2];
    real32_T rtb_PressureDepth_Data;
    int32_T idx_k;
    int32_T ibmat;
    int32_T eint;
    int32_T b_s_g;
    int32_T i;
    int32_T ibmat_p;
    int32_T idx_f;
    int32_T idx_m;
    int32_T idx_my;
    int32_T idx_l;
    int32_T idx_j;
    int32_T K_tmp;
    int32_T C_tmp;
    int32_T b_D_tmp;
    int32_T B_size;
    int32_T i_m;
    int32_T i1;
    int32_T i2;
    int32_T kidx;
    int32_T j2;
    int32_T i1_j;
    int32_T i_i;
    int32_T i3;
    int32_T CA_tmp;
    int32_T Sum_tmp;
    int32_T b_Linv_tmp;
    int32_T i_a;
    int32_T i4;
    int32_T U_tmp;
    int32_T U_tmp_h;
    int32_T lambda_tmp_tmp;
    int32_T i_d;
    int32_T f_i;
    int32_T iC_i;
    int32_T RLinv_tmp_tmp;
    int32_T RLinv_tmp;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_h;
    int32_T jA;
    int32_T jy;
    int32_T ii;
    int32_T i_dj;
    int32_T i5;
    int32_T i6;
    int32_T j2_l;
    int32_T i2_f;
    int32_T Tries;
    int32_T i_l;
    int32_T i7;
    int32_T kidx_l;
    int32_T CA_tmp_f;
    int32_T Sum_tmp_g;
    int32_T ix_g;
    int32_T b_iy;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T b_idx;
    int32_T ix_a;
    int32_T ia;
    int32_T i_du;
    int32_T loop_ub;
    int32_T tmp_size_b;
    int32_T tmp_size_d;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_f;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_as;
    int32_T iy;
    int32_T c_mq;
    int32_T ia_i;
    int32_T b_ix;
    int32_T b_iy_i;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_k;
    int32_T y_size_idx_0_a;
    int32_T i_m2;
    int32_T i_c;
    int32_T c_idx_col;
    int32_T b_k;
    int32_T sizes_idx_0;
    int32_T c_k_b;
    int32_T d_k;
    int32_T i_k;
    int32_T b_c_size;
    int32_T b_size_idx_0;
    int32_T i8;
    int32_T i9;
    int32_T loop_ub_l;
    int32_T empty_non_axis_sizes_idx_0;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T e_k;
    int32_T i10;
    int32_T i11;
    int32_T e_k_n;
    int32_T b_s_p;
    int32_T b_j;
    int32_T b_i_f;
    int32_T i12;
    int32_T i13;
    int32_T i14;
    int32_T F_tmp;
    int32_T e_k_k;
    int32_T i15;
    int32_T i16;
    int32_T e_k_e;
    int32_T coffset;
    int32_T aoffset;
    int32_T k_n;
    int32_T b_i_o;
    int32_T idx_a;
    int32_T coffset_b;
    int32_T aoffset_b;
    int32_T coffset_m;
    int32_T aoffset_m;
    int32_T coffset_k;
    int32_T aoffset_mc;
    int32_T nVar;
    int32_T b_k_h;
    int32_T iH0;
    int32_T y_size_idx_0_i;
    int32_T nVarOrig;
    int32_T temp_ct;
    int32_T mIneq_n;
    int32_T mLBOrig;
    int32_T idx_positive;
    int32_T i17;
    int32_T nVar_i;
    int32_T b_idx_o;
    int32_T y_size_idx_0_h;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr;
    int32_T mEqFixed;
    int32_T nVar_tmp;
    int32_T activeSetChangeID;
    int32_T nVar_p;
    int32_T globalActiveConstrIdx;
    int32_T TYPE;
    int32_T idx_g;
    int32_T ix_c;
    int32_T iyend;
    int32_T b_ix_g;
    int32_T b_iy_b;
    int32_T c_iy;
    int32_T g_j;
    int32_T ia_h;
    int32_T loop_ub_d;
    int32_T y_size_idx_0_o;
    int32_T nVar_tmp_tmp_k;
    int32_T nVar_j;
    int32_T ldq;
    int32_T ix_d;
    int32_T iy_f;
    int32_T jBcol;
    int32_T iAcol;
    int32_T f_a;
    int32_T g_e;
    int32_T b_ic;
    int32_T b_br;
    int32_T b_ar;
    int32_T mWConstr_tmp_tmp;
    int32_T idx_n;
    int32_T b_idx_ob;
    int32_T ix0;
    int32_T k_d;
    int32_T minmana;
    int32_T minmn;
    int32_T lda;
    int32_T i_cu;
    int32_T I2Jm_tmp;
    int32_T Tries_m;
    int32_T j;
    int32_T nVar_o;
    int32_T mConstrMax_b;
    int32_T idx_Aineq;
    int32_T idx_upper;
    int32_T idx_Partition;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T iy_m;
    int32_T iac;
    int32_T b_ia_i;
    int32_T idx_Aineq_tmp_tmp;
    int32_T b_ih;
    int32_T nVar_g;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_m;
    int32_T iy_n;
    int32_T b_k_c;
    int32_T ma;
    int32_T minmana_j;
    int32_T minmn_e;
    int32_T c_j_e;
    int32_T ma_k;
    int32_T minmn_k;
    int32_T ii_i;
    int32_T nmi;
    int32_T mmi;
    int32_T pvt;
    int32_T j_e;
    int32_T ix_l;
    int32_T k_l;
    int32_T loop_ub_lc;
    int32_T lastv;
    int32_T k_o;
    int32_T nVar_i5;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_ldw;
    int32_T b_nullStart;
    int32_T idx_col;
    int32_T order;
    int32_T ix_e;
    int32_T b_ix_l;
    int32_T b_ldw_tmp;
    int32_T rhs_size_idx_1;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T order_n;
    int32_T b_k_e;
    int32_T LDimSizeP1_c;
    int32_T subRows;
    int32_T LD_diagOffset_a;
    int32_T FMat_offset;
    int32_T k_m;
    int32_T nVar_c;
    int32_T mFixed_f;
    int32_T mIneq_m;
    int32_T mLB_k;
    int32_T mUB_b;
    int32_T mLambda_h;
    int32_T nActiveConstr;
    int32_T fullRank_R;
    int32_T rankR;
    int32_T iQR_diag;
    int32_T iQR0;
    int32_T idx_h;
    int32_T n_h;
    int32_T k_b;
    int32_T i18;
    int32_T i_b;
    int32_T itau_d;
    int32_T iaii;
    int32_T c_jd;
    int32_T b_k_d;
    int32_T totalIneq;
    int32_T ldw;
    int32_T iyend_l;
    int32_T ix_j;
    int32_T b_iy_bi;
    int32_T nFixedConstr;
    int32_T nVar_f;
    int32_T idx_p;
    int32_T idx_col_l;
    int32_T nDepIneq;
    int32_T k_l1;
    int32_T ii_i5;
    int32_T mmi_o;
    int32_T i_bv;
    int32_T idx_i;
    int32_T b_idx_g;
    int32_T ix0_p;
    int32_T k_h;
    int32_T idxA1j;
    int32_T nFixedConstr_d;
    int32_T nVar_fb;
    int32_T idx_fo;
    int32_T idx_col_c;
    int32_T nDepIneq_d;
    int32_T k_c;
    int32_T mLB_b;
    int32_T mUB_p;
    int32_T mFixed_h;
    int32_T mLB_e;
    int32_T mUB_l;
    int32_T mFixed_hg;
    int32_T mLB_n;
    int32_T mUB_k;
    int32_T mFixed_b;
    int32_T nWFixed;
    int32_T idx_global;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T idx_o;
    int32_T b_idx_n;
    int32_T ix0_f;
    int32_T k_g;
    int32_T coffset_d;
    int32_T idx_d;
    int32_T lastc;
    uint32_T bpIdx;
    SL_Bus_proc_control_node_std_msgs_Float32 b_varargout_2_ey;
    SL_Bus_proc_control_node_std_msgs_Float32 BusAssignment;// '<S81>/Bus Assignment' 
    ZCEventType zcEvent;
    boolean_T b_ce[4];
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T DataTypeConversion_j;      // '<S10>/Data Type Conversion'
    boolean_T NOT;                     // '<S272>/NOT'
    boolean_T isReached;               // '<S9>/Merge1'
    boolean_T TmpMLSysMemLayoutBufferAtMATLAB;// '<S335>/MATLAB System'
    boolean_T SourceBlock_o1;          // '<S346>/SourceBlock'
    boolean_T isMpcAlive;              // '<S123>/Data Type Conversion3'
    boolean_T thrustersStatus[8];      // '<S122>/MPC manager'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_node_T {
    TrajectoryManager_proc_contro_T obj;// '<S337>/MATLAB System'
    MultiTrajectoryManager_proc_c_T obj_o;// '<S335>/MATLAB System'
    OpenLoopController_proc_contr_T obj_m;// '<S127>/MATLAB System'
    mpcManager_proc_control_node_T obj_f;// '<S122>/MPC manager'
    robotics_slcore_internal_bloc_T obj_j;// '<S359>/Rotation Trajectory'
    robotics_slcore_internal_bl_b_T obj_jo;// '<S377>/Polynomial Trajectory1'
    AddPose_proc_control_node_T obj_a; // '<S337>/MATLAB System1'
    rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
    ros_slroscpp_internal_block_P_T obj_i;// '<S351>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S109>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_e;// '<S105>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S101>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_p;// '<S97>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S94>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ab;// '<S91>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_k;// '<S88>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S86>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_jj;// '<S19>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_b;// '<S383>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S382>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_h;// '<S381>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_oz;// '<S380>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S379>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S378>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S357>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_d;// '<S346>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_c;// '<S340>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S266>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k4;// '<S265>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S65>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_dh;// '<S64>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_l;// '<S63>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S71>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S70>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i4;// '<S69>/SourceBlock'
    real_T _DSTATE[8];                 // '<S274>/ '
    real_T Delay_DSTATE;               // '<S3>/Delay'
    real_T Integrator_DSTATE[6];       // '<S343>/Integrator'
    real_T Integrator_DSTATE_l[6];     // '<S344>/Integrator'
    real_T Delay_DSTATE_e;             // '<S10>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S359>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S309>/Delay'
    real_T UD_DSTATE;                  // '<S276>/UD'
    real_T Integrator_DSTATE_o;        // '<S288>/Integrator'
    real_T Delay_DSTATE_k;             // '<S123>/Delay'
    real_T last_mv_DSTATE[8];          // '<S134>/last_mv'
    real_T Delay1_DSTATE[8];           // '<S124>/Delay1'
    real_T Delay_DSTATE_a[8];          // '<S129>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S243>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S243>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S243>/slack_delay'
    real_T last_mv_DSTATE_n[8];        // '<S210>/last_mv'
    real_T Delay1_DSTATE_g[88];        // '<S128>/Delay1'
    real_T UD_DSTATE_i[6];             // '<S206>/UD'
    real_T last_mv_DSTATE_f[8];        // '<S176>/last_mv'
    real_T Delay1_DSTATE_e[8];         // '<S125>/Delay1'
    real_T P[169];                     // '<S323>/DataStoreMemory - P'
    real_T x[13];                      // '<S323>/DataStoreMemory - x'
    real_T XDrift_NextOutput;          // '<S14>/X Drift'
    real_T YDrift_NextOutput;          // '<S14>/Y Drift'
    real_T NextOutput;                 // '<S28>/White Noise'
    real_T NextOutput_b;               // '<S29>/White Noise'
    real_T NextOutput_g;               // '<S30>/White Noise'
    real_T NextOutput_l;               // '<S31>/White Noise'
    real_T NextOutput_e;               // '<S32>/White Noise'
    int32_T clockTickCounter;          // '<S124>/Pulse Generator'
    int32_T clockTickCounter_p;        // '<S129>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S128>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S125>/Pulse Generator'
    uint32_T m_bpIndex[8];             // '<S123>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S123>/N to PWM'
    uint32_T RandSeed;                 // '<S14>/X Drift'
    uint32_T RandSeed_a;               // '<S14>/Y Drift'
    uint32_T m_bpIndex_cj[8];          // '<S13>/N to RPM'
    uint32_T m_bpIndex_m[8];           // '<S13>/ PWM to N'
    uint32_T RandSeed_j;               // '<S28>/White Noise'
    uint32_T RandSeed_d;               // '<S29>/White Noise'
    uint32_T RandSeed_e;               // '<S30>/White Noise'
    uint32_T RandSeed_n;               // '<S31>/White Noise'
    uint32_T RandSeed_b;               // '<S32>/White Noise'
    int_T Integrator_IWORK;            // '<S1>/Integrator'
    int_T Integrator1_IWORK;           // '<S1>/Integrator1'
    int_T Integrator2_IWORK;           // '<S1>/Integrator2'
    int_T Integrator3_IWORK;           // '<S1>/Integrator3'
    uint16_T Delay_DSTATE_g[8];        // '<S7>/Delay'
    boolean_T Delay1_DSTATE_c;         // '<S337>/Delay1'
    boolean_T DelayInput1_DSTATE;      // '<S349>/Delay Input1'
    int8_T SwitchCase_ActiveSubsystem; // '<S3>/Switch Case'
    int8_T Integrator_PrevResetState;  // '<S343>/Integrator'
    int8_T Integrator_PrevResetState_h;// '<S344>/Integrator'
    int8_T SwitchCase_ActiveSubsystem_m;// '<S9>/Switch Case'
    int8_T Integrator_PrevResetState_d;// '<S288>/Integrator'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S121>/Switch Case'
    uint8_T Integrator_IC_LOADING;     // '<S288>/Integrator'
    boolean_T Memory_PreviousInput[32];// '<S134>/Memory'
    boolean_T icLoad;                  // '<S243>/mv_Delay'
    boolean_T icLoad_a;                // '<S243>/x_Delay'
    boolean_T icLoad_j;                // '<S243>/slack_delay'
    boolean_T Memory_PreviousInput_p[32];// '<S210>/Memory'
    boolean_T Memory_PreviousInput_g[32];// '<S176>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S78>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S79>/Memory'
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
    real_T TransferFcn_CSTATE;         // '<S20>/Transfer Fcn'
    real_T TransferFcn_CSTATE_o;       // '<S21>/Transfer Fcn'
    real_T TransferFcn_CSTATE_p;       // '<S22>/Transfer Fcn'
    real_T TransferFcn_CSTATE_a;       // '<S23>/Transfer Fcn'
    real_T TransferFcn_CSTATE_f;       // '<S24>/Transfer Fcn'
    real_T TransferFcn_CSTATE_e;       // '<S25>/Transfer Fcn'
    real_T TransferFcn_CSTATE_ft;      // '<S26>/Transfer Fcn'
    real_T TransferFcn_CSTATE_fu;      // '<S27>/Transfer Fcn'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T Integrator1_CSTATE[4];      // '<S1>/Integrator1'
    real_T Integrator2_CSTATE[3];      // '<S1>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
  };

  // State derivatives (default storage)
  struct XDot_proc_control_node_T {
    real_T TransferFcn_CSTATE;         // '<S20>/Transfer Fcn'
    real_T TransferFcn_CSTATE_o;       // '<S21>/Transfer Fcn'
    real_T TransferFcn_CSTATE_p;       // '<S22>/Transfer Fcn'
    real_T TransferFcn_CSTATE_a;       // '<S23>/Transfer Fcn'
    real_T TransferFcn_CSTATE_f;       // '<S24>/Transfer Fcn'
    real_T TransferFcn_CSTATE_e;       // '<S25>/Transfer Fcn'
    real_T TransferFcn_CSTATE_ft;      // '<S26>/Transfer Fcn'
    real_T TransferFcn_CSTATE_fu;      // '<S27>/Transfer Fcn'
    real_T Integrator_CSTATE[3];       // '<S1>/Integrator'
    real_T Integrator1_CSTATE[4];      // '<S1>/Integrator1'
    real_T Integrator2_CSTATE[3];      // '<S1>/Integrator2'
    real_T Integrator3_CSTATE[3];      // '<S1>/Integrator3'
  };

  // State disabled
  struct XDis_proc_control_node_T {
    boolean_T TransferFcn_CSTATE;      // '<S20>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_o;    // '<S21>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_p;    // '<S22>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_a;    // '<S23>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_f;    // '<S24>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_e;    // '<S25>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_ft;   // '<S26>/Transfer Fcn'
    boolean_T TransferFcn_CSTATE_fu;   // '<S27>/Transfer Fcn'
    boolean_T Integrator_CSTATE[3];    // '<S1>/Integrator'
    boolean_T Integrator1_CSTATE[4];   // '<S1>/Integrator1'
    boolean_T Integrator2_CSTATE[3];   // '<S1>/Integrator2'
    boolean_T Integrator3_CSTATE[3];   // '<S1>/Integrator3'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_node_T {
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S337>/Trajectory generator'
    ZCSigState Integrator_Reset_ZCE;   // '<S1>/Integrator'
    ZCSigState Integrator1_Reset_ZCE;  // '<S1>/Integrator1'
    ZCSigState Integrator2_Reset_ZCE;  // '<S1>/Integrator2'
    ZCSigState Integrator3_Reset_ZCE;  // '<S1>/Integrator3'
  };

  // Parameters (default storage)
  struct P_proc_control_node_T {
    struct_KO2CdYYo4jwJijs9CUXyO MPC;  // Variable: MPC
                                          //  Referenced by:
                                          //    '<S98>/Constant'
                                          //    '<S98>/Constant1'
                                          //    '<S123>/PSU safe'
                                          //    '<S332>/Constant3'
                                          //    '<S336>/Constant3'
                                          //    '<S124>/Constant1'
                                          //    '<S124>/Constant3'
                                          //    '<S125>/Constant1'
                                          //    '<S125>/Constant3'
                                          //    '<S128>/Constant1'
                                          //    '<S128>/Constant3'

    struct_ZrQKn1ZmSobvV9swgXlOXB physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S16>/Constant'
                                             //    '<S269>/Constant'
                                             //    '<S127>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S10>/MATLAB System'

    struct_AffJq6cCxQVAMZUY7gzatF simulation;// Variable: simulation
                                                //  Referenced by:
                                                //    '<S16>/Constant1'
                                                //    '<S16>/Gain'
                                                //    '<S16>/Gain1'
                                                //    '<S270>/Constant1'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S13>/ PWM to N'
                                          //    '<S13>/N to RPM'
                                          //    '<S123>/N to A'
                                          //    '<S123>/N to PWM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S13>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S127>/MATLAB System'

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
                                          //  Referenced by: '<S339>/Gain'

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
                                          //  Referenced by: '<S339>/Gain'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S123>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S13>/ PWM to N'
                                          //    '<S123>/N to PWM'

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

    real_T SecondOrderFilter_FilterType;
                                 // Mask Parameter: SecondOrderFilter_FilterType
                                    //  Referenced by: '<S339>/Constant4'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S206>/UD'

    real_T DiscreteDerivative_ICPrevScal_m;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_m
                                 //  Referenced by: '<S276>/UD'

    real_T LowPassFilter_K;            // Mask Parameter: LowPassFilter_K
                                          //  Referenced by: '<S277>/K'

    real_T LowPassFilter_T;            // Mask Parameter: LowPassFilter_T
                                          //  Referenced by: '<S283>/Time constant'

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
                                   //    '<S78>/Initial Condition'
                                   //    '<S78>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S79>/Initial Condition'
                                  //    '<S79>/Memory'

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S349>/Delay Input1'

    SL_Bus_proc_control_node_MultiDOFJointTrajectoryPo_9xm16l Out1_Y0;// Computed Parameter: Out1_Y0
                                                                      //  Referenced by: '<S347>/Out1'

    SL_Bus_proc_control_node_MultiDOFJointTrajectoryPo_9xm16l Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S346>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                     //  Referenced by: '<S267>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S265>/Constant'

    SL_Bus_proc_control_node_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S99>/Constant'

    SL_Bus_proc_control_node_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                                //  Referenced by: '<S268>/Out1'

    SL_Bus_proc_control_node_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                      //  Referenced by: '<S266>/Constant'

    SL_Bus_proc_control_node_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S17>/Constant'

    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S95>/Constant'

    SL_Bus_proc_control_node_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                                    //  Referenced by: '<S106>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                          //  Referenced by: '<S72>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                 //  Referenced by: '<S69>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                          //  Referenced by: '<S66>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_l1;// Computed Parameter: Constant_Value_l1
                                                                  //  Referenced by: '<S63>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                 //  Referenced by: '<S89>/Constant'

    struct_fCppgaREqjbtxAN9QqIjrB MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S122>/MPC param'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_ma;// Computed Parameter: Out1_Y0_ma
                                                                      //  Referenced by: '<S74>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                      //  Referenced by: '<S71>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                                      //  Referenced by: '<S67>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_f2;// Computed Parameter: Constant_Value_f2
                                                                      //  Referenced by: '<S64>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S84>/Constant'

    struct_4PbJwSXWqPjMkDpID5GvdG Output_Y0;// Computed Parameter: Output_Y0
                                               //  Referenced by: '<S6>/Output'

    struct_PfHmiUbQ4BloXTikN7th4F CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S1>/Clean Output'

    struct_PfHmiUbQ4BloXTikN7th4F Output_Y0_k;// Computed Parameter: Output_Y0_k
                                                 //  Referenced by: '<S4>/Output'

    struct_nUfw8kBPNF0FwLMMzG6AD SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                     //  Referenced by: '<S1>/Sensors Output'

    SL_Bus_proc_control_node_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                               //  Referenced by: '<S376>/Out1'

    SL_Bus_proc_control_node_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                      //  Referenced by: '<S357>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                     //  Referenced by: '<S92>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                                     //  Referenced by: '<S348>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                             //  Referenced by: '<S389>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                    //  Referenced by: '<S383>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                               //  Referenced by: '<S345>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                      //  Referenced by: '<S340>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                               //  Referenced by: '<S104>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                        //  Referenced by: '<S384>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                                //  Referenced by: '<S378>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                        //  Referenced by: '<S386>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                                //  Referenced by: '<S380>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                        //  Referenced by: '<S387>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S381>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                        //  Referenced by: '<S388>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                               //  Referenced by: '<S382>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                           //  Referenced by: '<S73>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                  //  Referenced by: '<S70>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_nb;// Computed Parameter: Out1_Y0_nb
                                                            //  Referenced by: '<S68>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_oz;// Computed Parameter: Constant_Value_oz
                                                                   //  Referenced by: '<S65>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_bv;// Computed Parameter: Constant_Value_bv
                                                                   //  Referenced by: '<S87>/Constant'

    SL_Bus_proc_control_node_std_msgs_UInt8 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                         //  Referenced by: '<S385>/Out1'

    SL_Bus_proc_control_node_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                //  Referenced by: '<S379>/Constant'

    real_T TransferFcn_A;              // Computed Parameter: TransferFcn_A
                                          //  Referenced by: '<S20>/Transfer Fcn'

    real_T TransferFcn_C;              // Computed Parameter: TransferFcn_C
                                          //  Referenced by: '<S20>/Transfer Fcn'

    real_T TransferFcn_A_j;            // Computed Parameter: TransferFcn_A_j
                                          //  Referenced by: '<S21>/Transfer Fcn'

    real_T TransferFcn_C_m;            // Computed Parameter: TransferFcn_C_m
                                          //  Referenced by: '<S21>/Transfer Fcn'

    real_T TransferFcn_A_h;            // Computed Parameter: TransferFcn_A_h
                                          //  Referenced by: '<S22>/Transfer Fcn'

    real_T TransferFcn_C_l;            // Computed Parameter: TransferFcn_C_l
                                          //  Referenced by: '<S22>/Transfer Fcn'

    real_T TransferFcn_A_i;            // Computed Parameter: TransferFcn_A_i
                                          //  Referenced by: '<S23>/Transfer Fcn'

    real_T TransferFcn_C_f;            // Computed Parameter: TransferFcn_C_f
                                          //  Referenced by: '<S23>/Transfer Fcn'

    real_T TransferFcn_A_jp;           // Computed Parameter: TransferFcn_A_jp
                                          //  Referenced by: '<S24>/Transfer Fcn'

    real_T TransferFcn_C_n;            // Computed Parameter: TransferFcn_C_n
                                          //  Referenced by: '<S24>/Transfer Fcn'

    real_T TransferFcn_A_l;            // Computed Parameter: TransferFcn_A_l
                                          //  Referenced by: '<S25>/Transfer Fcn'

    real_T TransferFcn_C_nr;           // Computed Parameter: TransferFcn_C_nr
                                          //  Referenced by: '<S25>/Transfer Fcn'

    real_T TransferFcn_A_p;            // Computed Parameter: TransferFcn_A_p
                                          //  Referenced by: '<S26>/Transfer Fcn'

    real_T TransferFcn_C_h;            // Computed Parameter: TransferFcn_C_h
                                          //  Referenced by: '<S26>/Transfer Fcn'

    real_T TransferFcn_A_n;            // Computed Parameter: TransferFcn_A_n
                                          //  Referenced by: '<S27>/Transfer Fcn'

    real_T TransferFcn_C_fa;           // Computed Parameter: TransferFcn_C_fa
                                          //  Referenced by: '<S27>/Transfer Fcn'

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

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S45>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S45>/Gain1'

    real_T Constant_Value_mj;          // Expression: 0.5
                                          //  Referenced by: '<S45>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S45>/Gain2'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S39>/1//2'

    real_T Constant_Value_k2;          // Expression: 0.5
                                          //  Referenced by: '<S49>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S49>/Gain2'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S49>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S49>/Gain1'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S50>/Gain'

    real_T Constant_Value_gp;          // Expression: 0.5
                                          //  Referenced by: '<S50>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S50>/Gain2'

    real_T Gain1_Gain_eg;              // Expression: 2
                                          //  Referenced by: '<S50>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S51>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S51>/Gain1'

    real_T Constant_Value_iw;          // Expression: 0.5
                                          //  Referenced by: '<S51>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S51>/Gain2'

    real_T Constant_Value_ah;          // Expression: 0.5
                                          //  Referenced by: '<S55>/Constant'

    real_T Gain_Gain_a;                // Expression: 2
                                          //  Referenced by: '<S55>/Gain'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S55>/Gain1'

    real_T Gain2_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S55>/Gain2'

    real_T Constant_Value_ar;          // Expression: 0.5
                                          //  Referenced by: '<S56>/Constant'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S56>/Gain'

    real_T Gain1_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S56>/Gain1'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S56>/Gain2'

    real_T Constant_Value_i2;          // Expression: 0.5
                                          //  Referenced by: '<S57>/Constant'

    real_T Gain_Gain_b;                // Expression: 2
                                          //  Referenced by: '<S57>/Gain'

    real_T Gain1_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S57>/Gain1'

    real_T Gain2_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S57>/Gain2'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S62>/y'

    real_T Constant_Value_f2j;         // Expression: 0
                                          //  Referenced by: '<S62>/Constant'

    real_T Constant1_Value;            // Expression: 0
                                          //  Referenced by: '<S62>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_pz;          // Expression: 1
                                          //  Referenced by: '<S116>/Constant'

    real_T Constant_Value_pm;          // Expression: 1
                                          //  Referenced by: '<S117>/Constant'

    real_T Gain_Gain_ei;               // Expression: 180/pi
                                          //  Referenced by: '<S112>/Gain'

    real_T Gain_Gain_i;                // Expression: 180/pi
                                          //  Referenced by: '<S111>/Gain'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S173>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S173>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S173>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S176>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S173>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S176>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S176>/last_mv'

    real_T Constant_Value_e3[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S125>/Constant'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S176>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S173>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S173>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S173>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S176>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S176>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S173>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S176>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S173>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S173>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S176>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S173>/ecr.wt_zero'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S125>/Delay1'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S176>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S125>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S125>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S125>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S125>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S127>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S127>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S127>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S206>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S128>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S210>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S210>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S208>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S208>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S210>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S208>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S210>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S210>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S208>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S210>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S208>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S210>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S208>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S128>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(Xi.',11,1)
                                           //  Referenced by: '<S128>/Delay2'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S210>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S210>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S128>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S128>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S128>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S128>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S210>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S210>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S129>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S241>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S241>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S241>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S241>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S241>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S241>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S241>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S241>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S241>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S241>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S243>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S243>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S243>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S241>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S129>/Pulse Generator'

    real_T Constant_Value_lp;          // Expression: 1
                                          //  Referenced by: '<S168>/Constant'

    real_T Constant_Value_du;          // Expression: 1
                                          //  Referenced by: '<S169>/Constant'

    real_T E_zero_Value_e[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S130>/E_zero'

    real_T F_zero_Value_f[12];         // Expression: zeros(1,12)
                                          //  Referenced by: '<S130>/F_zero'

    real_T G_zero_Value_c;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S130>/G_zero'

    real_T LastPcov_InitialCondition_g[400];// Expression: lastPcov
                                               //  Referenced by: '<S134>/LastPcov'

    real_T ywt_zero_Value[12];         // Expression: zeros(12,1)
                                          //  Referenced by: '<S130>/y.wt_zero'

    real_T uwt_zero_Value[8];          // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/u.wt_zero'

    real_T duwt_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/du.wt_zero'

    real_T extmv_zero_Value_k[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/ext.mv_zero'

    real_T extmv_scale_Gain_i[8];      // Expression: RMVscale
                                          //  Referenced by: '<S134>/ext.mv_scale'

    real_T last_mv_InitialCondition_j[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S134>/last_mv'

    real_T Constant_Value_oq[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S124>/Constant'

    real_T ym_zero_Value_k[12];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S134>/ym_zero'

    real_T md_zero_Value_m;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S130>/md_zero'

    real_T umin_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/umin_zero'

    real_T umax_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/umax_zero'

    real_T ymin_zero_Value_j5[12];     // Expression: zeros(12,1)
                                          //  Referenced by: '<S130>/ymin_zero'

    real_T ymax_zero_Value_gg[12];     // Expression: zeros(12,1)
                                          //  Referenced by: '<S130>/ymax_zero'

    real_T umin_scale4_Gain_f[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S134>/umin_scale4'

    real_T ymin_scale1_Gain_j[12];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S134>/ymin_scale1'

    real_T S_zero_Value_d;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S130>/S_zero'

    real_T ymin_scale2_Gain_b;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S134>/ymin_scale2'

    real_T switch_zero_Value_g;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S130>/switch_zero'

    real_T mvtarget_zero_Value_o[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S130>/mv.target_zero'

    real_T uref_scale_Gain_m[8];       // Expression: RMVscale
                                          //  Referenced by: '<S134>/uref_scale'

    real_T ecrwt_zero_Value_j;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S130>/ecr.wt_zero'

    real_T Delay1_InitialCondition_l[8];// Expression: zeros(MPC.nu,1)
                                           //  Referenced by: '<S124>/Delay1'

    real_T u_scale_Gain_k[8];          // Expression: MVscale
                                          //  Referenced by: '<S134>/u_scale'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S124>/Pulse Generator'

    real_T PulseGenerator_Period_g;    // Expression: 2
                                          //  Referenced by: '<S124>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 1
                                          //  Referenced by: '<S124>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_h;// Expression: 0
                                          //  Referenced by: '<S124>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S126>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S126>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S126>/Constant2'

    real_T Constant_Value_hf;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant1_Value_f;          // Expression: 0
                                          //  Referenced by: '<S7>/Constant1'

    real_T Merge_InitialOutput;       // Computed Parameter: Merge_InitialOutput
                                         //  Referenced by: '<S121>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S123>/Delay'

    real_T Gain_Gain_jj;               // Expression: 2
                                          //  Referenced by: '<S294>/Gain'

    real_T Gain1_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S294>/Gain1'

    real_T Constant_Value_a1;          // Expression: 0.5
                                          //  Referenced by: '<S294>/Constant'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S294>/Gain2'

    real_T TSamp_WtEt_d;               // Computed Parameter: TSamp_WtEt_d
                                          //  Referenced by: '<S276>/TSamp'

    real_T Constant_Value_fa;          // Expression: 0
                                          //  Referenced by: '<S286>/Constant'

    real_T Integrator_gainval;         // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S288>/Integrator'

    real_T Integrator_UpperSat;        // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S288>/Integrator'

    real_T Integrator_LowerSat;        // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S288>/Integrator'

    real_T Saturation_UpperSat;        // Expression: windupUpperLimit
                                          //  Referenced by: '<S288>/Saturation'

    real_T Saturation_LowerSat;        // Expression: windupLowerLimit
                                          //  Referenced by: '<S288>/Saturation'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S312>/Quat'

    real_T siydevant_Value[3];         // Expression: [0,pi,pi/2]
                                          //  Referenced by: '<S312>/si y devant'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S313>/1//2'

    real_T enable_Y0;                  // Computed Parameter: enable_Y0
                                          //  Referenced by: '<S270>/enable'

    real_T error_Y0;                   // Computed Parameter: error_Y0
                                          //  Referenced by: '<S270>/error'

    real_T BodyVelocity_Y0;            // Computed Parameter: BodyVelocity_Y0
                                          //  Referenced by: '<S270>/Body Velocity'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S309>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S309>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S315>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S315>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S315>/Gain1'

    real_T Gain2_Gain_oj;              // Expression: 2
                                          //  Referenced by: '<S315>/Gain2'

    real_T Constant_Value_j;           // Expression: 0.5
                                          //  Referenced by: '<S316>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S316>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S316>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S316>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S317>/Constant'

    real_T Gain_Gain_n;                // Expression: 2
                                          //  Referenced by: '<S317>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S317>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S317>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S273>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S323>/Q'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S323>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S323>/MeasurementFcn2Inputs'

    real_T R1_Value[81];               // Expression: p.R{1}
                                          //  Referenced by: '<S323>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S323>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S323>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S323>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S336>/Constant7'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S337>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S337>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S337>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S354>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S354>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S354>/time'

    real_T Input_Y0;                   // Computed Parameter: Input_Y0
                                          //  Referenced by: '<S354>/Input'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S354>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S354>/Constant1'

    real_T Constant_Value_dt;          // Expression: 1
                                          //  Referenced by: '<S363>/Constant'

    real_T Constant_Value_eq;          // Expression: 1
                                          //  Referenced by: '<S364>/Constant'

    real_T Constant_Value_mn;          // Expression: 1
                                          //  Referenced by: '<S371>/Constant'

    real_T Constant_Value_jt;          // Expression: 1
                                          //  Referenced by: '<S372>/Constant'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S358>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S377>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S359>/Constant'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S359>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S359>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S337>/Constant'

    real_T Constant_Value_m5[13];     // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<S332>/Constant'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

    real_T Constant_Value_de;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S274>/ '

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T Constant_Value_as;          // Expression: 0
                                          //  Referenced by: '<S339>/Constant'

    real_T Constant3_Value;            // Expression: x0
                                          //  Referenced by: '<S339>/Constant3'

    real_T Integrator_gainval_o;     // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S343>/Integrator'

    real_T Integrator_UpperSat_a;      // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S343>/Integrator'

    real_T Integrator_LowerSat_g;      // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S343>/Integrator'

    real_T Saturation_UpperSat_f;      // Expression: windupUpperLimit
                                          //  Referenced by: '<S343>/Saturation'

    real_T Saturation_LowerSat_f;      // Expression: windupLowerLimit
                                          //  Referenced by: '<S343>/Saturation'

    real_T Gain3_Gain;                 // Expression: (2*pi*fn).^2
                                          //  Referenced by: '<S339>/Gain3'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S333>/Gain'

    real_T Constant1_Value_d;          // Expression: 0
                                          //  Referenced by: '<S339>/Constant1'

    real_T Constant2_Value_m;          // Expression: xdot0
                                          //  Referenced by: '<S339>/Constant2'

    real_T Integrator_gainval_e;     // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S344>/Integrator'

    real_T Integrator_UpperSat_f;      // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S344>/Integrator'

    real_T Integrator_LowerSat_p;      // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S344>/Integrator'

    real_T Saturation_UpperSat_m;      // Expression: windupUpperLimit
                                          //  Referenced by: '<S344>/Saturation'

    real_T Saturation_LowerSat_c;      // Expression: windupLowerLimit
                                          //  Referenced by: '<S344>/Saturation'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S204>/FixedHorizonOptimizer'

    int32_T FixedHorizonOptimizer_Ndis_d;// Expression: Ndis
                                            //  Referenced by: '<S238>/FixedHorizonOptimizer'

    int32_T FixedHorizonOptimizer_Ndis_l;// Expression: Ndis
                                            //  Referenced by: '<S162>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

    boolean_T depthnew_Y0;             // Computed Parameter: depthnew_Y0
                                          //  Referenced by: '<S61>/depth new'

    boolean_T depthnew_Y0_l;           // Computed Parameter: depthnew_Y0_l
                                          //  Referenced by: '<S60>/depth new'

    boolean_T Memory_InitialCondition[32];// Expression: iA
                                             //  Referenced by: '<S176>/Memory'

    boolean_T Memory_InitialCondition_p[32];// Expression: iA
                                               //  Referenced by: '<S210>/Memory'

    boolean_T Memory_InitialCondition_c[32];// Expression: iA
                                               //  Referenced by: '<S134>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S324>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S325>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S323>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S323>/Enable1'

    boolean_T isTrajDone_Y0;           // Computed Parameter: isTrajDone_Y0
                                          //  Referenced by: '<S335>/isTrajDone'

    boolean_T Constant_Value_hm;       // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S352>/Constant'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S337>/Delay1'

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
        uint16_T TID[8];
      } TaskCounters;

      SimTimeStep simTimeStep;
      boolean_T stopRequestedFlag;
      time_T *t;
      time_T tArray[8];
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

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_node_xnrm2_e(int32_T n, const real_T x[198], int32_T ix0);
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
  void MultiTrajectoryManager_resetImp(MultiTrajectoryManager_proc_c_T *b_this);
  real_T proc_control_node_norm_b4(const real_T x[3]);
  void MultiTrajectoryManager_stepImpl(MultiTrajectoryManager_proc_c_T *b_this,
    boolean_T isNew, const SL_Bus_proc_control_node_geometry_msgs_Transform
    trajMsg_Transforms[2000], uint32_T trajMsg_Transforms_SL_Info_Rece, const
    SL_Bus_proc_control_node_geometry_msgs_Twist trajMsg_Velocities[2000],
    real_T reset, const real_T mesuredPose[13], real_T currentPose[130],
    boolean_T *isReached, boolean_T *isTrajDone, real_T initWpt[7]);
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
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    const real_T poses[13], const real_T target[7], real_T reset, const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], real_T Anqv[169]);
  void proc_control_node_lusolve(const real_T A[169], const real_T B[169],
    real_T X[169]);
  void proc_co_PadeApproximantOfDegree(const real_T A[169], uint8_T m, real_T F
    [169]);
  void proc_control_node_mldivide(const real_T A[36], const real_T B[36], real_T
    Y[36]);
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
//  Block '<S14>/Scope1' : Unused code path elimination
//  Block '<S43>/Constant' : Unused code path elimination
//  Block '<S43>/Gain' : Unused code path elimination
//  Block '<S43>/Gain1' : Unused code path elimination
//  Block '<S43>/Gain2' : Unused code path elimination
//  Block '<S43>/Product' : Unused code path elimination
//  Block '<S43>/Product1' : Unused code path elimination
//  Block '<S43>/Product2' : Unused code path elimination
//  Block '<S43>/Product3' : Unused code path elimination
//  Block '<S43>/Product4' : Unused code path elimination
//  Block '<S43>/Product5' : Unused code path elimination
//  Block '<S43>/Product6' : Unused code path elimination
//  Block '<S43>/Product7' : Unused code path elimination
//  Block '<S43>/Product8' : Unused code path elimination
//  Block '<S43>/Sum' : Unused code path elimination
//  Block '<S43>/Sum1' : Unused code path elimination
//  Block '<S43>/Sum2' : Unused code path elimination
//  Block '<S43>/Sum3' : Unused code path elimination
//  Block '<S44>/Constant' : Unused code path elimination
//  Block '<S44>/Gain' : Unused code path elimination
//  Block '<S44>/Gain1' : Unused code path elimination
//  Block '<S44>/Gain2' : Unused code path elimination
//  Block '<S44>/Product' : Unused code path elimination
//  Block '<S44>/Product1' : Unused code path elimination
//  Block '<S44>/Product2' : Unused code path elimination
//  Block '<S44>/Product3' : Unused code path elimination
//  Block '<S44>/Product4' : Unused code path elimination
//  Block '<S44>/Product5' : Unused code path elimination
//  Block '<S44>/Product6' : Unused code path elimination
//  Block '<S44>/Product7' : Unused code path elimination
//  Block '<S44>/Product8' : Unused code path elimination
//  Block '<S44>/Sum' : Unused code path elimination
//  Block '<S44>/Sum1' : Unused code path elimination
//  Block '<S44>/Sum2' : Unused code path elimination
//  Block '<S44>/Sum3' : Unused code path elimination
//  Block '<S16>/Scope' : Unused code path elimination
//  Block '<S16>/Scope1' : Unused code path elimination
//  Block '<S2>/Scope1' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S3>/Display' : Unused code path elimination
//  Block '<S76>/Data Type Duplicate' : Unused code path elimination
//  Block '<S78>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S77>/Data Type Duplicate' : Unused code path elimination
//  Block '<S79>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S134>/Floor' : Unused code path elimination
//  Block '<S134>/Floor1' : Unused code path elimination
//  Block '<S135>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S136>/Matrix Dimension Check' : Unused code path elimination
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
//  Block '<S155>/Vector Dimension Check' : Unused code path elimination
//  Block '<S156>/Vector Dimension Check' : Unused code path elimination
//  Block '<S157>/Vector Dimension Check' : Unused code path elimination
//  Block '<S158>/Vector Dimension Check' : Unused code path elimination
//  Block '<S159>/Vector Dimension Check' : Unused code path elimination
//  Block '<S160>/Vector Dimension Check' : Unused code path elimination
//  Block '<S134>/last_x' : Unused code path elimination
//  Block '<S161>/Vector Dimension Check' : Unused code path elimination
//  Block '<S134>/useq_scale' : Unused code path elimination
//  Block '<S134>/useq_scale1' : Unused code path elimination
//  Block '<S130>/m_zero' : Unused code path elimination
//  Block '<S130>/p_zero' : Unused code path elimination
//  Block '<S176>/Floor' : Unused code path elimination
//  Block '<S176>/Floor1' : Unused code path elimination
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
//  Block '<S191>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S192>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S193>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S194>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S195>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S196>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S197>/Vector Dimension Check' : Unused code path elimination
//  Block '<S198>/Vector Dimension Check' : Unused code path elimination
//  Block '<S199>/Vector Dimension Check' : Unused code path elimination
//  Block '<S200>/Vector Dimension Check' : Unused code path elimination
//  Block '<S201>/Vector Dimension Check' : Unused code path elimination
//  Block '<S202>/Vector Dimension Check' : Unused code path elimination
//  Block '<S176>/last_x' : Unused code path elimination
//  Block '<S203>/Vector Dimension Check' : Unused code path elimination
//  Block '<S176>/useq_scale' : Unused code path elimination
//  Block '<S176>/useq_scale1' : Unused code path elimination
//  Block '<S173>/m_zero' : Unused code path elimination
//  Block '<S173>/p_zero' : Unused code path elimination
//  Block '<S121>/Display' : Unused code path elimination
//  Block '<S206>/Data Type Duplicate' : Unused code path elimination
//  Block '<S210>/Floor' : Unused code path elimination
//  Block '<S210>/Floor1' : Unused code path elimination
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
//  Block '<S227>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S228>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S229>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S230>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S231>/Vector Dimension Check' : Unused code path elimination
//  Block '<S232>/Vector Dimension Check' : Unused code path elimination
//  Block '<S233>/Vector Dimension Check' : Unused code path elimination
//  Block '<S234>/Vector Dimension Check' : Unused code path elimination
//  Block '<S235>/Vector Dimension Check' : Unused code path elimination
//  Block '<S236>/Vector Dimension Check' : Unused code path elimination
//  Block '<S210>/last_x' : Unused code path elimination
//  Block '<S237>/Vector Dimension Check' : Unused code path elimination
//  Block '<S208>/m_zero' : Unused code path elimination
//  Block '<S208>/p_zero' : Unused code path elimination
//  Block '<S244>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S245>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S246>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S247>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S248>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S249>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S250>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S251>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S252>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S253>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S254>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S255>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S256>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S257>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S258>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S259>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S260>/Vector Dimension Check' : Unused code path elimination
//  Block '<S261>/Vector Dimension Check' : Unused code path elimination
//  Block '<S262>/Vector Dimension Check' : Unused code path elimination
//  Block '<S263>/Vector Dimension Check' : Unused code path elimination
//  Block '<S241>/mv.init_zero' : Unused code path elimination
//  Block '<S241>/x.init_zero' : Unused code path elimination
//  Block '<S122>/Display' : Unused code path elimination
//  Block '<S123>/Scope1' : Unused code path elimination
//  Block '<S269>/Constant1' : Unused code path elimination
//  Block '<S276>/Data Type Duplicate' : Unused code path elimination
//  Block '<S269>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S292>/Constant' : Unused code path elimination
//  Block '<S292>/Gain' : Unused code path elimination
//  Block '<S292>/Gain1' : Unused code path elimination
//  Block '<S292>/Gain2' : Unused code path elimination
//  Block '<S292>/Product' : Unused code path elimination
//  Block '<S292>/Product1' : Unused code path elimination
//  Block '<S292>/Product2' : Unused code path elimination
//  Block '<S292>/Product3' : Unused code path elimination
//  Block '<S292>/Product4' : Unused code path elimination
//  Block '<S292>/Product5' : Unused code path elimination
//  Block '<S292>/Product6' : Unused code path elimination
//  Block '<S292>/Product7' : Unused code path elimination
//  Block '<S292>/Product8' : Unused code path elimination
//  Block '<S292>/Sum' : Unused code path elimination
//  Block '<S292>/Sum1' : Unused code path elimination
//  Block '<S292>/Sum2' : Unused code path elimination
//  Block '<S292>/Sum3' : Unused code path elimination
//  Block '<S293>/Constant' : Unused code path elimination
//  Block '<S293>/Gain' : Unused code path elimination
//  Block '<S293>/Gain1' : Unused code path elimination
//  Block '<S293>/Gain2' : Unused code path elimination
//  Block '<S293>/Product' : Unused code path elimination
//  Block '<S293>/Product1' : Unused code path elimination
//  Block '<S293>/Product2' : Unused code path elimination
//  Block '<S293>/Product3' : Unused code path elimination
//  Block '<S293>/Product4' : Unused code path elimination
//  Block '<S293>/Product5' : Unused code path elimination
//  Block '<S293>/Product6' : Unused code path elimination
//  Block '<S293>/Product7' : Unused code path elimination
//  Block '<S293>/Product8' : Unused code path elimination
//  Block '<S293>/Sum' : Unused code path elimination
//  Block '<S293>/Sum1' : Unused code path elimination
//  Block '<S293>/Sum2' : Unused code path elimination
//  Block '<S293>/Sum3' : Unused code path elimination
//  Block '<S297>/Product' : Unused code path elimination
//  Block '<S297>/Product1' : Unused code path elimination
//  Block '<S297>/Product2' : Unused code path elimination
//  Block '<S297>/Product3' : Unused code path elimination
//  Block '<S302>/Product' : Unused code path elimination
//  Block '<S302>/Product1' : Unused code path elimination
//  Block '<S302>/Product2' : Unused code path elimination
//  Block '<S302>/Product3' : Unused code path elimination
//  Block '<S302>/Sum' : Unused code path elimination
//  Block '<S301>/sqrt' : Unused code path elimination
//  Block '<S298>/Constant' : Unused code path elimination
//  Block '<S298>/Gain' : Unused code path elimination
//  Block '<S298>/Gain1' : Unused code path elimination
//  Block '<S298>/Gain2' : Unused code path elimination
//  Block '<S298>/Product' : Unused code path elimination
//  Block '<S298>/Product1' : Unused code path elimination
//  Block '<S298>/Product2' : Unused code path elimination
//  Block '<S298>/Product3' : Unused code path elimination
//  Block '<S298>/Product4' : Unused code path elimination
//  Block '<S298>/Product5' : Unused code path elimination
//  Block '<S298>/Product6' : Unused code path elimination
//  Block '<S298>/Product7' : Unused code path elimination
//  Block '<S298>/Product8' : Unused code path elimination
//  Block '<S298>/Sum' : Unused code path elimination
//  Block '<S298>/Sum1' : Unused code path elimination
//  Block '<S298>/Sum2' : Unused code path elimination
//  Block '<S298>/Sum3' : Unused code path elimination
//  Block '<S299>/Constant' : Unused code path elimination
//  Block '<S299>/Gain' : Unused code path elimination
//  Block '<S299>/Gain1' : Unused code path elimination
//  Block '<S299>/Gain2' : Unused code path elimination
//  Block '<S299>/Product' : Unused code path elimination
//  Block '<S299>/Product1' : Unused code path elimination
//  Block '<S299>/Product2' : Unused code path elimination
//  Block '<S299>/Product3' : Unused code path elimination
//  Block '<S299>/Product4' : Unused code path elimination
//  Block '<S299>/Product5' : Unused code path elimination
//  Block '<S299>/Product6' : Unused code path elimination
//  Block '<S299>/Product7' : Unused code path elimination
//  Block '<S299>/Product8' : Unused code path elimination
//  Block '<S299>/Sum' : Unused code path elimination
//  Block '<S299>/Sum1' : Unused code path elimination
//  Block '<S299>/Sum2' : Unused code path elimination
//  Block '<S299>/Sum3' : Unused code path elimination
//  Block '<S300>/Constant' : Unused code path elimination
//  Block '<S300>/Gain' : Unused code path elimination
//  Block '<S300>/Gain1' : Unused code path elimination
//  Block '<S300>/Gain2' : Unused code path elimination
//  Block '<S300>/Product' : Unused code path elimination
//  Block '<S300>/Product1' : Unused code path elimination
//  Block '<S300>/Product2' : Unused code path elimination
//  Block '<S300>/Product3' : Unused code path elimination
//  Block '<S300>/Product4' : Unused code path elimination
//  Block '<S300>/Product5' : Unused code path elimination
//  Block '<S300>/Product6' : Unused code path elimination
//  Block '<S300>/Product7' : Unused code path elimination
//  Block '<S300>/Product8' : Unused code path elimination
//  Block '<S300>/Sum' : Unused code path elimination
//  Block '<S300>/Sum1' : Unused code path elimination
//  Block '<S300>/Sum2' : Unused code path elimination
//  Block '<S300>/Sum3' : Unused code path elimination
//  Block '<S303>/Product' : Unused code path elimination
//  Block '<S303>/Product1' : Unused code path elimination
//  Block '<S303>/Product2' : Unused code path elimination
//  Block '<S303>/Product3' : Unused code path elimination
//  Block '<S308>/Product' : Unused code path elimination
//  Block '<S308>/Product1' : Unused code path elimination
//  Block '<S308>/Product2' : Unused code path elimination
//  Block '<S308>/Product3' : Unused code path elimination
//  Block '<S308>/Sum' : Unused code path elimination
//  Block '<S307>/sqrt' : Unused code path elimination
//  Block '<S304>/Constant' : Unused code path elimination
//  Block '<S304>/Gain' : Unused code path elimination
//  Block '<S304>/Gain1' : Unused code path elimination
//  Block '<S304>/Gain2' : Unused code path elimination
//  Block '<S304>/Product' : Unused code path elimination
//  Block '<S304>/Product1' : Unused code path elimination
//  Block '<S304>/Product2' : Unused code path elimination
//  Block '<S304>/Product3' : Unused code path elimination
//  Block '<S304>/Product4' : Unused code path elimination
//  Block '<S304>/Product5' : Unused code path elimination
//  Block '<S304>/Product6' : Unused code path elimination
//  Block '<S304>/Product7' : Unused code path elimination
//  Block '<S304>/Product8' : Unused code path elimination
//  Block '<S304>/Sum' : Unused code path elimination
//  Block '<S304>/Sum1' : Unused code path elimination
//  Block '<S304>/Sum2' : Unused code path elimination
//  Block '<S304>/Sum3' : Unused code path elimination
//  Block '<S305>/Constant' : Unused code path elimination
//  Block '<S305>/Gain' : Unused code path elimination
//  Block '<S305>/Gain1' : Unused code path elimination
//  Block '<S305>/Gain2' : Unused code path elimination
//  Block '<S305>/Product' : Unused code path elimination
//  Block '<S305>/Product1' : Unused code path elimination
//  Block '<S305>/Product2' : Unused code path elimination
//  Block '<S305>/Product3' : Unused code path elimination
//  Block '<S305>/Product4' : Unused code path elimination
//  Block '<S305>/Product5' : Unused code path elimination
//  Block '<S305>/Product6' : Unused code path elimination
//  Block '<S305>/Product7' : Unused code path elimination
//  Block '<S305>/Product8' : Unused code path elimination
//  Block '<S305>/Sum' : Unused code path elimination
//  Block '<S305>/Sum1' : Unused code path elimination
//  Block '<S305>/Sum2' : Unused code path elimination
//  Block '<S305>/Sum3' : Unused code path elimination
//  Block '<S306>/Constant' : Unused code path elimination
//  Block '<S306>/Gain' : Unused code path elimination
//  Block '<S306>/Gain1' : Unused code path elimination
//  Block '<S306>/Gain2' : Unused code path elimination
//  Block '<S306>/Product' : Unused code path elimination
//  Block '<S306>/Product1' : Unused code path elimination
//  Block '<S306>/Product2' : Unused code path elimination
//  Block '<S306>/Product3' : Unused code path elimination
//  Block '<S306>/Product4' : Unused code path elimination
//  Block '<S306>/Product5' : Unused code path elimination
//  Block '<S306>/Product6' : Unused code path elimination
//  Block '<S306>/Product7' : Unused code path elimination
//  Block '<S306>/Product8' : Unused code path elimination
//  Block '<S306>/Sum' : Unused code path elimination
//  Block '<S306>/Sum1' : Unused code path elimination
//  Block '<S306>/Sum2' : Unused code path elimination
//  Block '<S306>/Sum3' : Unused code path elimination
//  Block '<S269>/Scope' : Unused code path elimination
//  Block '<S269>/Scope1' : Unused code path elimination
//  Block '<S269>/Sum4' : Unused code path elimination
//  Block '<S271>/Scope' : Unused code path elimination
//  Block '<S271>/Scope1' : Unused code path elimination
//  Block '<S271>/Scope2' : Unused code path elimination
//  Block '<S271>/Scope3' : Unused code path elimination
//  Block '<S8>/Scope' : Unused code path elimination
//  Block '<S273>/Constant' : Unused code path elimination
//  Block '<S324>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S325>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S327>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S323>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S323>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S323>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S9>/Scope' : Unused code path elimination
//  Block '<S333>/Scope1' : Unused code path elimination
//  Block '<S335>/Display' : Unused code path elimination
//  Block '<S335>/Display1' : Unused code path elimination
//  Block '<S335>/Scope' : Unused code path elimination
//  Block '<S354>/Display' : Unused code path elimination
//  Block '<S354>/Selector3' : Unused code path elimination
//  Block '<S337>/Scope' : Unused code path elimination
//  Block '<S337>/Scope1' : Unused code path elimination
//  Block '<S337>/Scope2' : Unused code path elimination
//  Block '<S337>/Scope3' : Unused code path elimination
//  Block '<S359>/Scope' : Unused code path elimination
//  Block '<S134>/Reshape' : Reshape block reduction
//  Block '<S134>/Reshape1' : Reshape block reduction
//  Block '<S134>/Reshape2' : Reshape block reduction
//  Block '<S134>/Reshape3' : Reshape block reduction
//  Block '<S134>/Reshape4' : Reshape block reduction
//  Block '<S134>/Reshape5' : Reshape block reduction
//  Block '<S176>/Reshape' : Reshape block reduction
//  Block '<S176>/Reshape1' : Reshape block reduction
//  Block '<S176>/Reshape2' : Reshape block reduction
//  Block '<S176>/Reshape3' : Reshape block reduction
//  Block '<S176>/Reshape4' : Reshape block reduction
//  Block '<S176>/Reshape5' : Reshape block reduction
//  Block '<S210>/Reshape' : Reshape block reduction
//  Block '<S210>/Reshape1' : Reshape block reduction
//  Block '<S210>/Reshape2' : Reshape block reduction
//  Block '<S210>/Reshape3' : Reshape block reduction
//  Block '<S210>/Reshape4' : Reshape block reduction
//  Block '<S210>/Reshape5' : Reshape block reduction
//  Block '<S242>/Reshape1' : Reshape block reduction
//  Block '<S242>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S242>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S243>/reshape_mv' : Reshape block reduction
//  Block '<S323>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S323>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S273>/Zero-Order Hold' : Eliminated since input and output rates are identical


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
//  '<S17>'  : 'proc_control_node/Modèle Physique/Modele Thruster/Blank Message2'
//  '<S18>'  : 'proc_control_node/Modèle Physique/Modele Thruster/MATLAB Function3'
//  '<S19>'  : 'proc_control_node/Modèle Physique/Modele Thruster/Publish2'
//  '<S20>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T1'
//  '<S21>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T2'
//  '<S22>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T3'
//  '<S23>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T4'
//  '<S24>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T5'
//  '<S25>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T6'
//  '<S26>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T7'
//  '<S27>'  : 'proc_control_node/Modèle Physique/Modele Thruster/T8'
//  '<S28>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise'
//  '<S29>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise1'
//  '<S30>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise2'
//  '<S31>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise3'
//  '<S32>'  : 'proc_control_node/Modèle Physique/Sensor Model/Band-Limited White Noise4'
//  '<S33>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse'
//  '<S34>'  : 'proc_control_node/Modèle Physique/Sensor Model/MATLAB Function'
//  '<S35>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Conjugate'
//  '<S36>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation'
//  '<S37>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1'
//  '<S38>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2'
//  '<S39>'  : 'proc_control_node/Modèle Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S40>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S41>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S42>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S43>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S44>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S45>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S46>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S47>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S48>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S49>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S50>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S51>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S52>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S53>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S54>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S55>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V1'
//  '<S56>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V2'
//  '<S57>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/V3'
//  '<S58>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S59>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S60>'  : 'proc_control_node/ROS Input/Real System'
//  '<S61>'  : 'proc_control_node/ROS Input/Simulation'
//  '<S62>'  : 'proc_control_node/ROS Input/Subsystem'
//  '<S63>'  : 'proc_control_node/ROS Input/Real System/Subscribe'
//  '<S64>'  : 'proc_control_node/ROS Input/Real System/Subscribe1'
//  '<S65>'  : 'proc_control_node/ROS Input/Real System/Subscribe2'
//  '<S66>'  : 'proc_control_node/ROS Input/Real System/Subscribe/Enabled Subsystem'
//  '<S67>'  : 'proc_control_node/ROS Input/Real System/Subscribe1/Enabled Subsystem'
//  '<S68>'  : 'proc_control_node/ROS Input/Real System/Subscribe2/Enabled Subsystem'
//  '<S69>'  : 'proc_control_node/ROS Input/Simulation/Subscribe'
//  '<S70>'  : 'proc_control_node/ROS Input/Simulation/Subscribe depth'
//  '<S71>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1'
//  '<S72>'  : 'proc_control_node/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S73>'  : 'proc_control_node/ROS Input/Simulation/Subscribe depth/Enabled Subsystem'
//  '<S74>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S75>'  : 'proc_control_node/ROS Input/Subsystem/MATLAB Function'
//  '<S76>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable'
//  '<S77>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1'
//  '<S78>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable/Subsystem'
//  '<S79>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S80>'  : 'proc_control_node/ROS Output/Send DVL msg'
//  '<S81>'  : 'proc_control_node/ROS Output/Send Depth msg'
//  '<S82>'  : 'proc_control_node/ROS Output/Send IMU msg'
//  '<S83>'  : 'proc_control_node/ROS Output/Send to Unity'
//  '<S84>'  : 'proc_control_node/ROS Output/Send DVL msg/   '
//  '<S85>'  : 'proc_control_node/ROS Output/Send DVL msg/MATLAB Function'
//  '<S86>'  : 'proc_control_node/ROS Output/Send DVL msg/Publish'
//  '<S87>'  : 'proc_control_node/ROS Output/Send Depth msg/Blank Message'
//  '<S88>'  : 'proc_control_node/ROS Output/Send Depth msg/Publish Depth'
//  '<S89>'  : 'proc_control_node/ROS Output/Send IMU msg/   '
//  '<S90>'  : 'proc_control_node/ROS Output/Send IMU msg/MATLAB Function'
//  '<S91>'  : 'proc_control_node/ROS Output/Send IMU msg/Publish imu_info'
//  '<S92>'  : 'proc_control_node/ROS Output/Send to Unity/   '
//  '<S93>'  : 'proc_control_node/ROS Output/Send to Unity/MATLAB Function'
//  '<S94>'  : 'proc_control_node/ROS Output/Send to Unity/Publish'
//  '<S95>'  : 'proc_control_node/Send Data to ROS/Blank Message2'
//  '<S96>'  : 'proc_control_node/Send Data to ROS/MATLAB Function3'
//  '<S97>'  : 'proc_control_node/Send Data to ROS/Publish2'
//  '<S98>'  : 'proc_control_node/Send Data to ROS/Subsystem'
//  '<S99>'  : 'proc_control_node/Send Data to ROS/Subsystem/Blank Message5'
//  '<S100>' : 'proc_control_node/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S101>' : 'proc_control_node/Send Data to ROS/Subsystem/Publish5'
//  '<S102>' : 'proc_control_node/Sensor Manager/Send Sensor ON'
//  '<S103>' : 'proc_control_node/Sensor Manager/Send To Telemetry '
//  '<S104>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S105>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Publish'
//  '<S106>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Blank Message'
//  '<S107>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité'
//  '<S108>' : 'proc_control_node/Sensor Manager/Send To Telemetry /MATLAB Function1'
//  '<S109>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Publish'
//  '<S110>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles'
//  '<S111>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees'
//  '<S112>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees1'
//  '<S113>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation'
//  '<S114>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S115>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S116>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S117>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S118>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S119>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S120>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S121>' : 'proc_control_node/Subsystem Controller/Controller list'
//  '<S122>' : 'proc_control_node/Subsystem Controller/MPC manager'
//  '<S123>' : 'proc_control_node/Subsystem Controller/Post traitements'
//  '<S124>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler '
//  '<S125>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S126>' : 'proc_control_node/Subsystem Controller/Controller list/IDLE'
//  '<S127>' : 'proc_control_node/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S128>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S129>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
//  '<S130>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller'
//  '<S131>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux'
//  '<S132>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /MATLAB Function'
//  '<S133>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /MATLAB Function2'
//  '<S134>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC'
//  '<S135>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S136>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S137>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S138>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S139>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S140>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S141>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S142>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S143>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S144>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S145>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S146>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S147>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S148>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S149>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S150>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S151>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S152>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S153>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S154>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S155>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S156>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S157>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S158>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S159>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S160>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S161>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/moorx'
//  '<S162>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer'
//  '<S163>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S164>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles'
//  '<S165>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation'
//  '<S166>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S167>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S168>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S169>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S170>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S171>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S172>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S173>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S174>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S175>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /MATLAB Function2'
//  '<S176>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S177>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S178>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S179>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S180>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S181>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S182>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S183>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S184>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S185>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S186>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S187>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S188>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S189>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S190>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S191>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S192>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S193>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S194>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S195>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S196>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S197>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S198>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S199>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S200>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S201>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S202>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S203>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S204>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S205>' : 'proc_control_node/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S206>' : 'proc_control_node/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S207>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S208>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S209>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S210>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S211>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S212>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S213>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S214>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S215>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S216>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S217>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S218>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S219>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S220>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S221>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S222>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S223>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S224>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S225>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S226>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S227>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S228>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S229>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S230>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S231>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S232>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S233>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S234>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S235>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S236>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S237>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S238>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S239>' : 'proc_control_node/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S240>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S241>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S242>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S243>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S244>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S245>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S246>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S247>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S248>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S249>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S250>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S251>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S252>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S253>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S254>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S255>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S256>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S257>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S258>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S259>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S260>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S261>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S262>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S263>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S264>' : 'proc_control_node/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S265>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe'
//  '<S266>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe1'
//  '<S267>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S268>' : 'proc_control_node/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S269>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S270>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments'
//  '<S271>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus'
//  '<S272>' : 'proc_control_node/Subsystem ProcNav/Reset Logic'
//  '<S273>' : 'proc_control_node/Subsystem ProcNav/Subsystem'
//  '<S274>' : 'proc_control_node/Subsystem ProcNav/Thursters Mesurments'
//  '<S275>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S276>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Discrete Derivative'
//  '<S277>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter '
//  '<S278>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S279>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S280>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation'
//  '<S281>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S282>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S283>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Enable//disable time constant'
//  '<S284>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Initialization'
//  '<S285>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Integrator (Discrete or Continuous)'
//  '<S286>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Enable//disable time constant/Compare To Zero'
//  '<S287>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Initialization/Init_u'
//  '<S288>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Low-Pass Filter /Integrator (Discrete or Continuous)/Discrete'
//  '<S289>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S290>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S291>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S292>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V1'
//  '<S293>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V2'
//  '<S294>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V3'
//  '<S295>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S296>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S297>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S298>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S299>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S300>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S301>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S302>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S303>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S304>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S305>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S306>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S307>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S308>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S309>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S310>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S311>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S312>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S313>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S314>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S315>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S316>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S317>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S318>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S319>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S320>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S321>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S322>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S323>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S324>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S325>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S326>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S327>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S328>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S329>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S330>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S331>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S332>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem'
//  '<S333>' : 'proc_control_node/Subsystem Trajectory/Subsystem'
//  '<S334>' : 'proc_control_node/Subsystem Trajectory/Subsystem1'
//  '<S335>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto'
//  '<S336>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual'
//  '<S337>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory'
//  '<S338>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem/MATLAB Function1'
//  '<S339>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter'
//  '<S340>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S341>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)'
//  '<S342>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1'
//  '<S343>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)/Discrete'
//  '<S344>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1/Discrete'
//  '<S345>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S346>' : 'proc_control_node/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S347>' : 'proc_control_node/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S348>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/Blank Message5'
//  '<S349>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S350>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/MATLAB Function2'
//  '<S351>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/Publish5'
//  '<S352>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S353>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual/MATLAB Function1'
//  '<S354>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S355>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles'
//  '<S356>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1'
//  '<S357>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S358>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S359>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S360>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation'
//  '<S361>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S362>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S363>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S364>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S365>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S366>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S367>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S368>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation'
//  '<S369>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize'
//  '<S370>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input'
//  '<S371>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S372>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S373>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S374>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus'
//  '<S375>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S376>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S377>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S378>' : 'proc_control_node/Subsystem1/Subscribe1'
//  '<S379>' : 'proc_control_node/Subsystem1/Subscribe2'
//  '<S380>' : 'proc_control_node/Subsystem1/Subscribe3'
//  '<S381>' : 'proc_control_node/Subsystem1/Subscribe4'
//  '<S382>' : 'proc_control_node/Subsystem1/Subscribe5'
//  '<S383>' : 'proc_control_node/Subsystem1/startSim'
//  '<S384>' : 'proc_control_node/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S385>' : 'proc_control_node/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S386>' : 'proc_control_node/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S387>' : 'proc_control_node/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S388>' : 'proc_control_node/Subsystem1/Subscribe5/Enabled Subsystem'
//  '<S389>' : 'proc_control_node/Subsystem1/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_node_h_

//
// File trailer for generated code.
//
// [EOF]
//
