//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 3.78
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Fri Jul 15 15:17:58 2022
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
  // Block signals for system '<S100>/Current Time'
  struct B_CurrentTime_proc_control_T {
    SL_Bus_proc_control_ros_time_Time CurrentTime;// '<S100>/Current Time'
  };

  // Block states (default storage) for system '<S100>/Current Time'
  struct DW_CurrentTime_proc_control_T {
    ros_slros_internal_block_Curr_T obj;// '<S100>/Current Time'
    boolean_T objisempty;              // '<S100>/Current Time'
  };

  // Block signals (default storage)
  struct B_proc_control_T {
    std::string Switch1_o;             // '<S100>/Switch1'
    std::string Switch1;               // '<S169>/Switch1'
    real_T g[78013];
    real_T g_m[78000];
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w In1;// '<S308>/In1'
    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w b_varargout_2;
    real_T Jx[33800];
    real_T Au[25600];
    real_T unusedExpr[19321];
    real_T JacCeqTrans[18070];
    real_T JacEqTrans_tmp[18070];
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T TrialState;
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T m_c;
    real_T Jx_k[16900];
    real_T a[10400];
    real_T Jmv[10400];
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T b_WorkingSet;
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T b;
    real_T tmp_data[6561];
    real_T tmp_data_c[6561];
    real_T tmp_data_b[6561];
    real_T b_H_data[6561];
    real_T b_Linv_data[6561];
    real_T tmp_data_p[6561];
    real_T RLinv_data[6561];
    real_T b_D_data[6561];
    real_T b_H_data_c[6561];
    real_T b_H_data_f[6561];
    real_T TL_data[6561];
    real_T Q_data[6561];
    real_T R_data[6561];
    real_T b_A_data[6561];
    real_T tmp_data_g[6561];
    real_T tmp_data_g1[6561];
    real_T tmp_data_m[6561];
    real_T in1_data[6561];
    real_T tmp_data_n[6400];
    real_T tmp_data_pp[6400];
    real_T tmp_data_l[6400];
    real_T tmp_data_j[6400];
    real_T tmp_data_d[6400];
    real_T Jm_data[6400];
    real_T I2Jm_data[6400];
    real_T I3_data[6400];
    real_T varargin_4_data[6400];
    real_T varargin_6_data[6400];
    real_T tmp_data_gu[6400];
    real_T tmp_data_ld[6400];
    real_T dv[6400];
    real_T tmp_data_dh[6400];
    real_T Mv_aux_data[6380];
    real_T b_A[4851];
    real_T q[4746];
    real_T Su1_data[4640];
    s_IDHIEhzA2KtfYk7ehxTmaH_proc_T o;
    real_T AA[3969];
    s_lkFpKxHZB0M4xOcTLHVN2_proc__T FcnEvaluator;
    real_T b_C[3003];
    s_Ref0liQlfQOPmAop9i3aPH_proc_T q_d;
    real_T Sx_data[2730];
    real_T b_Sx[2730];
    real_T tmp_data_lx[2560];
    real_T tmp_data_o[2560];
    real_T dv1[2486];
    real_T ct[2166];
    real_T varargin_2_data[2080];
    real_T u_b[2034];
    s_wbACub5hw4pAYPfHb1hrsB_proc_T s;
    real_T ct_n[1959];
    real_T A[1859];                    // '<S133>/MATLAB Function2'
    real_T C[1859];                    // '<S133>/MATLAB Function2'
    real_T Bu[1848];
    s_j0X3urodUv3ospvkLXsspC_proc_T p_b;
    real_T y_data[1829];
    real_T y_data_l[1829];
    real_T work_data[1829];
    real_T work_data_h[1829];
    real_T vn1_data[1829];
    real_T vn2_data[1829];
    real_T work_data_b[1829];
    real_T y_data_d[1829];
    real_T y_data_e[1829];
    real_T y_data_b[1829];
    real_T y_data_j[1829];
    real_T y_data_f[1829];
    real_T y_data_a[1829];
    real_T y_data_ju[1829];
    real_T s_j[1808];
    real_T Kx_data[1680];
    real_T ct_o[1640];
    real_T Hv_data[1430];
    real_T varargin_1_data[1430];
    real_T b_Hv[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T ct_ny[1260];
    real_T CovMat[1156];
    real_T B[1144];                    // '<S133>/MATLAB Function2'
    real_T ct_i[1042];
    real_T varargin_1_data_o[1040];
    real_T Su1_data_n[1040];
    real_T b_SuJm[1040];
    real_T b_Su1[1040];
    real_T WySuJm[1040];
    real_T Jmv_m[1040];
    real_T b_tmp[986];
    real_T c_data[980];
    real_T ct_c[824];
    int8_T b_data[6561];
    real_T ct_m[805];
    real_T tmp_data_m3[640];
    real_T tmp_data_ja[640];
    real_T I1_data[640];
    real_T Ku1_data[640];
    real_T I2Jm[640];
    real_T WuI2Jm[640];
    real_T dv2[640];
    real_T tmp_data_h[640];
    real_T tmp_data_c0[640];
    real_T b_B[630];
    real_T Mlimfull_data[580];
    real_T Vfull_data[580];
    real_T in4[442];
    real_T b_A_c[441];
    real_T AA_p[441];
    real_T Mlimfull0[436];
    real_T Vfull0[436];
    real_T in3[433];
    SL_Bus_proc_control_std_msgs_Float64MultiArray In1_f;// '<S233>/In1'
    SL_Bus_proc_control_std_msgs_Float64MultiArray b_varargout_2_p;
    SL_Bus_proc_control_sonia_common_MpcInfo msg_a;// '<S114>/MATLAB Function'
    real_T b_D[390];
    SL_Bus_proc_control_sonia_common_MpcGains In1_o;// '<S234>/In1'
    SL_Bus_proc_control_sonia_common_MpcGains b_varargout_2_e;
    real_T b_A_a[338];
    SL_Bus_proc_control_std_msgs_Int16MultiArray msg_p;// '<S16>/MATLAB Function3' 
    SL_Bus_proc_control_std_msgs_UInt16MultiArray msg_h;// '<S5>/MATLAB Function3' 
    real_T B_data[320];
    real_T b_Bu[320];
    uint32_T c_mt[625];
    SL_Bus_proc_control_std_msgs_Int8MultiArray msg_n;// '<S5>/MATLAB Function1' 
    real_T Nk[273];
    real_T b_C_a[273];
    real_T CA[273];
    real_T CA_i[273];
    real_T b_C_l[273];
    real_T Cineq_data[260];
    real_T b_data_o[260];
    real_T varargin_1_data_o2[260];
    real_T b_c[260];
    real_T b_c_data[260];
    real_T a__3_data[260];
    real_T varargin_1_data_i[260];
    real_T b_c_f[260];
    real_T b_c_data_i[260];
    real_T Je_data[260];
    real_T b_A_f[260];
    s6FZHgorTEIlMmVIrDGGTjF_proc__T expl_temp;
    real_T Bv[231];
    real_T b_Mlim[226];
    real_T Bc[226];
    real_T b_Mlim_g[226];
    real_T b_Mu1[226];
    real_T cTol[226];
    real_T dv3[226];
    real_T b_A_co[208];
    real_T b_A_o[182];
    real_T A_l[169];
    real_T b_varargout_3[169];
    real_T dv4[169];
    real_T Ac[169];
    real_T Ac_m[169];
    real_T b_A2[169];
    real_T b_A4[169];
    real_T b_A6[169];
    real_T y_m[169];
    real_T dv5[169];
    real_T b_A4_c[169];
    real_T a_f[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_p[169];
    real_T cBuffer_e[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T dv6[169];
    real_T A4_o[169];
    real_T dv7[169];
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
    real_T b_Kx[168];
    int16_T q_data[580];
    int16_T r_data[580];
    int16_T s_data[580];
    int16_T t_data[580];
    int16_T v_data[580];
    int16_T w_data[580];
    real_T Dv[143];
    real_T Y_p[143];                   // '<S133>/MATLAB Function2'
    real_T X_d[143];                   // '<S133>/MATLAB Function2'
    real_T DX[143];                    // '<S133>/MATLAB Function2'
    real_T CA_data[143];
    real_T X[143];
    real_T b_X[143];
    real_T X_o[143];
    real_T X_b[143];
    real_T X_a[143];
    real_T b_X_g[143];
    real_T b_X_e[143];
    real_T b_X_f[143];
    real_T b_A_h[140];
    real_T z[139];
    real_T rtb_Selector_e[139];
    real_T dv8[139];
    real_T b_x[139];
    mpcParams mpcParams_l;             // '<S322>/Bus Creator'
    real_T y_j[130];                   // '<S297>/MATLAB Function1'
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_c[130];
    real_T gfX[130];
    real_T z_a[130];
    real_T b_d[130];
    real_T readCurrent[128];
    SL_Bus_proc_control_nav_msgs_Odometry msg_po;// '<S119>/MATLAB Function1'
    SL_Bus_proc_control_nav_msgs_Odometry msg_l;// '<S137>/MATLAB Function1'
    real_T Selector_a[117];            // '<S209>/Selector'
    int32_T iC[226];
    real_T b_varargout_4[104];
    real_T b_varargout_2_pb[104];
    real_T Sum_m[104];
    real_T Bc_o[104];
    real_T b_C_n[104];
    int16_T matches_data[400];
    real_T cb_data[100];
    physicsConstants BusCreator;       // '<S323>/Bus Creator'
    real_T dHdx[91];
    real_T K[91];
    real_T C_l[91];
    real_T b_C_p[91];
    real_T y_pt[91];
    real_T U[88];                      // '<S133>/MATLAB Function2'
    real_T b_Kv[88];
    real_T U_f[88];
    real_T b_U[88];
    real_T U_i[88];
    real_T U_o[88];
    real_T U_k[88];
    real_T b_U_i[88];
    real_T Umv[88];
    real_T b_U_o[88];
    real_T b_U_m[88];
    real_T t[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T b_Linv[81];
    real_T c_Linv[81];
    real_T b_D_c[81];
    real_T b_H[81];
    real_T U_fb[81];
    real_T RLinv[81];
    real_T TL[81];
    real_T QQ[81];
    real_T RR[81];
    real_T c_A[81];
    real_T r_data_h[81];
    real_T z_data[81];
    real_T b_x_data[81];
    real_T b_Ac_data[81];
    real_T tau_data[81];
    real_T b_Ac_data_m[81];
    real_T work_data_a[81];
    real_T work_data_k[81];
    real_T tmp_data_pc[81];
    real_T in2_data[81];
    real_T in1_data_b[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv9[80];
    real_T utargetseq_data[80];
    real_T dv10[80];
    real_T b_I1[80];
    real_T dv11[80];
    real_T gfU[80];
    real_T y_ch[80];
    real_T tmp_data_nb[80];
    real_T tmp_data_i[80];
    boolean_T isMrows_data[580];
    real_T Selector1_n[72];            // '<S209>/Selector1'
    int16_T b_data_m[260];
    int16_T b_data_j[260];
    int16_T d_data[260];
    real_T y_tmp[64];
    real_T b_I[64];
    real_T b_Jm[64];
    real_T b_Su1_e[64];
    real_T b_I1_m[64];
    SL_Bus_proc_control_sensor_msgs_Imu In1_p;// '<S72>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu In1_pd;// '<S80>/In1'
    SL_Bus_proc_control_sensor_msgs_Imu b_varargout_2_m;
    SL_Bus_proc_control_sensor_msgs_Imu msg_c;// '<S91>/MATLAB Function'
    boolean_T isMrows0[436];
    char_T s1_data[403];
    char_T b_s1_data[403];
    char_T cleanStr_data[401];
    char_T str_data[401];
    char_T str_data_j[401];
    char_T str_data_f[401];
    char_T charValue[400];
    char_T charValue_data[400];
    char_T replaced_data[400];
    real_T Sy[49];
    real_T Sy_a[49];
    real_T R[49];
    real_T dv12[48];
    real_T Tm[48];
    real_T dv13[48];
    real_T b_A_g[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T dHdx_n[39];
    real_T K_d[39];
    real_T C_n[39];
    real_T b_C_c[39];
    real_T y_f[39];
    real_T dv14[38];
    real_T in2[38];
    real_T dCoefs[36];
    real_T b_newCoefs[36];
    real_T constValues_p[36];
    real_T constValues_p2[36];
    real_T in2_n[36];
    real_T A_k[36];
    real_T dv15[36];
    boolean_T icf[260];
    boolean_T icf_n[260];
    int8_T Je[260];
    boolean_T bv[226];
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_i;// '<S73>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL In1_c;// '<S82>/In1'
    SL_Bus_proc_control_sonia_common_BodyVelocityDVL msg_b;// '<S89>/MATLAB Function' 
    real_T coefsWithFlatStart[24];
    SL_Bus_proc_control_sonia_common_PingAngles BusAssignment;// '<S92>/Bus Assignment' 
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T xk[21];
    real_T Transpose_i[18];            // '<S314>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    char_T s1_data_o[131];
    char_T b_s1_data_g[131];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cleanStr_data_c[129];
    char_T str_data_c[129];
    char_T str_data_m[129];
    char_T charValue_j[128];
    char_T replaced_data_k[128];
    uint8_T GetParameter10_o1[128];    // '<S323>/Get Parameter10'
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    real_T A_m[14];
    int32_T ic[26];
    int32_T ic_p[26];
    real_T K_dz[13];
    real_T z_g[13];
    real_T imz[13];
    real_T xk_c[13];
    real_T K_c[13];
    real_T dv16[13];
    real_T b_C_i[13];
    real_T b_Wy[13];
    real_T x_dot_kk[13];
    real_T x_dot_k[13];
    real_T ic_d[13];
    real_T ic_g[13];
    real_T ix[13];
    real_T obj_objfun_workspace_runtimedat[13];
    real_T gfX_l[13];
    real_T b_C_f[13];
    real_T ic_db[13];
    real_T dv17[13];
    real_T dv18[13];
    real_T work[13];
    real_T tau[13];
    real_T work_j[13];
    real_T tau_i[13];
    real_T work_h[13];
    real_T tau_n[13];
    real_T work_o[13];
    real_T tau_c[13];
    real_T work_b[13];
    real_T ic_e[13];
    real_T dv19[13];
    real_T dv20[13];
    real_T b_x_d[13];
    real_T work_i[13];
    real_T a_g[13];
    real_T coefMat[12];
    real_T coeffMat[12];
    real_T tau_nn[12];
    real_T vseq[11];
    int8_T b_B_l[81];
    int32_T i_data[20];
    int32_T ii_data_c[20];
    boolean_T tmp_data_nc[80];
    boolean_T tmp_data_ph[80];
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_b[9];// '<S302>/Subsystem1'
    real_T zopt[9];
    real_T f[9];
    real_T r[9];
    real_T z_d[9];
    real_T b_Ac[9];
    real_T tau_o[9];
    real_T work_jr[9];
    real_T R_c[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_h;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_d;
    char_T s1_data_c[67];
    char_T b_s1_data_p[67];
    char_T cleanStr_data_p[65];
    char_T str_data_a[65];
    char_T str_data_o[65];
    char_T charValue_jw[64];
    char_T replaced_data_p[64];
    int8_T matches_data_o[64];
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_l[64];
    real_T U_kv[8];
    real_T u_scale[8];                 // '<S138>/u_scale'
    real_T rtb_u_scale_jk[8];
    real_T dv21[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_f[8];
    real_T duk_c[8];
    real_T gfU_f[8];
    real_T ic_n[8];
    real_T c_i[8];
    real_T runtimedata_MVRateMin[8];
    real_T in5[8];
    uint8_T GetParameter_o1_m[64];     // '<S326>/Get Parameter'
    SL_Bus_proc_control_sonia_common_AddPose b_varargout_2_l;
    SL_Bus_proc_control_geometry_msgs_Pose ZeroOrderHold;// '<S300>/Zero-Order Hold' 
    SL_Bus_proc_control_geometry_msgs_Pose In1_n;// '<S342>/In1'
    SL_Bus_proc_control_geometry_msgs_Pose msg;// '<S300>/MATLAB Function2'
    SL_Bus_proc_control_geometry_msgs_Pose b_varargout_2_i;
    SL_Bus_proc_control_geometry_msgs_Pose msg_i;// '<S93>/MATLAB Function'
    real_T z_k[7];
    real_T TmpSignalConversionAtMATLAB[7];
    real_T tau_f[7];
    real_T work_a[7];
    real_T mesuredPose[7];
    real_T y_d4[7];
    real_T x_e[7];
    s_8RbNZtrzTH63iHAPCwMh6G_proc_T r_e;
    int32_T iv[13];
    SL_Bus_proc_control_geometry_msgs_Twist In1_od;// '<S306>/In1'
    real_T u[8];                       // '<S242>/ '
    SL_Bus_proc_control_geometry_msgs_Twist b_varargout_2_a;
    real_T TSamp[6];                   // '<S172>/TSamp'
    real_T dv22[6];
    real_T rtb_TSamp_i[6];
    real_T constValues_f[6];
    real_T constValues_j[6];
    int32_T blockFormat[12];
    int32_T blockFormat_b[12];
    int8_T b_I_o[36];
    quaternion_proc_control_T expl_temp_f;
    real_T n[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S237>/MATLAB Function1'
    real_T qt[4];
    real_T qRel[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T v_data_o[8];
    int32_T v_data_l[8];
    boolean_T icf_l[26];
    boolean_T icf_g[26];
    emxArray_real_T_proc_control_T tmp_data_d4;
    emxArray_real_T_proc_control_T tmp_data_dv;
    emxArray_real_T_proc_control_T b_H_data_j;
    emxArray_real_T_proc_control_T b_H_data_f1;
    emxArray_real_T_proc_control_T Jmv_j;
    emxArray_real_T_proc_control_T Auf;
    emxArray_real_T_proc_control_T Jm_data_h;
    emxArray_real_T_proc_control_T tmp_data_cf;
    emxArray_real_T_proc_control_T Jm_data_n;
    emxArray_real_T_proc_control_T tmp_data_k;
    emxArray_real_T_proc_control_T Jm_data_a;
    emxArray_real_T_proc_control_T tmp_data_f;
    emxArray_real_T_proc_control_T I2Jm_data_j;
    emxArray_real_T_proc_control_T Kut_data;
    emxArray_real_T_proc_control_T Jm_data_k;
    emxArray_real_T_proc_control_T tmp_data_bn;
    emxArray_real_T_proc_control_T I2Jm_data_h;
    emxArray_real_T_proc_control_T Kut_data_e;
    emxArray_real_T_proc_control_T Jm_data_hn;
    emxArray_real_T_proc_control_T tmp_data_ku;
    emxArray_real_T_proc_control_T Kut_data_j;
    emxArray_real_T_proc_control_T I2Jm_data_o;
    emxArray_real_T_proc_control_T Kut_data_c;
    emxArray_real_T_proc_control_T Kut_data_h;
    emxArray_real_T_proc_control_T Hv_data_i;
    emxArray_real_T_proc_control_T in4_data;
    emxArray_real_T_proc_control_T tmp_data_pl;
    emxArray_real_T_proc_control_T in6_data;
    emxArray_real_T_proc_control_T in7_data;
    SL_Bus_proc_control_geometry_msgs_Vector3 b_varargout_2_f;
    real_T Gain[3];                    // '<S298>/Gain'
    real_T Reference[130];             // '<S9>/Merge'
    real_T target[7];                  // '<S9>/Merge'
    real_T InitQuat[4];                // '<S321>/MATLAB System'
    real_T e[3];
    real_T sincos_o1_d[3];             // '<S266>/sincos'
    real_T sincos_o2[3];               // '<S266>/sincos'
    real_T sincos_o1[3];               // '<S40>/sincos'
    real_T dv23[3];
    real_T v[3];
    real_T target_e[3];
    real_T work_n[3];
    boolean_T corr[20];
    int16_T NtoRPM[8];                 // '<S16>/N to RPM'
    uint16_T current[8];               // '<S129>/N to A'
    uint16_T pwm[8];                   // '<S129>/N to PWM'
    uint8_T rows[13];
    uint8_T rows_f[13];
    int8_T b_ipiv[13];
    int8_T ipiv[13];
    boolean_T x_h[13];
    boolean_T x_hp[13];
    boolean_T x_i[13];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T NavReset;                   // '<S321>/MATLAB System'
    real_T DataTypeConversion[6];      // '<S316>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S316>/Data Type Conversion1'
    real_T DataTypeConversion2;        // '<S316>/Data Type Conversion2'
    real_T MatrixConcatenate[2];       // '<S314>/Matrix Concatenate'
    real_T Selector[6];                // '<S314>/Selector'
    real_T Selector1[8];               // '<S314>/Selector1'
    real_T Selector4[7];               // '<S314>/Selector4'
    real_T DataStoreRead[13];          // '<S288>/Data Store Read'
    real_T zposition;                  // '<S238>/Sum'
    real_T Gain_p;                     // '<S268>/Gain'
    real_T Gain1;                      // '<S268>/Gain1'
    real_T Gain2;                      // '<S268>/Gain2'
    real_T Sum;                        // '<S268>/Sum'
    real_T Gain_c;                     // '<S269>/Gain'
    real_T Gain1_m;                    // '<S269>/Gain1'
    real_T Gain2_l;                    // '<S269>/Gain2'
    real_T Sum_o;                      // '<S269>/Sum'
    real_T Gain_i;                     // '<S270>/Gain'
    real_T Gain1_g;                    // '<S270>/Gain1'
    real_T Gain2_b;                    // '<S270>/Gain2'
    real_T Sum_c;                      // '<S270>/Sum'
    real_T q0;                         // '<S266>/q0'
    real_T q1;                         // '<S266>/q1'
    real_T q2;                         // '<S266>/q2'
    real_T q3;                         // '<S266>/q3'
    real_T mv[8];                      // '<S127>/Merge'
    real_T MpcStatus;                  // '<S127>/Merge'
    real_T alive;                      // '<S127>/Merge'
    real_T mvmin[8];                   // '<S128>/MPC manager'
    real_T mvmax[8];                   // '<S128>/MPC manager'
    real_T ywt[13];                    // '<S128>/MPC manager'
    real_T mvwt[8];                    // '<S128>/MPC manager'
    real_T dmwwt[8];                   // '<S128>/MPC manager'
    real_T p;                          // '<S128>/MPC manager'
    real_T m;                          // '<S128>/MPC manager'
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
    real_T MATLABSystem_o2[3];         // '<S33>/MATLAB System'
    real_T y_d[4];                     // '<S1>/Quaternion Normalise'
    real_T d_data_f;
    real_T d;
    real_T scale;
    real_T absxk;
    real_T t_c;
    real_T b_norm;
    real_T e_data;
    real_T b_x_data_n;
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
    real_T t13;
    real_T t15;
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
    real_T oc;
    real_T oa;
    real_T oc_h;
    real_T od;
    real_T xtmp;
    real_T SimActive;                  // '<S321>/MATLAB System'
    real_T trajClear;                  // '<S321>/MATLAB System'
    real_T notDryRun;                  // '<S321>/MATLAB System'
    real_T Product3_pv;                // '<S267>/Product3'
    real_T Product1_j1;                // '<S267>/Product1'
    real_T Product2_lm;                // '<S267>/Product2'
    real_T Product_n;                  // '<S267>/Product'
    real_T Output_i;                   // '<S28>/Output'
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T n_k;
    real_T rtb_sincos_o1_d_h;
    real_T AngularRate_a_idx_2;
    real_T AngularRate_a_idx_1;
    real_T rtb_Sum6_idx_2;
    real_T rtb_Sum6_idx_1;
    real_T rtb_Sum6_idx_0;
    real_T t57_tmp;
    real_T t35_tmp;
    real_T oa_tmp;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T b_norm_tmp;
    real_T t25_tmp;
    real_T t29_tmp;
    real_T d_b;
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
    real_T A_tmp;
    real_T b_j;
    real_T b_p;
    real_T pny1;
    real_T varargin_1_size_idx_1_tmp_tmp;
    real_T bkj;
    real_T b_I_os;
    real_T b_Kv_n;
    real_T WuI2Jm_m;
    real_T ywt_k;
    real_T uwt;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_j;
    real_T b_Ac_h;
    real_T b_Linv_f;
    real_T atmp;
    real_T beta1;
    real_T temp;
    real_T t5_d;
    real_T t6_l;
    real_T t14;
    real_T t15_k;
    real_T t16;
    real_T t17;
    real_T t18;
    real_T t19;
    real_T exptj;
    real_T d6_i;
    real_T eta1;
    real_T x_h5;
    real_T e_m;
    real_T ed2;
    real_T QPObjective_beta;
    real_T scale_g;
    real_T absxk_l;
    real_T t_m;
    real_T optimRelativeFactor;
    real_T phi_alpha;
    real_T fs;
    real_T b_e;
    real_T wtYerr;
    real_T wtYerr_n;
    real_T umvk_g;
    real_T duk_d;
    real_T e_mq;
    real_T runtimedata_OutputMin;
    real_T runtimedata_OutputMax;
    real_T e_f;
    real_T runtimedata_OutputMin_g;
    real_T runtimedata_OutputMax_j;
    real_T exptj_c;
    real_T d6_e;
    real_T eta1_m;
    real_T b_varargin_1;
    real_T e_o;
    real_T ed2_a;
    real_T fs_j;
    real_T e_g;
    real_T wtYerr_j;
    real_T obj_objfun_workspace_runtimed_e;
    real_T wtYerr_jy;
    real_T obj_objfun_workspace_runtimed_j;
    real_T duk_g;
    real_T t20;
    real_T t22;
    real_T t23;
    real_T t24_o;
    real_T t27_h;
    real_T t28;
    real_T t29_c;
    real_T t30_a;
    real_T t31_l;
    real_T t32;
    real_T t36;
    real_T t37;
    real_T t38;
    real_T t40_j;
    real_T t41_i;
    real_T t43_m;
    real_T t48;
    real_T t49;
    real_T t51;
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
    real_T t98;
    real_T t99;
    real_T t100;
    real_T t101;
    real_T t102;
    real_T t103;
    real_T t104;
    real_T t107;
    real_T t108;
    real_T t109;
    real_T t110;
    real_T t111;
    real_T t112;
    real_T t115;
    real_T t118;
    real_T t119;
    real_T t120;
    real_T t122;
    real_T t124;
    real_T t126;
    real_T t127;
    real_T t87_tmp;
    real_T t88_tmp;
    real_T t89_tmp;
    real_T t90_tmp;
    real_T t91_tmp;
    real_T t92_tmp;
    real_T t99_tmp;
    real_T t100_tmp;
    real_T t87_tmp_tmp;
    real_T t89_tmp_tmp;
    real_T t103_tmp;
    real_T t104_tmp;
    real_T t107_tmp;
    real_T t108_tmp;
    real_T t115_tmp;
    real_T t118_tmp;
    real_T t122_tmp;
    real_T t126_tmp;
    real_T t88_tmp_tmp;
    real_T t91_tmp_tmp;
    real_T t90_tmp_tmp;
    real_T t92_tmp_tmp;
    real_T t103_tmp_tmp;
    real_T t104_tmp_tmp;
    real_T t99_tmp_tmp;
    real_T t100_tmp_tmp;
    real_T t118_tmp_tmp;
    real_T t115_tmp_tmp;
    real_T t122_tmp_tmp;
    real_T in4_tmp;
    real_T in4_tmp_f;
    real_T in4_tmp_o;
    real_T t126_tmp_tmp;
    real_T in4_tmp_i;
    real_T in4_tmp_e;
    real_T in4_tmp_j;
    real_T in4_tmp_o4;
    real_T in4_tmp_fr;
    real_T in4_tmp_m;
    real_T in4_tmp_a;
    real_T in4_tmp_h;
    real_T t99_tmp_o;
    real_T t100_tmp_h;
    real_T t103_tmp_j;
    real_T t104_tmp_g;
    real_T t107_tmp_j;
    real_T t108_tmp_l;
    real_T t115_tmp_k;
    real_T t118_tmp_d;
    real_T t122_tmp_n;
    real_T t126_tmp_j;
    real_T in4_tmp_a3;
    real_T in4_tmp_hz;
    real_T in4_tmp_iq;
    real_T in4_tmp_d;
    real_T in4_tmp_b;
    real_T in4_tmp_hj;
    real_T in4_tmp_p;
    real_T in4_tmp_n;
    real_T in4_tmp_jz;
    real_T in4_tmp_ot;
    real_T in4_tmp_bj;
    real_T in4_tmp_jk;
    real_T in4_tmp_eq;
    real_T in4_tmp_i4;
    real_T in4_tmp_ng;
    real_T in4_tmp_ie;
    real_T in4_tmp_p3;
    real_T in4_tmp_og;
    real_T in4_tmp_mz;
    real_T in4_tmp_otc;
    real_T in4_tmp_g;
    real_T in4_tmp_ez;
    real_T in4_tmp_iz;
    real_T in4_tmp_gb;
    real_T in4_tmp_ge;
    real_T in4_tmp_gbr;
    real_T in4_tmp_gr;
    real_T in4_tmp_c;
    real_T in4_tmp_k;
    real_T in4_tmp_ds;
    real_T in4_tmp_kx;
    real_T in4_tmp_pd;
    real_T in4_tmp_p5;
    real_T t542;
    real_T t547;
    real_T t548;
    real_T t562;
    real_T t563;
    real_T t566;
    real_T t566_tmp;
    real_T ct_tmp;
    real_T ct_tmp_m;
    real_T ct_tmp_k;
    real_T ct_tmp_a;
    real_T ct_tmp_f;
    real_T ct_tmp_c;
    real_T ct_tmp_j;
    real_T ct_tmp_kb;
    real_T ct_tmp_h;
    real_T ct_tmp_d;
    real_T ct_tmp_j1;
    real_T t547_tmp;
    real_T t548_tmp;
    real_T t542_tmp;
    real_T ct_tmp_n;
    real_T ct_tmp_j0;
    real_T t562_tmp;
    real_T t563_tmp;
    real_T ct_tmp_l;
    real_T t566_tmp_p;
    real_T ct_tmp_p;
    real_T ct_tmp_ly;
    real_T ct_tmp_ld;
    real_T ct_tmp_hb;
    real_T ct_tmp_cg;
    real_T ct_tmp_g;
    real_T ct_tmp_e;
    real_T ct_tmp_n3;
    real_T ct_tmp_tmp;
    real_T t542_tmp_f;
    real_T t562_tmp_n;
    real_T ct_tmp_e2;
    real_T ct_tmp_b;
    real_T t563_tmp_a;
    real_T ct_tmp_tmp_i;
    real_T ct_tmp_tmp_n;
    real_T ct_tmp_tmp_f;
    real_T ct_tmp_i;
    real_T ct_tmp_k3;
    real_T ct_tmp_b0;
    real_T ct_tmp_da;
    real_T ct_tmp_hs;
    real_T ct_tmp_nl;
    real_T ct_tmp_fj;
    real_T ct_tmp_ay;
    real_T ct_tmp_mu;
    real_T ct_tmp_gu;
    real_T ct_tmp_nh;
    real_T ct_tmp_ch;
    real_T ct_tmp_d4;
    real_T ct_tmp_ky;
    real_T ct_tmp_cl;
    real_T ct_tmp_jd;
    real_T t566_tmp_m;
    real_T ct_tmp_ie;
    real_T ct_tmp_bj;
    real_T ct_tmp_o;
    real_T ct_tmp_gs;
    real_T ct_tmp_ed;
    real_T t1184;
    real_T t1185;
    real_T t1186;
    real_T t1532;
    real_T t1486;
    real_T t1487;
    real_T t1488;
    real_T t1550;
    real_T t1553;
    real_T t1591;
    real_T t1592;
    real_T t1532_tmp;
    real_T t1532_tmp_i;
    real_T t1532_tmp_e;
    real_T t1591_tmp;
    real_T t1591_tmp_i;
    real_T t1592_tmp;
    real_T t1592_tmp_m;
    real_T t1591_tmp_d;
    real_T out1_tmp;
    real_T out1_tmp_j;
    real_T out1_tmp_p;
    real_T out1_tmp_b;
    real_T out1_tmp_pn;
    real_T out1_tmp_n;
    real_T out1_tmp_c;
    real_T out1_tmp_nh;
    real_T out1_tmp_d;
    real_T out1_tmp_i;
    real_T out1_tmp_no;
    real_T out1_tmp_bi;
    real_T out1_tmp_bt;
    real_T out1_tmp_jk;
    real_T out1_tmp_n0;
    real_T out1_tmp_f;
    real_T out1_tmp_e;
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
    real_T out1_tmp_ih;
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
    real_T out1_tmp_m;
    real_T out1_tmp_f5;
    real_T out1_tmp_bw;
    real_T out1_tmp_tmp;
    real_T out1_tmp_tmp_e;
    real_T out1_tmp_tmp_n;
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
    real_T out1_tmp_tmp_f;
    real_T out1_tmp_tmp_nl;
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
    real_T out1_tmp_tmp_k;
    real_T out1_tmp_tmp_k1;
    real_T out1_tmp_tmp_b;
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
    real_T out1_tmp_d1;
    real_T out1_tmp_cj;
    real_T out1_tmp_myu;
    real_T out1_tmp_dk;
    real_T out1_tmp_n4;
    real_T out1_tmp_bwe;
    real_T out1_tmp_p2x;
    real_T out1_tmp_kg;
    real_T out1_tmp_cl;
    real_T out1_tmp_n2;
    real_T out1_tmp_nm;
    real_T out1_tmp_cd;
    real_T out1_tmp_dkf;
    real_T out1_tmp_nq;
    real_T out1_tmp_guh;
    real_T out1_tmp_lx;
    real_T out1_tmp_ge;
    real_T out1_tmp_tmp_p;
    real_T out1_tmp_tmp_ko;
    real_T out1_tmp_l1;
    real_T out1_tmp_bf;
    real_T out1_tmp_cxc;
    real_T out1_tmp_fbn;
    real_T out1_tmp_oo;
    real_T out1_tmp_dd;
    real_T out1_tmp_tmp_l;
    real_T out1_tmp_tmp_ls;
    real_T out1_tmp_tmp_d;
    real_T out1_tmp_ku;
    real_T out1_tmp_fo;
    real_T out1_tmp_p3;
    real_T out1_tmp_k1;
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
    real_T out1_tmp_tmp_i;
    real_T out1_tmp_tmp_g;
    real_T out1_tmp_tmp_c;
    real_T out1_tmp_ee;
    real_T out1_tmp_a5;
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
    real_T out1_tmp_p40;
    real_T out1_tmp_fbc;
    real_T out1_tmp_fs;
    real_T out1_tmp_aa;
    real_T out1_tmp_g3;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T out1_tmp_efd;
    real_T out1_tmp_ey;
    real_T out1_tmp_tmp_dl;
    real_T out1_tmp_tmp_j;
    real_T out1_tmp_tmp_nx;
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
    real_T out1_tmp_cxz;
    real_T out1_tmp_ag;
    real_T absx;
    real_T z_i;
    real_T s_l;
    real_T R_i;
    real_T d34;
    real_T d35;
    real_T d36;
    real_T t15_a;
    real_T t17_i;
    real_T t19_c;
    real_T t23_m;
    real_T t25_n;
    real_T t27_c;
    real_T t33_n;
    real_T t34_h;
    real_T t35_i;
    real_T t37_e;
    real_T t38_p;
    real_T t39_k;
    real_T t41_i3;
    real_T t42;
    real_T t43_n;
    real_T t44_o;
    real_T t45_l;
    real_T t47;
    real_T t50;
    real_T t57_p;
    real_T t58_b;
    real_T t129;
    real_T t130;
    real_T t131;
    real_T t133;
    real_T t134;
    real_T t135;
    real_T in3_tmp;
    real_T in3_tmp_f;
    real_T in3_tmp_i;
    real_T in3_tmp_c;
    real_T in3_tmp_g;
    real_T in3_tmp_iu;
    real_T in3_tmp_b;
    real_T in3_tmp_n;
    real_T in3_tmp_p;
    real_T in3_tmp_tmp;
    real_T in3_tmp_tmp_o;
    real_T in3_tmp_by;
    real_T in3_tmp_o;
    real_T in3_tmp_cm;
    real_T in3_tmp_j;
    real_T in3_tmp_e;
    real_T in3_tmp_pw;
    real_T in3_tmp_np;
    real_T in3_tmp_oe;
    real_T in3_tmp_d;
    real_T in3_tmp_gq;
    real_T in3_tmp_tmp_i;
    real_T in3_tmp_tmp_ih;
    real_T in3_tmp_tmp_c;
    real_T in3_tmp_tmp_b;
    real_T in3_tmp_tmp_g;
    real_T in3_tmp_tmp_d;
    real_T in3_tmp_tmp_f;
    real_T in3_tmp_tmp_j;
    real_T in3_tmp_eq;
    real_T in3_tmp_pc;
    real_T in3_tmp_dd;
    real_T in3_tmp_fm;
    real_T in3_tmp_n5;
    real_T in3_tmp_o5;
    real_T in3_tmp_du;
    real_T in3_tmp_l;
    real_T in3_tmp_fu;
    real_T in3_tmp_jf;
    real_T in3_tmp_ge;
    real_T in3_tmp_lt;
    real_T in3_tmp_k;
    real_T in3_tmp_px;
    real_T in3_tmp_bu;
    real_T in3_tmp_i3;
    real_T in3_tmp_tmp_p;
    real_T in3_tmp_tmp_l;
    real_T in3_tmp_tmp_e;
    real_T in3_tmp_tmp_es;
    real_T in3_tmp_tmp_pn;
    real_T in3_tmp_tmp_jg;
    real_T in3_tmp_tmp_gy;
    real_T in3_tmp_tmp_le;
    real_T in3_tmp_tmp_jo;
    real_T in3_tmp_tmp_pk;
    real_T in3_tmp_d0;
    real_T in3_tmp_kh;
    real_T in3_tmp_m;
    real_T in3_tmp_fv;
    real_T in3_tmp_m4;
    real_T in3_tmp_tmp_n;
    real_T in3_tmp_mi;
    real_T in3_tmp_b0;
    real_T in3_tmp_tmp_cc;
    real_T in3_tmp_tmp_gw;
    real_T in3_tmp_tmp_tmp;
    real_T in3_tmp_tmp_ck;
    real_T in3_tmp_tmp_iz;
    real_T in3_tmp_kv;
    real_T in3_tmp_tmp_go;
    real_T in3_tmp_tmp_tmp_p;
    real_T in3_tmp_tmp_tmp_f;
    real_T in3_tmp_tmp_m;
    real_T in3_tmp_my;
    real_T in3_tmp_lb;
    real_T in3_tmp_tmp_tmp_j;
    real_T in3_tmp_tmp_tmp_m;
    real_T in3_tmp_j4;
    real_T in3_tmp_ii;
    real_T in3_tmp_a;
    real_T in3_tmp_h;
    real_T in3_tmp_ddu;
    real_T in3_tmp_i2;
    real_T in3_tmp_hr;
    real_T in3_tmp_dj;
    real_T in3_tmp_lb5;
    real_T in3_tmp_f3;
    real_T in3_tmp_lts;
    real_T in3_tmp_l3;
    real_T in3_tmp_f4;
    real_T in3_tmp_gy;
    real_T in3_tmp_gz;
    real_T in3_tmp_av;
    real_T in3_tmp_du1;
    real_T in3_tmp_bc;
    real_T in3_tmp_dg;
    real_T in3_tmp_fvc;
    real_T in3_tmp_as;
    real_T in3_tmp_mq;
    real_T in3_tmp_ie;
    real_T in3_tmp_ir;
    real_T in3_tmp_kq;
    real_T in3_tmp_au;
    real_T in3_tmp_m2;
    real_T in3_tmp_ce;
    real_T in3_tmp_bo;
    real_T in3_tmp_kg;
    real_T in3_tmp_lr;
    real_T in3_tmp_nz;
    real_T in3_tmp_pp;
    real_T in3_tmp_f0;
    real_T in3_tmp_ko;
    real_T in3_tmp_en;
    real_T in3_tmp_na;
    real_T ct_tmp_ol;
    real_T ct_tmp_ad;
    real_T ct_tmp_bi;
    real_T ct_tmp_ba;
    real_T ct_tmp_mg;
    real_T ct_tmp_mc;
    real_T ct_tmp_kw;
    real_T ct_tmp_mcj;
    real_T ct_tmp_hk;
    real_T ct_tmp_i1;
    real_T ct_tmp_ct;
    real_T ct_tmp_ni;
    real_T ct_tmp_il;
    real_T ct_tmp_oc;
    real_T ct_tmp_hy;
    real_T ct_tmp_pj;
    real_T ct_tmp_go;
    real_T ct_tmp_tmp_c;
    real_T ct_tmp_tmp_g;
    real_T ct_tmp_tmp_b;
    real_T ct_tmp_tmp_j;
    real_T ct_tmp_tmp_h;
    real_T ct_tmp_d45;
    real_T ct_tmp_oa;
    real_T ct_tmp_k2;
    real_T ct_tmp_jw;
    real_T ct_tmp_de;
    real_T ct_tmp_fs;
    real_T ct_tmp_aq;
    real_T ct_tmp_eg;
    real_T ct_tmp_ns;
    real_T ct_tmp_ob;
    real_T ct_tmp_dk;
    real_T ct_tmp_cu;
    real_T ct_tmp_mw;
    real_T ct_tmp_ocx;
    real_T ct_tmp_bc;
    real_T ct_tmp_ml;
    real_T ct_tmp_ii;
    real_T ct_tmp_ih;
    real_T ct_tmp_g5;
    real_T ct_tmp_mui;
    real_T ct_tmp_no;
    real_T ct_tmp_ca;
    real_T ct_tmp_jv;
    real_T ct_tmp_ej;
    real_T ct_tmp_ep;
    real_T ct_tmp_kr;
    real_T ct_tmp_k4;
    real_T ct_tmp_id;
    real_T ct_tmp_eh;
    real_T ct_tmp_lyp;
    real_T ct_tmp_ldf;
    real_T ct_tmp_lc;
    real_T ct_tmp_obs;
    real_T ct_tmp_i5;
    real_T ct_tmp_e2t;
    real_T ct_tmp_lo;
    real_T ct_tmp_noc;
    real_T ct_tmp_eu;
    real_T ct_tmp_cuz;
    real_T ct_tmp_ap;
    real_T ct_tmp_ms;
    real_T ct_tmp_ck;
    real_T ct_tmp_fg;
    real_T ct_tmp_mj;
    real_T ct_tmp_k0;
    real_T ct_tmp_bu;
    real_T ct_tmp_hc;
    real_T ct_tmp_hcg;
    real_T ct_tmp_h2;
    real_T ct_tmp_bp;
    real_T ct_tmp_bf;
    real_T ct_tmp_dp;
    real_T ct_tmp_tmp_jd;
    real_T ct_tmp_tmp_d;
    real_T ct_tmp_lot;
    real_T ct_tmp_jk;
    real_T ct_tmp_bib;
    real_T ct_tmp_f2;
    real_T ct_tmp_po;
    real_T ct_tmp_lr;
    real_T ct_tmp_l1;
    real_T ct_tmp_i5e;
    real_T ct_tmp_ok;
    real_T ct_tmp_bv;
    real_T ct_tmp_it;
    real_T ct_tmp_gv;
    real_T ct_tmp_pob;
    real_T ct_tmp_h5;
    real_T ct_tmp_dd;
    real_T ct_tmp_fb;
    real_T ct_tmp_fo;
    real_T ct_tmp_c1;
    real_T ct_tmp_dkw;
    real_T ct_tmp_cat;
    real_T ct_tmp_bci;
    real_T ct_tmp_pw;
    real_T ct_tmp_hh;
    real_T ct_tmp_ei;
    real_T ct_tmp_lb;
    real_T ct_tmp_hg;
    real_T ct_tmp_nt;
    real_T ct_tmp_kr0;
    real_T ct_tmp_bt;
    real_T ct_tmp_oy;
    real_T ct_tmp_nij;
    real_T ct_tmp_fi;
    real_T ct_tmp_gr;
    real_T ct_tmp_dm;
    real_T ct_tmp_d1;
    real_T ct_tmp_ey;
    real_T ct_tmp_ce;
    real_T ct_tmp_ar;
    real_T ct_tmp_hp;
    real_T ct_tmp_er;
    real_T ct_tmp_ne;
    real_T ct_tmp_hgs;
    real_T ct_tmp_oc2;
    real_T ct_tmp_foh;
    real_T ct_tmp_k1;
    real_T ct_tmp_ejt;
    real_T ct_tmp_iw;
    real_T ct_tmp_o3;
    real_T ct_tmp_jo;
    real_T ct_tmp_kyo;
    real_T ct_tmp_ja;
    real_T ct_tmp_d0;
    real_T ct_tmp_gn;
    real_T ct_tmp_c5;
    real_T ct_tmp_kh;
    real_T ct_tmp_jn;
    real_T ct_tmp_hcu;
    real_T ct_tmp_cz;
    real_T ct_tmp_dh;
    real_T ct_tmp_ai;
    real_T ct_tmp_pu;
    real_T ct_tmp_fk;
    real_T ct_tmp_h2u;
    real_T ct_tmp_j5;
    real_T ct_tmp_nr;
    real_T ct_tmp_o1;
    real_T ct_tmp_on;
    real_T ct_tmp_dv;
    real_T ct_tmp_ac;
    real_T ct_tmp_kwn;
    real_T ct_tmp_ctf;
    real_T ct_tmp_jy;
    real_T ct_tmp_bh;
    real_T ct_tmp_nc;
    real_T ct_tmp_dmd;
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
    real_T t3247_tmp_h;
    real_T Anq_tmp;
    real_T Anq_tmp_tmp;
    real_T Anq_tmp_b;
    real_T Anq_tmp_p;
    real_T Anq_tmp_bp;
    real_T Anq_tmp_px;
    real_T Anq_tmp_n;
    real_T Anq_tmp_j;
    real_T Anq_tmp_tmp_b;
    real_T Anq_tmp_ny;
    real_T Anq_tmp_bw;
    real_T Anq_tmp_jr;
    real_T t2;
    real_T t3;
    real_T t4_k;
    real_T t5_dq;
    real_T t6_d;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13_o;
    real_T t17_c;
    real_T t18_o;
    real_T t19_a;
    real_T t20_d;
    real_T t21_e;
    real_T t22_i;
    real_T t23_b;
    real_T t24_a;
    real_T t25_k;
    real_T t26_m;
    real_T t27_j;
    real_T t28_j;
    real_T t29_k;
    real_T t30_k;
    real_T t31_a;
    real_T t32_k;
    real_T t33_f;
    real_T t34_c;
    real_T t39_o;
    real_T t40_k;
    real_T t41_p;
    real_T t42_f;
    real_T t43_d;
    real_T t44_e;
    real_T t45_lf;
    real_T t55;
    real_T t56;
    real_T t57_e;
    real_T t58_h;
    real_T t59_g;
    real_T t61_p;
    real_T t62_n;
    real_T t65_o;
    real_T t68;
    real_T t35_l;
    real_T t36_f;
    real_T t37_h;
    real_T t27_tmp_d;
    real_T t31_tmp_m;
    real_T t24_tmp_i;
    real_T t32_tmp;
    real_T t25_tmp_j;
    real_T t29_tmp_p;
    real_T Kx;
    real_T Kr;
    real_T Ku1;
    real_T Kv;
    real_T Kut;
    real_T rMin_d;
    real_T Xnorm0_j;
    real_T cMin_k;
    real_T zTa;
    real_T t_mc;
    real_T Linv;
    real_T atmp_d;
    real_T xnorm;
    real_T temp_p;
    real_T c_ig;
    real_T tst;
    real_T ab;
    real_T ba;
    real_T aa;
    real_T bb;
    real_T h12;
    real_T sn;
    real_T tst_tmp;
    real_T tst_tmp_tmp;
    real_T temp_g;
    real_T p_e;
    real_T bcmax;
    real_T bcmis;
    real_T scale_h;
    real_T z_gq;
    real_T a_c;
    real_T s_a;
    real_T atmp_f;
    real_T temp_i;
    real_T c_c;
    real_T s_n;
    real_T atmp_c;
    real_T temp_c;
    real_T s_i;
    real_T atmp_h;
    real_T temp_m;
    real_T s_g;
    real_T atmp_o;
    real_T temp_ms;
    real_T d_e;
    real_T s_e;
    real_T d_i;
    real_T s_f;
    real_T b_r;
    real_T t8_h;
    real_T t9_i;
    real_T t11_p;
    real_T t12_a;
    real_T t13_f;
    real_T t14_d;
    real_T t15_c;
    real_T t16_j;
    real_T t25_c;
    real_T t29_n;
    real_T t31_j;
    real_T t50_k;
    real_T t53;
    real_T t54;
    real_T t17_o;
    real_T t18_g;
    real_T t19_k;
    real_T t57_j;
    real_T t64;
    real_T t65_p;
    real_T t68_h;
    real_T t69_n;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp_bx;
    real_T out1_tmp_mt;
    real_T out1_tmp_kv;
    real_T out1_tmp_b4w;
    real_T out1_tmp_l1g;
    real_T out1_tmp_g5i;
    real_T out1_tmp_g2;
    real_T out1_tmp_n4p;
    real_T out1_tmp_c3;
    real_T s_eo;
    real_T atmp_fb;
    real_T temp_k;
    real_T xnorm_c;
    real_T scale_d;
    real_T absxk_m;
    real_T t_jc;
    real_T xnorm_cf;
    real_T b_alpha1_tmp;
    real_T scale_d4;
    real_T absxk_p;
    real_T t_a;
    real_T b_index;
    real_T scale_m;
    real_T absxk_n;
    real_T t_k;
    real_T bkj_p;
    real_T bkj_k;
    real_T c_g;
    real_T normH;
    real_T absx_h;
    real_T ssq;
    real_T c_l;
    real_T s_o;
    real_T atmp_a;
    real_T tau_idx_0;
    real_T scale_n;
    real_T absxk_o;
    real_T t_d;
    SL_Bus_proc_control_std_msgs_UInt8 In1_i2;// '<S338>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_e;// '<S74>/In1'
    SL_Bus_proc_control_std_msgs_Float32 In1_om;// '<S81>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_f1;// '<S341>/In1'
    SL_Bus_proc_control_std_msgs_Bool In1_cx;// '<S337>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_h[8];
    boolean_T umin_incr_flag_h[8];
    boolean_T bv3[8];
    uint32_T b_u[2];
    int32_T s1_size[2];
    int32_T b_s1_size[2];
    int32_T s1_size_a[2];
    int32_T s1_size_k[2];
    int32_T str_size[2];
    int32_T str_size_j[2];
    int32_T charValue_size[2];
    int32_T str_size_d[2];
    int32_T s1_size_p[2];
    int32_T s1_size_d[2];
    int32_T s1_size_b[2];
    int32_T s1_size_o[2];
    int32_T s1_size_j[2];
    int32_T s1_size_pc[2];
    int32_T s1_size_l[2];
    int32_T s1_size_c[2];
    int32_T s1_size_m[2];
    int32_T s1_size_h[2];
    int32_T s1_size_aw[2];
    int32_T s1_size_oq[2];
    int32_T s1_size_i[2];
    int32_T s1_size_e[2];
    int32_T s1_size_az[2];
    int32_T s1_size_eu[2];
    int32_T s1_size_dz[2];
    int32_T s1_size_lv[2];
    int32_T s1_size_if[2];
    int32_T s1_size_n[2];
    int32_T s1_size_cf[2];
    int32_T s1_size_i4[2];
    int32_T s1_size_d4[2];
    int32_T s1_size_b4[2];
    int32_T Jm_size[2];
    int32_T I1_size[2];
    int32_T I2Jm_size[2];
    int32_T b_H_size[2];
    int32_T Sx_size[2];
    int32_T Su1_size[2];
    int32_T Hv_size[2];
    int32_T Ku1_size[2];
    int32_T Kx_size[2];
    int32_T varargin_4_size[2];
    int32_T cb_size[2];
    int32_T tmp_size[2];
    int32_T tmp_size_a[2];
    int32_T Cineq_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T varargin_1_size_b[2];
    int32_T tmp_size_n[2];
    int32_T Jx_b[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_p[2];
    int32_T b_x_size[2];
    int32_T b_H_size_i[2];
    int32_T b_A_size[2];
    int32_T tmp_size_k[2];
    int32_T idx[2];
    int32_T tmp_size_c[2];
    int32_T tmp_size_nc[2];
    int32_T tmp_size_b[2];
    int32_T tmp_size_m[2];
    int32_T tmp_size_mr[2];
    int32_T tmp_size_n2[2];
    int32_T tmp_size_mz[2];
    int32_T tmp_size_l[2];
    int32_T tmp_size_o[2];
    int32_T tmp_size_i[2];
    int32_T tmp_size_p[2];
    int32_T tmp_size_nm[2];
    int32_T tmp_size_c0[2];
    int32_T tmp_size_e[2];
    int32_T tmp_size_j[2];
    int32_T tmp_size_l2[2];
    int32_T tmp_size_jt[2];
    int32_T tmp_size_c3[2];
    int32_T in4_size[2];
    int32_T b_size_b[2];
    boolean_T b_i[4];
    int16_T Jx_kz[2];
    int16_T varargin_2[2];
    int16_T Je_l[2];
    real32_T rtb_Merge4_Data;
    int32_T b_k;
    int32_T nbMatches;
    int32_T itoken;
    int32_T f_j;
    int32_T idx_m;
    int32_T ntoread;
    int32_T b_idx;
    int32_T ixlast;
    int32_T Ns;
    int32_T Ns_j;
    int32_T i;
    int32_T loop_ub;
    int32_T d_size;
    int32_T e_size;
    int32_T b_x_size_e;
    int32_T B_size;
    int32_T str_size_idx_1;
    int32_T cleanStr_size_idx_1;
    int32_T replaced_size_idx_1;
    int32_T pny;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ii;
    int32_T c_t;
    int32_T i_d;
    int32_T pny_j;
    int32_T varargin_1;
    int32_T i_input_sizes_idx_1;
    int32_T nmoves_tmp;
    int32_T isMrows_size;
    int32_T tmp_size_k1;
    int32_T Mv_aux_size_idx_0;
    int32_T Su1_size_idx_0;
    int32_T Mv_aux_size_idx_1_tmp;
    int32_T j_tmp;
    int32_T Su1_data_tmp;
    int32_T i_o;
    int32_T i1;
    int32_T varargin_1_n;
    int32_T i2;
    int32_T loop_ub_b;
    int32_T i3;
    int32_T loop_ub_i;
    int32_T loop_ub_d;
    int32_T input_sizes_idx_0;
    int32_T i4;
    int32_T CA_tmp;
    int32_T varargin_1_size_idx_1;
    int32_T mc;
    int32_T coffset;
    int32_T boffset;
    int32_T aoffset;
    int32_T j_d;
    int32_T i_p;
    int32_T b_i_e;
    int32_T i5;
    int32_T newNumel;
    int32_T i_n;
    int32_T ii_d;
    int32_T i_m;
    int32_T i6;
    int32_T i7;
    int32_T i_g;
    int32_T I2Jm_tmp;
    int32_T nA;
    int32_T tmp;
    int32_T iSave;
    int32_T i_i;
    int32_T i_ij;
    int32_T U_tmp;
    int32_T b_i_k;
    int32_T d_i_i;
    int32_T c_j;
    int32_T g_i;
    int32_T iC_m;
    int32_T itau;
    int32_T knt;
    int32_T c_lastc;
    int32_T coltop;
    int32_T b_coltop;
    int32_T i_j;
    int32_T jA;
    int32_T jy;
    int32_T ix_a;
    int32_T j_i;
    int32_T b_ec;
    int32_T ijA;
    int32_T b_i_i;
    int32_T i8;
    int32_T i9;
    int32_T b_i_h;
    int32_T Ac_tmp;
    int32_T Ac_tmp_m;
    int32_T j_a;
    int32_T b_k_o;
    int32_T eint;
    int32_T i_os;
    int32_T i10;
    int32_T b_k_n;
    int32_T i11;
    int32_T b_A2_tmp;
    int32_T n_k2;
    int32_T nb;
    int32_T nbitson;
    int32_T n_h;
    int32_T i12;
    int32_T i13;
    int32_T i14;
    int32_T i15;
    int32_T c_tmp;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T QPObjective_nvar;
    int32_T QPObjective_objtype;
    int32_T QPObjective_prev_objtype;
    int32_T QPObjective_prev_nvar;
    int32_T ix_d;
    int32_T ia;
    int32_T i_a;
    int32_T loop_ub_h;
    int32_T tmp_size_cc;
    int32_T tmp_size_bv;
    int32_T y_size_idx_0;
    int32_T mFixed;
    int32_T mIneq_c;
    int32_T mLB;
    int32_T mUB;
    int32_T qpoptions_MaxIterations;
    int32_T mLambda;
    int32_T ix_g;
    int32_T iy;
    int32_T c_p;
    int32_T ia_i;
    int32_T b_ix;
    int32_T b_iy;
    int32_T b_ia;
    int32_T mConstr_tmp;
    int32_T nVar_tmp_tmp;
    int32_T mLinIneq_tmp_tmp;
    int32_T mLinIneq;
    int32_T loop_ub_j;
    int32_T y_size_idx_0_c;
    int32_T i_c;
    int32_T i_f;
    int32_T wtYerr_tmp;
    int32_T sizes_idx_0;
    int32_T k;
    int32_T i_dy;
    int32_T b_size_idx_0;
    int32_T i2_n;
    int32_T ix_b;
    int32_T a_f0;
    int32_T i_j1;
    int32_T c_idx_col;
    int32_T b_k_h;
    int32_T i16;
    int32_T sizes_idx_0_h;
    int32_T c_k;
    int32_T d_k;
    int32_T i_c2;
    int32_T b_c_size;
    int32_T b_size_idx_0_g;
    int32_T i17;
    int32_T loop_ub_e;
    int32_T loop_ub_eq;
    int32_T Jx_idx_0;
    int32_T mc_a;
    int32_T coffset_h;
    int32_T boffset_g;
    int32_T aoffset_a;
    int32_T bkj_g;
    int32_T j_o;
    int32_T i_ak;
    int32_T b_i_e3;
    int32_T i18;
    int32_T b_s;
    int32_T e_j;
    int32_T e_i;
    int32_T i19;
    int32_T b_s_h;
    int32_T A2_tmp;
    int32_T A4_tmp;
    int32_T n_j;
    int32_T nb_b;
    int32_T nbitson_k;
    int32_T b_n;
    int32_T i20;
    int32_T i21;
    int32_T i22;
    int32_T i23;
    int32_T c_tmp_h;
    int32_T i_dd;
    int32_T i_oh;
    int32_T obj_objfun_workspace_runtimed_k;
    int32_T i24;
    int32_T i_k;
    int32_T i_on;
    int32_T U_tmp_d;
    int32_T b_e_l;
    int32_T i_me;
    int32_T i_oi;
    int32_T i25;
    int32_T i26;
    int32_T b_C_tmp;
    int32_T b_Su1_tmp;
    int32_T b_Hv_tmp;
    int32_T i_at;
    int32_T k_i;
    int32_T Ak1_tmp;
    int32_T Jx_tmp;
    int32_T c_tmp_f;
    int32_T b_i_a;
    int32_T loop_ub_g;
    int32_T i27;
    int32_T nA_k;
    int32_T kDrop;
    int32_T kNext;
    int32_T last;
    int32_T idx_l;
    int32_T b_H_e;
    int32_T status;
    int32_T z_size;
    int32_T d_k_e;
    int32_T b_m;
    int32_T b_n_f;
    int32_T RLinv_d;
    int32_T b_A_b;
    int32_T b_A_ol;
    int32_T tau_size;
    int32_T TL_size_idx_0;
    int32_T Q_size_idx_0;
    int32_T R_size_idx_0;
    int32_T b_m_p;
    int32_T n_l;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_do;
    int32_T mmi;
    int32_T mmip1;
    int32_T i_l;
    int32_T knt_a;
    int32_T b_k_nk;
    int32_T c_k_e;
    int32_T jA_n;
    int32_T jy_h;
    int32_T ix_ah;
    int32_T j_b;
    int32_T b_k5;
    int32_T ijA_a;
    int32_T ia_k;
    int32_T i_pa;
    int32_T itau_o;
    int32_T iaii;
    int32_T lastv;
    int32_T lastc;
    int32_T iac;
    int32_T d_c;
    int32_T coltop_k;
    int32_T j_h;
    int32_T i_b;
    int32_T L;
    int32_T k_e;
    int32_T m_co;
    int32_T nr;
    int32_T hoffset;
    int32_T its;
    int32_T bb_tmp;
    int32_T ab_tmp;
    int32_T ab_tmp_o;
    int32_T b_ar;
    int32_T c_pe;
    int32_T coffset_o;
    int32_T aoffset_l;
    int32_T j_f;
    int32_T ii_p;
    int32_T knt_p;
    int32_T ia_b;
    int32_T jA_k;
    int32_T jy_m;
    int32_T ix_gk;
    int32_T j_b5;
    int32_T b_il;
    int32_T ijA_b;
    int32_T k_h;
    int32_T b_i_d;
    int32_T idx_f;
    int32_T i_dk;
    int32_T i_pp;
    int32_T coffset_g;
    int32_T aoffset_f;
    int32_T j_o2;
    int32_T ii_f;
    int32_T knt_o;
    int32_T ia_l;
    int32_T jA_e;
    int32_T jy_g;
    int32_T ix_ba;
    int32_T j_j;
    int32_T b_f;
    int32_T ijA_c;
    int32_T coffset_f;
    int32_T aoffset_b;
    int32_T j_de;
    int32_T ii_j;
    int32_T knt_oe;
    int32_T ia_li;
    int32_T jA_g;
    int32_T jy_mc;
    int32_T ix_gh;
    int32_T j_an;
    int32_T b_ey;
    int32_T ijA_b0;
    int32_T coffset_e;
    int32_T aoffset_m;
    int32_T j_hz;
    int32_T ii_b;
    int32_T knt_d;
    int32_T ia_o;
    int32_T jA_kk;
    int32_T jy_mr;
    int32_T ix_f;
    int32_T j_ox;
    int32_T b_it;
    int32_T ijA_k;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T kAcol;
    int32_T ix_k;
    int32_T iy_n;
    int32_T jA_f;
    int32_T ijA_m;
    int32_T g_k_i;
    int32_T e_k;
    int32_T jj_i;
    int32_T ix_bl;
    int32_T iy_nt;
    int32_T c_ix;
    int32_T c_ir;
    int32_T ijA_n;
    int32_T e_k_m;
    int32_T b_k_p;
    int32_T b_kk;
    int32_T i_k1;
    int32_T i_p3;
    int32_T i28;
    int32_T i29;
    int32_T coffset_eq;
    int32_T aoffset_k;
    int32_T j_br;
    int32_T knt_l;
    int32_T coltop_j;
    int32_T ia_j;
    int32_T jA_kz;
    int32_T jy_p;
    int32_T ix_p;
    int32_T j_e;
    int32_T b_hl;
    int32_T ijA_i;
    int32_T knt_j;
    int32_T i_a2;
    int32_T i30;
    int32_T i31;
    int32_T knt_jh;
    int32_T S_tmp;
    int32_T kend;
    int32_T k_g;
    int32_T in;
    int32_T ia0;
    int32_T b_i_n;
    int32_T knt_lm;
    int32_T lastv_e;
    int32_T ix_c;
    int32_T iac_h;
    int32_T jA_o;
    int32_T i_dz;
    int32_T work_tmp;
    int32_T b_i_tmp;
    int32_T kend_d;
    int32_T k_j;
    int32_T ibmat;
    int32_T b_jcol;
    int32_T b_itilerow;
    int32_T b_index_f;
    int32_T loop_ub_tmp;
    int32_T i_k2;
    int32_T coffset_n;
    int32_T boffset_n;
    int32_T c_i_i;
    int32_T loop_ub_e4;
    int32_T i32;
    int32_T i33;
    int32_T i34;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T stride_2_0;
    int32_T stride_0_1;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T loop_ub_k;
    int32_T loop_ub_k3;
    int32_T i35;
    int32_T mc_p;
    int32_T coffset_k;
    int32_T boffset_p;
    int32_T j_p;
    int32_T i_bp;
    int32_T b_i_c;
    int32_T i36;
    int32_T nbMatches_d;
    int32_T i_c0;
    int32_T k_a;
    int32_T b_n_i;
    int32_T replaced_size_idx_1_d;
    int32_T s_fo;
    int32_T u_n;
    int32_T i37;
    int32_T isMrows_tmp;
    int32_T tmp_size_g;
    int32_T ibcol;
    int32_T itilerow;
    int32_T k_o;
    int32_T s_m;
    int32_T u_h;
    int32_T i38;
    int32_T isMrows_tmp_e;
    int32_T tmp_size_mw;
    int32_T ibcol_i;
    int32_T itilerow_h;
    int32_T i_nm;
    int32_T itau_e;
    int32_T iaii_e;
    int32_T ic0;
    int32_T lastv_o;
    int32_T lastc_o;
    int32_T coltop_f;
    int32_T b_ia_m;
    int32_T ix_gf;
    int32_T b_iy_c;
    int32_T b_kb;
    int32_T iac_d;
    int32_T d_cm;
    int32_T ia_kn;
    int32_T b_degrees;
    int32_T emlN;
    int32_T Tries;
    int32_T loop_ub_kl;
    int32_T tmp_size_f;
    int32_T loop_ub_tmp_g;
    int32_T idxAjj;
    int32_T j_k;
    int32_T iy_nk;
    int32_T iac_p;
    int32_T d_e2;
    int32_T ia_l3;
    int32_T b_ix_a;
    int32_T b_iy_e;
    int32_T b_k_g;
    int32_T in2_f;
    int32_T stride_0_1_e;
    int32_T stride_1_1_n;
    int32_T loop_ub_m;
    int32_T in2_size_idx_1;
    int32_T i39;
    int32_T stride_0_0_b;
    int32_T stride_1_0_n;
    int32_T loop_ub_c;
    int32_T in1_size_idx_0;
    int32_T coffset_m;
    int32_T aoffset_j;
    int32_T j_hu;
    int32_T knt_c;
    int32_T coltop_m;
    int32_T kend_n;
    int32_T k_ef;
    int32_T loop_ub_ce;
    uint32_T receivedLength;
    uint32_T b_q;
    uint32_T r_b;
    uint32_T y_py;
    SL_Bus_proc_control_std_msgs_Float32 b_varargout_2_ik;
    SL_Bus_proc_control_std_msgs_Float32 BusAssignment_h;// '<S90>/Bus Assignment' 
    char_T expl_temp_o[3];
    int8_T empty_non_axis_sizes[2];
    int8_T empty_non_axis_sizes_n[2];
    int8_T empty_non_axis_sizes_m[2];
    int16_T b_Mrows;
    int16_T j_m;
    int16_T ixw;
    int16_T sizes;
    int16_T ixw_d;
    uint8_T empty_non_axis_sizes_i[2];
    uint8_T empty_non_axis_sizes_e[2];
    uint8_T empty_non_axis_sizes_k[2];
    uint8_T varargin_1_p[2];
    int8_T rtPrevAction;
    int8_T rtAction;
    int8_T sizes_idx_1;
    int8_T pny1_j;
    int8_T sizes_idx_1_c;
    int8_T b_ipiv_b;
    int8_T ipiv_l;
    uint8_T CastToDouble;              // '<S3>/Cast To Double'
    uint8_T ZeroOrderHold_c;           // '<S10>/Zero-Order Hold'
    uint8_T mode;                      // '<S321>/Data Type Conversion'
    uint8_T u_nx;
    uint8_T i_al;
    uint8_T sizes_idx_1_n;
    uint8_T i_dy3;
    uint8_T b_idx_0;
    boolean_T NOT;                     // '<S240>/NOT'
    boolean_T isReached;               // '<S9>/Merge'
    boolean_T isTrajDone;              // '<S9>/Merge'
    boolean_T SourceBlock_o1;          // '<S307>/SourceBlock'
    boolean_T blockOrdering_o;         // '<S285>/Correct'
    boolean_T thrustersStatus[8];      // '<S128>/MPC manager'
    boolean_T success;
    boolean_T foundsign;
    boolean_T c_success;
    boolean_T mask2;
    boolean_T b_varargout_1;
    boolean_T b_varargout_1_g;
    boolean_T Merge;                   // '<S3>/Merge'
    boolean_T NewDvlMsg;               // '<S3>/Merge3'
    boolean_T newPressureMsg;          // '<S3>/Merge6'
    boolean_T empty_non_axis_sizes_f;
    boolean_T b_Del_Save_Flag0;
    boolean_T cTolComputed;
    boolean_T DualFeasible;
    boolean_T ColdReset;
    boolean_T recomputeDiags;
    boolean_T firstmult;
    boolean_T aBufferInUse;
    boolean_T cBufferInUse;
    boolean_T QPObjective_hasLinear;
    boolean_T QPObjective_prev_hasLinear;
    boolean_T isFeasible;
    boolean_T tooSmallX;
    boolean_T y_g;
    boolean_T y_l;
    boolean_T recomputeDiags_l;
    boolean_T firstmult_o;
    boolean_T aBufferInUse_k;
    boolean_T cBufferInUse_g;
    boolean_T cTolComputed_k;
    boolean_T isT1Inf;
    boolean_T tempOK;
    boolean_T p_j;
    boolean_T goto150;
    boolean_T b_isvalid;
    boolean_T isempty;
    boolean_T y_kt;
    boolean_T VECTOR_INPUT_AND_P_IS_INF;
    boolean_T MATRIX_INPUT_AND_P_IS_INF;
    boolean_T haspoint;
    SL_Bus_proc_control_std_msgs_Bool b_varargout_2_g;
    SL_Bus_proc_control_std_msgs_Bool BusAssignment_h0;
    SL_Bus_proc_control_std_msgs_UInt8 b_varargout_2_me;
    char_T b_y_tmp;
    char_T c_kr;
    B_CurrentTime_proc_control_T CurrentTime_e;// '<S100>/Current Time'
    B_CurrentTime_proc_control_T CurrentTime;// '<S100>/Current Time'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S302>/MATLAB System'
    MultiTrajectoryManager_proc_c_T obj_o;// '<S301>/MATLAB System'
    mpcManager_proc_control_T obj_f;   // '<S128>/MPC manager'
    String2DoubleArray_proc_c_pr3_T obj_l;// '<S323>/MATLAB System11'
    TrimPlant_proc_control_T obj_b;    // '<S130>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_fo;// '<S329>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_oe;// '<S328>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_bm;// '<S327>/MATLAB System'
    String2DoubleArray_proc_contr_T obj_e;// '<S326>/MATLAB System'
    String2DoubleArray_proc_pr351_T obj_f5;// '<S323>/MATLAB System6'
    String2DoubleArray_proc_con_p_T obj_bn;// '<S330>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_p;// '<S329>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_g;// '<S329>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_fb;// '<S328>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_i;// '<S328>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_b0;// '<S327>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_n;// '<S327>/MATLAB System1'
    String2DoubleArray_proc_con_p_T obj_a;// '<S326>/MATLAB System2'
    String2DoubleArray_proc_con_p_T obj_ew;// '<S326>/MATLAB System1'
    String2DoubleArray_proc__pr35_T obj_d;// '<S323>/MATLAB System5'
    String2DoubleArray_proc__pr35_T obj_oo;// '<S323>/MATLAB System4'
    String2DoubleArray_proc__pr35_T obj_c;// '<S323>/MATLAB System3'
    String2DoubleArray_proc_co_pr_T obj_a0;// '<S323>/MATLAB System9'
    String2DoubleArray_proc_co_pr_T obj_ig;// '<S323>/MATLAB System8'
    String2DoubleArray_proc_co_pr_T obj_fbb;// '<S323>/MATLAB System7'
    String2DoubleArray_proc_co_pr_T obj_k;// '<S323>/MATLAB System2'
    String2DoubleArray_proc_co_pr_T obj_o0;// '<S323>/MATLAB System10'
    String2DoubleArray_proc_co_pr_T obj_cn;// '<S323>/MATLAB System1'
    OpenLoopController_proc_contr_T obj_m;// '<S132>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_j;// '<S317>/Rotation Trajectory'
    robotics_slcore_internal_bl_p_T obj_jo;// '<S319>/Polynomial Trajectory1'
    AddPose_proc_control_T obj_ab;     // '<S302>/MATLAB System1'
    rosCommandManager_proc_contro_T obj_mv;// '<S321>/MATLAB System'
    HydroModel_proc_control_T obj_fj;  // '<S33>/MATLAB System'
    ros_slros_internal_block_Curr_T obj_oi;// '<S169>/Current Time'
    ros_slros_internal_block_GetP_T obj_iu;// '<S323>/Get Parameter9'
    ros_slros_internal_block_GetP_T obj_fr;// '<S323>/Get Parameter8'
    ros_slros_internal_block_GetP_T obj_ez;// '<S323>/Get Parameter7'
    ros_slros_internal_block_GetP_T obj_jm;// '<S323>/Get Parameter6'
    ros_slros_internal_block_GetP_T obj_lz;// '<S323>/Get Parameter5'
    ros_slros_internal_block_GetP_T obj_n2;// '<S323>/Get Parameter4'
    ros_slros_internal_block_GetP_T obj_de;// '<S323>/Get Parameter3'
    ros_slros_internal_block_GetP_T obj_lr;// '<S323>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_a0t;// '<S323>/Get Parameter15'
    ros_slros_internal_block_GetP_T obj_n1;// '<S323>/Get Parameter14'
    ros_slros_internal_block_GetP_T obj_lm;// '<S323>/Get Parameter13'
    ros_slros_internal_block_GetP_T obj_gr;// '<S323>/Get Parameter12'
    ros_slros_internal_block_GetP_T obj_nu;// '<S323>/Get Parameter11'
    ros_slros_internal_block_GetP_T obj_pv;// '<S323>/Get Parameter10'
    ros_slros_internal_block_GetP_T obj_h;// '<S323>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_nw;// '<S323>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_gy;// '<S325>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_mh;// '<S325>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_iy;// '<S325>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_er;// '<S324>/Get Parameter3'
    ros_slros_internal_block_GetP_T obj_f0;// '<S324>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_fk;// '<S324>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_kc;// '<S324>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_im;// '<S330>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_ll;// '<S329>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_ps;// '<S329>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_hs;// '<S329>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_j2;// '<S328>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_l4;// '<S328>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_hu;// '<S328>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_ku;// '<S327>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_frx;// '<S327>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_k2;// '<S327>/Get Parameter'
    ros_slros_internal_block_GetP_T obj_kf;// '<S326>/Get Parameter2'
    ros_slros_internal_block_GetP_T obj_dj;// '<S326>/Get Parameter1'
    ros_slros_internal_block_GetP_T obj_f1;// '<S326>/Get Parameter'
    ros_slroscpp_internal_block_P_T obj_ik;// '<S311>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ba;// '<S171>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ag;// '<S125>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_eb;// '<S121>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_i1;// '<S117>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_po;// '<S113>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_og;// '<S112>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_ap;// '<S107>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_cs;// '<S104>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_abu;// '<S102>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kd;// '<S98>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_kw;// '<S96>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_dt;// '<S41>/SinkBlock'
    ros_slroscpp_internal_block_P_T obj_jj;// '<S27>/SinkBlock'
    ros_slroscpp_internal_block_S_T obj_bh;// '<S336>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_fx;// '<S335>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hh;// '<S334>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_oz;// '<S333>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_mt;// '<S332>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hb;// '<S331>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hd;// '<S315>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df;// '<S307>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_csq;// '<S305>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hhu;// '<S232>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_k4;// '<S231>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_p0;// '<S71>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ow;// '<S70>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_dh;// '<S69>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_lu;// '<S68>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_hx;// '<S79>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_bg;// '<S78>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_df1;// '<S77>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_i4;// '<S76>/SourceBlock'
    ros_slroscpp_internal_block_S_T obj_ne;// '<S42>/SourceBlock'
    real_T _DSTATE[8];                 // '<S242>/ '
    real_T Delay_DSTATE_e;             // '<S321>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S317>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S262>/Delay'
    real_T Delay_DSTATE_k;             // '<S129>/Delay'
    real_T Delay_DSTATE_a[8];          // '<S134>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S209>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S209>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S209>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S176>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S133>/Delay1'
    real_T UD_DSTATE[6];               // '<S172>/UD'
    real_T Delay1_DSTATE_e[8];         // '<S130>/Delay1'
    real_T last_mv_DSTATE_f[8];        // '<S138>/last_mv'
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
    real_T P[169];                     // '<S284>/DataStoreMemory - P'
    real_T x[13];                      // '<S284>/DataStoreMemory - x'
    real_T Drift_NextOutput[6];        // '<S12>/ Drift'
    real_T NextOutput;                 // '<S28>/White Noise'
    real_T NextOutput_b;               // '<S29>/White Noise'
    real_T NextOutput_g;               // '<S30>/White Noise'
    real_T NextOutput_l;               // '<S31>/White Noise'
    real_T NextOutput_e;               // '<S32>/White Noise'
    int32_T clockTickCounter;          // '<S134>/Pulse Generator'
    int32_T clockTickCounter_g;        // '<S133>/Pulse Generator'
    int32_T clockTickCounter_j;        // '<S130>/Pulse Generator'
    int32_T counter[6];                // '<S12>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S129>/N to A'
    uint32_T m_bpIndex_c[8];           // '<S129>/N to PWM'
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
    uint16_T Delay_DSTATE_g[8];        // '<S7>/Delay'
    boolean_T Delay1_DSTATE_c;         // '<S302>/Delay1'
    boolean_T DelayInput1_DSTATE;      // '<S312>/Delay Input1'
    boolean_T init_a;                  // '<S1>/MATLAB System'
    int8_T If_ActiveSubsystem;         // '<S10>/If'
    int8_T SwitchCase_ActiveSubsystem; // '<S9>/Switch Case'
    int8_T If_ActiveSubsystem_i;       // '<S7>/If'
    int8_T SwitchCase_ActiveSubsystem_l;// '<S127>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S1>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S1>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator2_IC_LOAD;// '<S1>/Discrete-Time Integrator2'
    boolean_T icLoad;                  // '<S209>/mv_Delay'
    boolean_T icLoad_a;                // '<S209>/x_Delay'
    boolean_T icLoad_j;                // '<S209>/slack_delay'
    boolean_T Memory_PreviousInput[226];// '<S176>/Memory'
    boolean_T Memory_PreviousInput_g[226];// '<S138>/Memory'
    boolean_T Memory_PreviousInput_i;  // '<S87>/Memory'
    boolean_T Memory_PreviousInput_f;  // '<S88>/Memory'
    boolean_T state_not_empty_e;       // '<S33>/MATLAB System'
    boolean_T ROSOutput_MODE;          // '<Root>/ROS Output'
    boolean_T Plotvalues_MODE;         // '<Root>/Plot values'
    boolean_T ModlePhysique_MODE;      // '<Root>/Modèle Physique'
    DW_CurrentTime_proc_control_T CurrentTime_e;// '<S100>/Current Time'
    DW_CurrentTime_proc_control_T CurrentTime;// '<S100>/Current Time'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState Trajectorygenerator_Reset_ZCE;// '<S302>/Trajectory generator'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                             //  Referenced by:
                                             //    '<S14>/ y devant Z haut'
                                             //    '<S14>/Constant'
                                             //    '<S132>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S321>/MATLAB System'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S129>/N to A'
                                          //    '<S129>/N to PWM'
                                          //    '<S16>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S16>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S132>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S12>/ Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S12>/ Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S12>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S129>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S11>/ PWM to N'
                                          //    '<S129>/N to PWM'

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
                                 //  Referenced by: '<S172>/UD'

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
                                        //  Referenced by: '<S312>/Delay Input1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Out1_Y0;// Computed Parameter: Out1_Y0
                                                                    //  Referenced by: '<S308>/Out1'

    SL_Bus_proc_control_MultiDOFJointTrajectoryPo_2ndf9w Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S307>/Constant'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                                //  Referenced by: '<S233>/Out1'

    SL_Bus_proc_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S231>/Constant'

    SL_Bus_proc_control_sonia_common_MpcInfo Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                 //  Referenced by: '<S115>/Constant'

    SL_Bus_proc_control_sonia_common_MpcGains Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                           //  Referenced by: '<S234>/Out1'

    SL_Bus_proc_control_sonia_common_MpcGains Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                  //  Referenced by: '<S232>/Constant'

    SL_Bus_proc_control_std_msgs_Int16MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S25>/Constant'

    SL_Bus_proc_control_std_msgs_UInt16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                      //  Referenced by: '<S109>/Constant'

    SL_Bus_proc_control_std_msgs_Int8MultiArray Constant_Value_lv;// Computed Parameter: Constant_Value_lv
                                                                     //  Referenced by: '<S108>/Constant'

    mpcParams MPC_Y0;                  // Computed Parameter: MPC_Y0
                                          //  Referenced by: '<S320>/MPC'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_fw;// Computed Parameter: Constant_Value_fw
                                                               //  Referenced by: '<S122>/Constant'

    SL_Bus_proc_control_nav_msgs_Odometry Constant_Value_ck;// Computed Parameter: Constant_Value_ck
                                                               //  Referenced by: '<S168>/Constant'

    physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S320>/physics Constants'

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

    SL_Bus_proc_control_sonia_common_PingAngles Out1_Y0_cv;// Computed Parameter: Out1_Y0_cv
                                                              //  Referenced by: '<S83>/Out1'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_oi;// Computed Parameter: Constant_Value_oi
                                                                     //  Referenced by: '<S79>/Constant'

    SL_Bus_proc_control_sonia_common_PingAngles Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                             //  Referenced by: '<S75>/Out1'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                    //  Referenced by: '<S71>/Constant'

    SL_Bus_proc_control_sonia_common_PingAngles Constant_Value_k5;// Computed Parameter: Constant_Value_k5
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
                                                          //  Referenced by: '<S318>/Out1'

    SL_Bus_proc_control_sonia_common_AddPose Constant_Value_lq;// Computed Parameter: Constant_Value_lq
                                                                  //  Referenced by: '<S315>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                                //  Referenced by: '<S105>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_cd;// Computed Parameter: Constant_Value_cd
                                                                //  Referenced by: '<S309>/Constant'

    SL_Bus_proc_control_geometry_msgs_Pose Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S342>/Out1'

    SL_Bus_proc_control_geometry_msgs_Pose Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                               //  Referenced by: '<S336>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurments_Y0;// Computed Parameter: DVLMeasurments_Y0
                                                       //  Referenced by: '<S237>/DVL Measurments'

    SL_Bus_proc_control_geometry_msgs_Twist Out1_Y0_pb;// Computed Parameter: Out1_Y0_pb
                                                          //  Referenced by: '<S306>/Out1'

    SL_Bus_proc_control_geometry_msgs_Twist Constant_Value_hg;// Computed Parameter: Constant_Value_hg
                                                                 //  Referenced by: '<S305>/Constant'

    SL_Bus_proc_control_geometry_msgs_Vector3 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                           //  Referenced by: '<S44>/Out1'

    SL_Bus_proc_control_geometry_msgs_Vector3 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                  //  Referenced by: '<S42>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                          //  Referenced by: '<S120>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                   //  Referenced by: '<S337>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_ok;// Computed Parameter: Constant_Value_ok
                                                           //  Referenced by: '<S331>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                   //  Referenced by: '<S339>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_kd;// Computed Parameter: Constant_Value_kd
                                                           //  Referenced by: '<S333>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_os;// Computed Parameter: Out1_Y0_os
                                                    //  Referenced by: '<S340>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                          //  Referenced by: '<S334>/Constant'

    SL_Bus_proc_control_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                   //  Referenced by: '<S341>/Out1'

    SL_Bus_proc_control_std_msgs_Bool Constant_Value_pt;// Computed Parameter: Constant_Value_pt
                                                           //  Referenced by: '<S335>/Constant'

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
                                                     //  Referenced by: '<S338>/Out1'

    SL_Bus_proc_control_std_msgs_UInt8 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                           //  Referenced by: '<S332>/Constant'

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

    real_T InitialBodyvelocity1_Value[3];// Expression: [0,0,0]
                                            //  Referenced by: '<S1>/Initial Body velocity 1'

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

    real_T Constant_Value_pr;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S100>/Constant'

    real_T Constant1_Value_a;          // Expression: SetFrameID
                                          //  Referenced by: '<S100>/Constant1'

    real_T Constant_Value_lo;          // Expression: MPC.nx
                                          //  Referenced by: '<S114>/Constant'

    real_T Constant1_Value_d;          // Expression: MPC.nu
                                          //  Referenced by: '<S114>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S5>/thrust'

    real_T Constant_Value_j;           // Expression: InsertTimeStamp
                                          //  Referenced by: '<S123>/Constant'

    real_T Constant1_Value_l;          // Expression: SetFrameID
                                          //  Referenced by: '<S123>/Constant1'

    real_T Constant_Value_a5;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S169>/Constant'

    real_T Constant1_Value_d4;         // Expression: SetFrameID
                                          //  Referenced by: '<S169>/Constant1'

    real_T Delay1_InitialCondition[8]; // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S130>/Delay1'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S135>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S135>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S135>/G_zero'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S138>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S135>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S138>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S138>/last_mv'

    real_T Constant_Value_e3[6];       // Expression: zeros(1,6)
                                          //  Referenced by: '<S130>/Constant'

    real_T Constant1_Value_mt[2];      // Expression: zeros(1,2)
                                          //  Referenced by: '<S130>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S138>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S135>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S135>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S135>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S138>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S138>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S135>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S138>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S135>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S135>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S138>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S135>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S138>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S130>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S130>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S130>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S130>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S132>/MATLAB System'

    real_T Constant_Value_d1;          // Expression: 0
                                          //  Referenced by: '<S132>/Constant'

    real_T Constant1_Value_p;          // Expression: 0
                                          //  Referenced by: '<S132>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S172>/TSamp'

    real_T Constant_Value_ct[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S133>/Constant'

    real_T last_mv_InitialCondition_o[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S176>/last_mv'

    real_T ym_zero_Value_l[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S176>/ym_zero'

    real_T md_zero_Value_n;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S174>/md_zero'

    real_T ymin_zero_Value_n[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S174>/ymin_zero'

    real_T ymax_zero_Value_h[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S174>/ymax_zero'

    real_T E_zero_Value_l[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S174>/E_zero'

    real_T umin_scale4_Gain_h[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S176>/umin_scale4'

    real_T F_zero_Value_o[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S174>/F_zero'

    real_T ymin_scale1_Gain_e[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S176>/ymin_scale1'

    real_T G_zero_Value_k;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S174>/G_zero'

    real_T S_zero_Value_h;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S174>/S_zero'

    real_T ymin_scale2_Gain_a;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S176>/ymin_scale2'

    real_T switch_zero_Value_d;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S174>/switch_zero'

    real_T extmv_zero_Value_n[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S174>/ext.mv_zero'

    real_T extmv_scale_Gain_n[8];      // Expression: RMVscale
                                          //  Referenced by: '<S176>/ext.mv_scale'

    real_T mvtarget_zero_Value_i[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S174>/mv.target_zero'

    real_T uref_scale_Gain_h[8];       // Expression: RMVscale
                                          //  Referenced by: '<S176>/uref_scale'

    real_T ecrwt_zero_Value_h;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S174>/ecr.wt_zero'

    real_T Delay1_InitialCondition_n[88];// Expression: zeros(11,8)
                                            //  Referenced by: '<S133>/Delay1'

    real_T Delay2_InitialCondition[143];// Expression: repmat(MPC.Xi.',11,1)
                                           //  Referenced by: '<S133>/Delay2'

    real_T Constant3_Value;            // Expression: MPC.Ts
                                          //  Referenced by: '<S133>/Constant3'

    real_T Constant1_Value_k;          // Expression: MPC.dts
                                          //  Referenced by: '<S133>/Constant1'

    real_T LastPcov_InitialCondition_d[441];// Expression: lastPcov
                                               //  Referenced by: '<S176>/LastPcov'

    real_T u_scale_Gain_i[8];          // Expression: MVscale
                                          //  Referenced by: '<S176>/u_scale'

    real_T PulseGenerator_Amp_i;       // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Period_e;    // Expression: 2
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_Duty_j;      // Expression: 1
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_i;// Expression: 0
                                          //  Referenced by: '<S133>/Pulse Generator'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S176>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S176>/useq_scale1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S134>/Delay'

    real_T md_zero_Value_c;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S207>/md_zero'

    real_T mvtarget_zero_Value_g[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S207>/mv.target_zero'

    real_T ymin_zero_Value_j[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S207>/y.min_zero'

    real_T ymax_zero_Value_g[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S207>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S207>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S207>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S207>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S207>/x.max_zero'

    real_T ecrwt_zero_Value_a;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S207>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S207>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S209>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S209>/Constant1'

    real_T Constant_Value_cr[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S209>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S207>/e.init_zero'

    real_T PulseGenerator_Amp_p;       // Expression: 1
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_Period_e5;   // Expression: 20
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_Duty_f;      // Expression: 10
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_d;// Expression: 0
                                          //  Referenced by: '<S134>/Pulse Generator'

    real_T Constant_Value_mg;          // Expression: 0
                                          //  Referenced by: '<S131>/Constant'

    real_T Constant1_Value_n[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S131>/Constant1'

    real_T Constant2_Value_p;          // Expression: 0
                                          //  Referenced by: '<S131>/Constant2'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

    real_T Merge_2_InitialOutput;   // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S127>/Merge'

    real_T Delay_InitialCondition_i;   // Expression: 0.0
                                          //  Referenced by: '<S129>/Delay'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S265>/Quat'

    real_T u2_Gain_b;                  // Expression: 0.5
                                          //  Referenced by: '<S266>/1//2'

    real_T Constant1_Value_aa;
                             // Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S237>/Constant1'

    real_T Constant6_Value;            // Expression: 0
                                          //  Referenced by: '<S262>/Constant6'

    real_T Delay_InitialCondition_l;   // Expression: 1
                                          //  Referenced by: '<S262>/Delay'

    real_T Constant_Value_fg;          // Expression: 0.5
                                          //  Referenced by: '<S268>/Constant'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S268>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S268>/Gain1'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S268>/Gain2'

    real_T Constant_Value_j5;          // Expression: 0.5
                                          //  Referenced by: '<S269>/Constant'

    real_T Gain_Gain_mq;               // Expression: 2
                                          //  Referenced by: '<S269>/Gain'

    real_T Gain1_Gain_bk;              // Expression: 2
                                          //  Referenced by: '<S269>/Gain1'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S269>/Gain2'

    real_T Constant_Value_ol;          // Expression: 0.5
                                          //  Referenced by: '<S270>/Constant'

    real_T Gain_Gain_nh;               // Expression: 2
                                          //  Referenced by: '<S270>/Gain'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S270>/Gain1'

    real_T Gain2_Gain_br;              // Expression: 2
                                          //  Referenced by: '<S270>/Gain2'

    real_T DepthMeasurments_Y0;       // Computed Parameter: DepthMeasurments_Y0
                                         //  Referenced by: '<S238>/Depth Measurments'

    real_T Constant_Value_ay;          // Expression: 0.5
                                          //  Referenced by: '<S278>/Constant'

    real_T Gain_Gain_bk;               // Expression: 2
                                          //  Referenced by: '<S278>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S278>/Gain1'

    real_T Gain2_Gain_dh;              // Expression: 2
                                          //  Referenced by: '<S278>/Gain2'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S241>/xhat'

    real_T Constant_Value_lx;          // Expression: 1
                                          //  Referenced by: '<S241>/Constant'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S284>/Q'

    real_T R3_Value;                   // Expression: p.R{3}
                                          //  Referenced by: '<S284>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S284>/MeasurementFcn3Inputs'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S284>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S284>/MeasurementFcn2Inputs'

    real_T R1_Value[49];               // Expression: p.R{1}
                                          //  Referenced by: '<S284>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S284>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S284>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S284>/DataStoreMemory - x'

    real_T Constant7_Value[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S297>/Constant7'

    real_T Constant3_Value_f;          // Expression: MPC.p
                                          //  Referenced by: '<S297>/Constant3'

    real_T MATLABSystem_linearConvergence;// Expression: .25
                                             //  Referenced by: '<S302>/MATLAB System'

    real_T MATLABSystem_quaternionConverge;// Expression: .22
                                              //  Referenced by: '<S302>/MATLAB System'

    real_T MATLABSystem_TargetThreshold;// Expression: 2
                                           //  Referenced by: '<S302>/MATLAB System'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S314>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S314>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S314>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S314>/target'

    real_T Constant1_Value_o;          // Expression: 0
                                          //  Referenced by: '<S314>/Constant1'

    real_T Out1_Y0_i;                  // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S316>/Out1'

    real_T PolynomialTrajectory1_VelocityB[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S319>/Polynomial Trajectory1'

    real_T Constant_Value_ep;          // Expression: 1
                                          //  Referenced by: '<S317>/Constant'

    real_T DiscreteTimeIntegrator_gainva_e;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_e
                             //  Referenced by: '<S317>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S317>/Discrete-Time Integrator'

    real_T Constant_Value_ha;          // Expression: 0
                                          //  Referenced by: '<S302>/Constant'

    real_T Constant_Value_m5[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S295>/Constant'

    real_T Constant3_Value_o;          // Expression: MPC.p
                                          //  Referenced by: '<S295>/Constant3'

    real_T Delay_InitialCondition_c;   // Expression: 0
                                          //  Referenced by: '<S321>/Delay'

    real_T Constant_Value_pu;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T _InitialCondition[8];       // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S242>/ '

    real_T Delay_InitialCondition_j;   // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

    real_T Gain_Gain_g;                // Expression: -1
                                          //  Referenced by: '<S298>/Gain'

    real_T Merge_1_InitialOutput_l;
                                  // Computed Parameter: Merge_1_InitialOutput_l
                                     //  Referenced by: '<S9>/Merge'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S9>/Merge'

    std::string StringConstant1_String;
                                   // Computed Parameter: StringConstant1_String
                                      //  Referenced by: '<S100>/String Constant1'

    std::string StringConstant1_String_p;
                                 // Computed Parameter: StringConstant1_String_p
                                    //  Referenced by: '<S123>/String Constant1'

    std::string StringConstant1_String_f;
                                 // Computed Parameter: StringConstant1_String_f
                                    //  Referenced by: '<S169>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S204>/FixedHorizonOptimizer'

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
                                              //  Referenced by: '<S138>/Memory'

    boolean_T Memory_InitialCondition_p[226];// Expression: iA
                                                //  Referenced by: '<S176>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S285>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_o;    // Computed Parameter: yBlockOrdering_Y0_o
                                         //  Referenced by: '<S286>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_i;    // Computed Parameter: yBlockOrdering_Y0_i
                                         //  Referenced by: '<S287>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S284>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S284>/Enable1'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S284>/Enable3'

    boolean_T Constant1_Value_ds;      // Expression: false
                                          //  Referenced by: '<S297>/Constant1'

    boolean_T Constant2_Value_l;       // Expression: false
                                          //  Referenced by: '<S297>/Constant2'

    boolean_T Constant_Value_hm;       // Computed Parameter: Constant_Value_hm
                                          //  Referenced by: '<S313>/Constant'

    boolean_T Delay1_InitialCondition_k;
                                // Computed Parameter: Delay1_InitialCondition_k
                                   //  Referenced by: '<S302>/Delay1'

    boolean_T Constant2_Value_i;       // Expression: false
                                          //  Referenced by: '<S302>/Constant2'

    boolean_T Constant5_Value;         // Expression: false
                                          //  Referenced by: '<S295>/Constant5'

    boolean_T Constant4_Value;         // Expression: false
                                          //  Referenced by: '<S295>/Constant4'

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

  // private member function(s) for subsystem '<S100>/Current Time'
  static void proc_control_CurrentTime_Init(DW_CurrentTime_proc_control_T
    *localDW);
  void proc_control_CurrentTime(B_CurrentTime_proc_control_T *localB);
  static void proc_control_CurrentTime_Term(DW_CurrentTime_proc_control_T
    *localDW);

  // private member function(s) for subsystem '<Root>'
  void proc_control_binary_expand_op(real_T in1[3], const real_T in3_data[],
    const int32_T *in3_size, const real_T in4_data[], const int32_T *in4_size);
  void proc_control_rand(real_T r[3]);
  real_T proc_control_rt_powd_snf(real_T u0, real_T u1);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3(const real_T ct[1042], real_T out1[13]);
  void proc_control_ft_2(const real_T ct[824], real_T out1[13]);
  void proc_control_ft_1(const real_T ct[442], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], const real_T in4[38], real_T out1[13]);
  void proc_control_znlmpc_getXUe(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void proc_control_emxFree_real_T(emxArray_real_T_proc_control_T **pEmxArray);
  void proc_control_emxInit_real_T(emxArray_real_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
  void emxInitStruct_s_j0X3urodUv3ospv(s_j0X3urodUv3ospvkLXsspC_proc_T *pStruct);
  void emxInitStruct_s_Ref0liQlfQOPmAo(s_Ref0liQlfQOPmAop9i3aPH_proc_T *pStruct);
  void emxInitStruct_s_8RbNZtrzTH63iHA(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *pStruct);
  void AUV8QuatJacobianMatrix_wW6vUT_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_AUV8QuatSimFcn_AbfqyrNU(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  void proc_co_stateEvolution_p6X6Q73G(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  void proc_control_all_H4RNf0h2(const boolean_T x[130], boolean_T y[13]);
  boolean_T proc_control_any(const boolean_T x[26]);
  void proc_c_emxEnsureCapacity_real_T(emxArray_real_T_proc_control_T *emxArray,
    int32_T oldNumel);
  void proc_control_mtimes_f(const emxArray_real_T_proc_control_T *A, real_T
    C_data[], int32_T C_size[2]);
  void proc_cont_znlmpc_reformJacobian(const emxArray_real_T_proc_control_T *Jx,
    const emxArray_real_T_proc_control_T *Jmv, const real_T Je_data[], const
    int32_T *Je_size, emxArray_real_T_proc_control_T *Jc);
  void proc_control_outputBounds(const real_T runtimedata_OutputMin[130], const
    real_T runtimedata_OutputMax[130], const real_T X[143], real_T e, real_T
    c_data[], int32_T c_size[2], emxArray_real_T_proc_control_T *Jc);
  void proc_co_eML_blk_kernel_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], emxArray_real_T_proc_control_T *varargout_3, real_T
    varargout_4[18070]);
  void emxInitStruct_s_VA2YLuOkHrWNKQO(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *pStruct);
  void proc_control_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj);
  void emxInitStruct_s_gnTVUZmGpKWoq4t(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *pStruct);
  void proc_cont_factoryConstruct_lnz4(int32_T MaxVars, int32_T *obj_grad_size,
    int32_T *obj_Hx_size, boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_lnz42(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj);
  void proc_control_loadProblem(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj, int32_T
    mIneq, int32_T mLinIneq, const emxArray_real_T_proc_control_T *Aineq,
    int32_T mLB, int32_T mUB, int32_T mFixed, int32_T mConstrMax);
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
  int32_T proc_contr_checkMatrixNonFinite(int32_T ncols, const
    emxArray_real_T_proc_control_T *mat, int32_T col0, int32_T ldm);
  int32_T computeConstraintsAndUserJacobi(const real_T
    obj_nonlcon_workspace_runtimeda[13], const real_T
    obj_nonlcon_workspace_runtime_0[130], const real_T
    obj_nonlcon_workspace_runtime_1[130], int32_T obj_mCineq, const real_T x[139],
    real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130],
    emxArray_real_T_proc_control_T *JacIneqTrans_workspace, int32_T iJI_col,
    int32_T ldJI, emxArray_real_T_proc_control_T *JacEqTrans_workspace, int32_T
    ldJE);
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
    real_T Ceq_workspace[130], emxArray_real_T_proc_control_T
    *JacIneqTrans_workspace, int32_T iJI_col, int32_T ldJI,
    emxArray_real_T_proc_control_T *JacEqTrans_workspace, int32_T ldJE, real_T
    *fval, int32_T *status);
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
    *obj_ldq, emxArray_real_T_proc_control_T *obj_QR,
    emxArray_real_T_proc_control_T *obj_Q, int32_T obj_jpvt_data[], int32_T
    *obj_jpvt_size, int32_T *obj_mrows, int32_T *obj_ncols, int32_T
    *obj_tau_size, int32_T *obj_minRowCol, boolean_T *obj_usedPivoting);
  void proc_contr_factoryConstruct_lnz(int32_T MaxDims,
    emxArray_real_T_proc_control_T *obj_FMat, int32_T *obj_ldm, int32_T
    *obj_ndims, int32_T *obj_info, real_T *obj_scaleFactor, boolean_T
    *obj_ConvexCheck, real_T *obj_regTol_, real_T *obj_workspace_, real_T
    *obj_workspace2_);
  void proc_control_xgemv_m(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    int32_T ix0, real_T y_data[]);
  void proc_control_computeGradLag(real_T workspace_data[], int32_T ldA, int32_T
    nVar, const real_T grad_data[], int32_T mIneq, const
    emxArray_real_T_proc_control_T *AineqTrans, const
    emxArray_real_T_proc_control_T *AeqTrans, const int32_T finiteFixed_data[],
    int32_T mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[139], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_contr_emxCopyMatrix_real_T(real_T dst[139], const real_T src[139]);
  void proc_control_emxCopy_real_T_580(emxArray_real_T_580_proc_cont_T *dst,
    const emxArray_real_T_580_proc_cont_T *src);
  void proc_cont_emxCopyMatrix_real_T1(real_T dst[130], const real_T src[130]);
  void proc_control_emxCopy_real_T_980(emxArray_real_T_980_proc_cont_T *dst,
    const emxArray_real_T_980_proc_cont_T *src);
  void proc_contro_emxCopy_real_T_1829(emxArray_real_T_1829_proc_con_T *dst,
    const emxArray_real_T_1829_proc_con_T *src);
  void proc_contr_emxCopy_int32_T_1829(emxArray_int32_T_1829_proc_co_T *dst,
    const emxArray_int32_T_1829_proc_co_T *src);
  void proc_control_emxCopy_real_T(emxArray_real_T_proc_control_T **dst,
    emxArray_real_T_proc_control_T * const *src);
  void emxCopyStruct_s_VA2YLuOkHrWNKQO(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *dst,
    const s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *src);
  void proc_control_saveJacobian(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj, int32_T
    nVar, int32_T mIneq, const emxArray_real_T_proc_control_T *JacCineqTrans,
    int32_T ineqCol0, const emxArray_real_T_proc_control_T *JacCeqTrans, int32_T
    ldJ);
  void proc_control_saveState(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *obj);
  void emxFreeStruct_s_VA2YLuOkHrWNKQO(s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *pStruct);
  real_T proc_control_computeComplError(const int32_T
    *fscales_lineq_constraint_size, const int32_T *fscales_cineq_constraint_size,
    const real_T xCurrent[139], int32_T mIneq, const real_T cIneq_data[], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[], int32_T iL0);
  void proc_control_xgemv_mt(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    int32_T ix0, emxArray_real_T_proc_control_T *y);
  void proc_control_computeGradLag_b(emxArray_real_T_proc_control_T *workspace,
    int32_T ldA, int32_T nVar, const real_T grad_data[], int32_T mIneq, const
    emxArray_real_T_proc_control_T *AineqTrans, const
    emxArray_real_T_proc_control_T *AeqTrans, const int32_T finiteFixed_data[],
    int32_T mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  void proc_con_computeDualFeasError_b(int32_T nVar, const
    emxArray_real_T_proc_control_T *gradLag, boolean_T *gradOK, real_T *val);
  void proc_updateWorkingSetForNewQP_l(const real_T xk[139],
    s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet, int32_T mIneq, int32_T
    mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], int32_T mLB,
    const real_T lb[139], int32_T mUB, int32_T mFixed);
  real_T proc_control_xnrm2_m(int32_T n, const emxArray_real_T_proc_control_T *x,
    int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  real_T proc_control_xzlarfg(int32_T n, real_T *alpha1,
    emxArray_real_T_proc_control_T *x, int32_T ix0);
  void proc_control_xgemv_mtm(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T ia0, int32_T lda, const
    emxArray_real_T_proc_control_T *x, int32_T ix0, real_T y_data[]);
  void proc_control_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], emxArray_real_T_proc_control_T *A, int32_T ia0,
    int32_T lda);
  void proc_control_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
    emxArray_real_T_proc_control_T *C, int32_T ic0, int32_T ldc, real_T
    work_data[]);
  void proc_control_qrf(emxArray_real_T_proc_control_T *A, int32_T m, int32_T n,
                        int32_T nfxd, real_T tau_data[]);
  void proc_control_xswap(int32_T n, emxArray_real_T_proc_control_T *x, int32_T
    ix0, int32_T iy0);
  void proc_control_qrpf(emxArray_real_T_proc_control_T *A, int32_T m, int32_T n,
    int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
  void proc_control_xgeqp3(emxArray_real_T_proc_control_T *A, int32_T m, int32_T
    n, int32_T jpvt_data[], real_T tau_data[], int32_T *tau_size);
  void proc_control_factorQRE(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, const
    emxArray_real_T_proc_control_T *A, int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_xorgqr_k(int32_T m, int32_T n, int32_T k,
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T tau_data[]);
  void proc_control_computeQ_(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, int32_T
    nrows);
  void proc_control_xgemv_mtmc(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    emxArray_real_T_proc_control_T *y);
  void proc_control_xtrsv(int32_T n, const emxArray_real_T_proc_control_T *A,
    int32_T lda, emxArray_real_T_proc_control_T *x);
  void proc_control_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], emxArray_real_T_proc_control_T
    *workspace);
  int32_T proc_control_ixamax(int32_T n, const real_T x_data[]);
  void proc_control_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T *fscales_lineq_constraint_size, const int32_T *
    fscales_cineq_constraint_size, s_gnTVUZmGpKWoq4tCE9AGn_proc__T *WorkingSet,
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, s_Ref0liQlfQOPmAop9i3aPH_proc_T
    *QRManager, const real_T lb[139]);
  void proc_contro_xgemv_mtmcjbiadz2ic(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T ia0, int32_T lda, const real_T
    x_data[], int32_T ix0, real_T y_data[]);
  boolean_T proc_control_BFGSUpdate(int32_T nvar, real_T Bk[19321], const real_T
    sk_data[], real_T yk_data[], emxArray_real_T_proc_control_T *workspace);
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
  void proc_control_xgeqrf_d(emxArray_real_T_proc_control_T *A, int32_T m,
    int32_T n, real_T tau_data[], int32_T *tau_size);
  void proc_control_factorQR_h(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, const
    emxArray_real_T_proc_control_T *A, int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_factorQR(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj, int32_T mrows,
    int32_T ncols);
  void proc_control_xgemv_mtmcjb(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const
    emxArray_real_T_proc_control_T *x, real_T y_data[]);
  void proc_control_xgemv_mtmcj(int32_T n, const emxArray_real_T_proc_control_T *
    A, int32_T lda, const emxArray_real_T_proc_control_T *x, real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    const emxArray_real_T_proc_control_T *x);
  void proc_control_xgemv_mtmcjbi(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const
    emxArray_real_T_proc_control_T *x, int32_T ix0, real_T y_data[]);
  real_T proc_c_maxConstraintViolation_d(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *obj,
    const emxArray_real_T_proc_control_T *x, int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(emxArray_real_T_proc_control_T
    *workspace, real_T xCurrent_data[], s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager);
  void proc_con_RemoveDependentIneq__f(s_gnTVUZmGpKWoq4tCE9AGn_proc__T
    *workingset, s_Ref0liQlfQOPmAop9i3aPH_proc_T *qrmanager,
    s_j0X3urodUv3ospvkLXsspC_proc_T *memspace);
  void proc_control_xgemv_mtmcjbiad(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    real_T y_data[]);
  void proc_control_xgemv_mtmcjbia(int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    real_T y_data[]);
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
    *obj, emxArray_real_T_proc_control_T *workspace, const real_T f_data[],
    const real_T x_data[]);
  void proc_control_deleteColMoveEnd(s_Ref0liQlfQOPmAop9i3aPH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_strcmp(const char_T a[7]);
  void proc_control_xgemm(int32_T m, int32_T n, int32_T k, const real_T A[19321],
    int32_T lda, const emxArray_real_T_proc_control_T *B, int32_T ib0, int32_T
    ldb, emxArray_real_T_proc_control_T *C, int32_T ldc);
  void proc_control_xgemm_m(int32_T m, int32_T n, int32_T k, const
    emxArray_real_T_proc_control_T *A, int32_T ia0, int32_T lda, const
    emxArray_real_T_proc_control_T *B, int32_T ldb,
    emxArray_real_T_proc_control_T *C, int32_T ldc);
  int32_T proc_control_ixamax_k(int32_T n, const emxArray_real_T_proc_control_T *
    x, int32_T incx);
  void proc_control_fullColLDL2_(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj, int32_T
    LD_offset, int32_T NColsRemain);
  void proc_control_partialColLDL3_(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_xpotrf_h(int32_T n, emxArray_real_T_proc_control_T *A,
    int32_T lda);
  void proc_control_xgemv_mtmcjbiadz2(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T ia0, int32_T lda, const
    emxArray_real_T_proc_control_T *x, real_T y_data[]);
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
  void proc_control_xgemv_mtmcjbiadz2i(int32_T m, int32_T n, const
    emxArray_real_T_proc_control_T *A, int32_T lda, const real_T x_data[],
    emxArray_real_T_proc_control_T *y);
  void proc_control_feasibleratiotest(const real_T solution_xstar_data[], const
    real_T solution_searchDir_data[], emxArray_real_T_proc_control_T *workspace,
    int32_T workingset_nVar, int32_T workingset_ldA, const
    emxArray_real_T_proc_control_T *workingset_Aineq, const real_T
    workingset_bineq_data[], const real_T workingset_lb_data[], const int32_T
    workingset_indexLB_data[], const int32_T workingset_sizes[5], const int32_T
    workingset_isActiveIdx[6], const boolean_T workingset_isActiveConstr_data[],
    const int32_T workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha,
    boolean_T *newBlocking, int32_T *constrType, int32_T *constrIdx);
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
    emxArray_real_T_proc_control_T *workspace, const real_T H[19321], const
    real_T f_data[], const real_T x_data[]);
  real_T proc_control_computeFval(const s_wbACub5hw4pAYPfHb1hrsB_proc_T *obj,
    emxArray_real_T_proc_control_T *workspace, const real_T H[19321], const
    real_T f_data[], const real_T x_data[]);
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
  void proc_contro_emxCopy_int32_T_980(emxArray_int32_T_980_proc_con_T *dst,
    const emxArray_int32_T_980_proc_con_T *src);
  void proc_cont_emxCopyMatrix_int32_T(int32_T dst[130], const int32_T src[130]);
  void proc_con_emxCopyMatrix_int32_T1(int32_T dst[5], const int32_T src[5]);
  void proc_con_emxCopyMatrix_int32_T2(int32_T dst[6], const int32_T src[6]);
  void proc_con_emxCopy_boolean_T_1829(emxArray_boolean_T_1829_proc__T *dst,
    const emxArray_boolean_T_1829_proc__T *src);
  void emxCopyStruct_s_gnTVUZmGpKWoq4t(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *dst,
    const s_gnTVUZmGpKWoq4tCE9AGn_proc__T *src);
  void emxFreeStruct_s_gnTVUZmGpKWoq4t(s_gnTVUZmGpKWoq4tCE9AGn_proc__T *pStruct);
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
    const emxArray_real_T_proc_control_T *AineqT, const real_T bineq_data[],
    int32_T ldAi);
  real_T proc_control_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const
    emxArray_real_T_proc_control_T *WorkingSet_Aineq,
    s_VA2YLuOkHrWNKQO7FEpyoH_proc_T *TrialState, real_T
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
  void emxFreeStruct_s_8RbNZtrzTH63iHA(s_8RbNZtrzTH63iHAPCwMh6G_proc_T *pStruct);
  void emxFreeStruct_s_Ref0liQlfQOPmAo(s_Ref0liQlfQOPmAop9i3aPH_proc_T *pStruct);
  void emxFreeStruct_s_j0X3urodUv3ospv(s_j0X3urodUv3ospvkLXsspC_proc_T *pStruct);
  void proc_control_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, real_T fun_workspace_userdata_Ts, const real_T
    fun_workspace_userdata_CurrentS[13], const real_T
    fun_workspace_userdata_LastMV[8], const real_T
    fun_workspace_userdata_Referenc[130], const real_T
    fun_workspace_userdata_MVTarget[80], real_T fun_workspace_userdata_Predicti,
    real_T fun_workspace_userdata_NumOfSta, real_T
    fun_workspace_userdata_NumOfOut, real_T fun_workspace_userdata_NumOfInp,
    const real_T fun_workspace_userdata_MVIndex[8], const real_T x0[139], const
    emxArray_real_T_proc_control_T *Aineq, const real_T bineq_data[], const
    int32_T *bineq_size, const real_T lb[139], const
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlcon_workspace_runtimedata, const
    s6FZHgorTEIlMmVIrDGGTjF_proc__T *nonlcon_workspace_userdata, real_T x[139],
    real_T *fval, real_T *exitflag, real_T *output_iterations, real_T
    *output_funcCount, char_T output_algorithm[3], real_T
    *output_constrviolation, real_T *output_stepsize, real_T
    *output_lssteplength, real_T *output_firstorderopt);
  void proc_control_znlmpc_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    emxArray_real_T_proc_control_T *A, real_T Bu_data[], int32_T *Bu_size);
  void mpc_constraintcoefLTV_j7mSZmy_g(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
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
  void proc_control_emxFree_int32_T(emxArray_int32_T_proc_control_T **pEmxArray);
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
    b_degrees, const real_T Kx_data[], const emxArray_real_T_proc_control_T *Kr,
    const emxArray_real_T_proc_control_T *rseq, const real_T Ku1_data[], const
    real_T old_u[8], const real_T Kv_data[], const int32_T Kv_size[2], const
    emxArray_real_T_proc_control_T *vseq, const real_T Kut_data[], const int32_T
    Kut_size[2], const real_T b_utarget_data[], const real_T Linv_data[], const
    int32_T Linv_size[2], const real_T Hinv_data[], const int32_T Hinv_size[2],
    const emxArray_real_T_proc_control_T *b_Ac, const
    emxArray_real_T_proc_control_T *Bc, const emxArray_boolean_T_proc_contr_T
    *iA, real_T zopt_data[], int32_T *zopt_size, real_T f_data[], int32_T
    *f_size, real_T *status);
  void proc_control_mtimes_k(const emxArray_real_T_proc_control_T *b_A, const
    emxArray_real_T_proc_control_T *b_B, real_T b_C_data[], int32_T b_C_size[2]);
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
    const emxArray_real_T_proc_control_T *in2, const
    emxArray_real_T_proc_control_T *in3, real_T in4_data[], int32_T in4_size[2],
    real_T in5[8], real_T in6_data[], int32_T in6_size[2], real_T in7_data[],
    int32_T in7_size[2]);
  void proc_control_mtimes_kc(const real_T b_A_data[], const int32_T b_A_size[2],
    const emxArray_real_T_proc_control_T *b_B, real_T b_C_data[], int32_T
    b_C_size[2]);
  void proc_contr_binary_expand_op_pr3(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const
    emxArray_real_T_proc_control_T *in3, const real_T in4_data[], const int32_T
    in4_size[2], real_T in5_data[], int32_T in5_size[2]);
  void proc_contr_mpc_calculatehessian(const real_T b_Wy[13], const real_T b_Wu
    [8], const real_T b_Wdu[8], const emxArray_real_T_proc_control_T *SuJm,
    const real_T I2Jm_data[], const int32_T I2Jm_size[2], const real_T Jm_data[],
    const int32_T Jm_size[2], const real_T I1_data[], const int32_T I1_size[2],
    const real_T Su1_data[], const int32_T Su1_size[2], const real_T Sx_data[],
    const int32_T Sx_size[2], const real_T Hv_data[], const int32_T Hv_size[2],
    real_T b_H_data[], int32_T b_H_size[2], real_T Ku1_data[], int32_T Ku1_size
    [2], real_T Kut_data[], int32_T Kut_size[2], real_T Kx_data[], int32_T
    Kx_size[2], real_T Kv_data[], int32_T Kv_size[2],
    emxArray_real_T_proc_control_T *Kr);
  void proc_control_mtimes(const emxArray_real_T_proc_control_T *b_A, const
    real_T b_B_data[], const int32_T b_B_size[2], emxArray_real_T_proc_control_T
    *b_C);
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
    const real_T Jm_data[], const int32_T Jm_size[2],
    emxArray_real_T_proc_control_T *SuJm, real_T Sx_data[], int32_T Sx_size[2],
    real_T Su1_data[], int32_T Su1_size[2], real_T Hv_data[], int32_T Hv_size[2]);
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
  void proc_control_mldivide(const real_T A[36], const real_T B[48], real_T Y[48]);
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
  void proc_control_AUV8QuatSimFcn(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  real_T proc_control_norm_pr(const real_T x[4]);
  void proc_control_mldivide_p(const real_T A[36], const real_T B[36], real_T Y
    [36]);
  void proc_control_TrimPlant_stepImpl(TrimPlant_proc_control_T *b_this, const
    real_T u[8], real_T y[13], const real_T ref[130], real_T constMec_rho,
    real_T constMec_g, real_T constMec_mass, real_T constMec_volume, real_T
    constMec_sub_height, const real_T constMec_rg[3], const real_T constMec_rb[3],
    const real_T constMec_cdl[6], const real_T constMec_cdq[6], const real_T
    constMec_added_mass[6], const real_T constMec_I[9], const real_T
    constMec_thrusters[48], real_T A[169], real_T B[104], real_T C[169], real_T
    D[104], real_T U[8], real_T Y[13], real_T X[13], real_T DX[13], real_T
    b_ref[130], real_T Z[13]);
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_T *b_this);
  real_T proc_control_norm_pr3(const real_T x[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    real_T reset, const real_T poses[13], const real_T target[7], const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_control_ppval_p(const real_T pp_breaks[4], const real_T pp_coefs[36],
    real_T x, real_T v[3]);
  void p_binary_expand_op_pr351ewpk3k4(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void pr_binary_expand_op_pr351ewpk3k(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void pro_binary_expand_op_pr351ewpk3(real_T in1_data[], int32_T in1_size[2],
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
  void proc_contro_binary_expand_op_pr(real_T in1[3], const real_T in3_data[],
    const int32_T *in3_size, const real_T in4_data[], const int32_T *in4_size);
  void MultiTrajectoryManager_resetImp(MultiTrajectoryManager_proc_c_T *b_this);
  void proc_binary_expand_op_pr351ewpk(real_T in1[3], const int32_T in2_data[],
    const int32_T in2_size[2], const real_T in3_data[], const int32_T *in3_size,
    const real_T in4_data[], const int32_T *in4_size);
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
  real_T proc_control_erf_lY1OuNdP(real_T x);
  void AUV8QuatPerturbedSimFc_Tstvmp_b(const real_T in1[13], const real_T in2[6],
    const real_T in3[8], real_T out1[13]);
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
  void proc_control_emxFree_char_T(emxArray_char_T_proc_control_T **pEmxArray);
  void proc_c_emxEnsureCapacity_char_T(emxArray_char_T_proc_control_T *emxArray,
    int32_T oldNumel);
  void proc_control_emxInit_char_T(emxArray_char_T_proc_control_T **pEmxArray,
    int32_T numDimensions);
  void proc_control_sprintf(real_T varargin_1, emxArray_char_T_proc_control_T
    *str);
  void proc_control_copydigits(const char_T s1_data[], const int32_T s1_size[2],
    int32_T idx, const char_T s_data[], int32_T k, int32_T n, boolean_T
    allowpoint, char_T b_s1_data[], int32_T b_s1_size[2], int32_T *b_idx,
    int32_T *b_k, boolean_T *success);
  void proc__readfloat_pr351ewpk3k4u0o(const char_T s1_data[], const int32_T
    s1_size[2], int32_T idx, const char_T s_data[], int32_T k, int32_T n,
    boolean_T allowimag, char_T b_s1_data[], int32_T b_s1_size[2], int32_T
    *b_idx, int32_T *b_k, boolean_T *isimag, boolean_T *b_finite, real_T *nfv,
    boolean_T *foundsign, boolean_T *success);
  void proc_control_erase(const char_T str_data[], const int32_T str_size[2],
    char_T s_data[], int32_T s_size[2]);
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
//  Block '<S157>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S158>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S159>/Vector Dimension Check' : Unused code path elimination
//  Block '<S160>/Vector Dimension Check' : Unused code path elimination
//  Block '<S161>/Vector Dimension Check' : Unused code path elimination
//  Block '<S162>/Vector Dimension Check' : Unused code path elimination
//  Block '<S163>/Vector Dimension Check' : Unused code path elimination
//  Block '<S164>/Vector Dimension Check' : Unused code path elimination
//  Block '<S138>/last_x' : Unused code path elimination
//  Block '<S165>/Vector Dimension Check' : Unused code path elimination
//  Block '<S138>/useq_scale' : Unused code path elimination
//  Block '<S138>/useq_scale1' : Unused code path elimination
//  Block '<S127>/Display' : Unused code path elimination
//  Block '<S131>/Constant3' : Unused code path elimination
//  Block '<S172>/Data Type Duplicate' : Unused code path elimination
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
//  Block '<S174>/m_zero' : Unused code path elimination
//  Block '<S174>/p_zero' : Unused code path elimination
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
//  Block '<S220>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S221>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S222>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S223>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S224>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S225>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S226>/Vector Dimension Check' : Unused code path elimination
//  Block '<S227>/Vector Dimension Check' : Unused code path elimination
//  Block '<S228>/Vector Dimension Check' : Unused code path elimination
//  Block '<S229>/Vector Dimension Check' : Unused code path elimination
//  Block '<S207>/mv.init_zero' : Unused code path elimination
//  Block '<S207>/x.init_zero' : Unused code path elimination
//  Block '<S235>/Data Type Duplicate' : Unused code path elimination
//  Block '<S235>/Data Type Propagation' : Unused code path elimination
//  Block '<S129>/Scope1' : Unused code path elimination
//  Block '<S129>/Scope2' : Unused code path elimination
//  Block '<S236>/Constant1' : Unused code path elimination
//  Block '<S236>/Discrete-Time Integrator1' : Unused code path elimination
//  Block '<S250>/Product' : Unused code path elimination
//  Block '<S250>/Product1' : Unused code path elimination
//  Block '<S250>/Product2' : Unused code path elimination
//  Block '<S250>/Product3' : Unused code path elimination
//  Block '<S255>/Product' : Unused code path elimination
//  Block '<S255>/Product1' : Unused code path elimination
//  Block '<S255>/Product2' : Unused code path elimination
//  Block '<S255>/Product3' : Unused code path elimination
//  Block '<S255>/Sum' : Unused code path elimination
//  Block '<S254>/sqrt' : Unused code path elimination
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
//  Block '<S256>/Product' : Unused code path elimination
//  Block '<S256>/Product1' : Unused code path elimination
//  Block '<S256>/Product2' : Unused code path elimination
//  Block '<S256>/Product3' : Unused code path elimination
//  Block '<S261>/Product' : Unused code path elimination
//  Block '<S261>/Product1' : Unused code path elimination
//  Block '<S261>/Product2' : Unused code path elimination
//  Block '<S261>/Product3' : Unused code path elimination
//  Block '<S261>/Sum' : Unused code path elimination
//  Block '<S260>/sqrt' : Unused code path elimination
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
//  Block '<S236>/Scope' : Unused code path elimination
//  Block '<S236>/Sum4' : Unused code path elimination
//  Block '<S237>/Scope' : Unused code path elimination
//  Block '<S238>/Discrete Transfer Fcn1' : Unused code path elimination
//  Block '<S273>/Data Type Duplicate' : Unused code path elimination
//  Block '<S273>/Diff' : Unused code path elimination
//  Block '<S273>/TSamp' : Unused code path elimination
//  Block '<S273>/UD' : Unused code path elimination
//  Block '<S276>/Constant' : Unused code path elimination
//  Block '<S276>/Gain' : Unused code path elimination
//  Block '<S276>/Gain1' : Unused code path elimination
//  Block '<S276>/Gain2' : Unused code path elimination
//  Block '<S276>/Product' : Unused code path elimination
//  Block '<S276>/Product1' : Unused code path elimination
//  Block '<S276>/Product2' : Unused code path elimination
//  Block '<S276>/Product3' : Unused code path elimination
//  Block '<S276>/Product4' : Unused code path elimination
//  Block '<S276>/Product5' : Unused code path elimination
//  Block '<S276>/Product6' : Unused code path elimination
//  Block '<S276>/Product7' : Unused code path elimination
//  Block '<S276>/Product8' : Unused code path elimination
//  Block '<S276>/Sum' : Unused code path elimination
//  Block '<S276>/Sum1' : Unused code path elimination
//  Block '<S276>/Sum2' : Unused code path elimination
//  Block '<S276>/Sum3' : Unused code path elimination
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
//  Block '<S239>/Scope' : Unused code path elimination
//  Block '<S239>/Scope1' : Unused code path elimination
//  Block '<S239>/Scope2' : Unused code path elimination
//  Block '<S239>/Scope3' : Unused code path elimination
//  Block '<S285>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S286>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S287>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S289>/RegisterSimulinkFcn' : Unused code path elimination
//  Block '<S284>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S284>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S284>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S284>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S296>/Matrix Concatenate' : Unused code path elimination
//  Block '<S296>/Scope' : Unused code path elimination
//  Block '<S296>/Scope1' : Unused code path elimination
//  Block '<S296>/Scope2' : Unused code path elimination
//  Block '<S296>/Scope3' : Unused code path elimination
//  Block '<S296>/Selector' : Unused code path elimination
//  Block '<S296>/Selector5' : Unused code path elimination
//  Block '<S296>/Selector6' : Unused code path elimination
//  Block '<S296>/Selector7' : Unused code path elimination
//  Block '<S296>/Selector8' : Unused code path elimination
//  Block '<S296>/Sum' : Unused code path elimination
//  Block '<S296>/e angulars rates' : Unused code path elimination
//  Block '<S296>/e position' : Unused code path elimination
//  Block '<S296>/e quaternion' : Unused code path elimination
//  Block '<S296>/e velocity' : Unused code path elimination
//  Block '<S298>/Scope1' : Unused code path elimination
//  Block '<S314>/Display' : Unused code path elimination
//  Block '<S314>/Selector3' : Unused code path elimination
//  Block '<S302>/Scope' : Unused code path elimination
//  Block '<S323>/Display' : Unused code path elimination
//  Block '<S90>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S138>/Reshape' : Reshape block reduction
//  Block '<S138>/Reshape1' : Reshape block reduction
//  Block '<S138>/Reshape2' : Reshape block reduction
//  Block '<S138>/Reshape3' : Reshape block reduction
//  Block '<S138>/Reshape4' : Reshape block reduction
//  Block '<S138>/Reshape5' : Reshape block reduction
//  Block '<S176>/Reshape' : Reshape block reduction
//  Block '<S176>/Reshape1' : Reshape block reduction
//  Block '<S176>/Reshape2' : Reshape block reduction
//  Block '<S176>/Reshape3' : Reshape block reduction
//  Block '<S176>/Reshape4' : Reshape block reduction
//  Block '<S176>/Reshape5' : Reshape block reduction
//  Block '<S208>/Reshape1' : Reshape block reduction
//  Block '<S208>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S208>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S209>/reshape_mv' : Reshape block reduction
//  Block '<S284>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_uState' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S284>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S241>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S241>/Zero-Order Hold1' : Eliminated since input and output rates are identical


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
//  '<S134>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)'
//  '<S135>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller'
//  '<S136>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Bus2Mux'
//  '<S137>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC'
//  '<S139>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/moorx'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Blank Message'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Header Assignment'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/MATLAB Function1'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller list/Adaptive MPC quaternion /Send mesurment residual/Publish'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller list/JoyStick OpenLoop/Discrete Derivative'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /Bus2Mux'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /MATLAB Function2'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S200>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/moorx'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller list/LTV MPC quaternion /LTV MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S225>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S226>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S227>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S228>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S229>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S230>' : 'proc_control/Subsystem Controller/Controller list/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S231>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe'
//  '<S232>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1'
//  '<S233>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe/Enabled Subsystem'
//  '<S234>' : 'proc_control/Subsystem Controller/MPC manager/Subscribe1/Enabled Subsystem'
//  '<S235>' : 'proc_control/Subsystem Controller/Post traitements/PSU safe'
//  '<S236>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S237>' : 'proc_control/Subsystem ProcNav/DVL Mesurments'
//  '<S238>' : 'proc_control/Subsystem ProcNav/Detph Mesurments'
//  '<S239>' : 'proc_control/Subsystem ProcNav/Mux2Bus'
//  '<S240>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S241>' : 'proc_control/Subsystem ProcNav/Subsystem'
//  '<S242>' : 'proc_control/Subsystem ProcNav/Thursters Mesurments'
//  '<S243>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/ '
//  '<S244>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S245>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S246>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S247>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S249>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S251>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S252>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S253>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S254>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S255>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S256>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S257>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S258>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S259>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S260>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S261>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S262>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship'
//  '<S263>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/MATLAB Function1'
//  '<S264>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1'
//  '<S265>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2'
//  '<S266>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/DVL2Ship/Subsystem2/Rotation Angles to Quaternions'
//  '<S267>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S268>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V1'
//  '<S269>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V2'
//  '<S270>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/V3'
//  '<S271>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S272>' : 'proc_control/Subsystem ProcNav/DVL Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S273>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Discrete Derivative'
//  '<S274>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation'
//  '<S275>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S276>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V1'
//  '<S277>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V2'
//  '<S278>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/V3'
//  '<S279>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S280>' : 'proc_control/Subsystem ProcNav/Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S281>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse'
//  '<S282>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S283>' : 'proc_control/Subsystem ProcNav/Mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S284>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter'
//  '<S285>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1'
//  '<S286>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2'
//  '<S287>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3'
//  '<S288>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output'
//  '<S289>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict'
//  '<S290>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct1/Correct'
//  '<S291>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct2/Correct'
//  '<S292>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Correct3/Correct'
//  '<S293>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S294>' : 'proc_control/Subsystem ProcNav/Subsystem/Extended Kalman Filter/Predict/Predict'
//  '<S295>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S296>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S297>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S298>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S299>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S300>' : 'proc_control/Subsystem Trajectory/Subsystem2'
//  '<S301>' : 'proc_control/Subsystem Trajectory/SubsystemAuto'
//  '<S302>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory'
//  '<S303>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function1'
//  '<S304>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function1'
//  '<S305>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2'
//  '<S306>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe2/Enabled Subsystem'
//  '<S307>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S308>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S309>' : 'proc_control/Subsystem Trajectory/Subsystem2/Blank Message5'
//  '<S310>' : 'proc_control/Subsystem Trajectory/Subsystem2/MATLAB Function2'
//  '<S311>' : 'proc_control/Subsystem Trajectory/Subsystem2/Publish5'
//  '<S312>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive'
//  '<S313>' : 'proc_control/Subsystem Trajectory/SubsystemAuto/Detect Rise Positive/Positive'
//  '<S314>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Pre-traitement'
//  '<S315>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe'
//  '<S316>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subsystem1'
//  '<S317>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator'
//  '<S318>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Subscribe/Enabled Subsystem'
//  '<S319>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory/Trajectory generator/Subsystem'
//  '<S320>' : 'proc_control/Subsystem1/Get_ROS_param '
//  '<S321>' : 'proc_control/Subsystem1/ROS Command Manager'
//  '<S322>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters'
//  '<S323>' : 'proc_control/Subsystem1/Get_ROS_param /physics constants'
//  '<S324>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains'
//  '<S325>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/targetReached param'
//  '<S326>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains defaut'
//  '<S327>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 10'
//  '<S328>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 11'
//  '<S329>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains mode 19'
//  '<S330>' : 'proc_control/Subsystem1/Get_ROS_param /MPC_parameters/mpc gains/Gains no dvl'
//  '<S331>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe1'
//  '<S332>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe2'
//  '<S333>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe3'
//  '<S334>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe4'
//  '<S335>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe5'
//  '<S336>' : 'proc_control/Subsystem1/ROS Command Manager/startSim'
//  '<S337>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe1/Enabled Subsystem'
//  '<S338>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe2/Enabled Subsystem'
//  '<S339>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe3/Enabled Subsystem'
//  '<S340>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe4/Enabled Subsystem'
//  '<S341>' : 'proc_control/Subsystem1/ROS Command Manager/Subscribe5/Enabled Subsystem'
//  '<S342>' : 'proc_control/Subsystem1/ROS Command Manager/startSim/Enabled Subsystem'

#endif                                 // RTW_HEADER_proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
