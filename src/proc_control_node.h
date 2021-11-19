//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_node.h
//
// Code generated for Simulink model 'proc_control_node'.
//
// Model version                  : 1.187
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Thu Nov 18 23:37:19 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_proc_control_node_h_
#define RTW_HEADER_proc_control_node_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "proc_control_node_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
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
class proc_control_nodeModelClass {
  // public data and function members
 public:
  // Block signals for system '<S280>/MATLAB Function1'
  struct B_MATLABFunction1_proc_contro_T {
    real_T matrix[13];
  };

  // Block signals (default storage)
  struct B_proc_control_node_T {
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T QRManager;
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T CholManager;
    real_T b_data[3463321];
    real_T y_data[3463321];
    real_T b_data_m[3463321];
    real_T b_data_c[3463321];
    real_T b_data_k[3463321];
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T WorkingSet;
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T b_WorkingSet;
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T memspace;
    real_T B_data[1853556];
    real_T c_data[1853556];
    real_T b_rhs_data[1853556];
    real_T e_data[1853556];
    s_SfTiiT1KRClFcMCE02xJjB_proc_T TrialState;
    real_T b_this[78013];
    real_T A_data[67520];
    real_T varargout_3_data[40300];
    real_T Jc_data[40300];
    real_T varargout_3_data_c[40300];
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T Au[25600];
    real_T Auf_data[25600];
    real_T unusedExpr[24025];
    real_T tmp_data[20800];
    real_T varargout_4[20150];
    real_T varargout_4_b[20150];
    real_T Jx_p[16900];
    real_T Jmv[10400];
    real_T Su[10400];
    real_T Su_c[9600];
    real_T tmp_data_f[7680];
    real_T tmp_data_g[7680];
    real_T varargin_2_data[6240];
    s_OFDCtz0SnDbKkoK04vkDPE_proc_T FcnEvaluator;
    real_T Jmv_g[3120];
    real_T b_SuJm[3120];
    real_T b_Kr[3120];
    real_T b_SuJm_m[2880];
    real_T b_Kr_n[2880];
    real_T b_Sx[2730];
    real_T Cm[2640];
    real_T b_Sx_p[2400];
    s_syceGAKWionoNWyVws9jI_proc__T QPObjective;
    real_T b_Kut[1920];
    real_T a[1920];
    real_T dv[1920];
    real_T b_Kut_l[1920];
    real_T a_j[1920];
    real_T dv1[1920];
    real_T b_y_data[1861];
    real_T y_data_d[1861];
    real_T work_data[1861];
    real_T work_data_g[1861];
    real_T vn1_data[1861];
    real_T vn2_data[1861];
    real_T work_data_l[1861];
    real_T y_data_dh[1861];
    real_T y_data_dy[1861];
    real_T y_data_l[1861];
    real_T y_data_o[1861];
    real_T y_data_b[1861];
    real_T y_data_n[1861];
    real_T y_data_bs[1861];
    real_T Bu[1848];
    real_T Bu_l[1760];
    real_T b_Hv[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T expl_temp;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T expl_temp_h;
    real_T b_Hv_b[1320];
    real_T s[1200];
    real_T CovMat[1156];
    real_T b_Su1[1040];
    real_T Sum_d[1040];
    real_T CovMat_e[1024];
    real_T dv2[1008];
    real_T b_B[986];
    real_T b_B_b[986];
    real_T dv3[960];
    real_T b_Su1_j[960];
    real_T Sum_f[960];
    real_T b_B_a[896];
    real_T b_B_j[896];
    int8_T a_jz[6400];
    int8_T a_o[6400];
    real_T f[630];
    real_T q[625];
    real_T b_Linv[625];
    real_T c_Linv[625];
    real_T c_A[625];
    real_T b_D[625];
    real_T b_H[625];
    real_T U[625];
    real_T RLinv[625];
    real_T TL[625];
    real_T QQ[625];
    real_T RR[625];
    real_T b_Linv_n[625];
    real_T c_Linv_i[625];
    real_T c_A_o[625];
    real_T b_D_n[625];
    real_T b_H_m[625];
    real_T U_c[625];
    real_T RLinv_m[625];
    real_T TL_m[625];
    real_T QQ_j[625];
    real_T RR_h[625];
    real_T d[580];
    real_T b[576];
    real_T b_SuJm_c[576];
    real_T b_Jm[576];
    real_T b_c[576];
    real_T b_SuJm_p[576];
    real_T b_Jm_p[576];
    real_T dv4[528];
    real_T b_Kx[504];
    real_T b_Kx_a[480];
    real_T b_A[441];
    real_T Qk[441];
    real_T b_A_e[400];
    real_T Qk_a[400];
    real_T L_tmp[400];
    real_T L_tmp_a[400];
    real_T L_tmp_i[400];
    real_T q_l[384];
    real_T a__1[338];
    real_T y_o[338];
    real_T b_A_o[338];
    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray msg;// '<S5>/MATLAB Function3' 
    real_T B_data_i[320];
    real_T b_Bu[320];
    real_T b_C[273];
    real_T d_f[273];
    real_T Nk[273];
    real_T CA[273];
    real_T CA_i[273];
    real_T a__1_f[273];
    real_T y_gx[273];
    real_T b_A_c[273];
    real_T b_Kv[264];
    real_T b_Kv_o[264];
    real_T varargout_1_data[260];
    real_T varargout_1_data_l[260];
    real_T c_data_m[260];
    real_T b_c_m[260];
    real_T b_c_data[260];
    real_T Je_data[260];
    real_T varargout_1_data_c[260];
    real_T c_data_f[260];
    real_T b_c_p[260];
    real_T b_c_data_e[260];
    szeIbzRjxClbCFpzxneSihD_proc__T userdata;
    real_T L[240];
    real_T b_C_o[240];
    real_T Nk_h[240];
    real_T L_tmp_l[240];
    real_T dv5[240];
    real_T CA_h[240];
    real_T CA_m[240];
    real_T Bv[231];
    real_T Bv_m[220];
    real_T a__1_h[208];
    real_T y_c[208];
    real_T b_A_k[208];
    real_T b_Ku1[192];
    real_T b_Ku1_p[192];
    real_T b_Su1_p[192];
    real_T b_I1[192];
    real_T b_Su1_p4[192];
    real_T b_I1_a[192];
    real_T Ac[169];
    real_T Jacobian[169];
    real_T Ac_j[169];
    real_T A[169];
    real_T y_e[169];
    real_T F[169];
    real_T A2[169];
    real_T U_o[169];
    real_T V[169];
    real_T A3[169];
    real_T A4[169];
    real_T A4_b[169];
    real_T b_A_a[169];
    real_T y_g2[169];
    real_T A_e[169];
    real_T y_f[169];
    real_T S[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T a__1_h2[168];
    real_T y_ei[168];
    real_T b_A_ch[168];
    real_T z0[155];
    real_T zLB[155];
    real_T zUB[155];
    real_T TrialState_a[155];
    real_T varargout_2[155];
    real_T y_d[144];
    real_T Kinv[144];
    real_T C_j[144];                   // '<S132>/MATLAB Function2'
    real_T A_l[144];                   // '<S132>/MATLAB Function2'
    real_T y_a[144];
    real_T A2_p[144];
    real_T U_m[144];
    real_T V_o[144];
    real_T A3_n[144];
    real_T A4_l[144];
    real_T A4_p[144];
    real_T b_A_p[144];
    real_T c_A_f[144];
    real_T Dv[143];
    real_T X[143];
    real_T CA_ie[143];
    real_T X_o[143];
    real_T X_k[143];
    real_T b_X[143];
    real_T X_i[143];
    real_T b_X_o[143];
    real_T b_X_m[143];
    real_T b_X_c[143];
    real_T Dv_f[132];
    real_T Dvm[132];
    real_T CA_hc[132];
    real_T rseq[130];
    real_T y_n[130];                   // '<S281>/MATLAB Function1'
    real_T varargout_2_m[130];
    real_T varargout_2_a[130];
    real_T X0[130];
    real_T dv6[130];
    real_T dv7[130];
    real_T dv8[130];
    real_T dv9[130];
    real_T X_kb[130];
    real_T gfX[130];
    real_T b_p[130];
    real_T z[130];
    real_T runtimedata_b[130];
    SL_Bus_proc_control_node_nav_msgs_Odometry msg_f;// '<S114>/MATLAB Function1' 
    real_T rseq_c[120];
    real_T y_h_n[120];                 // '<S132>/MATLAB Function'
    real_T Pxy[104];
    real_T dHdx[104];
    real_T Sum_i[104];
    real_T K[104];
    real_T b_C_m[104];
    real_T y_j[104];
    real_T dv10[96];
    real_T Sum_e[96];
    real_T useq_f[88];                 // '<S169>/FixedHorizonOptimizer'
    real_T U_mv[88];
    real_T U_m0[88];
    real_T U_j[88];
    real_T Umv[88];
    real_T b_U[88];
    real_T U_f[88];
    real_T b_U_a[88];
    real_T b_U_g[88];
    real_T b_U_n[88];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T MV0[80];
    real_T MVRateWeights0[80];
    real_T MVMin0[80];
    real_T MVMax0[80];
    real_T dv11[80];
    real_T dv12[80];
    real_T dv13[80];
    real_T Umv_d[80];
    real_T gfU[80];
    real_T c[80];
    real_T a_n[80];
    int8_T c_I[625];
    int8_T c_I_c[625];
    int8_T b_f[625];
    int8_T b_pm[625];
    int16_T b_data_p[260];
    int16_T d_data[260];
    int16_T b_data_n[260];
    real_T Sy[64];
    real_T Sy_k[64];
    real_T R[64];
    SL_Bus_proc_control_node_sensor_msgs_Imu In1;// '<S55>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu In1_p;// '<S61>/In1'
    SL_Bus_proc_control_node_sensor_msgs_Imu msg_m;// '<S71>/MATLAB Function'
    real_T Opt[50];
    real_T Rhs[50];
    real_T Opt_n[50];
    real_T Rhs_o[50];
    real_T a__1_g[48];
    real_T y_cq[48];
    real_T b_Mlim[48];
    real_T b_Mu1[48];
    real_T b_Mlim_c[48];
    real_T b_Mlim_m[48];
    real_T b_Mu1_j[48];
    real_T b_Mlim_k[48];
    real_T a__1_m[48];
    real_T cTol[48];
    real_T dv14[48];
    real_T cTol_p[48];
    real_T dv15[48];
    real_T a__1_d[48];
    real_T b_A_g[48];
    SL_Bus_proc_control_node_gazebo_msgs_ModelState msg_c;// '<S72>/MATLAB Function' 
    real_T constValues[41];
    boolean_T icf[320];
    real_T dHdx_c[39];
    real_T y_cx[39];
    real_T K_i[39];
    real_T b_C_d[39];
    real_T pp_coefs[36];
    real_T dCoefs[36];
    real_T constValues_g[36];
    real_T dv16[36];
    real_T dCoeffs[36];
    real_T ddCoeffs[36];
    real_T b_A_l[36];
    real_T b_A_f[36];
    boolean_T icf_d[260];
    int8_T Je[260];
    boolean_T icf_j[260];
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_i;// '<S56>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL In1_c;// '<S62>/In1'
    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL msg_fi;// '<S69>/MATLAB Function' 
    real_T zopt[25];
    real_T f_i[25];
    real_T zopt_h[25];
    real_T f_n[25];
    real_T r[25];
    real_T z_o[25];
    real_T b_Ac[25];
    real_T tau[25];
    real_T work[25];
    real_T r_c[25];
    real_T z_b[25];
    real_T b_Ac_e[25];
    real_T work_d[25];
    real_T varargin_1[25];
    real_T varargin_1_i[25];
    real_T work_g[25];
    real_T tau_n[25];
    real_T work_l[25];
    real_T a_c[24];
    real_T b_n[24];
    real_T coefsWithFlatStart[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T xk1[21];                    // '<S211>/FixedHorizonOptimizer'
    real_T dv17[21];
    real_T xk[20];
    real_T b_xoff[20];
    real_T xk_p[20];
    real_T Bu_d[20];
    real_T Transpose_i[18];            // '<S293>/Transpose'
    boolean_T bv[130];
    boolean_T bv1[130];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    int32_T ic[26];
    int32_T ic_o[26];
    real_T imvec[13];
    real_T z_j[13];
    real_T imz[13];
    real_T TmpSignalConversionAtTransp[13];
    real_T dv18[13];
    real_T dv19[13];
    real_T imvec_c[13];
    real_T ic_h[13];
    real_T runtimedata_OutputMin[13];
    real_T b_C_da[13];
    real_T ic_c[13];
    real_T runtimedata_OutputMin_p[13];
    real_T tau_p[13];
    real_T work_a[13];
    real_T tau_o[13];
    real_T work_j[13];
    real_T tau_pi[13];
    real_T work_o[13];
    real_T imvec_l[13];
    real_T ic_k[13];
    real_T dv20[13];
    real_T dv21[13];
    real_T ix[13];
    real_T runtimedata_OutputWeights[13];
    real_T gfx[13];
    real_T ic_j[13];
    real_T dv22[13];
    real_T dv23[13];
    real_T work_f[13];
    real_T work_c[13];
    real_T work_fq[13];
    real_T currPose[13];
    real_T TmpSignalConversionAtSFun_p[12];// '<S114>/MATLAB Function1'
    real_T DX_l[12];                   // '<S132>/MATLAB Function2'
    real_T dv24[12];
    real_T dv25[12];
    real_T rtb_C_j_l[12];
    real_T rtb_C_j_i[12];
    real_T dv26[12];
    real_T rtb_DX_l_k[12];
    real_T b_C_f[12];
    real_T coefMat[12];
    real_T coeffMat[12];
    int16_T iAnew[48];
    int16_T iC[48];
    int16_T iC_n[48];
    int16_T iAnew_i[48];
    real_T vseq[11];
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_a[9];// '<S282>/Subsystem1'
    real_T Sy_a[9];
    s1TgE9KstXgkd2qJxO1bF4F_proc__T expl_temp_d;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T expl_temp_e;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions_e;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions_b;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions_a;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions_i;
    s1TgE9KstXgkd2qJxO1bF4F_proc__T qpoptions_f;
    int8_T b_I[64];
    int8_T b_I_j[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_o[64];
    real_T Selector1[8];               // '<S293>/Selector1'
    real_T u[8];                       // '<S243>/ '
    real_T u_p[8];                     // '<S169>/FixedHorizonOptimizer'
    real_T u_scale_e[8];               // '<S141>/u_scale'
    real_T rtb_u_p_f[8];
    real_T z_oy[8];
    real_T tau_l[8];
    real_T work_lu[8];
    real_T umvk[8];
    real_T duk[8];
    real_T ic_g[8];
    real_T runtimedata_d[8];
    real_T iu[8];
    real_T umvk_d[8];
    real_T duk_j[8];
    real_T gfu[8];
    real_T work_f1[8];
    real_T U_js[8];
    real_T U_h[8];
    SL_Bus_proc_control_node_sonia_common_AddPose b_varargout_2;
    SL_Bus_proc_control_node_geometry_msgs_Pose In1_n;// '<S305>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Pose b_varargout_2_c;
    SL_Bus_proc_control_node_geometry_msgs_Pose msg_n;// '<S73>/MATLAB Function' 
    real_T Selector4[7];               // '<S293>/Selector4'
    real_T DataStoreRead[13];          // '<S272>/Data Store Read'
    real_T TmpSignalConversionAtMATLAB[7];
    SL_Bus_proc_control_node_geometry_msgs_Twist In1_o;// '<S290>/In1'
    SL_Bus_proc_control_node_geometry_msgs_Twist b_varargout_2_n;
    real_T MultiportSwitch[6];         // '<S284>/Multiport Switch'
    real_T a__4[6];
    real_T Gain3[6];                   // '<S284>/Gain3'
    real_T Saturation_k[6];            // '<S289>/Saturation'
    real_T Sum_a[6];                   // '<S284>/Sum'
    real_T Gain_fn[6];                 // '<S284>/Gain'
    real_T rtb_Gain3_j[6];
    real_T constValues_k[6];
    boolean_T bv2[48];
    int32_T ipiv[12];
    char_T b_zeroDelimTopic[39];
    int32_T gfu_tmp[8];
    char_T b_zeroDelimTopic_b[32];
    real_T MATLABSystem_o1[4];         // '<S10>/MATLAB System'
    real_T n[4];
    real_T rq[4];
    real_T qRel[4];
    real_T TmpSignalConversionAtSFun_f[4];// '<S239>/MATLAB Function1'
    real_T b_coeffVec[4];
    char_T b_zeroDelimTopic_h[31];
    char_T b_zeroDelimTopic_e[30];
    char_T b_zeroDelimTopic_tmp[30];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_hn[28];
    int8_T UnknownIn_k[28];
    char_T b_zeroDelimTopic_j[27];
    char_T b_zeroDelimTopic_hw[26];
    char_T b_zeroDelimTopic_tmp_i[26];
    boolean_T icf_o[26];
    boolean_T icf_c[26];
    char_T b_zeroDelimTopic_p[24];
    real_T MATLABSystem_o2[3];         // '<S10>/MATLAB System'
    real_T VectorConcatenate_p[3];     // '<S124>/Vector Concatenate'
    real_T u2[3];                      // '<S259>/1//2'
    real_T dv27[3];
    real_T work_f0[3];
    int32_T x_tmp[6];
    char_T b_zeroDelimTopic_ew[23];
    char_T b_zeroDelimTopic_tmp_n[23];
    char_T b_zeroDelimTopic_ho[22];
    char_T b_zeroDelimTopic_hp[20];
    char_T b_zeroDelimTopic_f[19];
    char_T b_zeroDelimTopic_i[16];
    uint16_T NtoPWM[8];                // '<S7>/N to PWM'
    uint8_T rows[13];
    int8_T ipiv_c[13];
    boolean_T x[13];
    boolean_T x_f[13];
    boolean_T x_n[13];
    int8_T rows_h[12];
    int8_T ipiv_k[12];
    int32_T Jx_size[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T MATLABSystem_o3;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o4;            // '<S10>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S295>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S295>/Data Type Conversion1'
    real_T DataTypeConversion2;        // '<S295>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S293>/Matrix Concatenate'
    real_T Selector[6];                // '<S293>/Selector'
    real_T Sum;                        // '<S261>/Sum'
    real_T Sum_o;                      // '<S262>/Sum'
    real_T Sum_c;                      // '<S263>/Sum'
    real_T enable;                     // '<S239>/MATLAB Function1'
    real_T q0;                         // '<S259>/q0'
    real_T q1;                         // '<S259>/q1'
    real_T q2;                         // '<S259>/q2'
    real_T q3;                         // '<S259>/q3'
    real_T Merge[10];                  // '<S7>/Merge'
    real_T Saturation[8];              // '<S7>/Saturation'
    real_T WorldPosition[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S6>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T ZeroOrderHold;              // '<S5>/Zero-Order Hold'
    real_T q2_l;                       // '<S88>/q2'
    real_T q0_j;                       // '<S88>/q0'
    real_T q1_g;                       // '<S88>/q1'
    real_T q3_h;                       // '<S88>/q3'
    real_T Gain2;                      // '<S96>/Gain2'
    real_T Gain;                       // '<S96>/Gain'
    real_T Gain1;                      // '<S96>/Gain1'
    real_T Gain_j;                     // '<S97>/Gain'
    real_T Gain2_d;                    // '<S97>/Gain2'
    real_T Gain1_d;                    // '<S97>/Gain1'
    real_T Gain_f;                     // '<S98>/Gain'
    real_T Gain1_c;                    // '<S98>/Gain1'
    real_T Gain2_k;                    // '<S98>/Gain2'
    real_T y;                          // '<S51>/MATLAB Function'
    real_T XDrift;                     // '<S14>/X Drift'
    real_T YDrift;                     // '<S14>/Y Drift'
    real_T WorldPosition_d[3];         // '<S1>/Integrator'
    real_T InitialBodyvelocity[3];     // '<S1>/Initial Body velocity '
    real_T InitialAngularRates[3];     // '<S1>/Initial Angular Rates'
    real_T PWMtoN[8];                  // '<S13>/ PWM to N'
    real_T Output;                     // '<S25>/Output'
    real_T Output_i;                   // '<S26>/Output'
    real_T Output_l;                   // '<S27>/Output'
    real_T Gain2_k0;                   // '<S43>/Gain2'
    real_T Gain_c;                     // '<S43>/Gain'
    real_T Gain1_cn;                   // '<S43>/Gain1'
    real_T Gain_cr;                    // '<S44>/Gain'
    real_T Gain2_n;                    // '<S44>/Gain2'
    real_T Gain1_d2;                   // '<S44>/Gain1'
    real_T Gain_l;                     // '<S45>/Gain'
    real_T Gain1_o;                    // '<S45>/Gain1'
    real_T Gain2_i;                    // '<S45>/Gain2'
    real_T PressureDepth;              // '<S16>/Sum'
    real_T Quaternion[4];              // '<S16>/Sum1'
    real_T AngularRate_d[3];           // '<S16>/Sum3'
    real_T y_h[3];                     // '<S16>/MATLAB Function'
    real_T y_g[4];                     // '<S1>/Quaternion Normalise'
    real_T Position_dot[3];            // '<S1>/AUV State Equation'
    real_T Quaternion_dot[4];          // '<S1>/AUV State Equation'
    real_T BodyVelocity_dot[3];        // '<S1>/AUV State Equation'
    real_T AngularRates_dot[3];        // '<S1>/AUV State Equation'
    real_T d_h;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T epsilon;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t14;
    real_T t17;
    real_T t21;
    real_T t56;
    real_T t57;
    real_T t58;
    real_T t62;
    real_T Divide_p;                   // '<S266>/Divide'
    real_T Divide1_n;                  // '<S266>/Divide1'
    real_T Divide2_h;                  // '<S266>/Divide2'
    real_T WhiteNoise;                 // '<S27>/White Noise'
    real_T MATLABSystem_o5;            // '<S10>/MATLAB System'
    real_T Product1_j5;                // '<S125>/Product1'
    real_T fcn1_k;                     // '<S121>/fcn1'
    real_T fcn2;                       // '<S121>/fcn2'
    real_T MATLABSystem_o7;            // '<S10>/MATLAB System'
    real_T MATLABSystem_o6;            // '<S10>/MATLAB System'
    real_T SensorOn;                   // '<S8>/SensorOn'
    real_T Product8;                   // '<S262>/Product8'
    real_T Divide3;                    // '<S245>/Divide3'
    real_T Product1_j5_b;              // '<S125>/Product1'
    real_T Product2_gc;                // '<S125>/Product2'
    real_T rtb_Gain_f_idx_1;
    real_T d_o;
    real_T q0_tmp;
    real_T d1;
    real_T d2;
    real_T t25_tmp;
    real_T scale_n;
    real_T absxk_m;
    real_T t_k;
    real_T lb;
    real_T optimRelativeFactor;
    real_T p;
    real_T e;
    real_T ic_jk;
    real_T BadH;
    real_T Sum_h;
    real_T BadH_f;
    real_T Sum_dy;
    real_T phi_alpha;
    real_T e_l;
    real_T ic_kg;
    real_T x_i;
    real_T d3;
    real_T s_h;
    real_T b_atmp;
    real_T beta1;
    real_T temp;
    real_T normA;
    real_T b_s;
    real_T d_m;
    real_T smax;
    real_T y_gm;
    real_T s_l;
    real_T b_atmp_m;
    real_T beta1_n;
    real_T temp_g;
    real_T e_d;
    real_T gfE;
    real_T s_m;
    real_T b_atmp_f;
    real_T beta1_g;
    real_T temp_j;
    real_T d_c;
    real_T smax_e;
    real_T y_m;
    real_T epsilon_o;
    real_T b_atmp_a;
    real_T beta1_j;
    real_T temp_ga;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5;
    real_T t6;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11_j;
    real_T t12_e;
    real_T t13_j;
    real_T t17_j;
    real_T t18;
    real_T t19;
    real_T t20;
    real_T t21_g;
    real_T t22;
    real_T t23;
    real_T t24;
    real_T t25;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t30;
    real_T t31;
    real_T t32;
    real_T t33;
    real_T t34;
    real_T t39;
    real_T t40;
    real_T t41;
    real_T t42;
    real_T t43;
    real_T t44;
    real_T t45;
    real_T t55;
    real_T t56_o;
    real_T t57_h;
    real_T t58_c;
    real_T t59;
    real_T t61;
    real_T t62_a;
    real_T t65;
    real_T t68;
    real_T t35;
    real_T t36;
    real_T t37;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T t32_tmp;
    real_T t25_tmp_l;
    real_T t29_tmp;
    real_T e_j;
    real_T fs;
    real_T wtYerr;
    real_T wtYerr_i;
    real_T umvk_m;
    real_T duk_f;
    real_T b_Kx_o;
    real_T b_Kr_i;
    real_T b_Ku1_e;
    real_T b_Kv_j;
    real_T b_Kut_o;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_f;
    real_T b_Ac_m;
    real_T b_Linv_a;
    real_T b_atmp_h;
    real_T beta1_o;
    real_T temp_h;
    real_T b_Wy;
    real_T W;
    real_T b_Wy_j;
    real_T rMin_g;
    real_T Xnorm0_j;
    real_T cMin_l;
    real_T cVal_k;
    real_T t_d;
    real_T b_Ac_n;
    real_T c_j;
    real_T wtYerr_a;
    real_T runtimedata_OutputWeights_h;
    real_T t8_i;
    real_T t9_d;
    real_T t11_b;
    real_T t12_h;
    real_T t13_p;
    real_T t14_n;
    real_T t15;
    real_T t16;
    real_T t25_j;
    real_T t29_o;
    real_T t31_b;
    real_T t50;
    real_T t53;
    real_T t54;
    real_T t17_jk;
    real_T t18_e;
    real_T t19_i;
    real_T t59_n;
    real_T t64;
    real_T t65_i;
    real_T t68_p;
    real_T t69;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp;
    real_T out1_tmp_o;
    real_T out1_tmp_m;
    real_T out1_tmp_ot;
    real_T out1_tmp_g;
    real_T out1_tmp_e;
    real_T out1_tmp_i;
    real_T out1_tmp_gb;
    real_T b_temp;
    real_T smax_g;
    real_T y_gb;
    real_T finalTime;
    real_T wayPoints_idx_0;
    real_T wayPoints_idx_1;
    real_T coefMat_tmp;
    real_T xloc;
    real_T normH;
    real_T s_g;
    real_T ssq;
    real_T c_c;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T u1;
    real_T beta;
    real_T rho;
    real_T qpfvalLinearExcess;
    real_T qpfvalQuadExcess;
    real_T y_k;
    real_T b_d;
    real_T normDelta;
    real_T i;
    real_T s_k;
    real_T temp_p;
    real_T tempMaxConstr;
    real_T b_p5;
    real_T constrViolation_basicX;
    real_T c_m;
    real_T b_atmp_k;
    real_T xnorm;
    real_T scale_a;
    real_T absxk_f;
    real_T t_c;
    real_T b_Kx_j;
    real_T b_Kr_k;
    real_T b_Ku1_h;
    real_T b_Kv_d;
    real_T b_Kut_j;
    real_T b_atmp_n;
    real_T beta1_j0;
    real_T tau_idx_2;
    real_T tau_idx_1;
    real_T tau_idx_0;
    real_T temp_l;
    real_T oldDirIdx;
    real_T constrViolation;
    real_T tol;
    real_T qtb;
    real_T temp2;
    real_T smax_p;
    real_T temp_po;
    real_T t2_l;
    real_T t3_l;
    real_T t4_h;
    real_T t5_c;
    real_T t6_g;
    real_T t7_e;
    real_T t8_n;
    real_T t9_f;
    real_T t10_n;
    real_T t11_e;
    real_T t12_b;
    real_T t13_a;
    real_T t17_i;
    real_T t18_n;
    real_T t19_f;
    real_T t20_i;
    real_T t21_k;
    real_T t22_b;
    real_T t23_d;
    real_T t24_h;
    real_T t25_n;
    real_T t26_f;
    real_T t27_a;
    real_T t28_m;
    real_T t29_g;
    real_T t30_n;
    real_T t31_c;
    real_T t32_d;
    real_T t33_k;
    real_T t34_c;
    real_T t39_j;
    real_T t40_m;
    real_T t41_i;
    real_T t42_b;
    real_T t43_o;
    real_T t44_g;
    real_T t45_e;
    real_T t55_i;
    real_T t56_e;
    real_T t57_i;
    real_T t58_m;
    real_T t59_d;
    real_T t61_j;
    real_T t62_p;
    real_T t65_b;
    real_T t68_pn;
    real_T t35_n;
    real_T t8_c;
    real_T t9_n;
    real_T t10_d;
    real_T t11_i;
    real_T t12_n;
    real_T t13_b;
    real_T t15_b;
    real_T t20_j;
    real_T t33_n;
    real_T t37_f;
    real_T t39_e;
    real_T t63;
    real_T t67;
    real_T t68_i;
    real_T t16_a;
    real_T t17_f;
    real_T t18_k;
    real_T t19_c;
    real_T t21_j;
    real_T t22_l;
    real_T t23_a;
    real_T t73;
    real_T t80;
    real_T t81;
    real_T t84;
    real_T t46;
    real_T t56_i;
    real_T t65_o;
    real_T t86;
    real_T t87;
    real_T t57_b;
    real_T t85;
    real_T out1_tmp_a;
    real_T out1_tmp_aq;
    real_T out1_tmp_i0;
    real_T out1_tmp_iz;
    real_T out1_tmp_l;
    real_T out1_tmp_o5;
    real_T out1_tmp_p;
    real_T out1_tmp_om;
    real_T out1_tmp_c;
    real_T out1_tmp_oc;
    real_T absx;
    real_T z_ol;
    real_T s_he;
    real_T R_i;
    real_T t2_g;
    real_T t3_c;
    real_T t4_o;
    real_T t5_g;
    real_T t6_o;
    real_T t7_g;
    real_T t8_a;
    real_T t9_g;
    real_T t10_b;
    real_T t11_k;
    real_T t12_c;
    real_T t13_ji;
    real_T t14_a;
    real_T t15_d;
    real_T t16_c;
    real_T t17_d;
    real_T t18_a;
    real_T t19_b;
    real_T t46_g;
    real_T t47;
    real_T t48;
    real_T t49;
    real_T t50_f;
    real_T t52;
    real_T t53_c;
    real_T t54_p;
    real_T t55_a;
    real_T t20_n;
    real_T t21_h;
    real_T t22_m;
    real_T t23_f;
    real_T t24_b;
    real_T t25_e;
    real_T t26_n;
    real_T t27_p;
    real_T t28_i;
    real_T t31_j;
    real_T t32_l;
    real_T t35_c;
    real_T t36_g;
    real_T t37_c;
    real_T t38;
    real_T Ane_tmp;
    real_T Ane_tmp_l;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T b_c_e;
    real_T u0;
    real_T y_dt;
    real_T smax_m;
    real_T y_fi;
    real_T pn_a;
    real_T pn_b;
    real_T pn_c;
    real_T pn_d;
    real_T qn_a;
    real_T qn_b;
    real_T qn_c;
    real_T qn_d;
    real_T pnCorrected_b;
    real_T pnCorrected_c;
    real_T pnCorrected_d;
    real_T linearScaling;
    real_T n_n;
    real_T q2n_b;
    real_T q2n_c;
    real_T q2n_d;
    real_T dp;
    real_T theta0;
    real_T sinv_tmp;
    real_T n_tmp;
    real_T n_tmp_o;
    real_T n_tmp_e;
    real_T q1n_b_tmp;
    real_T q1n_c_tmp;
    real_T q1n_d_tmp;
    real_T q2n_b_tmp;
    real_T q2n_c_tmp;
    real_T e_idx_0;
    real_T b_idx_0;
    real_T dp_tmp;
    real_T q1n_a;
    real_T q1n_b;
    real_T q1n_c;
    real_T q1n_d;
    real_T q2n_a;
    real_T q2n_b_m;
    real_T q2n_c_c;
    real_T dp_g;
    real_T theta0_b;
    real_T t8_p;
    real_T t9_p;
    real_T t10_a;
    real_T t11_f;
    real_T t12_g;
    real_T t13_b0;
    real_T t15_k;
    real_T t20_k;
    real_T t33_b;
    real_T t37_i;
    real_T t39_n;
    real_T t63_h;
    real_T t67_n;
    real_T t68_m;
    real_T t16_g;
    real_T t17_jb;
    real_T t18_f;
    real_T t19_n;
    real_T t21_gt;
    real_T t22_d;
    real_T t23_c;
    real_T t73_m;
    real_T t80_d;
    real_T t81_n;
    real_T t84_b;
    real_T t46_p;
    real_T t56_k;
    real_T t65_c;
    real_T t86_n;
    real_T t87_n;
    real_T t57_c;
    real_T t85_d;
    real_T out1_tmp_n;
    real_T out1_tmp_gu;
    real_T out1_tmp_lx;
    real_T out1_tmp_ge;
    real_T out1_tmp_pv;
    real_T t5_k;
    real_T t6_l;
    real_T t9_b;
    real_T t11_c;
    real_T t12_f;
    real_T t13_o;
    real_T t20_d;
    real_T t24_l;
    real_T t26_l;
    real_T t45_d;
    real_T t48_k;
    real_T t49_f;
    real_T t14_p;
    real_T t54_k;
    real_T t62_k;
    real_T t63_i;
    real_T t66;
    real_T t67_e;
    real_T t68_f;
    real_T out1_tmp_k;
    real_T out1_tmp_ne;
    real_T out1_tmp_it;
    real_T out1_tmp_im;
    real_T out1_tmp_o2;
    real_T out1_tmp_d;
    real_T out1_tmp_iu;
    real_T out1_tmp_gy;
    real_T out1_tmp_cv;
    real_T out1_tmp_ee;
    real_T out1_tmp_a5;
    real_T out1_tmp_h;
    real_T out1_tmp_ef;
    real_T t8_d;
    real_T t9_g5;
    real_T t11_ev;
    real_T t12_eq;
    real_T t13_g;
    real_T t14_g;
    real_T t15_dz;
    real_T t16_n;
    real_T t25_p;
    real_T t29_b;
    real_T t31_i;
    real_T t50_b;
    real_T t53_j;
    real_T t54_g;
    real_T t17_n;
    real_T t18_p;
    real_T t19_fb;
    real_T t59_f;
    real_T t64_a;
    real_T t65_g;
    real_T t68_ma;
    real_T t69_d;
    real_T t70_e;
    real_T t12_tmp_e;
    real_T t13_tmp_d;
    real_T t14_tmp_j;
    real_T t15_tmp_n;
    real_T out1_tmp_j;
    real_T b_atmp_p;
    real_T optimRelativeFactor_a;
    real_T nlpComplErrorTmp;
    real_T nlpComplErrorLSQ;
    real_T tol_d;
    real_T d4;
    real_T c_p;
    real_T c_d;
    real_T c_pq;
    real_T c_f;
    real_T c_g;
    real_T denomTol;
    real_T phaseOneCorrectionP;
    real_T pk_corrected;
    real_T ratio;
    real_T c_dp;
    real_T u0_h;
    real_T c_i;
    real_T e_m;
    real_T c_c_c;
    real_T b_s_l;
    real_T b_temp_p;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_i;
    real_T ads;
    real_T bds;
    real_T k;
    real_T k_b;
    real_T ssq_g;
    real_T c_o;
    real_T u1_b;
    real_T c_e;
    real_T u1_e;
    real_T c_l;
    real_T u1_c;
    real_T c_e5;
    real_T neg_D;
    real_T y_dw;
    real_T temp_o;
    real_T tol_l;
    real_T temp_hg;
    real_T tol_ln;
    real_T scale_c;
    real_T absxk_c;
    real_T t_a;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_i;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T x_data;
    real_T scale_l;
    real_T absxk_i;
    real_T t_az;
    real_T temp_ix;
    real_T c_c3;
    real_T lbLambda;
    real_T ubLambda;
    real_T u0_m;
    real_T c_n;
    real_T temp_c;
    real_T d5;
    real_T c_na;
    real_T c_h;
    real_T d6;
    real_T d7;
    real_T c_iu;
    real_T scale_e;
    real_T absxk_p;
    real_T b_Hinv;
    real_T scale_k;
    real_T absxk_i3;
    real_T scale_nl;
    real_T absxk_o;
    real_T c_lc;
    real_T scale_p;
    real_T absxk_b;
    real_T scale_f;
    real_T absxk_is;
    real_T scale_ci;
    real_T absxk_g;
    real_T temp_iu;
    real_T smax_b;
    real_T out1_tmp_na;
    real_T a_p;
    real_T u0_o;
    real_T smax_by;
    real_T sr;
    real_T scale_o;
    real_T xloc_c;
    real_T d8;
    real_T d9;
    SL_Bus_proc_control_node_std_msgs_UInt8 In1_i2;// '<S307>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_e;// '<S57>/In1'
    SL_Bus_proc_control_node_std_msgs_Float32 In1_om;// '<S63>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool In1_f;// '<S310>/In1'
    SL_Bus_proc_control_node_std_msgs_Bool ZeroOrderHold_h;// '<S113>/Zero-Order Hold' 
    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg In1_cx;// '<S306>/In1'
    uint16_T pwm[8];                   // '<S5>/pwm'
    int32_T A_size[2];
    int32_T varargout_3_size[2];
    int32_T varargout_1_size[2];
    int32_T varargout_3_size_j[2];
    int32_T varargout_1_size_e[2];
    int32_T c_size[2];
    int32_T Jc_size[2];
    int32_T Jx_pw[2];
    int32_T tmp_size[2];
    int32_T varargout_1_size_n[2];
    int32_T c_size_o[2];
    int32_T idx[2];
    int32_T tmp_size_d[2];
    int32_T c_size_g[2];
    int32_T b_size[2];
    int32_T b_rhs_size[2];
    int32_T b_size_i[2];
    int32_T e_size[2];
    int32_T b_size_ih[2];
    int32_T b_size_c[2];
    boolean_T bv3[8];
    int8_T ipiv_b[6];
    int16_T Jx_g[2];
    real32_T rtb_PressureDepth_Data;
    int32_T k_d;
    int32_T ibmat;
    int32_T e_f;
    int32_T coffset;
    int32_T aoffset;
    int32_T i_j;
    int32_T i_e;
    int32_T i1;
    int32_T B_size;
    int32_T i2;
    int32_T i3;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T k_p;
    int32_T c_idx;
    int32_T ix_d;
    int32_T ia;
    int32_T loop_ub;
    int32_T tmp_size_f;
    int32_T tmp_size_n;
    int32_T b_y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_o;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T idxLambdaNonlinIneq;
    int32_T mLambda;
    int32_T ix_du;
    int32_T iy;
    int32_T ia_l;
    int32_T b_c_f;
    int32_T b_iy;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T c_idx_col;
    int32_T b_k;
    int32_T result;
    int32_T c_result;
    int32_T result_idx_0;
    int32_T c_k;
    int32_T d_k;
    int32_T i_jf;
    int32_T b_c_size;
    int32_T b_size_idx_0;
    int32_T i4;
    int32_T i5;
    int32_T loop_ub_g;
    int32_T empty_non_axis_sizes_idx_0;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T m;
    int32_T coffset_l;
    int32_T boffset;
    int32_T aoffset_k;
    int32_T kidx;
    int32_T b_j1;
    int32_T i2_p;
    int32_T i_b;
    int32_T i6;
    int32_T kidx_i;
    int32_T i_p;
    int32_T i7;
    int32_T i8;
    int32_T kidx_l;
    int32_T b_j1_e;
    int32_T i2_e;
    int32_T i_pn;
    int32_T i9;
    int32_T kidx_j;
    int32_T i_g;
    int32_T i10;
    int32_T i11;
    int32_T mLinIneq;
    int32_T loop_ub_l;
    int32_T y_size_idx_0;
    int32_T ineqEnd;
    int32_T c_jo;
    int32_T unnamed_idx_1;
    int32_T result_p;
    int32_T result_idx_0_d;
    int32_T b_i;
    int32_T j;
    int32_T b_i_k;
    int32_T j_m;
    int32_T coffset_f;
    int32_T aoffset_m;
    int32_T j_n;
    int32_T i_m;
    int32_T k_b0;
    int32_T j_c;
    int32_T i_gw;
    int32_T ii;
    int32_T mmip1;
    int32_T knt;
    int32_T b_k_c;
    int32_T i_i;
    int32_T mmi_tmp;
    int32_T lastv;
    int32_T lastc;
    int32_T coltop;
    int32_T ia_k;
    int32_T jA;
    int32_T i_go;
    int32_T i12;
    int32_T b_j;
    int32_T b_i_p;
    int32_T e_fd;
    int32_T i13;
    int32_T i14;
    int32_T i15;
    int32_T F_tmp;
    int32_T e_k;
    int32_T i16;
    int32_T i17;
    int32_T e_k_m;
    int32_T A2_tmp;
    int32_T A_tmp;
    int32_T b_j_m;
    int32_T c_lb;
    int32_T ix_j;
    int32_T coffset_m;
    int32_T aoffset_j;
    int32_T j_i;
    int32_T i_a;
    int32_T k_h;
    int32_T j_d;
    int32_T i_i2;
    int32_T ii_h;
    int32_T mmip1_d;
    int32_T knt_l;
    int32_T b_k_f;
    int32_T i_l;
    int32_T mmi_tmp_l;
    int32_T lastv_f;
    int32_T lastc_g;
    int32_T coltop_g;
    int32_T ia_a;
    int32_T jA_d;
    int32_T i18;
    int32_T i19;
    int32_T i20;
    int32_T i21;
    int32_T i_bc;
    int32_T j_dg;
    int32_T i22;
    int32_T j_f;
    int32_T i23;
    int32_T i24;
    int32_T K_tmp;
    int32_T coffset_a;
    int32_T aoffset_mq;
    int32_T j_ie;
    int32_T i_ir;
    int32_T k_k;
    int32_T j_a;
    int32_T i_m2;
    int32_T ii_c;
    int32_T mmip1_b;
    int32_T knt_k;
    int32_T b_k_l;
    int32_T i_n;
    int32_T mmi_tmp_p;
    int32_T lastv_f0;
    int32_T lastc_k;
    int32_T coltop_e;
    int32_T ia_n;
    int32_T jA_o;
    int32_T e_k_a;
    int32_T i25;
    int32_T i26;
    int32_T e_k_b;
    int32_T A2_tmp_b;
    int32_T A_tmp_m;
    int32_T b_j_mc;
    int32_T c_kw;
    int32_T ix_m;
    int32_T j_h;
    int32_T coffset_i;
    int32_T aoffset_c;
    int32_T i_ni;
    int32_T i27;
    int32_T i28;
    int32_T i29;
    int32_T S_tmp;
    int32_T Pxy_tmp;
    int32_T j_il;
    int32_T i_o;
    int32_T ii_hy;
    int32_T mmip1_p;
    int32_T knt_g;
    int32_T b_k_cy;
    int32_T i_gn;
    int32_T mmi_tmp_b;
    int32_T lastv_j;
    int32_T lastc_h;
    int32_T coltop_d;
    int32_T ia_o;
    int32_T jA_k;
    int32_T i_jw;
    int32_T i_d;
    int32_T wtYerr_tmp;
    int32_T k_f;
    int32_T b_i_a;
    int32_T i_eg;
    int32_T idx_n;
    int32_T i_ob;
    int32_T i30;
    int32_T i_dk;
    int32_T i31;
    int32_T U_tmp;
    int32_T U_tmp_c;
    int32_T lambda_tmp_tmp;
    int32_T i_mw;
    int32_T f_i_o;
    int32_T iC_b;
    int32_T RLinv_tmp_tmp;
    int32_T RLinv_tmp;
    int32_T j_ml;
    int32_T i_ii;
    int32_T ii_i;
    int32_T mmip1_g;
    int32_T knt_m;
    int32_T b_k_n;
    int32_T i_c;
    int32_T mmi_tmp_j;
    int32_T lastv_e;
    int32_T lastc_e;
    int32_T coltop_k;
    int32_T ia_k4;
    int32_T jA_i;
    int32_T jy;
    int32_T ix_e;
    int32_T j_l;
    int32_T b_l;
    int32_T ijA;
    int32_T i_lc;
    int32_T i32;
    int32_T b_Kr_tmp;
    int32_T i_obs;
    int32_T i33;
    int32_T b_Kr_tmp_i;
    int32_T i_e2;
    int32_T i34;
    int32_T U_tmp_l;
    int32_T U_tmp_n;
    int32_T lambda_tmp_tmp_e;
    int32_T itau;
    int32_T info;
    int32_T jBcol;
    int32_T jAcol;
    int32_T kBcol;
    int32_T k_c;
    int32_T b_i_ap;
    int32_T Y_tmp;
    int32_T j_ms;
    int32_T c_ck;
    int32_T ix_f;
    int32_T idx_m;
    int32_T c_j1;
    int32_T i35;
    int32_T idx_k;
    int32_T dCoeffs_tmp;
    int32_T ii_data_idx_0;
    int32_T tGreaterThanTfIdx_data_idx_0;
    int32_T iv0;
    int32_T Tries;
    int32_T j_b;
    int32_T Tries_h;
    int32_T idxAjj;
    int32_T j_hc;
    int32_T iy_h;
    int32_T nVar;
    int32_T b_k_b;
    int32_T iH0;
    int32_T y_size_idx_0_b;
    int32_T nVarOrig;
    int32_T nVarMax;
    int32_T mIneq_d;
    int32_T temp_jd;
    int32_T b_mIneq;
    int32_T mLBOrig;
    int32_T idx_positive;
    int32_T idx_negative;
    int32_T nVar_d;
    int32_T b_idx;
    int32_T y_size_idx_0_l;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr;
    int32_T mEqFixed;
    int32_T nVar_tmp;
    int32_T activeSetChangeID;
    int32_T nVar_j;
    int32_T globalActiveConstrIdx;
    int32_T workingIdx;
    int32_T TYPE;
    int32_T iQR0;
    int32_T iy_b;
    int32_T iyend;
    int32_T b_ix;
    int32_T j_f2;
    int32_T ia_p;
    int32_T memspace_l;
    int32_T loop_ub_l1;
    int32_T y_size_idx_0_i;
    int32_T nVar_tmp_tmp_o;
    int32_T nVar_b;
    int32_T ldq;
    int32_T ix_i;
    int32_T iy_g;
    int32_T jBcol_p;
    int32_T iAcol;
    int32_T ib;
    int32_T f_h;
    int32_T b_ic;
    int32_T b_br;
    int32_T b_ar;
    int32_T mWConstr_tmp_tmp;
    int32_T iA0;
    int32_T iQR0_d;
    int32_T b_idx_f;
    int32_T obj;
    int32_T minmana;
    int32_T minmn;
    int32_T lda;
    int32_T ii_f;
    int32_T mmi;
    int32_T i_c1;
    int32_T knt_d;
    int32_T b_k_ca;
    int32_T i_bci;
    int32_T i36;
    int32_T iaii;
    int32_T b_pw;
    int32_T b_k_h;
    int32_T i_ei;
    int32_T ix_l;
    int32_T b_iy_h;
    int32_T b_nt;
    int32_T iac;
    int32_T d_kr;
    int32_T ia_b;
    int32_T knt_o;
    int32_T c_lastc;
    int32_T coltop_n;
    int32_T b_coltop;
    int32_T jA_f;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T nVar_g;
    int32_T mConstrMax_d;
    int32_T idx_Aineq;
    int32_T idx_upper;
    int32_T idx_Partition;
    int32_T iy_d;
    int32_T iac_e;
    int32_T b_ia_c;
    int32_T idx_Aineq_tmp;
    int32_T b_a;
    int32_T i37;
    int32_T nVar_h;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_er;
    int32_T iy_n;
    int32_T b_k_hg;
    int32_T loop_ub_o;
    int32_T ma;
    int32_T minmana_f;
    int32_T minmn_k;
    int32_T c_j_e;
    int32_T ma_i;
    int32_T minmn_o;
    int32_T ii_j;
    int32_T nmi;
    int32_T mmi_k;
    int32_T pvt;
    int32_T j_j;
    int32_T ix_d0;
    int32_T k_g;
    int32_T lastv_c;
    int32_T lastc_kh;
    int32_T coltop_j;
    int32_T ia_h;
    int32_T jA_c;
    int32_T jy_d;
    int32_T k_a;
    int32_T i38;
    int32_T nVar_p;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_ldw;
    int32_T b_nullStart;
    int32_T idx_col;
    int32_T order;
    int32_T ix_fk;
    int32_T b_ix_h;
    int32_T b_ldw_tmp;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T order_j;
    int32_T b_k_nr;
    int32_T LDimSizeP1_o;
    int32_T subRows;
    int32_T LD_diagOffset_o;
    int32_T subBlockSize;
    int32_T FMat_offset;
    int32_T k_dv;
    int32_T ix_a;
    int32_T c_kwn;
    int32_T ia_c;
    int32_T iy_j;
    int32_T ip;
    int32_T b_j_b;
    int32_T ix_n;
    int32_T nVar_dm;
    int32_T mFixed_h;
    int32_T mIneq_b;
    int32_T mLB_p;
    int32_T mUB_b;
    int32_T mLambda_p;
    int32_T nActiveConstr;
    int32_T fullRank_R;
    int32_T rankR;
    int32_T iQR_diag;
    int32_T iQR0_n;
    int32_T idx_j;
    int32_T n_b;
    int32_T k_n;
    int32_T i39;
    int32_T i_bw;
    int32_T itau_j;
    int32_T iaii_k;
    int32_T d_d;
    int32_T b_k_d;
    int32_T ix_o;
    int32_T b_iy_c;
    int32_T itau_o;
    int32_T iaii_a;
    int32_T lastv_d;
    int32_T lastc_el;
    int32_T coltop_i;
    int32_T b_ia_b;
    int32_T i_an;
    int32_T ix_k;
    int32_T itau_m;
    int32_T iaii_j;
    int32_T b_jm;
    int32_T b_k_k;
    int32_T i_k;
    int32_T ix_ar;
    int32_T itau_k;
    int32_T iaii_f;
    int32_T b_cz;
    int32_T b_k_o;
    int32_T i_kv;
    int32_T ix_p;
    int32_T itau_f;
    int32_T iaii_d;
    int32_T lastv_eb;
    int32_T lastc_l;
    int32_T coltop_ez;
    int32_T b_ia_h;
    int32_T i_gg;
    int32_T ix_p5;
    int32_T totalIneq;
    int32_T ldw;
    int32_T iyend_n;
    int32_T ix_o2;
    int32_T b_iy_l;
    int32_T iac_f;
    int32_T b_h;
    int32_T ia_d;
    int32_T iy_m;
    int32_T ix_iy;
    int32_T i_j4;
    int32_T k_pa;
    int32_T idxRotGCol;
    int32_T iA0_d;
    int32_T iUU0;
    int32_T b_idx_j;
    int32_T b_kk;
    int32_T idxA1j;
    int32_T idxAjj_m;
    int32_T b_j_d;
    int32_T ix_pz;
    int32_T iy_i;
    int32_T b_g;
    int32_T mLB_e;
    int32_T mUB_h;
    int32_T mFixed_g;
    int32_T mIneq_c;
    int32_T b_k_a;
    int32_T iy_f;
    int32_T ix_ik;
    int32_T b_iy_c1;
    int32_T mLB_n;
    int32_T mUB_c;
    int32_T mFixed_c;
    int32_T mIneq_i;
    int32_T b_k_hu;
    int32_T iy_ml;
    int32_T ix_g;
    int32_T b_iy_o;
    int32_T mLB_m;
    int32_T mUB_e;
    int32_T mFixed_e;
    int32_T mIneq_il;
    int32_T b_k_fw;
    int32_T iy_hv;
    int32_T ix_in;
    int32_T b_iy_p;
    int32_T nWFixed;
    int32_T idx_global;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T b_idx_local;
    int32_T c_i_a;
    int32_T mIneq_f;
    int32_T offsetEq1;
    int32_T offsetEq2;
    int32_T colOffsetATw;
    int32_T colOffsetAineq;
    int32_T LDimSizeP1_d;
    int32_T LD_diagOffset_c;
    int32_T subMatrixDim;
    int32_T k_j;
    int32_T nFixedConstr;
    int32_T nVar_c;
    int32_T idxPosQR;
    int32_T idxPosATwset;
    int32_T nDepIneq;
    int32_T nFixedConstr_n;
    int32_T nVar_jf;
    int32_T idxPosQR_k;
    int32_T idxPosATwset_o;
    int32_T nDepIneq_g;
    int32_T k_ks;
    int32_T kend;
    int32_T k_j5;
    int32_T ix_px;
    int32_T iA0_h;
    int32_T iQR0_nw;
    int32_T b_idx_b;
    int32_T b_m;
    int32_T maxRegVar;
    int32_T d_i;
    int32_T iy_k;
    int32_T iy_b4;
    int32_T ix_l1;
    int32_T br;
    int32_T ar;
    int32_T b_cr;
    int32_T br_g;
    int32_T ar_g;
    int32_T ia_n4;
    int32_T b_cr_c;
    int32_T c_eo;
    int32_T idx_f;
    int32_T fMultiplier;
    int32_T iy_k4;
    int32_T ix_c;
    int32_T b_iy_d;
    int32_T jjA;
    int32_T ix_mz;
    int32_T jBcol_j;
    int32_T kAcol;
    int32_T iy_c;
    int32_T ix_d4;
    int32_T iy_p;
    int32_T ix_ay;
    int32_T iL0;
    int32_T c_idx_m;
    int32_T ix_nk;
    int32_T iy_k5;
    int32_T iL0_p;
    int32_T c_idx_k;
    int32_T ix_gk;
    int32_T iy_hq;
    int32_T jBcol_l;
    int32_T kAcol_o;
    int32_T jBcol_a;
    int32_T kAcol_n;
    int32_T k_o;
    int32_T i_da;
    int32_T idx_h;
    int32_T i40;
    int32_T ix_h;
    int32_T ix_a0;
    int32_T iy_kg;
    int32_T ix_jr;
    int32_T iCol;
    int32_T iCol_old;
    int32_T k_dg;
    int32_T i_pe;
    int32_T k_dh;
    int32_T ix_b;
    int32_T idx_o;
    int32_T colOffsetAeq;
    int32_T b_j4;
    int32_T nVar_pc;
    uint32_T bpIdx;
    SL_Bus_proc_control_node_std_msgs_Float32 b_varargout_2_l;
    SL_Bus_proc_control_node_std_msgs_Float32 BusAssignment_h;// '<S70>/Bus Assignment' 
    ZCEventType zcEvent;
    boolean_T b_cy[4];
    boolean_T Merge1;                  // '<S9>/Merge1'
    boolean_T ZeroOrderHold1;          // '<S5>/Zero-Order Hold1'
    boolean_T ZeroOrderHold2;          // '<S5>/Zero-Order Hold2'
    B_MATLABFunction1_proc_contro_T sf_MATLABFunction1_p;// '<S278>/MATLAB Function1' 
    B_MATLABFunction1_proc_contro_T sf_MATLABFunction1_n;// '<S280>/MATLAB Function1' 
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_node_T {
    TrajectoryManager_proc_contro_T obj;// '<S282>/MATLAB System'
    mpcManager_proc_control_node_T obj_n;// '<S136>/MPC manager'
    OpenLoopController_proc_contr_T obj_m;// '<S135>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_j;// '<S296>/Rotation Trajectory'
    robotics_slcore_internal_bl_b_T obj_jo;// '<S298>/Polynomial Trajectory1'
    AddPose_proc_control_node_T obj_a; // '<S282>/MATLAB System1'
    rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
    ros_slroscpp_internal_block_S_T obj_f;// '<S304>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_h;// '<S303>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_o;// '<S302>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S301>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S300>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_b;// '<S299>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S294>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_c;// '<S285>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S54>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_d;// '<S53>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_l;// '<S52>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S60>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S59>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i;// '<S58>/SourceBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S120>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_e;// '<S116>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_lf;// '<S112>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_mj;// '<S111>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_p;// '<S110>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_lfs;// '<S109>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S103>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_fh;// '<S84>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ab;// '<S81>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_k;// '<S78>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S76>/SinkBlock'
    real_T Integrator_DSTATE[6];       // '<S288>/Integrator'
    real_T Integrator_DSTATE_l[6];     // '<S289>/Integrator'
    real_T Delay_DSTATE;               // '<S10>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S296>/Discrete-Time Integrator'
    real_T _DSTATE[8];                 // '<S243>/ '
    real_T Delay_DSTATE_i;             // '<S255>/Delay'
    real_T last_mv_DSTATE[8];          // '<S183>/last_mv'
    real_T Delay1_DSTATE[8];           // '<S133>/Delay1'
    real_T last_mv_DSTATE_j[8];        // '<S141>/last_mv'
    real_T Delay1_DSTATE_c[8];         // '<S132>/Delay1'
    real_T UD_DSTATE[6];               // '<S213>/UD'
    real_T Delay_DSTATE_a[8];          // '<S136>/Delay'
    real_T Delay_DSTATE_d;             // '<S5>/Delay'
    real_T P[169];                     // '<S269>/DataStoreMemory - P'
    real_T x[13];                      // '<S269>/DataStoreMemory - x'
    real_T LastPcov_PreviousInput_n[400];// '<S141>/LastPcov'
    real_T last_x_PreviousInput[20];   // '<S141>/last_x'
    real_T XDrift_NextOutput;          // '<S14>/X Drift'
    real_T YDrift_NextOutput;          // '<S14>/Y Drift'
    real_T NextOutput;                 // '<S25>/White Noise'
    real_T NextOutput_b;               // '<S26>/White Noise'
    real_T NextOutput_g;               // '<S27>/White Noise'
    int32_T clockTickCounter;          // '<S133>/Pulse Generator'
    int32_T clockTickCounter_h;        // '<S132>/Pulse Generator'
    int32_T clockTickCounter_p;        // '<S136>/Pulse Generator'
    uint32_T m_bpIndex[8];             // '<S7>/N to PWM'
    uint32_T RandSeed;                 // '<S14>/X Drift'
    uint32_T RandSeed_a;               // '<S14>/Y Drift'
    uint32_T m_bpIndex_m[8];           // '<S13>/ PWM to N'
    uint32_T RandSeed_j;               // '<S25>/White Noise'
    uint32_T RandSeed_d;               // '<S26>/White Noise'
    uint32_T RandSeed_e;               // '<S27>/White Noise'
    int_T Integrator_IWORK;            // '<S1>/Integrator'
    int_T Integrator1_IWORK;           // '<S1>/Integrator1'
    int_T Integrator2_IWORK;           // '<S1>/Integrator2'
    int_T Integrator3_IWORK;           // '<S1>/Integrator3'
    boolean_T Delay1_DSTATE_cr;        // '<S282>/Delay1'
    int8_T Integrator_PrevResetState;  // '<S288>/Integrator'
    int8_T Integrator_PrevResetState_h;// '<S289>/Integrator'
    int8_T SwitchCase_ActiveSubsystem; // '<S9>/Switch Case'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S7>/Switch Case'
    boolean_T Memory_PreviousInput[48];// '<S183>/Memory'
    boolean_T Memory_PreviousInput_h[48];// '<S141>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S67>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S68>/Memory'
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
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S282>/Trajectory generator'
    ZCSigState Integrator_Reset_ZCE;   // '<S1>/Integrator'
    ZCSigState Integrator1_Reset_ZCE;  // '<S1>/Integrator1'
    ZCSigState Integrator2_Reset_ZCE;  // '<S1>/Integrator2'
    ZCSigState Integrator3_Reset_ZCE;  // '<S1>/Integrator3'
  };

  // Parameters (default storage)
  struct P_proc_control_node_T {
    struct_o8hsIzLhLtBwbMcAhMRRVC MPC; // Variable: MPC
                                          //  Referenced by:
                                          //    '<S7>/Saturation'
                                          //    '<S132>/Constant1'
                                          //    '<S132>/Constant3'
                                          //    '<S133>/Constant1'
                                          //    '<S133>/Constant3'
                                          //    '<S136>/MPC manager'
                                          //    '<S278>/Constant3'
                                          //    '<S280>/Constant3'
                                          //    '<S281>/Constant3'

    struct_ZrQKn1ZmSobvV9swgXlOXB physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S16>/Constant'
                                             //    '<S72>/Constant'
                                             //    '<S135>/MATLAB System'
                                             //    '<S238>/Constant'

    struct_RoPeIRaOs110XaoEJ1OUdD simulation;// Variable: simulation
                                                //  Referenced by:
                                                //    '<S72>/ '
                                                //    '<S72>/  '

    real_T Config10[29];               // Variable: Config10
                                          //  Referenced by: '<S136>/MPC manager'

    real_T Config19[29];               // Variable: Config19
                                          //  Referenced by: '<S136>/MPC manager'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S7>/N to PWM'
                                          //    '<S13>/ PWM to N'

    real_T Ui[8];                      // Variable: Ui
                                          //  Referenced by: '<S136>/MPC manager'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S135>/MATLAB System'

    real_T constValues[41];            // Variable: constValues
                                          //  Referenced by: '<S136>/MPC manager'

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
                                          //  Referenced by: '<S284>/Gain'

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
                                          //  Referenced by: '<S284>/Gain'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S7>/N to PWM'
                                          //    '<S13>/ PWM to N'

    real_T BandLimitedWhiteNoise_Cov;
                                    // Mask Parameter: BandLimitedWhiteNoise_Cov
                                       //  Referenced by: '<S25>/Output'

    real_T BandLimitedWhiteNoise1_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise1_Cov
                                      //  Referenced by: '<S26>/Output'

    real_T BandLimitedWhiteNoise2_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise2_Cov
                                      //  Referenced by: '<S27>/Output'

    real_T SecondOrderFilter_FilterType;
                                 // Mask Parameter: SecondOrderFilter_FilterType
                                    //  Referenced by: '<S284>/Constant4'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S213>/UD'

    real_T BandLimitedWhiteNoise_seed;
                                   // Mask Parameter: BandLimitedWhiteNoise_seed
                                      //  Referenced by: '<S25>/White Noise'

    real_T BandLimitedWhiteNoise1_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise1_seed
                                     //  Referenced by: '<S26>/White Noise'

    real_T BandLimitedWhiteNoise2_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise2_seed
                                     //  Referenced by: '<S27>/White Noise'

    boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S67>/Initial Condition'
                                   //    '<S67>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S68>/Initial Condition'
                                  //    '<S68>/Memory'

    SL_Bus_proc_control_node_std_msgs_UInt16MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S105>/Constant'

    SL_Bus_proc_control_node_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                   //  Referenced by: '<S117>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0;// Computed Parameter: Out1_Y0
                                                        //  Referenced by: '<S61>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                 //  Referenced by: '<S58>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                          //  Referenced by: '<S55>/Out1'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                 //  Referenced by: '<S52>/Constant'

    SL_Bus_proc_control_node_sensor_msgs_Imu Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                 //  Referenced by: '<S79>/Constant'

    SL_Bus_proc_control_node_gazebo_msgs_ModelState Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S82>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                      //  Referenced by: '<S62>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                      //  Referenced by: '<S59>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                                      //  Referenced by: '<S56>/Out1'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_f2;// Computed Parameter: Constant_Value_f2
                                                                      //  Referenced by: '<S53>/Constant'

    SL_Bus_proc_control_node_sonia_common_BodyVelocityDVL Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S74>/Constant'

    struct_4PbJwSXWqPjMkDpID5GvdG Output_Y0;// Computed Parameter: Output_Y0
                                               //  Referenced by: '<S6>/Output'

    struct_OiyVcB1FUG5CFSJbxuJtpE CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S1>/Clean Output'

    struct_OiyVcB1FUG5CFSJbxuJtpE Output_Y0_k;// Computed Parameter: Output_Y0_k
                                                 //  Referenced by: '<S4>/Output'

    struct_JrdoudM4E0qVbDLWIvaxAF SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                      //  Referenced by: '<S1>/Sensors Output'

    SL_Bus_proc_control_node_sonia_common_AddPose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                               //  Referenced by: '<S297>/Out1'

    SL_Bus_proc_control_node_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                      //  Referenced by: '<S294>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                     //  Referenced by: '<S101>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                             //  Referenced by: '<S305>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                    //  Referenced by: '<S299>/Constant'

    SL_Bus_proc_control_node_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                               //  Referenced by: '<S290>/Out1'

    SL_Bus_proc_control_node_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                      //  Referenced by: '<S285>/Constant'

    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                                     //  Referenced by: '<S306>/Out1'

    SL_Bus_proc_control_node_sonia_common_KillSwitchMsg Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                                      //  Referenced by: '<S300>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                               //  Referenced by: '<S104>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                               //  Referenced by: '<S107>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                               //  Referenced by: '<S115>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                        //  Referenced by: '<S308>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                                //  Referenced by: '<S302>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                        //  Referenced by: '<S309>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S303>/Constant'

    SL_Bus_proc_control_node_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                        //  Referenced by: '<S310>/Out1'

    SL_Bus_proc_control_node_std_msgs_Bool Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                               //  Referenced by: '<S304>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                           //  Referenced by: '<S63>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                  //  Referenced by: '<S60>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Out1_Y0_nb;// Computed Parameter: Out1_Y0_nb
                                                            //  Referenced by: '<S57>/Out1'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_oz;// Computed Parameter: Constant_Value_oz
                                                                   //  Referenced by: '<S54>/Constant'

    SL_Bus_proc_control_node_std_msgs_Float32 Constant_Value_bv;// Computed Parameter: Constant_Value_bv
                                                                   //  Referenced by: '<S77>/Constant'

    SL_Bus_proc_control_node_std_msgs_Int8 Constant_Value_ly;// Computed Parameter: Constant_Value_ly
                                                                //  Referenced by: '<S106>/Constant'

    SL_Bus_proc_control_node_std_msgs_UInt8 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                         //  Referenced by: '<S307>/Out1'

    SL_Bus_proc_control_node_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                //  Referenced by: '<S301>/Constant'

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

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S33>/1//2'

    real_T Constant_Value_k2;          // Expression: 0.5
                                          //  Referenced by: '<S43>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S43>/Gain2'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S43>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S43>/Gain1'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S44>/Gain'

    real_T Constant_Value_gp;          // Expression: 0.5
                                          //  Referenced by: '<S44>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S44>/Gain2'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S44>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S45>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S45>/Gain1'

    real_T Constant_Value_iw;          // Expression: 0.5
                                          //  Referenced by: '<S45>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S45>/Gain2'

    real_T Constant_Value_mj;          // Expression: 0.5
                                          //  Referenced by: '<S39>/Constant'

    real_T Gain_Gain_f;                // Expression: 2
                                          //  Referenced by: '<S39>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S39>/Gain1'

    real_T Gain2_Gain_n;               // Expression: 2
                                          //  Referenced by: '<S39>/Gain2'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S51>/y'

    real_T Constant_Value_f2j;         // Expression: 0
                                          //  Referenced by: '<S51>/Constant'

    real_T Constant1_Value;            // Expression: 0
                                          //  Referenced by: '<S51>/Constant1'

    real_T Delay_InitialCondition;     // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T ENU2NED_Value[3];           // Expression: [pi,0,0]
                                          //  Referenced by: '<S72>/ENU 2 NED'

    real_T u2_Gain_g;                  // Expression: 0.5
                                          //  Referenced by: '<S88>/1//2'

    real_T Constant_Value_pm;          // Expression: 0.5
                                          //  Referenced by: '<S96>/Constant'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S96>/Gain2'

    real_T Gain_Gain_l;                // Expression: 2
                                          //  Referenced by: '<S96>/Gain'

    real_T Gain1_Gain_cn;              // Expression: 2
                                          //  Referenced by: '<S96>/Gain1'

    real_T Gain_Gain_d;                // Expression: 2
                                          //  Referenced by: '<S97>/Gain'

    real_T Constant_Value_fk;          // Expression: 0.5
                                          //  Referenced by: '<S97>/Constant'

    real_T Gain2_Gain_i;               // Expression: 2
                                          //  Referenced by: '<S97>/Gain2'

    real_T Gain1_Gain_h;               // Expression: 2
                                          //  Referenced by: '<S97>/Gain1'

    real_T Gain_Gain_f3;               // Expression: 2
                                          //  Referenced by: '<S98>/Gain'

    real_T Gain1_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S98>/Gain1'

    real_T Constant_Value_ek;          // Expression: 0.5
                                          //  Referenced by: '<S98>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S98>/Gain2'

    real_T Delay_InitialCondition_f;   // Expression: 0.0
                                          //  Referenced by: '<S5>/Delay'

    real_T Constant_Value_pz;          // Expression: 1
                                          //  Referenced by: '<S127>/Constant'

    real_T Constant_Value_pmj;         // Expression: 1
                                          //  Referenced by: '<S128>/Constant'

    real_T Gain_Gain_ei;               // Expression: 180/pi
                                          //  Referenced by: '<S123>/Gain'

    real_T Gain_Gain_i;                // Expression: 180/pi
                                          //  Referenced by: '<S122>/Gain'

    real_T MPCmanager_eInit;           // Expression: 0
                                          //  Referenced by: '<S136>/MPC manager'

    real_T Delay_InitialCondition_g[8];// Expression: [0,0,0,0,0,0,0,0].'
                                          //  Referenced by: '<S136>/Delay'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S215>/md_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S215>/mv.target_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S215>/y.min_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S215>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S215>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S215>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S215>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S215>/x.max_zero'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S215>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S215>/params_zero'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S136>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 20
                                          //  Referenced by: '<S136>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 10
                                          //  Referenced by: '<S136>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S136>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S135>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S135>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S135>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S213>/TSamp'

    real_T Constant_Value_lp;          // Expression: 1
                                          //  Referenced by: '<S175>/Constant'

    real_T Constant_Value_du;          // Expression: 1
                                          //  Referenced by: '<S176>/Constant'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S137>/E_zero'

    real_T F_zero_Value[12];           // Expression: zeros(1,12)
                                          //  Referenced by: '<S137>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S137>/G_zero'

    real_T LastPcov_InitialCondition[400];// Expression: lastPcov
                                             //  Referenced by: '<S141>/LastPcov'

    real_T ywt_zero_Value[12];         // Expression: zeros(12,1)
                                          //  Referenced by: '<S137>/y.wt_zero'

    real_T uwt_zero_Value[8];          // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/u.wt_zero'

    real_T duwt_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/du.wt_zero'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S141>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S141>/last_mv'

    real_T last_x_InitialCondition[20];// Expression: lastx+xoff
                                          //  Referenced by: '<S141>/last_x'

    real_T md_zero_Value_m;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S137>/md_zero'

    real_T umin_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/umin_zero'

    real_T umax_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/umax_zero'

    real_T ymin_zero_Value_j[12];      // Expression: zeros(12,1)
                                          //  Referenced by: '<S137>/ymin_zero'

    real_T ymax_zero_Value_g[12];      // Expression: zeros(12,1)
                                          //  Referenced by: '<S137>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S141>/umin_scale4'

    real_T ymin_scale1_Gain[12];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S141>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S137>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S141>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S137>/switch_zero'

    real_T mvtarget_zero_Value_o[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S137>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S141>/uref_scale'

    real_T ecrwt_zero_Value_j;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S137>/ecr.wt_zero'

    real_T Delay1_InitialCondition[8]; // Expression: [0,0,0,0,0,0,0,0].'
                                          //  Referenced by: '<S132>/Delay1'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S141>/u_scale'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_Period_g;    // Expression: 2
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 1
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_h;// Expression: 0
                                          //  Referenced by: '<S132>/Pulse Generator'

    real_T E_zero_Value_m[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S180>/E_zero'

    real_T F_zero_Value_d[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S180>/F_zero'

    real_T G_zero_Value_l;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/G_zero'

    real_T LastPcov_InitialCondition_k[441];// Expression: lastPcov
                                               //  Referenced by: '<S183>/LastPcov'

    real_T ywt_zero_Value_f[13];       // Expression: zeros(13,1)
                                          //  Referenced by: '<S180>/y.wt_zero'

    real_T uwt_zero_Value_f[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/u.wt_zero'

    real_T duwt_zero_Value_a[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/du.wt_zero'

    real_T extmv_zero_Value_g[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/ext.mv_zero'

    real_T extmv_scale_Gain_p[8];      // Expression: RMVscale
                                          //  Referenced by: '<S183>/ext.mv_scale'

    real_T last_mv_InitialCondition_k[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S183>/last_mv'

    real_T Constant_Value_e3[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S133>/Constant'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S183>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/md_zero'

    real_T umin_zero_Value_d[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/umin_zero'

    real_T umax_zero_Value_m[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/umax_zero'

    real_T ymin_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S180>/ymin_zero'

    real_T ymax_zero_Value_a[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S180>/ymax_zero'

    real_T umin_scale4_Gain_o[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S183>/umin_scale4'

    real_T ymin_scale1_Gain_k[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S183>/ymin_scale1'

    real_T S_zero_Value_d;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/S_zero'

    real_T ymin_scale2_Gain_n;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S183>/ymin_scale2'

    real_T switch_zero_Value_f;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/switch_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/mv.target_zero'

    real_T uref_scale_Gain_c[8];       // Expression: RMVscale
                                          //  Referenced by: '<S183>/uref_scale'

    real_T ecrwt_zero_Value_p;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/ecr.wt_zero'

    real_T Delay1_InitialCondition_l[8];// Expression: [0,0,0,0,0,0,0,0].'
                                           //  Referenced by: '<S133>/Delay1'

    real_T u_scale_Gain_c[8];          // Expression: MVscale
                                          //  Referenced by: '<S183>/u_scale'

    real_T PulseGenerator_Amp_b;       // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Period_h;    // Expression: 2
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Duty_n;      // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_c;// Expression: 0
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S134>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S134>/Constant1'

    real_T Constant2_Value;            // Expression: 0
                                          //  Referenced by: '<S134>/Constant2'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S258>/Quat'

    real_T siydevant_Value[3];         // Expression: [0,pi,pi/2]
                                          //  Referenced by: '<S258>/si y devant'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S259>/1//2'

    real_T enable_Y0;                  // Computed Parameter: enable_Y0
                                          //  Referenced by: '<S239>/enable'

    real_T error_Y0;                   // Computed Parameter: error_Y0
                                          //  Referenced by: '<S239>/error'

    real_T BodyVelocity_Y0;            // Computed Parameter: BodyVelocity_Y0
                                          //  Referenced by: '<S239>/Body Velocity'

    real_T Constant1_Value_a;          // Expression: 10
                                          //  Referenced by: '<S239>/Constant1'

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

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S262>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S262>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S263>/Constant'

    real_T Gain_Gain_n;                // Expression: 2
                                          //  Referenced by: '<S263>/Gain'

    real_T Gain1_Gain_ch;              // Expression: 2
                                          //  Referenced by: '<S263>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S263>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S242>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S269>/Q'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S269>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S269>/MeasurementFcn2Inputs'

    real_T R1_Value[64];               // Expression: p.R{1}
                                          //  Referenced by: '<S269>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S269>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S269>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S269>/DataStoreMemory - x'

    real_T Constant_Value_a1;          // Expression: 0.5
                                          //  Referenced by: '<S252>/Constant'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S252>/Gain'

    real_T Gain1_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S252>/Gain1'

    real_T Gain2_Gain_ob;              // Expression: 2
                                          //  Referenced by: '<S252>/Gain2'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S243>/ '

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S281>/Constant7'

    real_T Constant_Value_fi[13];     // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<S280>/Constant'

    real_T MATLABSystem_linearConvergence;// Expression: .2
                                             //  Referenced by: '<S282>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .1
                                              //  Referenced by: '<S282>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 3
                                           //  Referenced by: '<S282>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S293>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S293>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S293>/time'

    real_T Input_Y0;                   // Computed Parameter: Input_Y0
                                          //  Referenced by: '<S293>/Input'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S293>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S293>/Constant1'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S295>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S298>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S296>/Constant'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S296>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S296>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S282>/Constant'

    real_T Constant_Value_m5[13];     // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<S278>/Constant'

    real_T MATLABSystem_initial_mode;  // Expression: 0
                                          //  Referenced by: '<S10>/MATLAB System'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

    real_T Constant_Value_as;          // Expression: 0
                                          //  Referenced by: '<S284>/Constant'

    real_T Constant3_Value;            // Expression: x0
                                          //  Referenced by: '<S284>/Constant3'

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

    real_T Gain3_Gain;                 // Expression: (2*pi*fn).^2
                                          //  Referenced by: '<S284>/Gain3'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S279>/Gain'

    real_T Constant1_Value_d;          // Expression: 0
                                          //  Referenced by: '<S284>/Constant1'

    real_T Constant2_Value_m;          // Expression: xdot0
                                          //  Referenced by: '<S284>/Constant2'

    real_T Integrator_gainval_e;     // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S289>/Integrator'

    real_T Integrator_UpperSat_f;      // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S289>/Integrator'

    real_T Integrator_LowerSat_p;      // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S289>/Integrator'

    real_T Saturation_UpperSat_m;      // Expression: windupUpperLimit
                                          //  Referenced by: '<S289>/Saturation'

    real_T Saturation_LowerSat_c;      // Expression: windupLowerLimit
                                          //  Referenced by: '<S289>/Saturation'

    int16_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S169>/FixedHorizonOptimizer'

    int16_T FixedHorizonOptimizer_Ndis_g;// Expression: Ndis
                                            //  Referenced by: '<S211>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    boolean_T depthnew_Y0;             // Computed Parameter: depthnew_Y0
                                          //  Referenced by: '<S50>/depth new'

    boolean_T depthnew_Y0_l;           // Computed Parameter: depthnew_Y0_l
                                          //  Referenced by: '<S49>/depth new'

    boolean_T Memory_InitialCondition[48];// Expression: iA
                                             //  Referenced by: '<S141>/Memory'

    boolean_T Memory_InitialCondition_b[48];// Expression: iA
                                               //  Referenced by: '<S183>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S270>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S271>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S269>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S269>/Enable1'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S282>/Delay1'

    boolean_T Merge1_InitialOutput;  // Computed Parameter: Merge1_InitialOutput
                                        //  Referenced by: '<S9>/Merge1'

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

  // Real-Time Model get method
  proc_control_nodeModelClass::RT_MODEL_proc_control_node_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P_proc_control_node_T proc_control_node_P;

  // Block signals
  B_proc_control_node_T proc_control_node_B;

  // Block states
  DW_proc_control_node_T proc_control_node_DW;
  X_proc_control_node_T proc_control_node_X;// Block continuous states
  PrevZCX_proc_control_node_T proc_control_node_PrevZCX;// Triggered events

  // Real-Time Model
  RT_MODEL_proc_control_node_T proc_control_node_M;

  // private member function(s) for subsystem '<S280>/MATLAB Function1'
  static void proc_control_no_MATLABFunction1(const real_T rtu_matrix[13],
    real_T rty_y[130], B_MATLABFunction1_proc_contro_T *localB);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_node_maximum_j(const real_T x[4]);
  real_T proc_control_node_xnrm2_e(int32_T n, const real_T x[168], int32_T ix0);
  real_T proc_control_node_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_node_xgemv_k(int32_T m, int32_T n, const real_T A[168],
    int32_T ia0, const real_T x[168], int32_T ix0, real_T y[8]);
  void proc_control_node_xgerc_k(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[8], real_T A[168], int32_T ia0);
  void proc_control_node_xzlarf_a3(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C[168], int32_T ic0, real_T work[8]);
  void proc_control_node_qrf_i(real_T A[168], int32_T ia0, int32_T m, int32_T n,
    int32_T nfxd, real_T tau[8]);
  void proc_control_node_xgeqrf_e(real_T A[168], real_T tau[8]);
  void proc_control_node_xorgqr_g(int32_T m, int32_T n, int32_T k, real_T A[168],
    int32_T ia0, const real_T tau[8], int32_T itau0);
  void proc_control_node_qr_h(const real_T A[168], real_T Q[168], real_T R[64]);
  void EKFCorrectorAdditive_getMeasure(const real_T Rs[64], const real_T x[13],
    const real_T S[169], real_T zEstimated[8], real_T Pxy[104], real_T Sy[64],
    real_T dHdx[104]);
  void proc_control_node_trisolve_ga(const real_T A[64], real_T B[104]);
  void proc_control_node_trisolve_ga0(const real_T A[64], real_T B[104]);
  real_T proc_control_node_xnrm2_en(int32_T n, const real_T x[273], int32_T ix0);
  void proc_control_node_xgemv_kv(int32_T m, int32_T n, const real_T A[273],
    int32_T ia0, const real_T x[273], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_kg(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[273], int32_T ia0);
  void proc_control_node_xzlarf_a33(int32_T m, int32_T n, int32_T iv0, real_T
    tau, real_T C[273], int32_T ic0, real_T work[13]);
  void proc_control_node_qrf_if(real_T A[273], int32_T ia0, int32_T m, int32_T n,
    int32_T nfxd, real_T tau[13]);
  void proc_control_node_xgeqrf_eb(real_T A[273], real_T tau[13]);
  void proc_control_node_xorgqr_gf(int32_T m, int32_T n, int32_T k, real_T A[273],
    int32_T ia0, const real_T tau[13], int32_T itau0);
  void proc_control_node_qr_hr(const real_T A[273], real_T Q[273], real_T R[169]);
  void proc_control_node_qrFactor(const real_T A[169], real_T S[169], const
    real_T Ns[104]);
  void EKFCorrector_correctStateAndSqr(real_T x[13], real_T S[169], const real_T
    residue[8], const real_T Pxy[104], const real_T Sy[64], const real_T H[104],
    const real_T Rsqrt[64]);
  real_T proc_control_node_xnrm2_k(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_node_xgemv_bs(int32_T m, int32_T n, const real_T A[48],
    int32_T ia0, const real_T x[48], int32_T ix0, real_T y[3]);
  void proc_control_node_xgerc_og(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[3], real_T A[48], int32_T ia0);
  void proc_control_node_qr_f(const real_T A[48], real_T Q[48], real_T R[9]);
  void proc_control_node_trisolve_i(const real_T A[9], real_T B[39]);
  void proc_control_node_trisolve_iq(const real_T A[9], real_T B[39]);
  real_T proc_control_node_xnrm2_kt(int32_T n, const real_T x[208], int32_T ix0);
  void proc_control_node_xgemv_bsn(int32_T m, int32_T n, const real_T A[208],
    int32_T ia0, const real_T x[208], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_ogv(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[208], int32_T ia0);
  void proc_control_node_xzlarf_n(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C[208], int32_T ic0, real_T work[13]);
  void proc_control_node_qrf_m3(real_T A[208], int32_T ia0, int32_T m, int32_T n,
    int32_T nfxd, real_T tau[13]);
  void proc_control_node_xgeqrf_mg(real_T A[208], real_T tau[13]);
  void proc_control_node_xorgqr_gf3(int32_T m, int32_T n, int32_T k, real_T A
    [208], int32_T ia0, const real_T tau[13], int32_T itau0);
  void proc_control_node_qr_fq(const real_T A[208], real_T Q[208], real_T R[169]);
  void proc_control_node_qrFactor_l(const real_T A[169], real_T S[169], const
    real_T Ns[39]);
  void EKFCorrector_correctStateAndS_m(real_T x[13], real_T S[169], const real_T
    residue[3], const real_T Pxy[39], const real_T Sy[9], const real_T H[39],
    const real_T Rsqrt[9]);
  real_T proc_control_node_erf(real_T x);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  real_T proc_control_node_xnrm2_cf(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_node_xgemv_l(int32_T m, int32_T n, const real_T A[338],
    int32_T ia0, const real_T x[338], int32_T ix0, real_T y[13]);
  void proc_control_node_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[338], int32_T ia0);
  void proc_control_node_xzlarf_j(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C[338], int32_T ic0, real_T work[13]);
  void proc_control_node_qrf_j(real_T A[338], int32_T ia0, int32_T m, int32_T n,
    int32_T nfxd, real_T tau[13]);
  void proc_control_node_xgeqrf_c(real_T A[338], real_T tau[13]);
  void proc_control_node_xorgqr_e(int32_T m, int32_T n, int32_T k, real_T A[338],
    int32_T ia0, const real_T tau[13], int32_T itau0);
  void proc_control_node_qr_i(const real_T A[338], real_T Q[338], real_T R[169]);
  void proc_control_node_qrFactor_d(const real_T A[169], real_T S[169], const
    real_T Ns[169]);
  void proc_contr_quaternionBase_slerp(real_T q1_a, real_T q1_b, real_T q1_c,
    real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c, real_T q2_d, real_T t,
    real_T *qo_a, real_T *qo_b, real_T *qo_c, real_T *qo_d);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  void proc_control_no_SystemCore_step(robotics_slcore_internal_bloc_T *obj,
    real_T varargin_1, const real_T varargin_2[4], const real_T varargin_3[4],
    const real_T varargin_4[2], real_T varargout_1[4], real_T varargout_2[3],
    real_T varargout_3[3]);
  void proc_control_node_ppval(const real_T pp_breaks[4], const real_T pp_coefs
    [36], const real_T x[2], real_T v[6]);
  void proc_control_node_cubicpolytraj(const real_T wayPoints[6], const real_T
    timePoints[2], const real_T t[2], const real_T varargin_2[6], real_T q[6],
    real_T qd[6], real_T qdd[6], real_T pp_breaks[4], real_T pp_coefs[36]);
  void proc_control_node_ppval_b(const real_T pp_breaks[4], const real_T
    pp_coefs[36], real_T x, real_T v[3]);
  void TrajectoryManager_SendCurrentPo(TrajectoryManager_proc_contro_T *b_this,
    real_T currPose[130]);
  real_T proc_control_node_norm_b(const real_T x[3]);
  boolean_T proc_control_node_isequal(const real_T varargin_1[29], const real_T
    varargin_2[29]);
  boolean_T proc_control_node_isequal_b(const real_T varargin_1[8], const real_T
    varargin_2[8]);
  void proc_contro_znlmpc_setDecisions(const real_T X[130], const real_T Umv[80],
    real_T e, real_T z[155]);
  void proc_co_structConstructorHelper(const real_T varargin_2[13], const real_T
    varargin_4[8], const real_T varargin_6[130], const real_T varargin_10[130],
    const real_T varargin_12[80], const real_T varargin_14[80], const real_T
    varargin_18[130], const real_T varargin_20[130], const real_T varargin_22
    [130], const real_T varargin_24[130], const real_T varargin_26[80], const
    real_T varargin_28[80], const real_T varargin_30[80], const real_T
    varargin_32[80], const real_T varargin_34[80],
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *s);
  void proc_znlmpc_generateRuntimeData(const real_T x[13], const real_T lastMV[8],
    const real_T ref0[130], const real_T OutputWeights0[13], const real_T
    MVWeights0[8], const real_T MVRateWeights0[8], const real_T MVMin0[8], const
    real_T MVMax0[8], const real_T X0[13], const real_T MV0[8], real_T Slack0,
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *runtimedata,
    szeIbzRjxClbCFpzxneSihD_proc__T *userdata, real_T z0[155]);
  void proc_control__znlmpc_getZBounds(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *runtimedata, real_T zLB[155], real_T zUB[155]);
  void proc_control_node_isfinite(const real_T x[8], boolean_T b[8]);
  void proc_control_node_mtimes(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control__znlmpc_getUBounds(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *runtimedata, real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T *
    Bu_size);
  void proc_contro_znlmpc_getDecisions(const real_T z[155], real_T X[130],
    real_T Umv[80], real_T *e);
  void proc_control_node_znlmpc_getXUe(const real_T z[155], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], real_T Anqv[169]);
  void proc_control_node_AUVQuatSimFcn(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  void proc_control_nod_stateEvolution(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[20150]);
  void proc_control_node_all(const boolean_T x[130], boolean_T y[13]);
  void proc_control_node_isfinite_k(const real_T x[13], boolean_T b[13]);
  boolean_T proc_control_node_any(const boolean_T x[26]);
  void proc_cont_znlmpc_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    *Je_size, real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_node_outputBounds(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_node_anon(const real_T runtimedata_x[13], const real_T
    runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130], const
    real_T z[155], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[20150]);
  void proc_control_n_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj);
  void proc_cont_factoryConstruct_lnz4(int32_T MaxVars, int32_T *obj_grad_size,
    int32_T *obj_Hx_size, boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_lnz42(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_control_node_loadProblem(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T mIneq, int32_T mLinIneq, const real_T Aineq_data[], int32_T mLB,
    int32_T mUB, int32_T mFixed, int32_T mConstrMax);
  void proc_control_quadraticObjective(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_ref[130], const real_T runtimedata_OutputWeights[130],
    const real_T runtimedata_MVWeights[80], const real_T
    runtimedata_MVRateWeights[80], const real_T runtimedata_MVScaledTarget[80],
    const real_T X[143], const real_T U[88], real_T e, real_T *f, real_T gfx[130],
    real_T gfu[80], real_T *gfe);
  void proc_control_node_anon_d(const real_T runtimedata_x[13], const real_T
    runtimedata_lastMV[8], const real_T runtimedata_ref[130], const real_T
    runtimedata_OutputWeights[130], const real_T runtimedata_MVWeights[80],
    const real_T runtimedata_MVRateWeights[80], const real_T
    runtimedata_MVScaledTarget[80], const real_T z[155], real_T *varargout_1,
    real_T varargout_2[155]);
  int32_T proc_contr_checkVectorNonFinite(int32_T N, const real_T vec_data[],
    int32_T iv0);
  void computeObjectiveAndUserGradient(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T x[155], real_T
    grad_workspace_data[], real_T *fval, int32_T *status);
  int32_T proc_con_checkVectorNonFinite_g(const real_T vec[130]);
  int32_T proc_contr_checkMatrixNonFinite(int32_T ncols, const real_T mat_data[],
    int32_T col0, int32_T ldm);
  int32_T computeConstraintsAndUserJacobi(const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[155],
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
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[155],
    real_T grad_workspace_data[], real_T Cineq_workspace_data[], int32_T ineq0,
    real_T Ceq_workspace[130], real_T JacIneqTrans_workspace_data[], int32_T
    iJI_col, int32_T ldJI, real_T JacEqTrans_workspace_data[], int32_T ldJE,
    real_T *fval, int32_T *status);
  void proc_c_updateWorkingSetForNewQP(const real_T xk[155],
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet, int32_T mIneq, const real_T
    cIneq_data[], const real_T cEq[130], int32_T mLB, const real_T lb[155],
    int32_T mUB, int32_T mFixed);
  void proc_co_modifyOverheadPhaseOne_(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_control_nod_setProblemType(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T PROBLEM_TYPE);
  void proc_control_node_initActiveSet(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_contro_factoryConstruct_ln(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T *obj_jpvt_size, int32_T *obj_mrows, int32_T
    *obj_ncols, int32_T *obj_tau_size, int32_T *obj_minRowCol, boolean_T
    *obj_usedPivoting);
  void proc_contr_factoryConstruct_lnz(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_node_xgemv(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_nod_computeGradLag(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[155], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[155], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_node_saveJacobian(s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj,
    int32_T nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T
    ineqCol0, const real_T JacCeqTrans_data[], int32_T ldJ);
  void proc_control_node_saveState(s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj);
  real_T proc_control__computeComplError(const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    const real_T xCurrent[155], int32_T mIneq, const real_T cIneq_data[], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[155], const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[], int32_T iL0);
  void proc_control_node_xgemv_m(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_n_computeGradLag_b(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  void proc_con_computeDualFeasError_b(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_updateWorkingSetForNewQP_l(const real_T xk[155],
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet, int32_T mIneq, int32_T
    mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], int32_T mLB,
    const real_T lb[155], int32_T mUB, int32_T mFixed);
  real_T proc_control_node_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_node_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_node_xgemv_mt(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_node_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
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
  void proc_control_node_factorQRE(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_node_xorgqr(int32_T m, int32_T n, int32_T k, real_T A_data[],
    const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_node_computeQ_(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, int32_T
    nrows);
  void proc_control_node_xgemv_mtm(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_xtrsv(int32_T n, const real_T A_data[], int32_T lda,
    real_T x_data[]);
  void proc_control_node_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  int32_T proc_control_node_ixamax(int32_T n, const real_T x_data[]);
  void proc_control_node_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T *fscales_lineq_constraint_size, const int32_T *
    fscales_cineq_constraint_size, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet,
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T
    *QRManager, const real_T lb[155]);
  void proc_control_xgemv_mtmcjbiadz2i(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0,
    real_T y_data[]);
  boolean_T proc_control_node_BFGSUpdate(int32_T nvar, real_T Bk[24025], const
    real_T sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_node_factorQRE_f(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj,
    int32_T mrows, int32_T ncols);
  void proc_control_node_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_node_removeConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T idx_global);
  int32_T proc_control_RemoveDependentEq_(s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager);
  void proc_contro_removeAllIneqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_contr_RemoveDependentIneq_(s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace);
  void proc_control_node_xgeqrf(real_T A_data[], const int32_T A_size[2],
    int32_T m, int32_T n, real_T tau_data[], int32_T *tau_size);
  void proc_control_node_factorQR_h(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_node_factorQR(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, int32_T
    mrows, int32_T ncols);
  void proc_control_node_xgemv_mtmcj(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_xgemv_mtmc(int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    const real_T x_data[]);
  void proc_control_node_xgemv_mtmcjb(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  real_T proc_c_maxConstraintViolation_d(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    const real_T x_data[], int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(real_T workspace_data[], const
    int32_T workspace_size[2], real_T xCurrent_data[],
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T
    *qrmanager);
  void proc_con_RemoveDependentIneq__f(s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace);
  void proc_control_nod_xgemv_mtmcjbia(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_xgemv_mtmcjbi(int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], real_T y_data[]);
  real_T proc__maxConstraintViolation_du(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager);
  void proc_control_no_xgemv_mtmcjbiad(int32_T m, int32_T n, const real_T A
    [24025], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_syceGAKWionoNWyVws9jI_proc__T *obj,
    const real_T H[24025], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_syceGAKWionoNWyVws9jI_proc__T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_node_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void proc_control_n_deleteColMoveEnd(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_node_strcmp(const char_T a[7]);
  void proc_control_node_xgemm(int32_T m, int32_T n, int32_T k, const real_T A
    [24025], int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb,
    real_T C_data[], int32_T ldc);
  void proc_control_node_xgemm_m(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  int32_T proc_control_node_ixamax_k(int32_T n, const real_T x_data[], int32_T
    incx);
  void proc_control_node_fullColLDL2_(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  void proc_control_no_partialColLDL3_(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_node_xpotrf(int32_T n, real_T A_data[], int32_T lda);
  void proc_control_n_xgemv_mtmcjbiadz(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_node_factor(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, const
    real_T A[24025], int32_T ndims, int32_T ldA);
  void proc_control_node_solve(const s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_node_factor_p(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, const
    real_T A[24025], int32_T ndims, int32_T ldA);
  void proc_control_node_solve_l(const s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_nod_compute_deltax(const real_T H[24025],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, const s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *cholmanager, const
    s_syceGAKWionoNWyVws9jI_proc__T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_node_xnrm2_m(int32_T n, const real_T x_data[]);
  void proc_control__xgemv_mtmcjbiadz2(int32_T m, int32_T n, const real_T
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
  void proc_c_checkUnboundedOrIllPosed(s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution,
    const s_syceGAKWionoNWyVws9jI_proc__T *objective);
  void proc_addBoundToActiveSetMatrix_(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_nod_addAineqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T idx_local);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, const
    s_syceGAKWionoNWyVws9jI_proc__T *objective, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *
    workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
    updateFval);
  void proc_control_node_iterate(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective, const char_T
    options_SolverName[7], real_T options_StepTolerance, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
  void proc_control_node_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[24025], const real_T f_data[], const
    real_T x_data[]);
  real_T proc_control_node_computeFval(const s_syceGAKWionoNWyVws9jI_proc__T
    *obj, real_T workspace_data[], const real_T H[24025], const real_T f_data[],
    const real_T x_data[]);
  void proc_control_node_phaseone(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective,
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *options, const
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *runTimeOptions);
  void proc_control_node_driver_i(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective,
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *options, s1TgE9KstXgkd2qJxO1bF4F_proc__T
    *runTimeOptions);
  void proc_control_node_addAeqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    int32_T idx_local);
  boolean_T proc_control_node_soc(const real_T Hessian[24025], const real_T
    grad_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *qpoptions);
  void proc_control_node_normal(const real_T Hessian[24025], const real_T
    grad_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *qpoptions);
  void proc_control_node_relaxed(const real_T Hessian[24025], const real_T
    grad_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective,
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *qpoptions);
  boolean_T proc_control_node_step_k(int32_T *STEP_TYPE, real_T Hessian[24025],
    const real_T lb[155], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective,
    s1TgE9KstXgkd2qJxO1bF4F_proc__T *qpoptions);
  real_T proc_control_node_anon_d0(const real_T runtimedata_x[13], const real_T
    runtimedata_lastMV[8], const real_T runtimedata_ref[130], const real_T
    runtimedata_OutputWeights[130], const real_T runtimedata_MVWeights[80],
    const real_T runtimedata_MVRateWeights[80], const real_T
    runtimedata_MVScaledTarget[80], const real_T z[155]);
  void proc_control__computeObjective_(const real_T
    obj_objfun_workspace_runtimedat[13], const real_T
    obj_objfun_workspace_runtimed_0[8], const real_T
    obj_objfun_workspace_runtimed_1[130], const real_T
    obj_objfun_workspace_runtimed_2[130], const real_T
    obj_objfun_workspace_runtimed_3[80], const real_T
    obj_objfun_workspace_runtimed_4[80], const real_T
    obj_objfun_workspace_runtimed_5[80], const real_T x[155], real_T *fval,
    int32_T *status);
  void proc_control_n_stateEvolution_g(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc_control_nod_outputBounds_p(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_control_node_anon_d0f(const real_T runtimedata_x[13], const real_T
    runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130], const
    real_T z[155], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130]);
  int32_T proc_contro_computeConstraints_(const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[155],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130]);
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
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[155],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[155], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T *workspaceIneq_size, int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_no_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_node_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_objfun_workspace_r, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_nonlcon_workspace_, int32_T
    FcnEvaluator_mCineq, boolean_T socTaken, real_T *alpha, int32_T *exitflag);
  void proc_control_node_driver(const real_T bineq_data[], const real_T lb[155],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const s_OFDCtz0SnDbKkoK04vkDPE_proc_T *FcnEvaluator,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    real_T Hessian[24025]);
  void proc_control_node_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, const szeIbzRjxClbCFpzxneSihD_proc__T
    *fun_workspace_userdata, const real_T x0[155], const real_T Aineq_data[],
    const real_T bineq_data[], const int32_T *bineq_size, const real_T lb[155],
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlcon_workspace_runtimedata, const
    szeIbzRjxClbCFpzxneSihD_proc__T *nonlcon_workspace_userdata, real_T x[155],
    real_T *fval, real_T *exitflag, real_T *output_iterations, real_T
    *output_funcCount, char_T output_algorithm[3], real_T
    *output_constrviolation, real_T *output_stepsize, real_T
    *output_lssteplength, real_T *output_firstorderopt);
  boolean_T proc_control_node_isequal_b4(const real_T varargin_1[3], const
    real_T varargin_2[3]);
  boolean_T proc_control_node_isequal_b4n(const real_T varargin_1[6], const
    real_T varargin_2[6]);
  void proc_contr_AUVEULJacobianMatrix(const real_T in1[12], real_T Ane[144]);
  int32_T proc_control_node_xgetrfs(real_T A[144], real_T B[144]);
  void proc_control_node_lusolve(const real_T A[144], const real_T B[144],
    real_T X[144]);
  void proc_co_PadeApproximantOfDegree(const real_T A[144], uint8_T m, real_T F
    [144]);
  void proc_control_node_mldivide(const real_T A[36], const real_T B[36], real_T
    Y[36]);
  void proc_control_no_mpc_plantupdate(const real_T a[144], real_T b[96], const
    real_T c[144], real_T b_A[400], real_T b_B[580], real_T b_C[240], const
    real_T b_D[348], const real_T b_mvindex[8], const real_T b_myindex[12],
    const real_T b_Uscale[8], const real_T b_Yscale[12], real_T Bu[160], real_T
    Bv[20], real_T Cm[240], real_T Dv[12], real_T Dvm[12], real_T QQ[400],
    real_T RR[144], real_T NN[240]);
  real_T proc_control_node_mod_n(real_T x);
  real_T proc_control_node_mod(real_T x);
  void proc_cont_mpc_updateFromNominal(real_T b_Mlim[48], const real_T b_Mrows
    [48], const real_T U0[8], const real_T b_Uscale[8], const real_T old_mvoff[8],
    const real_T b_mvindex[8], real_T b_utarget[80], const real_T Y0[12], const
    real_T b_Yscale[12], const real_T old_yoff[12], const real_T b_myindex[12],
    const real_T X0[12], real_T b_xoff[20], const real_T DX0[12], real_T Bv[220],
    real_T new_mvoff[8], real_T new_yoff[12], real_T new_myoff[12]);
  void proc_control_node_xgetrf(real_T b_A[144], int32_T ipiv[12], int32_T *info);
  void proc_control_node_mrdiv(const real_T b_A[144], const real_T b_B[144],
    real_T Y[144]);
  void proc_control_mpc_constraintcoef(const real_T b_A[400], const real_T Bu
    [160], const real_T Bv[20], const real_T b_C[240], const real_T Dv[12],
    const real_T b_Jm[1920], real_T b_SuJm[2880], real_T b_Sx[2400], real_T
    b_Su1[960], real_T b_Hv[1320]);
  void proc_control_node_WtMult(const real_T W[8], const real_T M[1920], real_T
    nwt, real_T WM[1920]);
  void proc_contr_mpc_calculatehessian(const real_T b_Wy[12], const real_T b_Wu
    [8], const real_T b_Wdu[8], const real_T b_SuJm[2880], const real_T I2Jm
    [1920], const real_T b_Jm[1920], const real_T b_I1[640], const real_T b_Su1
    [960], const real_T b_Sx[2400], const real_T b_Hv[1320], real_T nmv, real_T
    b_ny, real_T b_H[576], real_T b_Ku1[192], real_T b_Kut[1920], real_T b_Kx
    [480], real_T b_Kv[264], real_T b_Kr[2880]);
  int32_T proc_control_node_xpotrf_g(real_T b_A[625]);
  real_T proc_control_node_minimum(const real_T x[25]);
  void proc_control_n_mpc_checkhessian(real_T b_H[625], real_T L[625], real_T
    *BadH);
  void proc_control_node_trisolve(const real_T b_A[625], real_T b_B[625]);
  void proc_control_node_Unconstrained(const real_T b_Hinv[625], const real_T f
    [25], real_T x[25], int16_T n);
  real_T proc_control_node_norm(const real_T x[25]);
  void proc_control_node_abs(const real_T x[25], real_T y[25]);
  real_T proc_control_node_maximum(const real_T x[25]);
  void proc_control_node_abs_b(const real_T x[48], real_T y[48]);
  void proc_control_node_maximum2(const real_T x[48], real_T y, real_T ex[48]);
  real_T proc_control_node_xnrm2_p(int32_T n, const real_T x[625], int32_T ix0);
  void proc_control_node_xgemv_b(int32_T b_m, int32_T n, const real_T b_A[625],
    int32_T ia0, const real_T x[625], int32_T ix0, real_T y[25]);
  void proc_control_node_xgerc_g(int32_T b_m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[25], real_T b_A[625], int32_T ia0);
  void proc_control_node_xzlarf_o(int32_T b_m, int32_T n, int32_T iv0, real_T
    tau, real_T b_C[625], int32_T ic0, real_T work[25]);
  void proc_control_node_qrf_h(real_T b_A[625], int32_T ia0, int32_T b_m,
    int32_T n, int32_T nfxd, real_T tau[25]);
  void proc_control_node_xgeqrf_m(real_T b_A[625], real_T tau[25]);
  void proc_control_node_xorgqr_f(int32_T b_m, int32_T n, int32_T k, real_T b_A
    [625], int32_T ia0, const real_T tau[25], int32_T itau0);
  void proc_control_node_qr(const real_T b_A[625], real_T Q[625], real_T R[625]);
  void proc_control_node_KWIKfactor(const real_T b_Ac[1200], const int16_T iC[48],
    int16_T nA, const real_T b_Linv[625], real_T b_D[625], real_T b_H[625],
    int16_T n, real_T RLinv[625], real_T *Status);
  real_T proc_control_node_mtimes_a(const real_T b_A[25], const real_T b_B[25]);
  void proc_control_nod_DropConstraint(int16_T kDrop, int16_T iA[48], int16_T
    *nA, int16_T iC[48]);
  void proc_control_node_qpkwik(const real_T b_Linv[625], const real_T b_Hinv
    [625], const real_T f[25], const real_T b_Ac[1200], const real_T b[48],
    int16_T iA[48], int16_T maxiter, real_T FeasTol, real_T x[25], real_T
    lambda[48], real_T *status);
  void proc_control_node_mpc_solveQP(const real_T xQP[20], const real_T b_Kx[480],
    const real_T b_Kr[2880], const real_T rseq[120], const real_T b_Ku1[192],
    const real_T old_u[8], const real_T b_Kv[264], const real_T vseq[11], const
    real_T b_Kut[1920], const real_T b_utarget[80], const real_T b_Linv[625],
    const real_T b_Hinv[625], const real_T b_Ac[1200], const real_T Bc[48],
    boolean_T iA[48], real_T zopt[25], real_T f[25], real_T *status);
  void proc_control_mpcblock_optimizer(const real_T rseq[120], const real_T
    vseq[11], const real_T x[20], const real_T old_u[8], const boolean_T iA[48],
    const real_T b_Mlim[48], real_T b_Mx[960], real_T b_Mu1[384], real_T b_Mv
    [528], const real_T b_utarget[80], const real_T b_uoff[8], real_T b_H[625],
    real_T b_Ac[1200], const real_T b_Wy[12], const real_T b_Wdu[8], const
    real_T b_Jm[1920], const real_T b_Wu[8], const real_T b_I1[640], const
    real_T b_A[400], const real_T Bu[1760], const real_T Bv[220], const real_T
    b_C[240], const real_T Dv[132], const real_T b_Mrows[48], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[48]);
  void proc_control_nod_AUVEulerSimFcn(const real_T in1[12], const real_T in2[8],
    real_T out1[12]);
  int32_T proc_control_node_xgetrfs_c(real_T A[169], real_T B[169]);
  void proc_control_node_lusolve_e(const real_T A[169], const real_T B[169],
    real_T X[169]);
  void proc__PadeApproximantOfDegree_k(const real_T A[169], uint8_T m, real_T F
    [169]);
  void proc_control_node_expm(real_T A[169], real_T F[169]);
  void proc_control__mpc_plantupdate_k(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const real_T b_mvindex[8], const real_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  real_T proc_control_node_mod_b(real_T x);
  void proc_co_mpc_updateFromNominal_h(real_T b_Mlim[48], const real_T b_Mrows
    [48], const real_T U0[8], const real_T b_Uscale[8], const real_T old_mvoff[8],
    const real_T b_mvindex[8], real_T b_utarget[80], const real_T Y0[13], const
    real_T b_Yscale[13], const real_T old_yoff[13], const real_T b_myindex[13],
    const real_T X0[13], real_T b_xoff[21], const real_T DX0[13], real_T Bv[231],
    real_T new_mvoff[8], real_T new_yoff[13], real_T new_myoff[13]);
  void proc_contr_mpc_constraintcoef_m(const real_T b_A[441], const real_T Bu
    [168], const real_T Bv[21], const real_T b_C[273], const real_T Dv[13],
    const real_T b_Jm[1920], real_T b_SuJm[3120], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  void proc_con_mpc_calculatehessian_c(const real_T b_Wy[13], const real_T b_Wu
    [8], const real_T b_Wdu[8], const real_T b_SuJm[3120], const real_T I2Jm
    [1920], const real_T b_Jm[1920], const real_T b_I1[640], const real_T b_Su1
    [1040], const real_T b_Sx[2730], const real_T b_Hv[1430], real_T nmv, real_T
    b_ny, real_T b_H[576], real_T b_Ku1[192], real_T b_Kut[1920], real_T b_Kx
    [504], real_T b_Kv[264], real_T b_Kr[3120]);
  void proc_control_node_mpc_solveQP_g(const real_T xQP[21], const real_T b_Kx
    [504], const real_T b_Kr[3120], const real_T rseq[130], const real_T b_Ku1
    [192], const real_T old_u[8], const real_T b_Kv[264], const real_T vseq[11],
    const real_T b_Kut[1920], const real_T b_utarget[80], const real_T b_Linv
    [625], const real_T b_Hinv[625], const real_T b_Ac[1200], const real_T Bc[48],
    boolean_T iA[48], real_T zopt[25], real_T f[25], real_T *status);
  void proc_contr_mpcblock_optimizer_e(const real_T rseq[130], const real_T
    vseq[11], const real_T x[21], const real_T old_u[8], const boolean_T iA[48],
    const real_T b_Mlim[48], real_T b_Mx[1008], real_T b_Mu1[384], real_T b_Mv
    [528], const real_T b_utarget[80], const real_T b_uoff[8], real_T b_H[625],
    real_T b_Ac[1200], const real_T b_Wy[13], const real_T b_Wdu[8], const
    real_T b_Jm[1920], const real_T b_Wu[8], const real_T b_I1[640], const
    real_T b_A[441], const real_T Bu[1848], const real_T Bv[231], const real_T
    b_C[273], const real_T Dv[143], const real_T b_Mrows[48], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[48]);
  real_T proc_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
  void pro_TrajectoryManager_setupImpl(TrajectoryManager_proc_contro_T *b_this);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void proc_control_node_derivatives();
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Constant' : Unused code path elimination
//  Block '<S13>/N to RPM' : Unused code path elimination
//  Block '<S13>/Scope' : Unused code path elimination
//  Block '<S14>/Scope1' : Unused code path elimination
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S37>/Constant' : Unused code path elimination
//  Block '<S37>/Gain' : Unused code path elimination
//  Block '<S37>/Gain1' : Unused code path elimination
//  Block '<S37>/Gain2' : Unused code path elimination
//  Block '<S37>/Product' : Unused code path elimination
//  Block '<S37>/Product1' : Unused code path elimination
//  Block '<S37>/Product2' : Unused code path elimination
//  Block '<S37>/Product3' : Unused code path elimination
//  Block '<S37>/Product4' : Unused code path elimination
//  Block '<S37>/Product5' : Unused code path elimination
//  Block '<S37>/Product6' : Unused code path elimination
//  Block '<S37>/Product7' : Unused code path elimination
//  Block '<S37>/Product8' : Unused code path elimination
//  Block '<S37>/Sum' : Unused code path elimination
//  Block '<S37>/Sum1' : Unused code path elimination
//  Block '<S37>/Sum2' : Unused code path elimination
//  Block '<S37>/Sum3' : Unused code path elimination
//  Block '<S38>/Constant' : Unused code path elimination
//  Block '<S38>/Gain' : Unused code path elimination
//  Block '<S38>/Gain1' : Unused code path elimination
//  Block '<S38>/Gain2' : Unused code path elimination
//  Block '<S38>/Product' : Unused code path elimination
//  Block '<S38>/Product1' : Unused code path elimination
//  Block '<S38>/Product2' : Unused code path elimination
//  Block '<S38>/Product3' : Unused code path elimination
//  Block '<S38>/Product4' : Unused code path elimination
//  Block '<S38>/Product5' : Unused code path elimination
//  Block '<S38>/Product6' : Unused code path elimination
//  Block '<S38>/Product7' : Unused code path elimination
//  Block '<S38>/Product8' : Unused code path elimination
//  Block '<S38>/Sum' : Unused code path elimination
//  Block '<S38>/Sum1' : Unused code path elimination
//  Block '<S38>/Sum2' : Unused code path elimination
//  Block '<S38>/Sum3' : Unused code path elimination
//  Block '<S2>/Scope' : Unused code path elimination
//  Block '<S2>/Scope2' : Unused code path elimination
//  Block '<S2>/Scope3' : Unused code path elimination
//  Block '<S2>/Scope4' : Unused code path elimination
//  Block '<S3>/Display' : Unused code path elimination
//  Block '<S65>/Data Type Duplicate' : Unused code path elimination
//  Block '<S67>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S66>/Data Type Duplicate' : Unused code path elimination
//  Block '<S68>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S141>/Data Type Conversion22' : Unused code path elimination
//  Block '<S141>/Data Type Conversion23' : Unused code path elimination
//  Block '<S141>/Floor' : Unused code path elimination
//  Block '<S141>/Floor1' : Unused code path elimination
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
//  Block '<S160>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S161>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S162>/Vector Dimension Check' : Unused code path elimination
//  Block '<S163>/Vector Dimension Check' : Unused code path elimination
//  Block '<S164>/Vector Dimension Check' : Unused code path elimination
//  Block '<S165>/Vector Dimension Check' : Unused code path elimination
//  Block '<S166>/Vector Dimension Check' : Unused code path elimination
//  Block '<S167>/Vector Dimension Check' : Unused code path elimination
//  Block '<S168>/Vector Dimension Check' : Unused code path elimination
//  Block '<S141>/useq_scale' : Unused code path elimination
//  Block '<S141>/useq_scale1' : Unused code path elimination
//  Block '<S141>/ym_zero' : Unused code path elimination
//  Block '<S137>/m_zero' : Unused code path elimination
//  Block '<S137>/p_zero' : Unused code path elimination
//  Block '<S132>/Constant' : Unused code path elimination
//  Block '<S183>/Data Type Conversion22' : Unused code path elimination
//  Block '<S183>/Data Type Conversion23' : Unused code path elimination
//  Block '<S183>/Floor' : Unused code path elimination
//  Block '<S183>/Floor1' : Unused code path elimination
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
//  Block '<S198>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S199>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S200>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S201>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S202>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S203>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S204>/Vector Dimension Check' : Unused code path elimination
//  Block '<S205>/Vector Dimension Check' : Unused code path elimination
//  Block '<S206>/Vector Dimension Check' : Unused code path elimination
//  Block '<S207>/Vector Dimension Check' : Unused code path elimination
//  Block '<S208>/Vector Dimension Check' : Unused code path elimination
//  Block '<S209>/Vector Dimension Check' : Unused code path elimination
//  Block '<S210>/Vector Dimension Check' : Unused code path elimination
//  Block '<S183>/last_x' : Unused code path elimination
//  Block '<S183>/useq_scale' : Unused code path elimination
//  Block '<S183>/useq_scale1' : Unused code path elimination
//  Block '<S180>/m_zero' : Unused code path elimination
//  Block '<S180>/p_zero' : Unused code path elimination
//  Block '<S133>/Scope' : Unused code path elimination
//  Block '<S7>/Display' : Unused code path elimination
//  Block '<S213>/Data Type Duplicate' : Unused code path elimination
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
//  Block '<S231>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S232>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S233>/Vector Dimension Check' : Unused code path elimination
//  Block '<S234>/Vector Dimension Check' : Unused code path elimination
//  Block '<S235>/Vector Dimension Check' : Unused code path elimination
//  Block '<S236>/Vector Dimension Check' : Unused code path elimination
//  Block '<S7>/Scope1' : Unused code path elimination
//  Block '<S238>/Display' : Unused code path elimination
//  Block '<S238>/Display1' : Unused code path elimination
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
//  Block '<S238>/Scope' : Unused code path elimination
//  Block '<S240>/Scope' : Unused code path elimination
//  Block '<S240>/Scope1' : Unused code path elimination
//  Block '<S240>/Scope2' : Unused code path elimination
//  Block '<S240>/Scope3' : Unused code path elimination
//  Block '<S242>/Display' : Unused code path elimination
//  Block '<S270>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S271>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S273>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S269>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S269>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S269>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S9>/Scope' : Unused code path elimination
//  Block '<S279>/Scope1' : Unused code path elimination
//  Block '<S280>/Scope' : Unused code path elimination
//  Block '<S280>/Scope1' : Unused code path elimination
//  Block '<S293>/Display' : Unused code path elimination
//  Block '<S293>/Selector3' : Unused code path elimination
//  Block '<S282>/Scope' : Unused code path elimination
//  Block '<S282>/Scope1' : Unused code path elimination
//  Block '<S282>/Scope2' : Unused code path elimination
//  Block '<S282>/Scope3' : Unused code path elimination
//  Block '<S296>/Scope' : Unused code path elimination
//  Block '<S3>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S141>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion10' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion11' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion12' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion13' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion14' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion15' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion16' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion17' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion18' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion19' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion20' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion21' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion4' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion5' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion7' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion8' : Eliminate redundant data type conversion
//  Block '<S141>/Data Type Conversion9' : Eliminate redundant data type conversion
//  Block '<S141>/E Conversion' : Eliminate redundant data type conversion
//  Block '<S141>/F Conversion' : Eliminate redundant data type conversion
//  Block '<S141>/G Conversion' : Eliminate redundant data type conversion
//  Block '<S141>/Reshape' : Reshape block reduction
//  Block '<S141>/Reshape1' : Reshape block reduction
//  Block '<S141>/Reshape2' : Reshape block reduction
//  Block '<S141>/Reshape3' : Reshape block reduction
//  Block '<S141>/Reshape4' : Reshape block reduction
//  Block '<S141>/Reshape5' : Reshape block reduction
//  Block '<S141>/S Conversion' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion10' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion11' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion12' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion13' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion14' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion15' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion16' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion17' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion18' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion19' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion20' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion21' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion4' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion5' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion7' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion8' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion9' : Eliminate redundant data type conversion
//  Block '<S183>/E Conversion' : Eliminate redundant data type conversion
//  Block '<S183>/F Conversion' : Eliminate redundant data type conversion
//  Block '<S183>/G Conversion' : Eliminate redundant data type conversion
//  Block '<S183>/Reshape' : Reshape block reduction
//  Block '<S183>/Reshape1' : Reshape block reduction
//  Block '<S183>/Reshape2' : Reshape block reduction
//  Block '<S183>/Reshape3' : Reshape block reduction
//  Block '<S183>/Reshape4' : Reshape block reduction
//  Block '<S183>/Reshape5' : Reshape block reduction
//  Block '<S183>/S Conversion' : Eliminate redundant data type conversion
//  Block '<S216>/Reshape1' : Reshape block reduction
//  Block '<S216>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S216>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S269>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S243>/Zero-Order Hold' : Eliminated since input and output rates are identical


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
//  '<S28>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse'
//  '<S29>'  : 'proc_control_node/Modèle Physique/Sensor Model/MATLAB Function'
//  '<S30>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Conjugate'
//  '<S31>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation'
//  '<S32>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1'
//  '<S33>'  : 'proc_control_node/Modèle Physique/Sensor Model/Rotation Angles to Quaternions'
//  '<S34>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Conjugate'
//  '<S35>'  : 'proc_control_node/Modèle Physique/Sensor Model/IMU Inverse/Quaternion Norm'
//  '<S36>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S37>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V1'
//  '<S38>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V2'
//  '<S39>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/V3'
//  '<S40>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S41>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S42>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S43>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V1'
//  '<S44>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V2'
//  '<S45>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/V3'
//  '<S46>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S47>'  : 'proc_control_node/Modèle Physique/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S48>'  : 'proc_control_node/ROS Input/Quaternion Normalise'
//  '<S49>'  : 'proc_control_node/ROS Input/Real System'
//  '<S50>'  : 'proc_control_node/ROS Input/Simulation'
//  '<S51>'  : 'proc_control_node/ROS Input/Subsystem'
//  '<S52>'  : 'proc_control_node/ROS Input/Real System/Subscribe'
//  '<S53>'  : 'proc_control_node/ROS Input/Real System/Subscribe1'
//  '<S54>'  : 'proc_control_node/ROS Input/Real System/Subscribe2'
//  '<S55>'  : 'proc_control_node/ROS Input/Real System/Subscribe/Enabled Subsystem'
//  '<S56>'  : 'proc_control_node/ROS Input/Real System/Subscribe1/Enabled Subsystem'
//  '<S57>'  : 'proc_control_node/ROS Input/Real System/Subscribe2/Enabled Subsystem'
//  '<S58>'  : 'proc_control_node/ROS Input/Simulation/Subscribe'
//  '<S59>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1'
//  '<S60>'  : 'proc_control_node/ROS Input/Simulation/Subscribe2'
//  '<S61>'  : 'proc_control_node/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S62>'  : 'proc_control_node/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S63>'  : 'proc_control_node/ROS Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S64>'  : 'proc_control_node/ROS Input/Subsystem/MATLAB Function'
//  '<S65>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable'
//  '<S66>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1'
//  '<S67>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable/Subsystem'
//  '<S68>'  : 'proc_control_node/ROS Input/Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S69>'  : 'proc_control_node/ROS Output/Send DVL msg'
//  '<S70>'  : 'proc_control_node/ROS Output/Send Depth msg'
//  '<S71>'  : 'proc_control_node/ROS Output/Send IMU msg'
//  '<S72>'  : 'proc_control_node/ROS Output/Send to Gazebo'
//  '<S73>'  : 'proc_control_node/ROS Output/Send to Unity'
//  '<S74>'  : 'proc_control_node/ROS Output/Send DVL msg/   '
//  '<S75>'  : 'proc_control_node/ROS Output/Send DVL msg/MATLAB Function'
//  '<S76>'  : 'proc_control_node/ROS Output/Send DVL msg/Publish'
//  '<S77>'  : 'proc_control_node/ROS Output/Send Depth msg/Blank Message'
//  '<S78>'  : 'proc_control_node/ROS Output/Send Depth msg/Publish'
//  '<S79>'  : 'proc_control_node/ROS Output/Send IMU msg/   '
//  '<S80>'  : 'proc_control_node/ROS Output/Send IMU msg/MATLAB Function'
//  '<S81>'  : 'proc_control_node/ROS Output/Send IMU msg/Publish'
//  '<S82>'  : 'proc_control_node/ROS Output/Send to Gazebo/   '
//  '<S83>'  : 'proc_control_node/ROS Output/Send to Gazebo/MATLAB Function'
//  '<S84>'  : 'proc_control_node/ROS Output/Send to Gazebo/Publish'
//  '<S85>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse'
//  '<S86>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication'
//  '<S87>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation'
//  '<S88>'  : 'proc_control_node/ROS Output/Send to Gazebo/Rotation Angles to Quaternions'
//  '<S89>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse/Quaternion Conjugate'
//  '<S90>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Inverse/Quaternion Norm'
//  '<S91>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q0'
//  '<S92>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q1'
//  '<S93>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q2'
//  '<S94>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Multiplication/q3'
//  '<S95>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize'
//  '<S96>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V1'
//  '<S97>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V2'
//  '<S98>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/V3'
//  '<S99>'  : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S100>' : 'proc_control_node/ROS Output/Send to Gazebo/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S101>' : 'proc_control_node/ROS Output/Send to Unity/   '
//  '<S102>' : 'proc_control_node/ROS Output/Send to Unity/MATLAB Function'
//  '<S103>' : 'proc_control_node/ROS Output/Send to Unity/Publish'
//  '<S104>' : 'proc_control_node/Send Data to ROS/Blank Message1'
//  '<S105>' : 'proc_control_node/Send Data to ROS/Blank Message2'
//  '<S106>' : 'proc_control_node/Send Data to ROS/Blank Message3'
//  '<S107>' : 'proc_control_node/Send Data to ROS/Blank Message4'
//  '<S108>' : 'proc_control_node/Send Data to ROS/MATLAB Function3'
//  '<S109>' : 'proc_control_node/Send Data to ROS/Publish1'
//  '<S110>' : 'proc_control_node/Send Data to ROS/Publish2'
//  '<S111>' : 'proc_control_node/Send Data to ROS/Publish3'
//  '<S112>' : 'proc_control_node/Send Data to ROS/Publish4'
//  '<S113>' : 'proc_control_node/Sensor Manager/Send Sensor ON'
//  '<S114>' : 'proc_control_node/Sensor Manager/Send To Telemetry '
//  '<S115>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S116>' : 'proc_control_node/Sensor Manager/Send Sensor ON/Publish'
//  '<S117>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Blank Message'
//  '<S118>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité'
//  '<S119>' : 'proc_control_node/Sensor Manager/Send To Telemetry /MATLAB Function1'
//  '<S120>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Publish'
//  '<S121>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles'
//  '<S122>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees'
//  '<S123>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees1'
//  '<S124>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation'
//  '<S125>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S126>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S127>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S128>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S129>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S130>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S131>' : 'proc_control_node/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S132>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler '
//  '<S133>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion '
//  '<S134>' : 'proc_control_node/Subsystem Controller/IDLE'
//  '<S135>' : 'proc_control_node/Subsystem Controller/JoyStick OpenLoop'
//  '<S136>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)'
//  '<S137>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller'
//  '<S138>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux'
//  '<S139>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /MATLAB Function'
//  '<S140>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /MATLAB Function2'
//  '<S141>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC'
//  '<S142>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S143>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S144>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S145>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S146>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S147>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S148>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S149>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S150>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S151>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S152>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S153>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S154>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S155>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S156>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S157>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S158>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S159>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S160>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S161>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S162>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S163>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S164>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S165>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S166>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S167>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S168>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S169>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer'
//  '<S170>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S171>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles'
//  '<S172>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation'
//  '<S173>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S174>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S175>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S176>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S177>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S178>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S179>' : 'proc_control_node/Subsystem Controller/Adaptive MPC Euler /Bus2Mux/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S180>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S181>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Bus2Mux'
//  '<S182>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /MATLAB Function2'
//  '<S183>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S184>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S185>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S186>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S187>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S188>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S189>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S190>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S191>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S192>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S193>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S194>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S195>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S196>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S197>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S198>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S199>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S200>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S201>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S202>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S203>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S204>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S205>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S206>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S207>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S208>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S209>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S210>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S211>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S212>' : 'proc_control_node/Subsystem Controller/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S213>' : 'proc_control_node/Subsystem Controller/JoyStick OpenLoop/Discrete Derivative'
//  '<S214>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S215>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S216>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S217>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S218>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S219>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S220>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S221>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S222>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S223>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S224>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S225>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S226>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S227>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S228>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S229>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S230>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S231>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S232>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S233>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S234>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S235>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S236>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S237>' : 'proc_control_node/Subsystem Controller/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S238>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S239>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments'
//  '<S240>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus'
//  '<S241>' : 'proc_control_node/Subsystem ProcNav/Reset Logic'
//  '<S242>' : 'proc_control_node/Subsystem ProcNav/Subsystem'
//  '<S243>' : 'proc_control_node/Subsystem ProcNav/Thursters Mesurments'
//  '<S244>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S245>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S246>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation'
//  '<S247>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S248>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S249>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S250>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V1'
//  '<S251>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V2'
//  '<S252>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V3'
//  '<S253>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S254>' : 'proc_control_node/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S255>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S256>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S257>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S258>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S259>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S260>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S261>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S262>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S263>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S264>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S265>' : 'proc_control_node/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S266>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S267>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S268>' : 'proc_control_node/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S269>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S270>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S271>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S272>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S273>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S274>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S275>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S276>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S277>' : 'proc_control_node/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S278>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem'
//  '<S279>' : 'proc_control_node/Subsystem Trajectory/Subsystem'
//  '<S280>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto'
//  '<S281>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual'
//  '<S282>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory'
//  '<S283>' : 'proc_control_node/Subsystem Trajectory/If Action Subsystem/MATLAB Function1'
//  '<S284>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter'
//  '<S285>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S286>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)'
//  '<S287>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1'
//  '<S288>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)/Discrete'
//  '<S289>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Second-Order Filter/Integrator (Discrete or Continuous)1/Discrete'
//  '<S290>' : 'proc_control_node/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S291>' : 'proc_control_node/Subsystem Trajectory/SubsystemAuto/MATLAB Function1'
//  '<S292>' : 'proc_control_node/Subsystem Trajectory/SubsystemManual/MATLAB Function1'
//  '<S293>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S294>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S295>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S296>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S297>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S298>' : 'proc_control_node/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S299>' : 'proc_control_node/Subsystem1/Subscribe'
//  '<S300>' : 'proc_control_node/Subsystem1/Subscribe1'
//  '<S301>' : 'proc_control_node/Subsystem1/Subscribe2'
//  '<S302>' : 'proc_control_node/Subsystem1/Subscribe3'
//  '<S303>' : 'proc_control_node/Subsystem1/Subscribe4'
//  '<S304>' : 'proc_control_node/Subsystem1/Subscribe5'
//  '<S305>' : 'proc_control_node/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S306>' : 'proc_control_node/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S307>' : 'proc_control_node/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S308>' : 'proc_control_node/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S309>' : 'proc_control_node/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S310>' : 'proc_control_node/Subsystem1/Subscribe5/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_node_h_

//
// File trailer for generated code.
//
// [EOF]
//
