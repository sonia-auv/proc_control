//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_node_private.h
//
// Code generated for Simulink model 'proc_control_node'.
//
// Model version                  : 1.163
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Nov  7 21:54:48 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_proc_control_node_private_h_
#define RTW_HEADER_proc_control_node_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern uint32_T plook_u32d_binckpang(real_T u, const real_T bp[], uint32_T
  maxIndex, uint32_T *prevIndex);
extern uint32_T plook_u32u16_binckpan(uint16_T u, const uint16_T bp[], uint32_T
  maxIndex, uint32_T *prevIndex);
extern uint32_T binsearch_u32d_prevIdx(real_T u, const real_T bp[], uint32_T
  startIndex, uint32_T maxIndex);
extern uint32_T binsearch_u32u16_prevIdx(uint16_T u, const uint16_T bp[],
  uint32_T startIndex, uint32_T maxIndex);

// private model entry point functions
extern void proc_control_node_derivatives();

#endif                               // RTW_HEADER_proc_control_node_private_h_

//
// File trailer for generated code.
//
// [EOF]
//