//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 3.35
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Thu Jun  2 22:53:18 2022
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
  // Block signals (default storage)
  struct B_proc_control_T {
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T QRManager;
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T CholManager;
    real_T y_data[3463321];
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T WorkingSet;
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T b_WorkingSet;
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T c_WorkingSet;
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T memspace;
    real_T B_data[1853556];
    s_SfTiiT1KRClFcMCE02xJjB_proc_T TrialState;
    real_T b_this[78013];
    real_T b_this_m[78000];
    real_T A_data[67520];
    real_T JacCineqTrans_data[40300];
    real_T b_varargin_1_data[40300];
    real_T a__4_data[40300];
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w In1;// '<S318>/In1'
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w b_varargout_2;
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T Au[25600];
    real_T Auf_data[25600];
    real_T unusedExpr[24025];
    real_T tmp_data[20800];
    real_T JacCeqTrans[20150];
    real_T JacEqTrans_tmp[20150];
    real_T Jx_c[16900];
    real_T Su[10400];
    real_T a[10400];
    real_T Jmv[10400];
    real_T tmp_data_k[7680];
    real_T tmp_data_c[7680];
    real_T l[6450];
    real_T dv[6400];
    real_T varargin_2_data[6240];
    real_T g[5418];
    real_T b_A[4851];
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_SuJm[3120];
    real_T WySuJm[3120];
    real_T b_SuJm_b[3120];
    real_T WySuJm_p[3120];
    real_T Jmv_c[3120];
    real_T b_C[3003];
    real_T dv1[2838];
    real_T b_Sx[2730];
    real_T b_Sx_f[2730];
    real_T h[2064];
    s_syceGAKWionoNWyVws9jI_proc__T QPObjective;
    real_T I2Jm[1920];
    real_T WuI2Jm[1920];
    real_T dv2[1920];
    real_T I2Jm_g[1920];
    real_T WuI2Jm_g[1920];
    real_T dv3[1920];
    real_T y_data_m[1861];
    real_T y_data_n[1861];
    real_T work_data[1861];
    real_T work_data_p[1861];
    real_T vn1_data[1861];
    real_T vn2_data[1861];
    real_T work_data_l[1861];
    real_T y_data_j[1861];
    real_T y_data_d[1861];
    real_T y_data_g[1861];
    real_T y_data_l[1861];
    real_T y_data_dh[1861];
    real_T y_data_dy[1861];
    real_T y_data_lx[1861];
    real_T A[1859];                    // '<S144>/MATLAB Function2'
    real_T C[1859];                    // '<S144>/MATLAB Function2'
    real_T Bu[1848];
    real_T b_Hv[1430];
    real_T b_Hv_o[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T CovMat[1156];
    real_T B[1144];                    // '<S144>/MATLAB Function2'
    real_T b_Su1[1040];
    real_T Sum_b[1040];
    real_T b_Su1_n[1040];
    real_T c_data[996];
    real_T b_tmp[986];
    int8_T a_b[6400];
    real_T b_B[630];
    real_T k[625];
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
    real_T b_Linv_l[625];
    real_T c_Linv_h[625];
    real_T c_A_b[625];
    real_T b_D_d[625];
    real_T b_H_e[625];
    real_T U_b[625];
    real_T RLinv_j[625];
    real_T TL_f[625];
    real_T QQ_a[625];
    real_T RR_j[625];
    real_T b_SuJm_j[576];
    real_T b_Jm[576];
    real_T b_SuJm_o[576];
    real_T b_Jm_n[576];
    real_T b_Kx[504];
    real_T b_Kx_i[504];
    real_T b_A_o[441];
    real_T AA_n[441];
    SL_Bus_proc_control_std_msgs_Float64MultiArray In1_f;// '<S239>/In1'
    SL_Bus_proc_control_std_msgs_Float64MultiArray b_varargout_2_m;
    SL_Bus_proc_control_sonia_common_MpcInfo msg_c;// '<S110>/MATLAB Function'
    real_T b_D_m[390];
    SL_Bus_proc_control_sonia_common_MpcGains In1_o;// '<S240>/In1'
    SL_Bus_proc_control_sonia_common_MpcGains b_varargout_2_m3;
    real_T b_A_j[338];
    SL_Bus_proc_control_std_msgs_Int16MultiArray msg_p;// '<S16>/MATLAB Function3' 
    SL_Bus_proc_control_std_msgs_UInt16MultiArray msg_h;// '<S5>/MATLAB Function3' 
    real_T B_data_h[320];
    real_T b_Bu[320];
    uint32_T c_mt[625];
    real_T Nk[273];
    real_T b_C_c[273];
    real_T CA[273];
    real_T CA_c[273];
    real_T b_C_p[273];
    real_T b_Kv[264];
    real_T b_Kv_p[264];
    real_T Cineq_data[260];
    real_T b_data[260];
    real_T varargin_1_data_a[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_e[260];
    real_T b_c_a[260];
    real_T b_c_data_a[260];
    real_T Je_data[260];
    real_T b_A_i[260];
    real_T b_Mlim[258];
    real_T Bc[258];
    real_T b_Mlim_l[258];
    real_T b_Mu1[258];
    real_T cTol[258];
    real_T dv4[258];
    real_T Bc_o[258];
    real_T b_Mlim_o[258];
    real_T b_Mu1_i[258];
    real_T cTol_f[258];
    real_T dv5[258];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T Bv[231];
    real_T b_A_iz[208];
    real_T b_Ku1[192];
    real_T b_Su1_f[192];
    real_T b_I1[192];
    real_T b_Ku1_g[192];
    real_T b_Su1_c[192];
    real_T b_I1_o[192];
    real_T b_A_l[182];
    real_T A_m[169];
    real_T dv6[169];
    real_T dv7[169];
    real_T dv8[169];
    real_T dv9[169];
    real_T b_A2[169];
    real_T b_A4[169];
    real_T b_A6[169];
    real_T y_m[169];
    real_T dv10[169];
    real_T b_A4_c[169];
    real_T a_f[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_p[169];
    real_T cBuffer_e[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T dv11[169];
    real_T A4_o[169];
    real_T dv12[169];
    real_T b_a[169];
    real_T cBuffer_h[169];
    real_T aBuffer_l[169];
    real_T cBuffer_h2[169];
    real_T cBuffer_m[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T b_A_m[169];
    real_T V[169];
    real_T b_h[169];
    real_T y_h[169];
    real_T y_c[169];
    real_T y_k[169];
    real_T y_p[169];
    real_T V_p[169];
    real_T A6_p[169];
    real_T V_a[169];
    real_T A6_j[169];
    real_T S[169];
    real_T b_a_e[169];
    real_T z[155];
    real_T rtb_Selector_o[155];
    real_T dv13[155];
    real_T b_x[155];
    real_T Dv[143];
    real_T Y_p[143];                   // '<S144>/MATLAB Function2'
    real_T X_d[143];                   // '<S144>/MATLAB Function2'
    real_T DX[143];                    // '<S144>/MATLAB Function2'
    real_T CA_b[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_a[143];
    real_T X_g[143];
    real_T X_e[143];
    real_T b_X_f[143];
    real_T b_X_h[143];
    real_T b_X_e[143];
    real_T b_A_c[140];
    real_T rseq[130];
    real_T y_j[130];                   // '<S307>/MATLAB Function1'
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_a[130];
    real_T gfX[130];
    real_T z_d[130];
    real_T b[130];
    int32_T iC[258];
    int32_T iC_a[258];
    real_T readCurrent[128];
    SL_Bus_proc_control_nav_msgs_Odometry msg_po;// '<S116>/MATLAB Function1'
    real_T Selector_p[117];            // '<S215>/Selector'
    real_T b_B_m[104];
    real_T Sum_o3[104];
    real_T b_C_n[104];
    real_T dHdx[91];
    real_T K[91];
    real_T C_l[91];
    real_T b_C_pe[91];
    real_T y_pt[91];
    real_T useq_a[88];                 // '<S176>/FixedHorizonOptimizer'
    real_T U_f[88];
    real_T b_U[88];
    real_T U_i[88];
    real_T U_o[88];
    real_T U_k[88];
    real_T b_U_i[88];
    real_T Umv[88];
    real_T b_U_o[88];
    real_T b_U_m[88];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv14[80];
    real_T dv15[80];
    real_T b_I1_c[80];
    real_T dv16[80];
    real_T gfU[80];
    real_T y_f[80];
    int8_T c_B[625];
    int8_T b_B_h[625];
    int8_T b_m[625];
    int8_T b_ad[625];
    real_T Selector1_n[72];            // '<S215>/Selector1'
    int16_T b_data_k[260];
    int16_T b_data_p[260];
    int16_T d_data[260];
    real_T b_I[64];
    SL_Bus_proc_control_sensor_msgs_Imu In1_p;// '<S72>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu In1_pd;// '<S80>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu msg_c_b;// '<S91>/MATLAB Function'
    real_T Opt[50];
    real_T Rhs[50];
    real_T Opt_c[50];
    real_T Rhs_n[50];
    real_T Sy[49];
    real_T Sy_i[49];
    real_T R[49];
    real_T dv17[48];
    real_T dv18[48];
    real_T b_A_my[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T dHdx_j[39];
    real_T K_e[39];
    real_T C_m[39];
    real_T b_C_m[39];
    real_T y_jg[39];
    real_T dCoefs[36];
    real_T b_newCoefs[36];
    real_T constValues_f[36];
    real_T constValues_a[36];
    real_T dv19[36];
    real_T A_g[36];
    real_T dv20[36];
    real_T c_x[36];
    real_T b_A_n[36];
    boolean_T icf[260];
    boolean_T icf_d[260];
    int8_T Je[260];
    boolean_T bv[258];
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_i;// '<S73>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_c;// '<S82>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL msg_b;// '<S89>/MATLAB Function' 
    real_T zopt[25];
    real_T f[25];
    real_T r[25];
    real_T z_n[25];
    real_T b_Ac[25];
    real_T tau[25];
    real_T work[25];
    real_T zopt_c[25];
    real_T f_f[25];
    real_T r_p[25];
    real_T z_p[25];
    real_T b_Ac_n[25];
    real_T varargin_1[25];
    real_T varargin_1_k[25];
    real_T tau_n[25];
    real_T work_o[25];
    real_T coefsWithFlatStart[24];
    real_T b_g[24];
    SL_Bus_proc_control_sonia_common_PingMsg BusAssignment;// '<S92>/Bus Assignment' 
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T z_c[21];
    real_T Transpose_i[18];            // '<S324>/Transpose'
    boolean_T bv1[130];
    boolean_T bv2[130];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    real_T A_c[14];
    int32_T ic[26];
    int32_T ic_m[26];
    real_T K_j[13];
    real_T z_k[13];
    real_T imz[13];
    real_T TmpSignalConversionAtMAT_lt[13];// '<S141>/Bus2Mux'
    real_T rows[13];
    real_T CA_m[13];
    real_T b_Wy[13];
    real_T b_C_pr[13];
    real_T x_dot_kk[13];
    real_T x_dot_k[13];
    real_T ic_d[13];
    real_T ic_g[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_c[13];
    real_T ic_c[13];
    real_T dv21[13];
    real_T dv22[13];
    real_T work_i[13];
    real_T tau_d[13];
    real_T work_g[13];
    real_T tau_l[13];
    real_T work_f[13];
    real_T tau_db[13];
    real_T work_j[13];
    real_T tau_i[13];
    real_T work_h[13];
    real_T ic_n[13];
    real_T dv23[13];
    real_T dv24[13];
    real_T b_x_o[13];
    real_T work_c[13];
    real_T a_bd[13];
    real_T work_e[13];
    real_T tamp[13];
    real_T coeffMat[12];
    real_T TmpSignalConversionAtSFun_p[12];// '<S116>/MATLAB Function1'
    real_T tau_dd[12];
    real_T tau_ik[12];
    real_T vseq[11];
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_b[9];// '<S312>/Subsystem1'
    real_T R_g[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_n;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_l;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_c;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_n;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_p;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_d;
    somzaGboVhDG7PNQS6E98jD_proc__T qpoptions_o;
    int8_T b_B_j[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_c[64];
    real_T U_h[8];
    real_T u_scale[8];                 // '<S148>/u_scale'
    real_T dv25[8];
    real_T dv26[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T b_Wu_d[8];
    real_T b_Wdu_c[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_p[8];
    real_T duk_p[8];
    real_T gfU_a[8];
    real_T ic_o[8];
    real_T c_j[8];
    real_T runtimedata_MVRateMin[8];
    SL_Bus_proc_control_sonia_common_AddPose b_varargout_2_p;
    SL_Bus_proc_control_geometry_msgs_Pose ZeroOrderHold;// '<S310>/Zero-Order Hold' 
    SL_Bus_proc_control_geometry_msgs_Pose In1_n;// '<S341>/In1'
    SL_Bus_proc_control_geometry_msgs_Pose msg;// '<S310>/MATLAB Function2'
    SL_Bus_proc_control_geometry_msgs_Pose b_varargout_2_o;
    SL_Bus_proc_control_geometry_msgs_Pose msg_a;// '<S115>/MATLAB Function1'
    SL_Bus_proc_control_geometry_msgs_Pose msg_i;// '<S93>/MATLAB Function'
    real_T target[7];                  // '<S9>/Merge'
    real_T z_l[7];
    real_T TmpSignalConversionAtMATLAB[7];
    real_T tau_k[7];
    real_T work_jk[7];
    real_T y_fz[7];
    real_T x_c[7];
    int32_T iv[13];
    SL_Bus_proc_control_geometry_msgs_Twist In1_od;// '<S316>/In1'
    real_T u[8];                       // '<S247>/ '
    SL_Bus_proc_control_geometry_msgs_Twist b_varargout_2_n;
    real_T TSamp[6];                   // '<S178>/TSamp'
    real_T dv27[6];
    real_T rtb_TSamp_i[6];
    real_T constValues_l[6];
    real_T constValues_i[6];
    int32_T blockFormat[12];
    int32_T blockFormat_f[12];
    char_T b_zeroDelimTopic[39];
    char_T b_zeroDelimTopic_k[37];
    int8_T b_I_f[36];
    char_T b_zeroDelimTopic_a[35];
    char_T b_zeroDelimTopic_d[34];
    char_T b_zeroDelimTopic_e[33];
    quaternion_proc_control_T expl_temp_e;
    char_T b_zeroDelimTopic_b[32];
    real_T MATLABSystem_o1[4];         // '<S10>/MATLAB System'
    real_T n[4];
    real_T y_d_a[4];                   // '<S243>/ '
    real_T qRel[4];
    real_T qRel_i[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    char_T b_zeroDelimTopic_f[31];
    char_T b_zeroDelimTopic_j[30];
    char_T b_zeroDelimTopic_o[30];
    char_T b_zeroDelimTopic_fr[29];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_oy[28];
    char_T b_zeroDelimTopic_l[27];
    char_T b_zeroDelimTopic_d4[26];
    char_T b_zeroDelimTopic_dv[26];
    boolean_T icf_l[26];
    boolean_T icf_g[26];
    SL_Bus_proc_control_geometry_msgs_Vector3 b_varargout_2_j;
    real_T Gain[3];                    // '<S308>/Gain'
    real_T Reference[130];             // '<S9>/Merge'
    real_T MATLABSystem_o2[3];         // '<S10>/MATLAB System'
    real_T c_f[3];
    real_T u2[3];                      // '<S271>/1//2'
    real_T sincos_o2[3];               // '<S40>/sincos'
    real_T u2_j[3];                    // '<S40>/1//2'
    real_T v[3];
    real_T target_j[3];
    real_T work_ho[3];
    real_T v_c[3];
    real_T c_n[3];
    real_T tmp_data_ki[3];
    char_T b_zeroDelimTopic_av[23];
    char_T b_zeroDelimTopic_fn[23];
    char_T b_zeroDelimTopic_jz[22];
    char_T b_zeroDelimTopic_kl[22];
    char_T b_zeroDelimTopic_bn[20];
    char_T b_zeroDelimTopic_h[19];
    char_T b_zeroDelimTopic_eg[17];
    real_T DataTypeConversion1[2];     // '<S326>/Data Type Conversion1'
    real_T Selector1[8];               // '<S324>/Selector1'
    real_T Selector4[7];               // '<S324>/Selector4'
    real_T DataStoreRead[13];          // '<S298>/Data Store Read'
    int16_T NtoRPM[8];                 // '<S16>/N to RPM'
    uint16_T current[8];               // '<S140>/N to A'
    uint16_T pwm[8];                   // '<S140>/N to PWM'
    uint8_T b_Su1_tmp[13];
    uint8_T rows_h[13];
    int8_T b_ipiv[13];
    int8_T ipiv[13];
    boolean_T x_k[13];
    boolean_T x_j[13];
    boolean_T x_o[13];
    boolean_T x_cs[13];
    int32_T Jx_size[3];
    int32_T tmp_data_h[3];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T MATLABSystem_o4;            // '<S10>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S326>/Data Type Conversion'
    real_T DataTypeConversion2;        // '<S326>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S324>/Matrix Concatenate'
    real_T Selector[6];                // '<S324>/Selector'
    real_T zposition;                  // '<S243>/Sum'
    real_T Sum;                        // '<S273>/Sum'
    real_T Sum_o;                      // '<S274>/Sum'
    real_T Sum_c;                      // '<S275>/Sum'
    real_T q0;                         // '<S271>/q0'
    real_T q1;                         // '<S271>/q1'
    real_T q2;                         // '<S271>/q2'
    real_T q3;                         // '<S271>/q3'
    real_T mv[8];                      // '<S138>/Merge'
    real_T MpcStatus;                  // '<S138>/Merge'
    real_T alive;                      // '<S138>/Merge'
    real_T mvmin[8];                   // '<S139>/MPC manager'
    real_T mvmax[8];                   // '<S139>/MPC manager'
    real_T ywt[13];                    // '<S139>/MPC manager'
    real_T mvwt[8];                    // '<S139>/MPC manager'
    real_T dmwwt[8];                   // '<S139>/MPC manager'
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
    real_T d_data_i;
    real_T d;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T e_data;
    real_T b_x_data;
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
    real_T t12;
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
    real_T oa;
    real_T ob;
    real_T oa_p;
    real_T oc;
    real_T od;
    real_T MATLABSystem_o3;            // '<S10>/MATLAB System'
    real_T Product8;                   // '<S62>/Product8'
    real_T Product5;                   // '<S61>/Product5'
    real_T MATLABSystem_o7;            // '<S10>/MATLAB System'
    real_T Divide_p;                   // '<S281>/Divide'
    real_T Divide1_k;                  // '<S281>/Divide1'
    real_T Divide2_c;                  // '<S281>/Divide2'
    real_T Divide3_m;                  // '<S281>/Divide3'
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T rtb_u2_f;
    real_T n_e;
    real_T rtb_Sum6_idx_2;
    real_T rtb_Sum6_idx_1;
    real_T rtb_Sum6_idx_0;
    real_T AngularRate_a_idx_1;
    real_T BodyVelocity_c_idx_2;
    real_T t57_tmp;
    real_T t57_tmp_n;
    real_T t35_tmp;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T rtb_Divide3_m_tmp;
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
    real_T b_Ku1_h;
    real_T b_Kv_f;
    real_T WuI2Jm_i;
    real_T Sum_f;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_c;
    real_T b_Ac_nn;
    real_T b_Linv_h;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T b_Ku1_k;
    real_T b_Kv_h;
    real_T WuI2Jm_b;
    real_T ywt_o;
    real_T uwt_n;
    real_T d33;
    real_T t2;
    real_T t3;
    real_T t4_m;
    real_T t5_k;
    real_T t6;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12_j;
    real_T t13;
    real_T t17;
    real_T t18;
    real_T t19;
    real_T t20;
    real_T t21_h;
    real_T t22;
    real_T t23;
    real_T t24_f;
    real_T t25_d;
    real_T t26_l;
    real_T t27_k;
    real_T t28;
    real_T t29_i;
    real_T t30_h;
    real_T t31_m;
    real_T t32;
    real_T t33_g;
    real_T t34_l;
    real_T t39_m;
    real_T t40_n;
    real_T t41_g;
    real_T t42;
    real_T t43_d;
    real_T t44_m;
    real_T t45_f;
    real_T t55;
    real_T t56;
    real_T t57_g;
    real_T t58_j;
    real_T t59_c;
    real_T t61_e;
    real_T t62_m;
    real_T t65_o;
    real_T t68;
    real_T t60_a;
    real_T t35_tmp_j;
    real_T t36_tmp;
    real_T t37_tmp;
    real_T t27_tmp_g;
    real_T t31_tmp_j;
    real_T t24_tmp_e;
    real_T t32_tmp;
    real_T t25_tmp_j;
    real_T t29_tmp_j;
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
    real_T d76;
    real_T exptj;
    real_T d6_g;
    real_T eta1;
    real_T x_om;
    real_T e;
    real_T ed2;
    real_T b_c_h;
    real_T scale_c;
    real_T absxk_a;
    real_T t_l;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_j;
    real_T umvk_i;
    real_T duk_m;
    real_T e_f;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_o;
    real_T runtimedata_OutputMin_i;
    real_T runtimedata_OutputMax_e;
    real_T exptj_j;
    real_T d6_o;
    real_T eta1_f;
    real_T b_varargin_1;
    real_T e_m;
    real_T ed2_a;
    real_T fs_h;
    real_T e_oc;
    real_T wtYerr_h;
    real_T obj_objfun_workspace_runtimed_j;
    real_T wtYerr_g;
    real_T obj_objfun_workspace_runtime_jz;
    real_T duk_l;
    real_T rMin_k;
    real_T Xnorm0_d;
    real_T cMin_n;
    real_T cVal_j;
    real_T t_a;
    real_T b_Ac_h;
    real_T t2_i;
    real_T t3_d;
    real_T t4_b;
    real_T t5_h;
    real_T t6_p;
    real_T t7_n;
    real_T t8_j;
    real_T t9_o;
    real_T t10_b;
    real_T t11_j;
    real_T t12_e;
    real_T t13_i;
    real_T t17_n;
    real_T t18_i;
    real_T t19_p;
    real_T t20_o;
    real_T t21_m;
    real_T t22_o;
    real_T t23_g;
    real_T t24_e;
    real_T t25_i;
    real_T t26_g;
    real_T t27_g;
    real_T t28_g;
    real_T t29_g;
    real_T t30_c;
    real_T t31_k;
    real_T t32_d;
    real_T t33_k;
    real_T t34_p;
    real_T t39_p;
    real_T t40_m;
    real_T t41_k;
    real_T t42_a;
    real_T t43_f;
    real_T t44_c;
    real_T t45_j;
    real_T t55_k;
    real_T t56_h;
    real_T t57_d;
    real_T t58_j1;
    real_T t59_n;
    real_T t61_j;
    real_T t62_l;
    real_T t65_p;
    real_T t68_p;
    real_T t35_l;
    real_T t36;
    real_T t37;
    real_T t27_tmp_l;
    real_T t31_tmp_h;
    real_T t24_tmp_c;
    real_T t32_tmp_g;
    real_T t25_tmp_e;
    real_T t29_tmp_n;
    real_T c_fn;
    real_T tst;
    real_T ab;
    real_T ba;
    real_T aa;
    real_T bb;
    real_T h12;
    real_T sn;
    real_T tst_tmp;
    real_T tst_tmp_tmp;
    real_T temp_n;
    real_T p;
    real_T bcmax;
    real_T bcmis;
    real_T scale_e;
    real_T z_b;
    real_T a_a;
    real_T s;
    real_T atmp_i;
    real_T temp_nq;
    real_T c_fx;
    real_T x_i;
    real_T s_k;
    real_T atmp_b;
    real_T temp_d;
    real_T s_h;
    real_T atmp_n;
    real_T temp_f;
    real_T s_a;
    real_T atmp_m;
    real_T temp_g;
    real_T d_n;
    real_T s_c;
    real_T d_d;
    real_T s_ky;
    real_T b_r;
    real_T t8_c;
    real_T t9_j;
    real_T t11_m;
    real_T t12_i;
    real_T t13_b;
    real_T t14;
    real_T t15_o;
    real_T t16_g;
    real_T t25_e;
    real_T t29_in;
    real_T t31_e;
    real_T t50;
    real_T t53;
    real_T t54;
    real_T t17_i;
    real_T t18_m;
    real_T t19_d;
    real_T t57_j;
    real_T t64;
    real_T t65_pe;
    real_T t68_b;
    real_T t69_p;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp;
    real_T out1_tmp_n;
    real_T out1_tmp_c;
    real_T out1_tmp_nh;
    real_T out1_tmp_d;
    real_T out1_tmp_i;
    real_T out1_tmp_no;
    real_T out1_tmp_b;
    real_T out1_tmp_bt;
    real_T s_j;
    real_T atmp_n0;
    real_T temp_fa;
    real_T xnorm;
    real_T scale_eu;
    real_T absxk_i;
    real_T t_a0;
    real_T xnorm_f;
    real_T b_alpha1_tmp;
    real_T scale_k;
    real_T absxk_c;
    real_T t_j;
    real_T scale_l;
    real_T absxk_ai;
    real_T t_i;
    real_T normH;
    real_T s_o;
    real_T ssq;
    real_T c_b;
    real_T s_an;
    real_T atmp_a;
    real_T tau_idx_0;
    real_T scale_i;
    real_T absxk_iz;
    real_T t_lg;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T rho;
    real_T qpfvalLinearExcess;
    real_T qpfvalQuadExcess;
    real_T y_o;
    real_T maxConstr_new;
    real_T normDelta;
    real_T s_p;
    real_T temp_o;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T c_c;
    real_T b_atmp;
    real_T xnorm_o;
    real_T a_o;
    real_T scale_h;
    real_T absxk_ih;
    real_T t_g;
    real_T beta1_c;
    real_T alpha1_tmp;
    real_T tst_o;
    real_T htmp1;
    real_T ab_g;
    real_T ba_o;
    real_T aa_g;
    real_T h12_a;
    real_T a__4;
    real_T tst_tmp_g;
    real_T tst_tmp_tmp_b;
    real_T temp_k;
    real_T p_c;
    real_T bcmax_j;
    real_T bcmis_a;
    real_T scale_d;
    real_T z_cx;
    real_T atmp_d;
    real_T oldDirIdx;
    real_T constrViolation;
    real_T tol;
    real_T qtb;
    real_T smax;
    real_T s_a2;
    real_T temp_b;
    real_T t8_g;
    real_T t9_f;
    real_T t10_c;
    real_T t11_p;
    real_T t12_a;
    real_T t13_n;
    real_T t15_h;
    real_T t20_m;
    real_T t33_f;
    real_T t37_b;
    real_T t39_e;
    real_T t63_n;
    real_T t67;
    real_T t68_p4;
    real_T t16_i;
    real_T t17_j;
    real_T t18_l;
    real_T t19_c;
    real_T t21_g;
    real_T t22_c;
    real_T t23_l;
    real_T t71;
    real_T t80;
    real_T t81;
    real_T t84;
    real_T t45_e;
    real_T t55_d;
    real_T t65_m;
    real_T t86;
    real_T t87;
    real_T t56_f;
    real_T t85;
    real_T out1_tmp_nl;
    real_T out1_tmp_o;
    real_T out1_tmp_e;
    real_T out1_tmp_m;
    real_T out1_tmp_ch;
    real_T out1_tmp_g;
    real_T out1_tmp_bn;
    real_T out1_tmp_p;
    real_T out1_tmp_p2;
    real_T absx;
    real_T z_a;
    real_T s_f;
    real_T R_gr;
    real_T d77;
    real_T d78;
    real_T t8_b;
    real_T t9_k;
    real_T t10_k;
    real_T t11_b;
    real_T t12_ix;
    real_T t13_nj;
    real_T t15_hx;
    real_T t20_n;
    real_T t33_m;
    real_T t37_g;
    real_T t39_j;
    real_T t63_f;
    real_T t67_n;
    real_T t68_g;
    real_T t16_d;
    real_T t17_c;
    real_T t18_my;
    real_T t19_dk;
    real_T t21_n;
    real_T t22_b;
    real_T t23_p;
    real_T t71_k;
    real_T t80_c;
    real_T t81_n;
    real_T t84_n;
    real_T t45_c;
    real_T t55_dk;
    real_T t65_n;
    real_T t86_g;
    real_T t87_l;
    real_T t56_g;
    real_T t85_p;
    real_T out1_tmp_k;
    real_T out1_tmp_l;
    real_T out1_tmp_bf;
    real_T out1_tmp_cx;
    real_T out1_tmp_f;
    real_T out1_tmp_oo;
    real_T out1_tmp_dd;
    real_T out1_tmp_ld;
    real_T out1_tmp_ls;
    real_T absx_d;
    real_T z_ku;
    real_T s_fo;
    real_T R_p;
    real_T smax_k;
    real_T s_k4;
    real_T smax_i;
    real_T s_e;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T c_ft;
    real_T y_kx;
    real_T aSinInput;
    real_T e_data_n;
    real_T b_x_data_i;
    real_T y_idx_0;
    real_T y_idx_1;
    real_T y_idx_3;
    real_T y_idx_2;
    real_T c_tmp;
    real_T c_tmp_i;
    real_T c_tmp_o;
    real_T c_idx_0;
    real_T t8_d;
    real_T t9_i;
    real_T t11_g;
    real_T t12_c;
    real_T t13_e;
    real_T t14_a;
    real_T t15_hq;
    real_T t16_e;
    real_T t25_dw;
    real_T t29_g5;
    real_T t31_ev;
    real_T t50_e;
    real_T t53_g;
    real_T t54_g;
    real_T t17_d;
    real_T t18_n;
    real_T t19_p2;
    real_T t57_b;
    real_T t64_i;
    real_T t65_b;
    real_T t68_j;
    real_T t69_g;
    real_T t70_n;
    real_T t12_tmp_p;
    real_T t13_tmp_f;
    real_T t14_tmp_f;
    real_T t15_tmp_a;
    real_T out1_tmp_g3;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T out1_tmp_ef;
    real_T out1_tmp_ey;
    real_T out1_tmp_dl;
    real_T out1_tmp_j;
    real_T out1_tmp_nx;
    real_T t8_ju;
    real_T t9_p;
    real_T t11_a;
    real_T t12_d;
    real_T t13_p;
    real_T t14_d;
    real_T t15_p;
    real_T t16_f;
    real_T t25_g;
    real_T t29_d;
    real_T t31_h;
    real_T t50_i;
    real_T t53_m;
    real_T t54_c;
    real_T t17_l;
    real_T t18_p;
    real_T t19_i;
    real_T t57_b3;
    real_T t64_g;
    real_T t65_oq;
    real_T t68_b1;
    real_T t69_e;
    real_T t70_e;
    real_T t12_tmp_l;
    real_T t13_tmp_c;
    real_T t14_tmp_e;
    real_T t15_tmp_d;
    real_T out1_tmp_oe;
    real_T dp_l;
    real_T theta0_h;
    real_T b_q_c;
    real_T n_l;
    real_T oa_c;
    real_T ob_c;
    real_T oc_a;
    real_T od_i;
    real_T assign_temp_a_data;
    real_T assign_temp_b_data;
    real_T assign_temp_c_data_l;
    real_T assign_temp_d_data_i;
    real_T oa_tmp;
    real_T ob_tmp;
    real_T od_tmp;
    real_T dp_a;
    real_T theta0_i;
    real_T b_q_c_c;
    real_T n_m;
    real_T oa_n;
    real_T ob_ch;
    real_T oc_n;
    real_T od_h;
    real_T assign_temp_a_data_i;
    real_T assign_temp_b_data_e;
    real_T assign_temp_c_data_p;
    real_T assign_temp_d_data_k;
    real_T oa_tmp_i;
    real_T ob_tmp_n;
    real_T od_tmp_o;
    real_T optimRelativeFactor_l;
    real_T nlpComplErrorTmp;
    real_T tol_p;
    real_T d79;
    real_T c_br;
    real_T y_a;
    real_T y_b;
    real_T y_c_f;
    real_T y_d_i;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T z_data;
    real_T in2_data;
    real_T denomTol;
    real_T phaseOneCorrectionP;
    real_T pk_corrected;
    real_T ratio;
    real_T c_ci;
    real_T c_g;
    real_T c_c_i;
    real_T b_s;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_b;
    real_T ads;
    real_T bds;
    real_T ssq_n;
    real_T c_p;
    real_T i;
    real_T alpha1;
    real_T y_oo;
    real_T temp_by;
    real_T c_o;
    real_T c_cm;
    real_T c_jc;
    real_T tol_e;
    real_T temp_p;
    real_T tol_n;
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    real_T delta_tmp;
    real_T delta_tmp_o;
    real_T delta_d;
    real_T expa_g;
    real_T sinchdelta_i;
    real_T delta_tmp_i;
    real_T delta_tmp_c;
    real_T xnorm_b;
    real_T a_g;
    real_T scale_df;
    real_T absxk_f;
    real_T t_j1;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_e;
    real_T temp_pc;
    real_T c_d;
    real_T c_fm;
    real_T d80;
    real_T c_n5;
    real_T temp_o5;
    real_T c_du;
    real_T scale_lm;
    real_T absxk_fu;
    real_T t_jf;
    real_T d81;
    real_T d82;
    real_T c_ge;
    real_T c_l;
    real_T c_k;
    real_T scale_p;
    real_T absxk_b;
    real_T t_i3;
    real_T scale_pm;
    real_T absxk_l;
    real_T t_e;
    real_T scale_es;
    real_T absxk_p;
    real_T t_jg;
    real_T c_gy;
    real_T scale_le;
    real_T absxk_j;
    real_T t_p;
    real_T c_d0;
    real_T scale_kh;
    real_T absxk_m;
    real_T t_f;
    real_T c_m;
    real_T scale_n;
    real_T absxk_mi;
    real_T t_b;
    real_T temp_c;
    real_T c_gw;
    real_T c_ck;
    real_T scale_iz;
    real_T absxk_k;
    real_T t_go;
    real_T c_pd;
    real_T scale_f;
    real_T absxk_mo;
    real_T t_m;
    real_T lbLambda;
    real_T ubLambda;
    real_T temp_tmp;
    real_T temp_tmp_l;
    real_T temp_tmp_j;
    real_T temp_tmp_m;
    real_T temp_tmp_j4;
    real_T temp_tmp_i;
    real_T temp_a;
    real_T smax_h;
    real_T s_d;
    real_T temp_tmp_i2;
    real_T temp_tmp_h;
    real_T smax_d;
    real_T s_l;
    real_T scale_f3;
    real_T absxk_lt;
    real_T t_l3;
    real_T temp_f4;
    real_T W;
    real_T sr;
    real_T si;
    real_T scale_g;
    real_T absxk_g;
    real_T xloc;
    real_T in1_data;
    real_T d83;
    real_T d84;
    real_T constrViolationEq_a;
    real_T constrViolationIneq_d;
    real_T b_Hinv;
    real_T temp_bc;
    real_T allFinite_tmp;
    real_T s_dg;
    real_T s_fv;
    real_T allFinite_tmp_a;
    real_T x_m;
    real_T t_ie;
    real_T t_ir;
    SL_Bus_proc_control_std_msgs_UInt8 In1_i2;// '<S337>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_e;// '<S74>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_om;// '<S81>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_f1;// '<S340>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_cx;// '<S336>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_k[8];
    boolean_T umin_incr_flag_a[8];
    boolean_T bv3[8];
    uint32_T b_u[2];
    int32_T k_size[2];
    int32_T assign_temp_b_size[2];
    int32_T assign_temp_c_size[2];
    int32_T assign_temp_d_size[2];
    int32_T Cineq_size[2];
    int32_T JacCineqTrans_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T a__4_size[2];
    int32_T varargin_1_size_m[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_ce[2];
    int32_T tmp_size[2];
    int32_T idx[2];
    int32_T tmp_size_b[2];
    int32_T assign_temp_a_size[2];
    int32_T assign_temp_b_size_k[2];
    int32_T assign_temp_c_size_l[2];
    int32_T assign_temp_d_size_n[2];
    int32_T assign_temp_a_size_p[2];
    int32_T assign_temp_b_size_f[2];
    int32_T assign_temp_c_size_k[2];
    int32_T assign_temp_d_size_e[2];
    int32_T vscale_size[2];
    int32_T z_size[2];
    int8_T b_ipiv_n[6];
    int8_T ipiv_o[6];
    boolean_T b_ad2[4];
    int16_T Jx_b[2];
    int16_T varargin_2[2];
    int16_T Je_b[2];
    real32_T rtb_Merge4_Data;
    int32_T idx_m;
    int32_T ibmat;
    int32_T k_data;
    int32_T Ns;
    int32_T i_m;
    int32_T idx_k;
    int32_T idx_mc;
    int32_T idx_h;
    int32_T idx_i;
    int32_T idx_c;
    int32_T idx_n;
    int32_T idx_il;
    int32_T idx_o;
    int32_T K_tmp;
    int32_T b_D_tmp;
    int32_T d_size;
    int32_T e_size;
    int32_T b_x_size;
    int32_T kidx;
    int32_T j2;
    int32_T i1;
    int32_T i_h;
    int32_T i_p;
    int32_T CA_tmp;
    int32_T Sum_tmp;
    int32_T b_Linv_tmp;
    int32_T nA;
    int32_T tmp;
    int32_T iSave;
    int32_T i_i;
    int32_T i_g;
    int32_T U_tmp;
    int32_T b_i;
    int32_T d_i;
    int32_T c_j_c;
    int32_T g_i;
    int32_T iC_g;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_b;
    int32_T jA;
    int32_T jy;
    int32_T ix_j;
    int32_T j;
    int32_T b_ha;
    int32_T ijA;
    int32_T ii;
    int32_T i_d;
    int32_T i1_o;
    int32_T i2;
    int32_T i_k;
    int32_T I2Jm_tmp;
    int32_T i_j;
    int32_T i_de;
    int32_T i3;
    int32_T i4;
    int32_T b_C_tmp;
    int32_T b_Su1_tmp_f;
    int32_T b_k;
    int32_T i_a;
    int32_T b_k_e;
    int32_T b_k_n;
    int32_T b_k_o;
    int32_T j_d;
    int32_T b_k_c;
    int32_T eint;
    int32_T i_mw;
    int32_T i5;
    int32_T b_k_oc;
    int32_T i6;
    int32_T b_A2_tmp;
    int32_T n_b;
    int32_T nb;
    int32_T nbitson;
    int32_T n_ml;
    int32_T i7;
    int32_T i8;
    int32_T i9;
    int32_T i10;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T b_idx;
    int32_T ix_i;
    int32_T ia;
    int32_T i_ih;
    int32_T loop_ub;
    int32_T tmp_size_g;
    int32_T tmp_size_m;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_n;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_c;
    int32_T iy;
    int32_T c_jv;
    int32_T ia_e;
    int32_T b_ix;
    int32_T b_iy;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_e;
    int32_T y_size_idx_0_k;
    int32_T i_k4;
    int32_T i_id;
    int32_T wtYerr_tmp;
    int32_T sizes_idx_0;
    int32_T k_e;
    int32_T i_l;
    int32_T b_size_idx_0;
    int32_T i2_l;
    int32_T ix_l;
    int32_T a_ob;
    int32_T c_idx_col;
    int32_T b_k_i;
    int32_T sizes_idx_0_e;
    int32_T c_k_l;
    int32_T d_k;
    int32_T i_n;
    int32_T b_c_size;
    int32_T b_size_idx_0_e;
    int32_T i11;
    int32_T i12;
    int32_T loop_ub_c;
    int32_T varargin_1_size_idx_1_tmp;
    int32_T mc;
    int32_T coffset;
    int32_T boffset;
    int32_T aoffset;
    int32_T bkj;
    int32_T j_a;
    int32_T i_ms;
    int32_T b_i_c;
    int32_T i13;
    int32_T b_s_f;
    int32_T e_j;
    int32_T e_i;
    int32_T i14;
    int32_T b_s_m;
    int32_T A2_tmp;
    int32_T A4_tmp;
    int32_T n_k;
    int32_T nb_b;
    int32_T nbitson_h;
    int32_T b_n;
    int32_T i15;
    int32_T i16;
    int32_T i17;
    int32_T i18;
    int32_T i_hc;
    int32_T i_h2;
    int32_T obj_objfun_workspace_runtimed_b;
    int32_T i19;
    int32_T i_bf;
    int32_T i_dp;
    int32_T i_jd;
    int32_T k_d;
    int32_T Ak1_tmp;
    int32_T Jx_tmp;
    int32_T ia_l;
    int32_T i_jk;
    int32_T itau_b;
    int32_T iaii;
    int32_T lastv;
    int32_T lastc;
    int32_T iac;
    int32_T d_f;
    int32_T coltop_p;
    int32_T j_l;
    int32_T i_l1;
    int32_T L;
    int32_T k_i;
    int32_T m;
    int32_T nr;
    int32_T hoffset;
    int32_T its;
    int32_T bb_tmp;
    int32_T ab_tmp;
    int32_T ab_tmp_o;
    int32_T b_b;
    int32_T coffset_i;
    int32_T aoffset_g;
    int32_T j_p;
    int32_T ii_h;
    int32_T knt_d;
    int32_T ia_f;
    int32_T jA_f;
    int32_T jy_c;
    int32_T ix_d;
    int32_T j_c;
    int32_T k_b;
    int32_T b_i_p;
    int32_T idx_hh;
    int32_T coffset_e;
    int32_T aoffset_l;
    int32_T j_h;
    int32_T ii_n;
    int32_T knt_k;
    int32_T ia_b;
    int32_T jA_o;
    int32_T jy_n;
    int32_T ix_f;
    int32_T j_g;
    int32_T coffset_d;
    int32_T aoffset_d;
    int32_T j_e;
    int32_T ii_c;
    int32_T knt_a;
    int32_T ia_h;
    int32_T jA_e;
    int32_T jy_ne;
    int32_T ix_h;
    int32_T j_o;
    int32_T coffset_f;
    int32_T aoffset_k;
    int32_T j_ej;
    int32_T ii_i;
    int32_T knt_o;
    int32_T ia_j;
    int32_T jA_k;
    int32_T jy_j;
    int32_T ix_d0;
    int32_T j_gn;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T kAcol;
    int32_T ix_c5;
    int32_T iy_k;
    int32_T jA_j;
    int32_T ijA_h;
    int32_T e_k;
    int32_T jj_c;
    int32_T ix_dh;
    int32_T iy_a;
    int32_T c_ix;
    int32_T c_pu;
    int32_T ijA_f;
    int32_T b_k_h;
    int32_T b_kk;
    int32_T i_j5;
    int32_T i20;
    int32_T coffset_n;
    int32_T aoffset_o;
    int32_T j_on;
    int32_T knt_dv;
    int32_T coltop_a;
    int32_T ia_k;
    int32_T jA_c;
    int32_T jy_jy;
    int32_T ix_b;
    int32_T j_n;
    int32_T knt_dm;
    int32_T i_hf;
    int32_T i21;
    int32_T i22;
    int32_T knt_b;
    int32_T S_tmp;
    int32_T in;
    int32_T ia0;
    int32_T b_i_py;
    int32_T knt_bp;
    int32_T lastv_p;
    int32_T ix_n;
    int32_T iac_j;
    int32_T jA_b;
    int32_T i_ny;
    int32_T work_tmp;
    int32_T b_i_tmp;
    int32_T kend;
    int32_T b_index;
    int32_T ibmat_b;
    int32_T b_jcol;
    int32_T b_itilerow;
    int32_T Tries;
    int32_T j_j;
    int32_T Tries_k;
    int32_T idxAjj;
    int32_T j_dq;
    int32_T iy_d;
    int32_T d_o;
    int32_T ia_c;
    int32_T b_ix_o;
    int32_T b_iy_a;
    int32_T coffset_dq;
    int32_T aoffset_e;
    int32_T j_i;
    int32_T knt_bw;
    int32_T coltop_an;
    int32_T nVar;
    int32_T b_k_k;
    int32_T iH0;
    int32_T y_size_idx_0_m;
    int32_T nVarOrig;
    int32_T temp_j;
    int32_T mIneq_j;
    int32_T mLBOrig;
    int32_T idx_positive;
    int32_T i23;
    int32_T nVar_k;
    int32_T b_idx_k;
    int32_T y_size_idx_0_a;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr;
    int32_T nVar_tmp;
    int32_T activeSetChangeID;
    int32_T nVar_kc;
    int32_T globalActiveConstrIdx;
    int32_T idx_f;
    int32_T ix_cz;
    int32_T iyend;
    int32_T b_ix_on;
    int32_T b_iy_k;
    int32_T c_iy;
    int32_T g_p;
    int32_T ia_f4;
    int32_T loop_ub_d;
    int32_T y_size_idx_0_e;
    int32_T nVar_tmp_tmp_l;
    int32_T nVar_e;
    int32_T ldq;
    int32_T ix_hv;
    int32_T iy_g;
    int32_T jBcol;
    int32_T iAcol;
    int32_T f_p;
    int32_T g_n;
    int32_T b_ic;
    int32_T b_br;
    int32_T b_ar;
    int32_T mWConstr_tmp_tmp;
    int32_T idx_o2;
    int32_T b_idx_l;
    int32_T ix0;
    int32_T k_f;
    int32_T minmana;
    int32_T minmn;
    int32_T lda;
    int32_T ii_h5;
    int32_T mmi;
    int32_T i_d4;
    int32_T knt_m;
    int32_T b_k_iy;
    int32_T c_k_j;
    int32_T kend_p;
    int32_T k_db;
    int32_T im1n;
    int32_T in_j;
    int32_T knt_kk;
    int32_T lastc_m;
    int32_T iy_do;
    int32_T g_pz;
    int32_T b_ia_i;
    int32_T rowleft;
    int32_T jy_g;
    int32_T b_ix_e;
    int32_T i_ha;
    int32_T alpha1_tmp_g;
    int32_T i_c;
    int32_T L_a;
    int32_T k_fp;
    int32_T m_i;
    int32_T nr_c;
    int32_T hoffset_n;
    int32_T b_k_c2;
    int32_T b_j;
    int32_T ix_c4;
    int32_T h12_tmp;
    int32_T h12_tmp_i;
    int32_T b_hu;
    int32_T nVar_m;
    int32_T mConstrMax_g;
    int32_T idx_Aineq;
    int32_T idx_upper;
    int32_T idx_Partition;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T iy_o;
    int32_T iac_m;
    int32_T b_ia_e;
    int32_T idx_Aineq_tmp_tmp;
    int32_T b_ea;
    int32_T nVar_i;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_fw;
    int32_T iy_h;
    int32_T b_k_in;
    int32_T ma;
    int32_T minmana_p;
    int32_T minmn_a;
    int32_T c_j_f;
    int32_T ma_d;
    int32_T minmn_c;
    int32_T ii_j;
    int32_T nmi;
    int32_T mmi_c;
    int32_T pvt;
    int32_T j_nw;
    int32_T ix_jf;
    int32_T k_k;
    int32_T loop_ub_o;
    int32_T lastv_g;
    int32_T lastc_k;
    int32_T coltop_j;
    int32_T ia_p;
    int32_T jA_h;
    int32_T jy_nw;
    int32_T ix_bx;
    int32_T j_m;
    int32_T b_kv;
    int32_T jj_b;
    int32_T jp1j_l;
    int32_T b_j_g;
    int32_T c_g2;
    int32_T kAcol_n;
    int32_T iy_c;
    int32_T jA_eo;
    int32_T c_fb;
    int32_T jj_k;
    int32_T b_j_c;
    int32_T ix_dt;
    int32_T c_k_m;
    int32_T iy_j;
    int32_T c_ix_c;
    int32_T c_d4;
    int32_T k_p;
    int32_T nVar_a;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_ldw;
    int32_T b_nullStart;
    int32_T idx_col;
    int32_T order;
    int32_T ix_m;
    int32_T b_ix_n;
    int32_T b_ldw_tmp;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T order_k;
    int32_T b_k_p;
    int32_T LDimSizeP1_k;
    int32_T subRows;
    int32_T LD_diagOffset_g;
    int32_T FMat_offset;
    int32_T k_h;
    int32_T idx_l;
    int32_T ix_o;
    int32_T d_a;
    int32_T ia_n;
    int32_T iy_ov;
    int32_T b_ia_d;
    int32_T br;
    int32_T h_h;
    int32_T LD_diagOffset_tmp;
    int32_T k_data_h;
    int32_T trueCount;
    int32_T nx;
    int32_T k_a;
    int32_T b_this_k;
    int32_T e_size_j;
    int32_T b_x_size_d;
    int32_T h_size_idx_1;
    int32_T i24;
    int32_T i25;
    int32_T end;
    int32_T trueCount_p;
    int32_T i_dh;
    int32_T mLambda_b;
    int32_T fullRank_R;
    int32_T rankR;
    int32_T iQR_diag;
    int32_T iQR0;
    int32_T idx_oa;
    int32_T n_j;
    int32_T k_pc;
    int32_T i26;
    int32_T i_lj;
    int32_T itau_c;
    int32_T iaii_m;
    int32_T c_h;
    int32_T b_k_a;
    int32_T ix_oq;
    int32_T b_iy_i;
    int32_T b_es;
    int32_T iac_a;
    int32_T d_e;
    int32_T trueCount_d;
    int32_T b_i_l;
    int32_T nx_i;
    int32_T vscale_data_tmp;
    int32_T i27;
    int32_T stride_1_1;
    int32_T totalIneq;
    int32_T ldw;
    int32_T iyend_n;
    int32_T ix_cf;
    int32_T b_iy_i4;
    int32_T iac_d;
    int32_T d_b;
    int32_T ia_a;
    int32_T iy_b;
    int32_T ix_nt;
    int32_T b_iy_b;
    int32_T iac_p;
    int32_T d_ih;
    int32_T ia_kf;
    int32_T i_cr;
    int32_T k_n;
    int32_T idxRotGCol;
    int32_T QRk0;
    int32_T ix_bp;
    int32_T d_k_m;
    int32_T b_ix_m;
    int32_T idx_n2;
    int32_T b_idx_m;
    int32_T ix0_l;
    int32_T k_o;
    int32_T idxA1j;
    int32_T idxAjj_i;
    int32_T b_j_p;
    int32_T ix_nm;
    int32_T iy_c0;
    int32_T b_et;
    int32_T d_j;
    int32_T ia_l2;
    int32_T b_ix_j;
    int32_T b_iy_c;
    int32_T i28;
    int32_T loop_ub_b;
    int32_T tmp_size_i;
    int32_T tmp_size_k;
    int32_T vlen;
    int32_T k_l;
    int32_T LDimSizeP1_j;
    int32_T LD_diagOffset_m;
    int32_T subMatrixDim;
    int32_T k_j;
    int32_T jA_eu;
    int32_T j_dt;
    int32_T b_j4;
    int32_T ijA_k;
    int32_T mLB_o;
    int32_T mUB_n;
    int32_T mFixed_b;
    int32_T mIneq_i;
    int32_T b_k_d;
    int32_T iy_dp;
    int32_T ix_p;
    int32_T b_iy_e;
    int32_T iac_n;
    int32_T d_dz;
    int32_T ia_m;
    int32_T mLB_g;
    int32_T mUB_i;
    int32_T mFixed_k;
    int32_T mIneq_im;
    int32_T b_k_m;
    int32_T iy_jm;
    int32_T ix_a;
    int32_T b_iy_iw;
    int32_T iac_e;
    int32_T d_ik;
    int32_T ia_hv;
    int32_T mLB_m;
    int32_T mUB_a;
    int32_T mFixed_o;
    int32_T mIneq_o;
    int32_T b_k_nt;
    int32_T iy_k2;
    int32_T ix_hn;
    int32_T b_iy_d;
    int32_T iac_ae;
    int32_T d_hg;
    int32_T ia_cc;
    int32_T nFixedConstr;
    int32_T nVar_b;
    int32_T idx_ch;
    int32_T idx_col_g;
    int32_T nDepIneq;
    int32_T k_pj;
    int32_T ix_ib;
    int32_T iy_jj;
    int32_T k_c;
    int32_T nWFixed;
    int32_T idx_global;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T b_idx_local;
    int32_T c_i;
    int32_T mIneq_c;
    int32_T colOffsetATw;
    int32_T colOffsetAeq;
    int32_T c_idx;
    int32_T d_idx_row;
    int32_T b_tmp_f;
    int32_T nFixedConstr_d;
    int32_T nVar_n;
    int32_T idx_b;
    int32_T idx_col_f;
    int32_T nDepIneq_j;
    int32_T k_hc;
    int32_T idxStart;
    int32_T idxEnd;
    int32_T b_idxW;
    int32_T maxOffset_tmp;
    int32_T i29;
    int32_T i30;
    int32_T i31;
    int32_T b_tmp_h;
    int32_T j_c2;
    int32_T delta_tmp_g;
    int32_T b_j_e;
    int32_T blockFormat_e;
    int32_T knt_av;
    int32_T ix_hz;
    int32_T jy_gc;
    int32_T b_ix_a;
    int32_T ijA_g;
    int32_T b_jA;
    int32_T maxRegVar;
    int32_T d_i_o;
    int32_T iy_ak;
    int32_T iy_e;
    int32_T ix_ha;
    int32_T b_jx;
    int32_T iac_b;
    int32_T c_kq;
    int32_T ia_hq;
    int32_T lastColC;
    int32_T br_d;
    int32_T ar;
    int32_T b_cr;
    int32_T c_oh;
    int32_T b_ic_k;
    int32_T w;
    int32_T lastColC_k;
    int32_T br_o;
    int32_T ar_d;
    int32_T ia_lo;
    int32_T cr;
    int32_T c_me;
    int32_T ib;
    int32_T d_oi;
    int32_T b_ic_a;
    int32_T lastv_i;
    int32_T lastc_f;
    int32_T ix_as;
    int32_T iac_g;
    int32_T d_k1;
    int32_T ia_l3;
    int32_T coltop_e;
    int32_T idx_e;
    int32_T iy_f;
    int32_T ix_dw;
    int32_T b_bc;
    int32_T iac_o;
    int32_T d_p;
    int32_T jBcol_l;
    int32_T kAcol_d;
    int32_T j_lt;
    int32_T k_ad;
    int32_T i_nk;
    int32_T i32;
    int32_T ix_e;
    int32_T b_iy_n;
    int32_T b_hh;
    int32_T iac_ah;
    int32_T d_b5;
    int32_T ia_k5;
    int32_T jjA;
    int32_T ix_aw;
    int32_T b_km;
    int32_T i_pa;
    int32_T jA_o3;
    int32_T n_tmp;
    int32_T ix_c4h;
    int32_T b_iy_kh;
    int32_T b_hs;
    int32_T iac_bv;
    int32_T d_ez;
    int32_T ia_co;
    int32_T kend_o;
    int32_T k_ar;
    int32_T jBcol_p;
    int32_T kAcol_o;
    int32_T j_l2;
    int32_T k_fr;
    int32_T i_pn;
    int32_T jBcol_p5;
    int32_T kAcol_b;
    int32_T j_k;
    int32_T k_m;
    int32_T i_gk;
    int32_T iy_b5;
    int32_T ix_il;
    int32_T b_iy_bs;
    int32_T iac_h;
    int32_T ia_d;
    int32_T iy_f5;
    int32_T ix_dk;
    int32_T b_iy_p;
    int32_T iac_gs;
    int32_T ia_f3;
    int32_T iL0;
    int32_T c_idx_o;
    int32_T ix_f4;
    int32_T iy_o3;
    int32_T b_l;
    int32_T iac_e3;
    int32_T c_gn;
    int32_T iL0_b;
    int32_T c_idx_j;
    int32_T ix_fp;
    int32_T iy_co;
    int32_T b_f;
    int32_T iac_bn;
    int32_T c_de;
    int32_T k_jm;
    int32_T ix_oe;
    int32_T d_l;
    int32_T ia_g;
    int32_T loop_ub_m;
    int32_T k_g;
    int32_T k_an;
    int32_T kend_e;
    int32_T ix_b0;
    int32_T b_iy_ez;
    int32_T b_mz;
    int32_T iac_hz;
    int32_T ix_br;
    int32_T b_iy_dm;
    int32_T b_o;
    int32_T iac_k;
    int32_T ix_mr;
    int32_T b_iy_f;
    int32_T b_ox;
    int32_T iac_i;
    int32_T jA_ka;
    int32_T jy_k;
    int32_T ix_n1;
    int32_T j_f;
    int32_T ix_mz;
    int32_T b_iy_ia;
    int32_T b_ii;
    int32_T iac_bl;
    int32_T ix_ntz;
    int32_T b_iy_ir;
    int32_T b_nj;
    int32_T iac_m0;
    int32_T ix_pp;
    int32_T b_iy_k1;
    int32_T b_p;
    int32_T iac_eq;
    int32_T mLinIneq_k;
    int32_T iLineq0;
    int32_T k_br;
    int32_T temp_tmp_lm;
    int32_T k_j1;
    int32_T temp_tmp_jx;
    int32_T k_kz;
    int32_T temp_tmp_p;
    int32_T jA_p;
    int32_T b_j_et;
    int32_T jjA_h;
    int32_T ix_i1;
    int32_T ix_jd;
    int32_T k_a2;
    int32_T iy_jh;
    int32_T ix_g;
    int32_T b_njm;
    int32_T iac_l;
    int32_T c_e;
    int32_T ia_cg;
    int32_T k_hy;
    int32_T temp_tmp_o;
    int32_T iCol;
    int32_T iCol_old;
    int32_T b_d;
    int32_T idx_col_d;
    int32_T y_size_idx_0_j;
    int32_T y_size_idx_1;
    int32_T ix_f2;
    int32_T jA_k2;
    int32_T j_ne;
    int32_T c_nb;
    int32_T ix_ic;
    int32_T iy_e4;
    int32_T b_kj;
    int32_T iac_k3;
    int32_T c_p0;
    int32_T i_kn;
    int32_T i33;
    int32_T WM_tmp;
    int32_T ic0;
    int32_T low_i;
    int32_T i34;
    int32_T stride_0_1;
    int32_T jBcol_p1;
    int32_T j_py;
    int32_T jBcol_b;
    int32_T j_cc;
    int32_T idx_d;
    int32_T b_idx_c;
    int32_T ix0_a;
    int32_T k_ic;
    int32_T nVar_d;
    int32_T iw0;
    int32_T iEq0;
    int32_T b_idx_f;
    int32_T kidx_n;
    int32_T b_j1;
    int32_T j2_g;
    int32_T i1_of;
    int32_T jjA_m;
    int32_T ix_hl;
    int32_T j_eh;
    int32_T i_mw1;
    int32_T b_i_i;
    int32_T i35;
    int32_T ix_h4;
    int32_T iy_n;
    int32_T idx_current;
    int32_T maxRegVar_e;
    int32_T c_k_e;
    int32_T d_k_o;
    int32_T totalEq;
    int32_T iAeq0_o;
    int32_T iAw0;
    int32_T b_idx_fr;
    int32_T TYPE_tmp;
    int32_T idx_global_start_tmp_tmp;
    int32_T colOffset;
    int32_T idx_bnd_local;
    int32_T idx_mh;
    int32_T iAineq0;
    int32_T iAw0_g;
    int32_T idx_cc;
    int32_T row;
    int32_T col;
    int32_T col_end;
    int32_T j_kb;
    int32_T b_j_d;
    int32_T mAll;
    int32_T idx_cm;
    int32_T idx_kn;
    int32_T ijA_kl;
    int32_T idx_fw;
    int32_T k_gm;
    int32_T idx_k3;
    int32_T b_ii_n;
    int32_T b_index_p;
    int32_T u0;
    int32_T idxEq;
    int32_T iw0_e;
    int32_T i36;
    int32_T ia_l34;
    int32_T mIneq_a;
    int32_T idx_e4;
    int32_T ret;
    int32_T i_g4;
    int32_T exponent;
    int32_T k_fp5;
    int32_T k_ei;
    int32_T k_nu;
    int32_T k_mz;
    int32_T i37;
    int32_T idx_global_b;
    int32_T k_nh;
    int32_T i_c4;
    int32_T k_mk;
    uint32_T bpIdx;
    uint32_T r_j;
    uint32_T y_hu;
    SL_Bus_proc_control_std_msgs_Float32 b_varargout_2_c;
    SL_Bus_proc_control_std_msgs_Float32 BusAssignment_h;// '<S90>/Bus Assignment' 
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T DataTypeConversion_j;      // '<S10>/Data Type Conversion'
    boolean_T NOT;                     // '<S245>/NOT'
    boolean_T isReached;               // '<S9>/Merge'
    boolean_T isTrajDone;              // '<S9>/Merge'
    boolean_T SourceBlock_o1;          // '<S317>/SourceBlock'
    boolean_T blockOrdering_o;         // '<S295>/Correct'
    boolean_T thrustersStatus[8];      // '<S139>/MPC manager'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S312>/MATLAB System'
    MultiTrajectoryManager_proc_c_T obj_o;// '<S311>/MATLAB System'
    OpenLoopController_proc_contr_T obj_m;// '<S143>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_j;// '<S327>/Rotation Trajectory'
    mpcManager_proc_control_T obj_f;   // '<S139>/MPC manager'
    robotics_slcore_internal_bl_p_T obj_jo;// '<S329>/Polynomial Trajectory1'
    AddPose_proc_control_T obj_a;      // '<S312>/MATLAB System1'
    TrimPlant_proc_control_T obj_b;    // '<S141>/MATLAB System'
    rosCommandManager_proc_contro_T obj_mv;// '<S10>/MATLAB System'
    HydroModel_proc_control_T obj_fj;  // '<S33>/MATLAB System'
    ros_slroscpp_internal_block_P_T obj_i;// '<S321>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S126>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_g;// '<S122>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_e;// '<S118>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S113>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_p;// '<S109>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S106>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_c;// '<S103>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ab;// '<S101>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_k;// '<S98>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S96>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_d;// '<S41>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_jj;// '<S27>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_bh;// '<S335>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S334>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_h;// '<S333>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_oz;// '<S332>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S331>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S330>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S325>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S317>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_cs;// '<S315>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S238>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k4;// '<S237>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_p0;// '<S71>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S70>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_dh;// '<S69>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_l;// '<S68>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hx;// '<S79>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S78>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df1;// '<S77>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i4;// '<S76>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_n;// '<S42>/SourceBlock'
    real_T _DSTATE[8];                 // '<S247>/ '
    real_T Delay_DSTATE_e;             // '<S10>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S327>/Discrete-Time Integrator'
    real_T UnitDelay_DSTATE[4];        // '<S243>/Unit Delay'
    real_T Delay_DSTATE_i;             // '<S267>/Delay'
    real_T Delay_DSTATE_k;             // '<S140>/Delay'
    real_T Delay_DSTATE_a[8];          // '<S145>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S215>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S215>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S215>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S182>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S144>/Delay1'
    real_T UD_DSTATE[6];               // '<S178>/UD'
    real_T last_mv_DSTATE_f[8];        // '<S148>/last_mv'
    real_T Delay1_DSTATE_e[8];         // '<S141>/Delay1'
    real_T DiscreteTransferFcn1_states;// '<S17>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_k;// '<S18>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_o;// '<S19>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_i;// '<S20>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_g;// '<S21>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_h;// '<S22>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_l;// '<S23>/Discrete Transfer Fcn1'
    real_T DiscreteTransferFcn1_states_ge;// '<S24>/Discrete Transfer Fcn1'
    real_T UnitDelay_DSTATE_o[13];     // '<S1>/Unit Delay'
    real_T DiscreteTimeIntegrator_DSTATE_f[3];// '<S1>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator1_DSTATE[3];// '<S1>/Discrete-Time Integrator1' 
    real_T DiscreteTimeIntegrator2_DSTATE[4];// '<S1>/Discrete-Time Integrator2' 
    real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S1>/Discrete-Time Integrator3' 
    real_T P[169];                     // '<S294>/DataStoreMemory - P'
    real_T x[13];                      // '<S294>/DataStoreMemory - x'
    real_T Drift_NextOutput[6];        // '<S12>/ Drift'
    real_T NextOutput;                 // '<S28>/White Noise'
    real_T NextOutput_b;               // '<S29>/White Noise'
    real_T NextOutput_g;               // '<S30>/White Noise'
    real_T NextOutput_l;               // '<S31>/White Noise'
    real_T NextOutput_e;               // '<S32>/White Noise'
    int32_T clockTickCounter;          // '<S145>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S144>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S141>/Pulse Generator'
    int32_T counter[6];                // '<S12>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S140>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S140>/N to PWM'
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
    boolean_T Delay1_DSTATE_c;         // '<S312>/Delay1'
    boolean_T DelayInput1_DSTATE;      // '<S322>/Delay Input1'
    int8_T SwitchCase_ActiveSubsystem; // '<S9>/Switch Case'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S138>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S1>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S1>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S1>/Discrete-Time Integrator'
    uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S1>/Discrete-Time Integrator2'
    boolean_T icLoad;                  // '<S215>/mv_Delay'
    boolean_T icLoad_a;                // '<S215>/x_Delay'
    boolean_T icLoad_j;                // '<S215>/slack_delay'
    boolean_T Memory_PreviousInput[258];// '<S182>/Memory'
    boolean_T Memory_PreviousInput_g[258];// '<S148>/Memory'
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
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S312>/Trajectory generator'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S14>/ y devant Z haut'
                                             //    '<S14>/Constant'
                                             //    '<S243>/Constant'
                                             //    '<S143>/MATLAB System'
                                             //    '<S270>/si y devant'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S10>/MATLAB System'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S140>/N to A'
                                          //    '<S140>/N to PWM'
                                          //    '<S16>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S16>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S143>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S12>/ Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S12>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S140>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S140>/N to PWM'

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
                                 //  Referenced by: '<S178>/UD'

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
                                        //  Referenced by: '<S322>/Delay Input1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Out1_Y0;// Computed Parameter: Out1_Y0
                                                                    //  Referenced by: '<S318>/Out1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S317>/Constant'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                //  Referenced by: '<S239>/Out1'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S237>/Constant'

    SL_Bus_proc_control_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                 //  Referenced by: '<S111>/Constant'

    SL_Bus_proc_control_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                           //  Referenced by: '<S240>/Out1'

    SL_Bus_proc_control_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                  //  Referenced by: '<S238>/Constant'

    SL_Bus_proc_control_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S25>/Constant'

    SL_Bus_proc_control_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S107>/Constant'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                               //  Referenced by: '<S123>/Constant'

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

    struct_fCppgaREqjbtxAN9QqIjrB MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S139>/MPC param'

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
                                                          //  Referenced by: '<S328>/Out1'

    SL_Bus_proc_control_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                  //  Referenced by: '<S325>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                //  Referenced by: '<S104>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_ms;// Computed Parameter: Constant_Value_ms
                                                                //  Referenced by: '<S119>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                                //  Referenced by: '<S319>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S341>/Out1'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                               //  Referenced by: '<S335>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurments_Y0;// Computed Parameter: DVLMeasurments_Y0
                                                       //  Referenced by: '<S242>/DVL Measurments'

    SL_Bus_proc_control_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                          //  Referenced by: '<S316>/Out1'

    SL_Bus_proc_control_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                 //  Referenced by: '<S315>/Constant'

    SL_Bus_proc_control_geometry_msgs_Vector3 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                           //  Referenced by: '<S44>/Out1'

    SL_Bus_proc_control_geometry_msgs_Vector3 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                  //  Referenced by: '<S42>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                          //  Referenced by: '<S117>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                   //  Referenced by: '<S336>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                           //  Referenced by: '<S330>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                   //  Referenced by: '<S338>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                           //  Referenced by: '<S332>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_os;// Computed Parameter: Out1_Y0_os
                                                    //  Referenced by: '<S339>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                          //  Referenced by: '<S333>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                   //  Referenced by: '<S340>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_pt;// Computed Parameter: Constant_Value_pt
                                                           //  Referenced by: '<S334>/Constant'

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
                                                     //  Referenced by: '<S337>/Out1'

    SL_Bus_proc_control_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                           //  Referenced by: '<S331>/Constant'

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
                                          //  Referenced by: '<S110>/Constant'

    real_T Constant1_Value_d;          // Expression: MPC.nu
                                          //  Referenced by: '<S110>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_pz;          // Expression: 1
                                          //  Referenced by: '<S133>/Constant'

    real_T Constant_Value_pm;          // Expression: 1
                                          //  Referenced by: '<S134>/Constant'

    real_T Gain_Gain_ei;               // Expression: 180/pi
                                          //  Referenced by: '<S129>/Gain'

    real_T Gain_Gain_i;                // Expression: 180/pi
                                          //  Referenced by: '<S128>/Gain'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S146>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S146>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S146>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S148>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S146>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S148>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S148>/last_mv'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S141>/Delay1'

    real_T Constant_Value_e3[6];       // Expression: zeros(1,6)
                                          //  Referenced by: '<S141>/Constant'

    real_T Constant1_Value_mt[2];      // Expression: zeros(1,2)
                                          //  Referenced by: '<S141>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S148>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S146>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S146>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S146>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S148>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S148>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S146>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S148>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S146>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S146>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S148>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S146>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S148>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S141>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S141>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S141>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S141>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S143>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S143>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S143>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S178>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S144>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S182>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S182>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S180>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S180>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S180>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S182>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S180>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S182>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S182>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S182>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S180>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S182>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S180>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S144>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(MPC.Xi.',11,1)
                                           //  Referenced by: '<S144>/Delay2'

    real_T Constant3_Value;            // Expression: MPC.Ts
                                          //  Referenced by: '<S144>/Constant3'

    real_T Constant1_Value_k;          // Expression: MPC.dts
                                          //  Referenced by: '<S144>/Constant1'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S182>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S182>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S182>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S182>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S145>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S213>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S213>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S213>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S213>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S213>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S213>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S213>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S213>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S213>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S213>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S215>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S215>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S215>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S213>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S142>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S142>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S142>/Constant2'

    real_T Constant_Value_hf;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant1_Value_f;          // Expression: 0
                                          //  Referenced by: '<S7>/Constant1'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S138>/Merge'

    real_T Merge_2_InitialOutput;   // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S138>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S138>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S140>/Delay'

    real_T PSUsafe_UpperSat;           // Expression: MPC.tmax
                                          //  Referenced by: '<S140>/PSU safe'

    real_T PSUsafe_LowerSat;           // Expression: MPC.tmin
                                          //  Referenced by: '<S140>/PSU safe'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S270>/Quat'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S271>/1//2'

    real_T Constant1_Value_a;// Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S242>/Constant1'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S267>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S267>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S273>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S273>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain1'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain2'

    real_T Constant_Value_j;           // Expression: 0.5
                                          //  Referenced by: '<S274>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S274>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S274>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S274>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S275>/Constant'

    real_T Gain_Gain_nh;               // Expression: 2
                                          //  Referenced by: '<S275>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S275>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S275>/Gain2'

    real_T DepthMeasurments_Y0;       // Computed Parameter: DepthMeasurments_Y0
                                         //  Referenced by: '<S243>/Depth Measurments'

    real_T UnitDelay_InitialCondition_g[4];// Expression: MPC.Xi(4:7)
                                              //  Referenced by: '<S243>/Unit Delay'

    real_T Constant_Value_ay;          // Expression: 0.5
                                          //  Referenced by: '<S288>/Constant'

    real_T Gain_Gain_bk;               // Expression: 2
                                          //  Referenced by: '<S288>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S288>/Gain1'

    real_T Gain2_Gain_dh;              // Expression: 2
                                          //  Referenced by: '<S288>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S246>/xhat'

    real_T Constant_Value_lx;          // Expression: 1
                                          //  Referenced by: '<S246>/Constant'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S294>/Q'

    real_T R3_Value;                   // Expression: p.R{3}
                                          //  Referenced by: '<S294>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S294>/MeasurementFcn3Inputs'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S294>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S294>/MeasurementFcn2Inputs'

    real_T R1_Value[49];               // Expression: p.R{1}
                                          //  Referenced by: '<S294>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S294>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S294>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S294>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S307>/Constant7'

    real_T Constant3_Value_f;          // Expression: MPC.p
                                          //  Referenced by: '<S307>/Constant3'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S312>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S312>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S312>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S324>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S324>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S324>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S324>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S324>/Constant1'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S326>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S329>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S327>/Constant'

    real_T DiscreteTimeIntegrator_gainva_e;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_e
                             //  Referenced by: '<S327>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S327>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S312>/Constant'

    real_T Constant_Value_m5[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S305>/Constant'

    real_T Constant3_Value_o;          // Expression: MPC.p
                                          //  Referenced by: '<S305>/Constant3'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S10>/Delay'

    real_T Constant_Value_de;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S247>/ '

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S308>/Gain'

    real_T Merge_1_InitialOutput_l;
                                  // Computed Parameter: Merge_1_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S9>/Merge'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S176>/FixedHorizonOptimizer'

    int32_T FixedHorizonOptimizer_Ndis_d;// Expression: Ndis
                                            //  Referenced by: '<S210>/FixedHorizonOptimizer'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S5>/mv'

    uint16_T Delay_InitialCondition_jd[8];
                                // Computed Parameter: Delay_InitialCondition_jd
                                   //  Referenced by: '<S7>/Delay'

    boolean_T hydronew_Y0;             // Computed Parameter: hydronew_Y0
                                          //  Referenced by: '<S66>/hydro new'

    boolean_T hydronew_Y0_a;           // Computed Parameter: hydronew_Y0_a
                                          //  Referenced by: '<S65>/hydro new'

    boolean_T Memory_InitialCondition[258];// Expression: iA
                                              //  Referenced by: '<S148>/Memory'

    boolean_T Memory_InitialCondition_p[258];// Expression: iA
                                                //  Referenced by: '<S182>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S295>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S296>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_i;    // Computed Parameter: yBlockOrdering_Y0_i
                                         //  Referenced by: '<S297>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S294>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S294>/Enable1'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S294>/Enable3'

    boolean_T Constant1_Value_ds;      // Expression: false
                                          //  Referenced by: '<S307>/Constant1'

    boolean_T Constant2_Value_l;       // Expression: false
                                          //  Referenced by: '<S307>/Constant2'

    boolean_T Constant_Value_hm;       // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S323>/Constant'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S312>/Delay1'

    boolean_T Constant2_Value_i;       // Expression: false
                                          //  Referenced by: '<S312>/Constant2'

    boolean_T Constant5_Value;         // Expression: false
                                          //  Referenced by: '<S305>/Constant5'

    boolean_T Constant4_Value;         // Expression: false
                                          //  Referenced by: '<S305>/Constant4'

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

  // private member function(s) for subsystem '<S241>/ '
  static void proc_control_u(real_T rtu_u, real_T rtu_u_b, real_T rtu_u_l,
    real_T rtu_u_p, real_T rty_y[4]);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_xnrm2_KuvT0oF6(int32_T n, const real_T x[140], int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_xgemv_AUXWxjLv(int32_T m, int32_T n, const real_T A[140],
    int32_T ia0, const real_T x[140], int32_T ix0, real_T y[7]);
  void proc_control_xgerc_aQMWzodX(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[7], real_T A[140], int32_T ia0);
  void proc_control_qrFactor_MMa7wW5h(const real_T A[91], const real_T S[169],
    const real_T Ns[49], real_T b_S[49]);
  void proc_control_trisolve_Ewqm83ue(const real_T A[49], real_T B[91]);
  void proc_control_trisolve_kmp7BqBh(const real_T A[49], real_T B[91]);
  real_T proc_control_xnrm2_H2991AvN(int32_T n, const real_T x[260], int32_T ix0);
  void proc_control_xgemv_3az3hqLU(int32_T m, int32_T n, const real_T A[260],
    int32_T ia0, const real_T x[260], int32_T ix0, real_T y[13]);
  void proc_control_xgerc_ZLmTruVs(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[260], int32_T ia0);
  void proc_control_qrFactor_1jDj6Vzn(const real_T A[169], real_T S[169], const
    real_T Ns[91]);
  real_T proc_control_xnrm2_kj8IiC0H(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_xgemv_hztnEYXM(int32_T m, int32_T n, const real_T A[48],
    int32_T ia0, const real_T x[48], int32_T ix0, real_T y[3]);
  void proc_control_xgerc_6YFUaNlM(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[3], real_T A[48], int32_T ia0);
  void proc_control_qrFactor_qGSgSIIm(const real_T A[39], const real_T S[169],
    const real_T Ns[9], real_T b_S[9]);
  void proc_control_trisolve_nzh2XTxC(const real_T A[9], real_T B[39]);
  void proc_control_trisolve_QLyTZPzT(const real_T A[9], real_T B[39]);
  real_T proc_control_xnrm2_ZWAmJ4ix(int32_T n, const real_T x[208], int32_T ix0);
  void proc_control_xgemv_F8pkuUXW(int32_T m, int32_T n, const real_T A[208],
    int32_T ia0, const real_T x[208], int32_T ix0, real_T y[13]);
  void proc_control_xgerc_4X4H4v2V(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[208], int32_T ia0);
  void proc_control_qrFactor_3bJrEoRT(const real_T A[169], real_T S[169], const
    real_T Ns[39]);
  real_T proc_control_xnrm2_bRDMjHYG(int32_T n, const real_T x[14], int32_T ix0);
  void EKFCorrectorAdditive_g_6pDXID_k(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  real_T proc_control_xnrm2_Cmmg4Lta(int32_T n, const real_T x[182], int32_T ix0);
  void proc_control_xgemv_wB0hPhuq(int32_T m, int32_T n, const real_T A[182],
    int32_T ia0, const real_T x[182], int32_T ix0, real_T y[13]);
  void proc_control_xgerc_ay1ZSOWu(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[182], int32_T ia0);
  void proc_control_qrFactor_TeAoo2Mt(const real_T A[169], real_T S[169], const
    real_T Ns[13]);
  real_T proc_control_rt_powd_snf(real_T u0, real_T u1);
  real_T proc_control_erf_lY1OuNdP(real_T x);
  void AUV8QuatPerturbedSimFc_Tstvmp_b(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  real_T proc_control_xnrm2_UCgE6veV(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_xgemv_5ht9hnKF(int32_T m, int32_T n, const real_T A[338],
    int32_T ia0, const real_T x[338], int32_T ix0, real_T y[13]);
  void proc_control_xgerc_XyRtLi2r(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y[13], real_T A[338], int32_T ia0);
  void proc_control_qrFactor_O58Jhapw(const real_T A[169], real_T S[169], const
    real_T Ns[169]);
  real_T proc_control_rt_atan2d_snf(real_T u0, real_T u1);
  void MultiTrajectoryManager_resetImp(MultiTrajectoryManager_proc_c_T *b_this);
  void proc_control_binary_expand_op_p(real_T in1[3], const int32_T in2_data[],
    const real_T in3_data[], const int32_T *in3_size, const real_T in4_data[],
    const int32_T *in4_size);
  real_T proc_control_norm_p(const real_T x[3]);
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
  void proc_cont_binary_expand_op_pr35(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void proc_contr_binary_expand_op_pr3(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void proc_contro_binary_expand_op_pr(real_T in1_data[], int32_T in1_size[2],
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
  int32_T proc_cont_combineVectorElements(const boolean_T x[3]);
  void proc_control_eml_find(const boolean_T x[3], int32_T i_data[], int32_T
    *i_size);
  real_T proc_control_sum(const real_T x_data[], const int32_T *x_size);
  void proc_co_mpcManager_getMpcWeigth(const mpcManager_proc_control_T *b_this,
    uint8_T mode, real_T OV[13], real_T MV[8], real_T MVR[8]);
  real_T proc_control_norm(const real_T x[169]);
  void proc_control_mpower(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2(real_T x);
  void proc_control_padeApproximation(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void proc_control_recomputeBlockDiag(const real_T A[169], const real_T F[169],
    const int32_T blockFormat[12], real_T b_F[169]);
  real_T proc_control_xnrm2(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y[13], const real_T A[169], int32_T ia0, real_T b_A[169]);
  void proc_control_xgehrd(const real_T a[169], real_T b_a[169], real_T tau[12]);
  real_T proc_control_xnrm2_p(int32_T n, const real_T x[3]);
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
  void proc_control_WtMult_eD9sgCWi(const real_T W[8], const real_T M[1920],
    int32_T nwt, real_T WM[1920]);
  int32_T proc_control_xpotrf_byFguX1H(real_T b_A[625]);
  real_T proc_control_minimum_0mT3wHDe(const real_T x[25]);
  void proc__mpc_checkhessian_4gOqb0AF(real_T b_H[625], real_T L[625], real_T
    *BadH);
  void proc_control_trisolve_TPUoCQlv(const real_T b_A[625], real_T b_B[625]);
  void proc_con_Unconstrained_dIUZCfbX(const real_T b_Hinv[625], const real_T f
    [25], real_T x[25], int32_T n);
  real_T proc_control_norm_vTuG6Asx(const real_T x[25]);
  void proc_control_abs_hS9HYvNd(const real_T x[25], real_T y[25]);
  real_T proc_control_maximum_bZyTUL5K(const real_T x[25]);
  void proc_control_abs_4F52yAua(const real_T x[258], real_T y[258]);
  void proc_control_maximum2_I2IGaf8g(const real_T x[258], real_T y, real_T ex
    [258]);
  real_T proc_control_xnrm2_39t0XtQD(int32_T n, const real_T x[625], int32_T ix0);
  void proc_control_xgemv_Frijm775(int32_T b_m, int32_T n, const real_T b_A[625],
    int32_T ia0, const real_T x[625], int32_T ix0, real_T y[25]);
  void proc_control_xgerc_Tm5l2D4g(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[25], real_T b_A[625], int32_T ia0);
  void proc_control_qr_LA1ZpyyA(const real_T b_A[625], real_T Q[625], real_T R
    [625]);
  void proc_contro_KWIKfactor_Qr1xccKe(const real_T b_Ac[6450], const int32_T
    iC[258], int32_T nA, const real_T b_Linv[625], real_T b_D[625], real_T b_H
    [625], int32_T n, real_T RLinv[625], real_T *Status);
  real_T proc_control_mtimes_oGNIPo7k(const real_T b_A[25], const real_T b_B[25]);
  real_T proc_control_eps_AH2epkhQ(void);
  void proc_co_DropConstraint_MueFKkTj(int32_T kDrop, boolean_T iA[258], int32_T
    *nA, int32_T iC[258]);
  void proc_control_qpkwik(const real_T b_Linv[625], const real_T b_Hinv[625],
    const real_T f[25], const real_T b_Ac[6450], const real_T b[258], boolean_T
    iA[258], int32_T maxiter, real_T FeasTol, real_T x[25], real_T lambda[258],
    int32_T *status);
  void proc_control_mpcblock_optimizer(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[258], const real_T b_Mlim[258],
    real_T b_Mx[5418], real_T b_Mu1[2064], real_T b_Mv[2838], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[625], real_T b_Ac[6450],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[1920], const real_T b_I1[640], const real_T b_A[441], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[273], const real_T
    Dv[143], const int32_T b_Mrows[258], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[258]);
  boolean_T proc_control_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_isequal_p(const real_T varargin_1[6], const real_T
    varargin_2[6]);
  boolean_T proc_control_anyNonFinite(const real_T x[169]);
  real_T proc_control_norm_GdpreYkZ(const real_T x[169]);
  void proc_control_mpower_k(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2_blLsPIAE(real_T x);
  void proc_padeApproximation_NWSCAcaS(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void pro_recomputeBlockDiag_qmxFvKVu(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_xnrm2_vEpa8zuo(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xzlarf_2N2eIztg(int32_T m, int32_T n, int32_T iv0, real_T
    tau, real_T C[169], int32_T ic0, real_T work[13]);
  real_T proc_control_xnrm2_yAJpxfog(int32_T n, const real_T x[3]);
  real_T proc_control_xzlarfg_RGPUCK3Y(int32_T n, real_T *alpha1, real_T x[3]);
  void proc_control_xdlanv2_W63kZdPv(real_T *a, real_T *b, real_T *c, real_T *d,
    real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T
    *sn);
  void proc_control_xrot_3pYuG0oG(int32_T n, real_T x[169], int32_T ix0, int32_T
    iy0, real_T c, real_T s);
  void proc_control_xrot_yqSjxpUW(real_T x[169], int32_T ix0, int32_T iy0,
    real_T c, real_T s);
  int32_T proc_contro_eml_dlahqr_HmsDpVfQ(real_T h[169], real_T z[169]);
  void proc_control_schur_o(const real_T A[169], real_T V[169], real_T T[169]);
  void proc_control_expm_m(real_T A[169], real_T F[169]);
  void proc_control_mldivide_Z0xqFpTr(const real_T A[36], const real_T B[36],
    real_T Y[36]);
  void proc_co_AUV8QuatSimFcn_AbfqyrNU(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  real_T proc_control_norm_115oznfV(const real_T x[4]);
  void proc_c_mpc_plantupdate_opKkKWqM(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void mpc_constraintcoefLTV_p1h5r2C_h(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[1920], real_T b_SuJm[3120], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  void proc_control_kron_5Yeqlajx(const real_T b_A[100], const real_T b_B[64],
    real_T K[6400]);
  void proc_contr_mpcblock_optimizer_d(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[258], const real_T b_Mlim[258],
    real_T b_Mx[5418], real_T b_Mu1[2064], real_T b_Mv[2838], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[625], real_T b_Ac[6450],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[1920], const real_T b_I1[640], const real_T b_A[4851], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[3003], const real_T
    Dv[143], const int32_T b_Mrows[258], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[258]);
  void proc_control_isfinite_NLoqvmdK(const real_T x[8], boolean_T b[8]);
  void proc_control_mtimes(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control_znlmpc_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T *Bu_size);
  void proc_control_znlmpc_getXUe(const real_T z[155], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_wW6vUT_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_stateEvolution_vYboEQce(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[20150]);
  void proc_control_all_H4RNf0h2(const boolean_T x[130], boolean_T y[13]);
  boolean_T proc_control_any(const boolean_T x[26]);
  void proc_cont_znlmpc_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    *Je_size, real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_outputBounds(const real_T runtimedata_OutputMin[130], const
    real_T runtimedata_OutputMax[130], const real_T X[143], real_T e, real_T
    c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_co_eML_blk_kernel_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[155], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[20150]);
  void proc_control_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj);
  void proc_cont_factoryConstruct_lnz4(int32_T MaxVars, int32_T *obj_grad_size,
    int32_T *obj_Hx_size, boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_lnz42(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_control_loadProblem(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj, int32_T
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
    obj_objfun_workspace_runtimed_5[80], const real_T x[155], real_T
    grad_workspace_data[], real_T *fval, int32_T *status);
  int32_T p_checkVectorNonFinite_2JllBqp7(const real_T vec[130]);
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
  void proc_control_setProblemType(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj, int32_T
    PROBLEM_TYPE);
  void proc_control_initActiveSet(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_contro_factoryConstruct_ln(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T *obj_jpvt_size, int32_T *obj_mrows, int32_T
    *obj_ncols, int32_T *obj_tau_size, int32_T *obj_minRowCol, boolean_T
    *obj_usedPivoting);
  void proc_contr_factoryConstruct_lnz(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_xgemv(int32_T m, int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_computeGradLag(real_T workspace_data[], int32_T ldA, int32_T
    nVar, const real_T grad_data[], int32_T mIneq, const real_T AineqTrans_data[],
    const real_T AeqTrans_data[], const int32_T finiteFixed_data[], int32_T
    mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[155], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[155], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_saveJacobian(s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj, int32_T
    nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T ineqCol0,
    const real_T JacCeqTrans_data[], int32_T ldJ);
  void proc_control_saveState(s_SfTiiT1KRClFcMCE02xJjB_proc_T *obj);
  real_T proc_control_computeComplError(const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    const real_T xCurrent[155], int32_T mIneq, const real_T cIneq_data[], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[155], const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[], int32_T iL0);
  void proc_control_xgemv_m(int32_T m, int32_T n, const real_T A_data[], int32_T
    lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_computeGradLag_b(real_T workspace_data[], int32_T ldA,
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
  real_T proc_control_xnrm2_m(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_xgemv_mt(int32_T m, int32_T n, const real_T A_data[],
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
  void proc_control_factorQRE(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, const real_T
    A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_xorgqr(int32_T m, int32_T n, int32_T k, real_T A_data[],
    const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_computeQ_(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, int32_T
    nrows);
  void proc_control_xgemv_mtm(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xtrsv(int32_T n, const real_T A_data[], int32_T lda, real_T
    x_data[]);
  void proc_control_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  int32_T proc_control_ixamax(int32_T n, const real_T x_data[]);
  void proc_control_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T *fscales_lineq_constraint_size, const int32_T *
    fscales_cineq_constraint_size, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet,
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T
    *QRManager, const real_T lb[155]);
  void proc_control_xgemv_mtmcjbiadz2i(int32_T m, int32_T n, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0,
    real_T y_data[]);
  boolean_T proc_control_BFGSUpdate(int32_T nvar, real_T Bk[24025], const real_T
    sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_factorQRE_f(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, int32_T
    mrows, int32_T ncols);
  void proc_control_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_removeConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj, int32_T
    idx_global);
  int32_T proc_control_RemoveDependentEq_(s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager);
  void proc_contro_removeAllIneqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj);
  void proc_contr_RemoveDependentIneq_(s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace);
  void proc_control_xgeqrf(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, real_T tau_data[], int32_T *tau_size);
  void proc_control_factorQR_h(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_factorQR(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj, int32_T mrows,
    int32_T ncols);
  void proc_control_xgemv_mtmcj(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xgemv_mtmc(int32_T n, const real_T A_data[], int32_T lda,
    const real_T x_data[], real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    const real_T x_data[]);
  void proc_control_xgemv_mtmcjb(int32_T m, int32_T n, const real_T A_data[],
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
  void proc_control_xgemv_mtmcjbia(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_xgemv_mtmcjbi(int32_T n, const real_T A_data[], int32_T lda,
    const real_T x_data[], real_T y_data[]);
  real_T proc__maxConstraintViolation_du(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager);
  void proc_control_xgemv_mtmcjbiad(int32_T m, int32_T n, const real_T A[24025],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_syceGAKWionoNWyVws9jI_proc__T *obj,
    const real_T H[24025], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_syceGAKWionoNWyVws9jI_proc__T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_xrotg_XzIjz1eG(real_T *a, real_T *b, real_T *c, real_T *s);
  void proc_control_deleteColMoveEnd(s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_strcmp(const char_T a[7]);
  void proc_control_xgemm(int32_T m, int32_T n, int32_T k, const real_T A[24025],
    int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb, real_T C_data[],
    int32_T ldc);
  void proc_control_xgemm_m(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  int32_T proc_control_ixamax_k(int32_T n, const real_T x_data[], int32_T incx);
  void proc_control_fullColLDL2_(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, int32_T
    LD_offset, int32_T NColsRemain);
  void proc_control_partialColLDL3_(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_xpotrf(int32_T n, real_T A_data[], int32_T lda);
  void proc_control_xgemv_mtmcjbiadz(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_factor(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, const real_T A
    [24025], int32_T ndims, int32_T ldA);
  void proc_control_solve(const s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_factor_p(s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, const real_T
    A[24025], int32_T ndims, int32_T ldA);
  void proc_control_solve_l(const s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_compute_deltax(const real_T H[24025],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, const s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *cholmanager, const
    s_syceGAKWionoNWyVws9jI_proc__T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_xnrm2_md(int32_T n, const real_T x_data[]);
  void proc_control_xgemv_mtmcjbiadz2(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_feasibleratiotest(const real_T solution_xstar_data[], const
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
  void proc_control_addAineqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj, int32_T
    idx_local);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, const
    s_syceGAKWionoNWyVws9jI_proc__T *objective, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *
    workingset, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
    updateFval);
  void proc_control_iterate(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective, const char_T
    options_SolverName[7], real_T options_StepTolerance, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
  void proc_control_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[24025], const real_T f_data[], const
    real_T x_data[]);
  real_T proc_control_computeFval(const s_syceGAKWionoNWyVws9jI_proc__T *obj,
    real_T workspace_data[], const real_T H[24025], const real_T f_data[], const
    real_T x_data[]);
  void proc_control_phaseone(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_driver_i(const real_T H[24025], const real_T f_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *solution, s_rz4qJMGW78cxvfZBKnU9SC_proc_T
    *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T *workingset,
    s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *qrmanager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *
    cholmanager, s_syceGAKWionoNWyVws9jI_proc__T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, somzaGboVhDG7PNQS6E98jD_proc__T
    *runTimeOptions);
  void proc_control_addAeqConstr(s_YaC65yvYSxJoOs4cRNYgnE_proc_T *obj, int32_T
    idx_local);
  boolean_T proc_control_soc(const real_T Hessian[24025], const real_T
    grad_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_normal(const real_T Hessian[24025], const real_T grad_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace,
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T
    *QRManager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_relaxed(const real_T Hessian[24025], const real_T grad_data[],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace,
    s_YaC65yvYSxJoOs4cRNYgnE_proc_T *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T
    *QRManager, s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  boolean_T proc_control_step_k(int32_T *STEP_TYPE, real_T Hessian[24025], const
    real_T lb[155], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_outputBounds_p(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_co_stateEvolution_IBbdjakB(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc__eML_blk_kernel_anonFcn2_g(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[155], real_T varargout_1_data[], int32_T varargout_1_size[2],
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
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[155],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[155], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T *workspaceIneq_size, int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_objfun_workspace_r, const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *FcnEvaluator_nonlcon_workspace_, int32_T
    FcnEvaluator_mCineq, boolean_T socTaken, real_T *alpha, int32_T *exitflag);
  void proc_control_driver(const real_T bineq_data[], const real_T lb[155],
    s_SfTiiT1KRClFcMCE02xJjB_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const s_lkFpKxHZB0M4xOcTLHVN2_proc__T *FcnEvaluator,
    s_rz4qJMGW78cxvfZBKnU9SC_proc_T *memspace, s_YaC65yvYSxJoOs4cRNYgnE_proc_T
    *WorkingSet, s_bAoxcFEJ6lUEm9rRY9fnKH_proc_T *QRManager,
    s_NgV9GZ7yjGpklMLIU8C2cB_proc_T *CholManager,
    s_syceGAKWionoNWyVws9jI_proc__T *QPObjective, const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    real_T Hessian[24025]);
  void proc_control_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, real_T fun_workspace_userdata_Ts, const real_T
    fun_workspace_userdata_CurrentS[13], const real_T
    fun_workspace_userdata_LastMV[8], const real_T
    fun_workspace_userdata_Referenc[130], const real_T
    fun_workspace_userdata_MVTarget[80], real_T fun_workspace_userdata_Predicti,
    real_T fun_workspace_userdata_NumOfSta, real_T
    fun_workspace_userdata_NumOfOut, real_T fun_workspace_userdata_NumOfInp,
    const real_T fun_workspace_userdata_MVIndex[8], const real_T x0[155], const
    real_T Aineq_data[], const real_T bineq_data[], const int32_T *bineq_size,
    const real_T lb[155], const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *nonlcon_workspace_runtimedata, const s6FZHgorTEIlMmVIrDGGTjF_proc__T
    *nonlcon_workspace_userdata, real_T x[155], real_T *fval, real_T *exitflag,
    real_T *output_iterations, real_T *output_funcCount, char_T
    output_algorithm[3], real_T *output_constrviolation, real_T *output_stepsize,
    real_T *output_lssteplength, real_T *output_firstorderopt);
  real_T proc_control_erf(real_T x);
  void proc_co_AUV8QuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
  void proc_control_rand(real_T r[3]);
  void proc_control_binary_expand_op(real_T in1[3], const real_T in3_data[],
    const int32_T *in3_size, const real_T in4_data[], const int32_T *in4_size);
  real_T proc_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);

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
//  Block '<S148>/Floor' : Unused code path elimination
//  Block '<S148>/Floor1' : Unused code path elimination
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
//  Block '<S162>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S163>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S164>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S165>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S166>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S167>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S168>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S169>/Vector Dimension Check' : Unused code path elimination
//  Block '<S170>/Vector Dimension Check' : Unused code path elimination
//  Block '<S171>/Vector Dimension Check' : Unused code path elimination
//  Block '<S172>/Vector Dimension Check' : Unused code path elimination
//  Block '<S173>/Vector Dimension Check' : Unused code path elimination
//  Block '<S174>/Vector Dimension Check' : Unused code path elimination
//  Block '<S148>/last_x' : Unused code path elimination
//  Block '<S175>/Vector Dimension Check' : Unused code path elimination
//  Block '<S148>/useq_scale' : Unused code path elimination
//  Block '<S148>/useq_scale1' : Unused code path elimination
//  Block '<S146>/m_zero' : Unused code path elimination
//  Block '<S146>/p_zero' : Unused code path elimination
//  Block '<S141>/Constant2' : Unused code path elimination
//  Block '<S141>/Gain' : Unused code path elimination
//  Block '<S141>/Scope' : Unused code path elimination
//  Block '<S138>/Display' : Unused code path elimination
//  Block '<S142>/Constant3' : Unused code path elimination
//  Block '<S178>/Data Type Duplicate' : Unused code path elimination
//  Block '<S182>/Floor' : Unused code path elimination
//  Block '<S182>/Floor1' : Unused code path elimination
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
//  Block '<S198>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S199>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S200>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S201>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S202>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S203>/Vector Dimension Check' : Unused code path elimination
//  Block '<S204>/Vector Dimension Check' : Unused code path elimination
//  Block '<S205>/Vector Dimension Check' : Unused code path elimination
//  Block '<S206>/Vector Dimension Check' : Unused code path elimination
//  Block '<S207>/Vector Dimension Check' : Unused code path elimination
//  Block '<S208>/Vector Dimension Check' : Unused code path elimination
//  Block '<S182>/last_x' : Unused code path elimination
//  Block '<S209>/Vector Dimension Check' : Unused code path elimination
//  Block '<S180>/m_zero' : Unused code path elimination
//  Block '<S180>/p_zero' : Unused code path elimination
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
//  Block '<S231>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S232>/Vector Dimension Check' : Unused code path elimination
//  Block '<S233>/Vector Dimension Check' : Unused code path elimination
//  Block '<S234>/Vector Dimension Check' : Unused code path elimination
//  Block '<S235>/Vector Dimension Check' : Unused code path elimination
//  Block '<S213>/mv.init_zero' : Unused code path elimination
//  Block '<S213>/x.init_zero' : Unused code path elimination
//  Block '<S140>/Scope1' : Unused code path elimination
//  Block '<S140>/Scope2' : Unused code path elimination
//  Block '<S241>/Constant1' : Unused code path elimination
//  Block '<S241>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S255>/Product' : Unused code path elimination
//  Block '<S255>/Product1' : Unused code path elimination
//  Block '<S255>/Product2' : Unused code path elimination
//  Block '<S255>/Product3' : Unused code path elimination
//  Block '<S260>/Product' : Unused code path elimination
//  Block '<S260>/Product1' : Unused code path elimination
//  Block '<S260>/Product2' : Unused code path elimination
//  Block '<S260>/Product3' : Unused code path elimination
//  Block '<S260>/Sum' : Unused code path elimination
//  Block '<S259>/sqrt' : Unused code path elimination
//  Block '<S256>/Constant' : Unused code path elimination
//  Block '<S256>/Gain' : Unused code path elimination
//  Block '<S256>/Gain1' : Unused code path elimination
//  Block '<S256>/Gain2' : Unused code path elimination
//  Block '<S256>/Product' : Unused code path elimination
//  Block '<S256>/Product1' : Unused code path elimination
//  Block '<S256>/Product2' : Unused code path elimination
//  Block '<S256>/Product3' : Unused code path elimination
//  Block '<S256>/Product4' : Unused code path elimination
//  Block '<S256>/Product5' : Unused code path elimination
//  Block '<S256>/Product6' : Unused code path elimination
//  Block '<S256>/Product7' : Unused code path elimination
//  Block '<S256>/Product8' : Unused code path elimination
//  Block '<S256>/Sum' : Unused code path elimination
//  Block '<S256>/Sum1' : Unused code path elimination
//  Block '<S256>/Sum2' : Unused code path elimination
//  Block '<S256>/Sum3' : Unused code path elimination
//  Block '<S257>/Constant' : Unused code path elimination
//  Block '<S257>/Gain' : Unused code path elimination
//  Block '<S257>/Gain1' : Unused code path elimination
//  Block '<S257>/Gain2' : Unused code path elimination
//  Block '<S257>/Product' : Unused code path elimination
//  Block '<S257>/Product1' : Unused code path elimination
//  Block '<S257>/Product2' : Unused code path elimination
//  Block '<S257>/Product3' : Unused code path elimination
//  Block '<S257>/Product4' : Unused code path elimination
//  Block '<S257>/Product5' : Unused code path elimination
//  Block '<S257>/Product6' : Unused code path elimination
//  Block '<S257>/Product7' : Unused code path elimination
//  Block '<S257>/Product8' : Unused code path elimination
//  Block '<S257>/Sum' : Unused code path elimination
//  Block '<S257>/Sum1' : Unused code path elimination
//  Block '<S257>/Sum2' : Unused code path elimination
//  Block '<S257>/Sum3' : Unused code path elimination
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
//  Block '<S261>/Product' : Unused code path elimination
//  Block '<S261>/Product1' : Unused code path elimination
//  Block '<S261>/Product2' : Unused code path elimination
//  Block '<S261>/Product3' : Unused code path elimination
//  Block '<S266>/Product' : Unused code path elimination
//  Block '<S266>/Product1' : Unused code path elimination
//  Block '<S266>/Product2' : Unused code path elimination
//  Block '<S266>/Product3' : Unused code path elimination
//  Block '<S266>/Sum' : Unused code path elimination
//  Block '<S265>/sqrt' : Unused code path elimination
//  Block '<S262>/Constant' : Unused code path elimination
//  Block '<S262>/Gain' : Unused code path elimination
//  Block '<S262>/Gain1' : Unused code path elimination
//  Block '<S262>/Gain2' : Unused code path elimination
//  Block '<S262>/Product' : Unused code path elimination
//  Block '<S262>/Product1' : Unused code path elimination
//  Block '<S262>/Product2' : Unused code path elimination
//  Block '<S262>/Product3' : Unused code path elimination
//  Block '<S262>/Product4' : Unused code path elimination
//  Block '<S262>/Product5' : Unused code path elimination
//  Block '<S262>/Product6' : Unused code path elimination
//  Block '<S262>/Product7' : Unused code path elimination
//  Block '<S262>/Product8' : Unused code path elimination
//  Block '<S262>/Sum' : Unused code path elimination
//  Block '<S262>/Sum1' : Unused code path elimination
//  Block '<S262>/Sum2' : Unused code path elimination
//  Block '<S262>/Sum3' : Unused code path elimination
//  Block '<S263>/Constant' : Unused code path elimination
//  Block '<S263>/Gain' : Unused code path elimination
//  Block '<S263>/Gain1' : Unused code path elimination
//  Block '<S263>/Gain2' : Unused code path elimination
//  Block '<S263>/Product' : Unused code path elimination
//  Block '<S263>/Product1' : Unused code path elimination
//  Block '<S263>/Product2' : Unused code path elimination
//  Block '<S263>/Product3' : Unused code path elimination
//  Block '<S263>/Product4' : Unused code path elimination
//  Block '<S263>/Product5' : Unused code path elimination
//  Block '<S263>/Product6' : Unused code path elimination
//  Block '<S263>/Product7' : Unused code path elimination
//  Block '<S263>/Product8' : Unused code path elimination
//  Block '<S263>/Sum' : Unused code path elimination
//  Block '<S263>/Sum1' : Unused code path elimination
//  Block '<S263>/Sum2' : Unused code path elimination
//  Block '<S263>/Sum3' : Unused code path elimination
//  Block '<S264>/Constant' : Unused code path elimination
//  Block '<S264>/Gain' : Unused code path elimination
//  Block '<S264>/Gain1' : Unused code path elimination
//  Block '<S264>/Gain2' : Unused code path elimination
//  Block '<S264>/Product' : Unused code path elimination
//  Block '<S264>/Product1' : Unused code path elimination
//  Block '<S264>/Product2' : Unused code path elimination
//  Block '<S264>/Product3' : Unused code path elimination
//  Block '<S264>/Product4' : Unused code path elimination
//  Block '<S264>/Product5' : Unused code path elimination
//  Block '<S264>/Product6' : Unused code path elimination
//  Block '<S264>/Product7' : Unused code path elimination
//  Block '<S264>/Product8' : Unused code path elimination
//  Block '<S264>/Sum' : Unused code path elimination
//  Block '<S264>/Sum1' : Unused code path elimination
//  Block '<S264>/Sum2' : Unused code path elimination
//  Block '<S264>/Sum3' : Unused code path elimination
//  Block '<S241>/Scope' : Unused code path elimination
//  Block '<S241>/Sum4' : Unused code path elimination
//  Block '<S243>/Discrete Transfer Fcn1' : Unused code path elimination
//  Block '<S279>/Data Type Duplicate' : Unused code path elimination
//  Block '<S279>/Diff' : Unused code path elimination
//  Block '<S279>/TSamp' : Unused code path elimination
//  Block '<S279>/UD' : Unused code path elimination
//  Block '<S286>/Constant' : Unused code path elimination
//  Block '<S286>/Gain' : Unused code path elimination
//  Block '<S286>/Gain1' : Unused code path elimination
//  Block '<S286>/Gain2' : Unused code path elimination
//  Block '<S286>/Product' : Unused code path elimination
//  Block '<S286>/Product1' : Unused code path elimination
//  Block '<S286>/Product2' : Unused code path elimination
//  Block '<S286>/Product3' : Unused code path elimination
//  Block '<S286>/Product4' : Unused code path elimination
//  Block '<S286>/Product5' : Unused code path elimination
//  Block '<S286>/Product6' : Unused code path elimination
//  Block '<S286>/Product7' : Unused code path elimination
//  Block '<S286>/Product8' : Unused code path elimination
//  Block '<S286>/Sum' : Unused code path elimination
//  Block '<S286>/Sum1' : Unused code path elimination
//  Block '<S286>/Sum2' : Unused code path elimination
//  Block '<S286>/Sum3' : Unused code path elimination
//  Block '<S287>/Constant' : Unused code path elimination
//  Block '<S287>/Gain' : Unused code path elimination
//  Block '<S287>/Gain1' : Unused code path elimination
//  Block '<S287>/Gain2' : Unused code path elimination
//  Block '<S287>/Product' : Unused code path elimination
//  Block '<S287>/Product1' : Unused code path elimination
//  Block '<S287>/Product2' : Unused code path elimination
//  Block '<S287>/Product3' : Unused code path elimination
//  Block '<S287>/Product4' : Unused code path elimination
//  Block '<S287>/Product5' : Unused code path elimination
//  Block '<S287>/Product6' : Unused code path elimination
//  Block '<S287>/Product7' : Unused code path elimination
//  Block '<S287>/Product8' : Unused code path elimination
//  Block '<S287>/Sum' : Unused code path elimination
//  Block '<S287>/Sum1' : Unused code path elimination
//  Block '<S287>/Sum2' : Unused code path elimination
//  Block '<S287>/Sum3' : Unused code path elimination
//  Block '<S244>/Scope' : Unused code path elimination
//  Block '<S244>/Scope1' : Unused code path elimination
//  Block '<S244>/Scope2' : Unused code path elimination
//  Block '<S244>/Scope3' : Unused code path elimination
//  Block '<S295>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S296>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S297>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S299>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S294>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S294>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S294>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S294>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S9>/If' : Unused code path elimination
//  Block '<S306>/Matrix Concatenate' : Unused code path elimination
//  Block '<S306>/Scope' : Unused code path elimination
//  Block '<S306>/Scope1' : Unused code path elimination
//  Block '<S306>/Scope2' : Unused code path elimination
//  Block '<S306>/Scope3' : Unused code path elimination
//  Block '<S306>/Selector' : Unused code path elimination
//  Block '<S306>/Selector5' : Unused code path elimination
//  Block '<S306>/Selector6' : Unused code path elimination
//  Block '<S306>/Selector7' : Unused code path elimination
//  Block '<S306>/Selector8' : Unused code path elimination
//  Block '<S306>/Sum' : Unused code path elimination
//  Block '<S306>/e angulars rates' : Unused code path elimination
//  Block '<S306>/e position' : Unused code path elimination
//  Block '<S306>/e quaternion' : Unused code path elimination
//  Block '<S306>/e velocity' : Unused code path elimination
//  Block '<S308>/Scope1' : Unused code path elimination
//  Block '<S324>/Display' : Unused code path elimination
//  Block '<S324>/Selector3' : Unused code path elimination
//  Block '<S312>/Scope' : Unused code path elimination
//  Block '<S90>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S148>/Reshape' : Reshape block reduction
//  Block '<S148>/Reshape1' : Reshape block reduction
//  Block '<S148>/Reshape2' : Reshape block reduction
//  Block '<S148>/Reshape3' : Reshape block reduction
//  Block '<S148>/Reshape4' : Reshape block reduction
//  Block '<S148>/Reshape5' : Reshape block reduction
//  Block '<S182>/Reshape' : Reshape block reduction
//  Block '<S182>/Reshape1' : Reshape block reduction
//  Block '<S182>/Reshape2' : Reshape block reduction
//  Block '<S182>/Reshape3' : Reshape block reduction
//  Block '<S182>/Reshape4' : Reshape block reduction
//  Block '<S182>/Reshape5' : Reshape block reduction
//  Block '<S214>/Reshape1' : Reshape block reduction
//  Block '<S214>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S214>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S215>/reshape_mv' : Reshape block reduction
//  Block '<S294>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S294>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S246>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S246>/Zero-Order Hold1' : Eliminated since input and output rates are identical


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
//  '<S107>' : 'proc_control/Send Data to ROS/Blank Message2'
//  '<S108>' : 'proc_control/Send Data to ROS/MATLAB Function3'
//  '<S109>' : 'proc_control/Send Data to ROS/Publish2'
//  '<S110>' : 'proc_control/Send Data to ROS/Subsystem'
//  '<S111>' : 'proc_control/Send Data to ROS/Subsystem/Blank Message5'
//  '<S112>' : 'proc_control/Send Data to ROS/Subsystem/MATLAB Function'
//  '<S113>' : 'proc_control/Send Data to ROS/Subsystem/Publish5'
//  '<S114>' : 'proc_control/Sensor Manager/Send Sensor ON'
//  '<S115>' : 'proc_control/Sensor Manager/Send To Mapping'
//  '<S116>' : 'proc_control/Sensor Manager/Send To Telemetry '
//  '<S117>' : 'proc_control/Sensor Manager/Send Sensor ON/Blank Message'
//  '<S118>' : 'proc_control/Sensor Manager/Send Sensor ON/Publish'
//  '<S119>' : 'proc_control/Sensor Manager/Send To Mapping/Blank Message'
//  '<S120>' : 'proc_control/Sensor Manager/Send To Mapping/Conversion d'unité'
//  '<S121>' : 'proc_control/Sensor Manager/Send To Mapping/MATLAB Function1'
//  '<S122>' : 'proc_control/Sensor Manager/Send To Mapping/Publish'
//  '<S123>' : 'proc_control/Sensor Manager/Send To Telemetry /Blank Message'
//  '<S124>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité'
//  '<S125>' : 'proc_control/Sensor Manager/Send To Telemetry /MATLAB Function1'
//  '<S126>' : 'proc_control/Sensor Manager/Send To Telemetry /Publish'
//  '<S127>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles'
//  '<S128>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees'
//  '<S129>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Radians to Degrees1'
//  '<S130>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation'
//  '<S131>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S132>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S133>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S134>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S135>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S136>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S137>' : 'proc_control/Sensor Manager/Send To Telemetry /Conversion d'unité/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller list'
//  '<S139>' : 'proc_control/Subsystem Controller/MPC manager'
//  '<S140>' : 'proc_control/Subsystem Controller/Post traitements'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion '
//  '<S142>' : 'proc_control/Subsystem Controller/Controller list/IDLE'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion '
//  '<S145>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S200>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S225>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S226>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S227>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S228>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S229>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S230>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S231>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S232>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S233>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S234>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S235>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S236>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S237>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe'
//  '<S238>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1'
//  '<S239>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S240>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S241>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S242>' : 'proc_control/Subsystem ProcNav/DVL Mesurments'
//  '<S243>' : 'proc_control/Subsystem ProcNav/Detph Mesurments'
//  '<S244>' : 'proc_control/Subsystem ProcNav/Mux2Bus'
//  '<S245>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S246>' : 'proc_control/Subsystem ProcNav/Subsystem'
//  '<S247>' : 'proc_control/Subsystem ProcNav/Thursters Mesurments'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S249>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S251>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S252>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S253>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S254>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S255>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S256>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S257>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S258>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S259>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S260>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S261>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S262>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S263>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S264>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S265>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S266>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S267>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S268>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S269>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S270>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S271>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S272>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S273>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S274>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S275>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S276>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S277>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S278>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/ '
//  '<S279>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Discrete Derivative'
//  '<S280>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Conjugate'
//  '<S281>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Inverse'
//  '<S282>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation'
//  '<S283>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S284>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S285>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S286>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V1'
//  '<S287>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V2'
//  '<S288>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V3'
//  '<S289>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S290>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S291>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S292>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S293>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S294>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S295>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S296>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S297>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3'
//  '<S298>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S299>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S300>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S301>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S302>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3/Correct'
//  '<S303>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S304>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S305>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S306>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S307>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S308>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S309>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S310>' : 'proc_control/Subsystem Trajectory/Subsystem2'
//  '<S311>' : 'proc_control/Subsystem Trajectory/SubsystemAuto'
//  '<S312>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory'
//  '<S313>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function1'
//  '<S314>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function1'
//  '<S315>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S316>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S317>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S318>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S319>' : 'proc_control/Subsystem Trajectory/Subsystem2/Blank Message5'
//  '<S320>' : 'proc_control/Subsystem Trajectory/Subsystem2/MATLAB Function2'
//  '<S321>' : 'proc_control/Subsystem Trajectory/Subsystem2/Publish5'
//  '<S322>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S323>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S324>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S325>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S326>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S327>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S328>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S329>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S330>' : 'proc_control/Subsystem1/Subscribe1'
//  '<S331>' : 'proc_control/Subsystem1/Subscribe2'
//  '<S332>' : 'proc_control/Subsystem1/Subscribe3'
//  '<S333>' : 'proc_control/Subsystem1/Subscribe4'
//  '<S334>' : 'proc_control/Subsystem1/Subscribe5'
//  '<S335>' : 'proc_control/Subsystem1/startSim'
//  '<S336>' : 'proc_control/Subsystem1/Subscribe1/Enabled Subsystem'
//  '<S337>' : 'proc_control/Subsystem1/Subscribe2/Enabled Subsystem'
//  '<S338>' : 'proc_control/Subsystem1/Subscribe3/Enabled Subsystem'
//  '<S339>' : 'proc_control/Subsystem1/Subscribe4/Enabled Subsystem'
//  '<S340>' : 'proc_control/Subsystem1/Subscribe5/Enabled Subsystem'
//  '<S341>' : 'proc_control/Subsystem1/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
