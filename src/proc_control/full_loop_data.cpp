//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: full_loop_data.cpp
//
// Code generated for Simulink model 'full_loop'.
//
// Model version                  : 1.476
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Feb 23 10:23:29 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 8
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "full_loop.h"
#include "full_loop_private.h"

// Block parameters (default storage)
full_loopModelClass::P_full_loop_T full_loopModelClass::full_loop_P = {
  // Variable: N
  //  Referenced by:
  //    '<S5>/N to PWM'
  //    '<S10>/N to PWM'

  { -39.921561783600005, -39.7361560536, -39.4691718024, -38.8907059248,
    -38.267742672, -37.956261045599994, -37.5112872936, -37.288800417600008,
    -36.7993292904, -36.4433502888, -35.8648844112, -35.1974237832,
    -34.5299631552, -33.8625025272, -33.328534024800007, -32.483083896000004,
    -31.9046180184, -31.4151468912, -30.480702012000002, -29.813241384,
    -29.368267632, -28.834299129600005, -28.077843751199996, -27.6773673744,
    -27.1878962472, -26.5649329944, -26.075461867200005, -25.319006488800007,
    -25.0075248624, -24.6070484856, -24.073079983200003, -23.361121980000004,
    -23.094137728800003, -22.337682350399998, -21.937205973599998,
    -21.5367295968, -20.780274218400002, -20.4242952168, -19.8458293392,
    -19.400855587200002, -19.0448765856, -18.243923832, -17.79895008,
    -17.309478952800003, -16.6865157, -16.375034073600002, -15.796568196,
    -15.262599693600002, -14.8621233168, -14.5951390656, -14.1056679384,
    -13.705191561600001, -13.215720434400001, -12.7707466824, -12.3257729304,
    -11.791804428, -11.3913280512, -10.9908516744, -10.812862173600001,
    -10.3233910464, -10.011909420000002, -9.6114330432000017, -9.2554540416,
    -8.8549776648, -8.5434960384, -8.0540249112, -7.6980459095999993,
    -7.2975695328, -7.0305852816000005, -6.67460628, -6.3631246536,
    -6.0516430272000008, -5.6956640256, -5.2951876488, -5.0282033976,
    -4.7167217712000005, -4.3607427696, -4.0937585184000005, -3.782276892,
    -3.4707952656000005, -3.1593136392, -2.8923293880000003, -2.5363503863999997,
    -2.3138635104, -2.0468792592000002, -1.7798950080000002, -1.4684133816000002,
    -1.2459265056000004, -1.0234396296000001, -0.84545012880000014, -0.667460628,
    -0.4894711272, -0.3559790016, -0.0007, -0.0006, -0.0005, -0.0004, -0.0003,
    -0.0002, -0.0001, 0.0, 0.0001, 0.0002, 0.0003, 0.0004, 0.0005, 0.0006,
    0.0007, 0.4004763768, 0.5339685024, 0.7564553784000001, 0.9789422544,
    1.2459265056, 1.5129107568, 1.779895008, 2.1358740096, 2.4473556359999997,
    2.8478320128, 3.1593136392, 3.5152926408000003, 3.9157690176, 4.2717480192,
    4.6277270208, 5.0282033976, 5.4731771496, 5.9181509016, 6.2741299032,
    6.67460628, 7.0750826568, 7.6090511592000007, 8.009527536, 8.5434960384,
    8.89947504, 9.299951416799999, 9.7449251688, 10.145401545599999,
    10.7683647984, 11.213338550400001, 11.6138149272, 12.1477834296,
    12.5482598064, 13.037730933600002, 13.6161968112, 14.1056679384,
    14.5506416904, 15.084610192800001, 15.574081320000001, 16.197044572800003,
    16.5975209496, 17.2649815776, 17.887944830400002, 18.421913332800003,
    18.955881835200003, 19.534347712800002, 20.068316215200003,
    20.824771593600005, 21.358740096000005, 21.759216472800002,
    22.337682350400005, 23.361121980000004, 23.8505931072, 24.696043236000005,
    25.274509113600004, 26.030964492000006, 26.787419870400004,
    27.054404121600005, 27.855356875200005, 28.3448280024, 29.190278131200003,
    29.9467335096, 30.480702012000005, 31.103665264800004, 31.548639016800003,
    32.394089145600006, 33.1060471488, 33.5510209008, 34.4409684048,
    35.375413284000004, 36.1318686624, 36.6658371648, 37.4667899184,
    38.134250546400004, 38.801711174400005, 39.825150804, 40.670600932800006,
    41.738537937600007, 42.228009064800005, 42.984464443200004,
    44.230390948800007, 44.4083804496, 45.609809580000004, 46.188275457600007,
    46.944730836000005, 47.434201963199996, 48.368646842400004,
    49.169599596000005, 49.7925628488, 50.4600234768, 50.771505103200006,
    51.2164788552, 51.4537981896 },

  // Variable: PWM
  //  Referenced by:
  //    '<S5>/N to PWM'
  //    '<S10>/N to PWM'

  { 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0,
    1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0,
    1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0,
    1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0,
    1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0,
    1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0,
    1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0,
    1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0,
    1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0,
    1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0,
    1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0,
    1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0,
    1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0,
    1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0,
    1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0,
    1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0,
    1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0,
    1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0,
    1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0,
    1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0,
    1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0,
    1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0,
    1892.0, 1896.0, 1900.0 },

  // Variable: dMaxX
  //  Referenced by: '<S9>/X Drift'

  0.054107612092052726,

  // Variable: dMaxY
  //  Referenced by: '<S9>/Y Drift'

  2.95824914548265,

  // Variable: dMinX
  //  Referenced by: '<S9>/X Drift'

  -0.17753152238453584,

  // Variable: dMinY
  //  Referenced by: '<S9>/Y Drift'

  -0.799631091396316,

  // Variable: dSeedX
  //  Referenced by: '<S9>/X Drift'

  8.0,

  // Variable: dSeedY
  //  Referenced by: '<S9>/Y Drift'

  9.0,

  // Variable: tmax
  //  Referenced by: '<S26>/Constant6'

  32.0,

  // Variable: tmin
  //  Referenced by: '<S26>/Constant'

  -26.0,

  // Variable: waPhi
  //  Referenced by: '<S9>/Roll Wave'

  1.0,

  // Variable: waPsi
  //  Referenced by: '<S9>/Yaw Wave'

  1.0,

  // Variable: waTheta
  //  Referenced by: '<S9>/Pitch Wave'

  1.0,

  // Variable: waX
  //  Referenced by: '<S9>/X Wave'

  1.0,

  // Variable: waY
  //  Referenced by: '<S9>/Y Wave'

  2.0,

  // Variable: waZ
  //  Referenced by: '<S9>/Z Wave'

  3.0,

  // Variable: wfPhi
  //  Referenced by: '<S9>/Roll Wave'

  1.5707963267948966,

  // Variable: wfPsi
  //  Referenced by: '<S9>/Yaw Wave'

  1.5707963267948966,

  // Variable: wfTheta
  //  Referenced by: '<S9>/Pitch Wave'

  1.5707963267948966,

  // Variable: wfX
  //  Referenced by: '<S9>/X Wave'

  1.5707963267948966,

  // Variable: wfY
  //  Referenced by: '<S9>/Y Wave'

  1.5707963267948966,

  // Variable: wfZ
  //  Referenced by: '<S9>/Z Wave'

  1.5707963267948966,

  // Variable: wpPhi
  //  Referenced by: '<S9>/Roll Wave'

  0.0,

  // Variable: wpPsi
  //  Referenced by: '<S9>/Yaw Wave'

  3.1415926535897931,

  // Variable: wpTheta
  //  Referenced by: '<S9>/Pitch Wave'

  1.5707963267948966,

  // Variable: wpX
  //  Referenced by: '<S9>/X Wave'

  0.0,

  // Variable: wpY
  //  Referenced by: '<S9>/Y Wave'

  1.5707963267948966,

  // Variable: wpZ
  //  Referenced by: '<S9>/Z Wave'

  3.1415926535897931,

  // Mask Parameter: BandLimitedWhiteNoise_Cov
  //  Referenced by: '<S21>/Output'

  2.5E-10,

  // Mask Parameter: BandLimitedWhiteNoise1_Cov
  //  Referenced by: '<S22>/Output'

  4.0E-10,

  // Mask Parameter: BandLimitedWhiteNoise_seed
  //  Referenced by: '<S21>/White Noise'

  23341.0,

  // Mask Parameter: BandLimitedWhiteNoise1_seed
  //  Referenced by: '<S22>/White Noise'

  23341.0,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S23>/Constant'

  {
    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // Pwm

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    }                                  // Pwm_SL_Info
  },

  // Expression: 1
  //  Referenced by: '<S66>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<S67>/Constant'

  1.0,

  // Expression: [0,0,0]
  //  Referenced by: '<S1>/Initial Body velocity '

  { 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S21>/White Noise'

  0.0,

  // Computed Parameter: WhiteNoise_StdDev
  //  Referenced by: '<S21>/White Noise'

  1.0,

  // Expression: [1,0,0,0]
  //  Referenced by: '<Root>/Constant1'

  { 1.0, 0.0, 0.0, 0.0 },

  // Expression: 0.5
  //  Referenced by: '<S57>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S57>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S57>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S57>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S58>/Gain'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S58>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S58>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S58>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S59>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S59>/Gain1'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S59>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S59>/Gain2'

  2.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S6>/Discrete-Time Integrator'

  0.0025,

  // Expression: 0
  //  Referenced by: '<S6>/Discrete-Time Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S6>/Gain1'

  1.0,

  // Expression: 0
  //  Referenced by: '<S22>/White Noise'

  0.0,

  // Computed Parameter: WhiteNoise_StdDev_f
  //  Referenced by: '<S22>/White Noise'

  1.0,

  // Expression: [0,0,0]
  //  Referenced by: '<S1>/Initial Angular Rates'

  { 0.0, 0.0, 0.0 },

  // Expression: [0,0,0,0,0,0,0,0].'
  //  Referenced by: '<S26>/Memory1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S28>/md_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S28>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S28>/y.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S28>/y.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S28>/dmv.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S28>/dmv.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S28>/x.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S28>/x.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S28>/y.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S28>/mv.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S28>/dmv.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S28>/ecr.wt_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S28>/params_zero'

  0.0,

  // Expression: zeros(1,8)
  //  Referenced by: '<S26>/Constant2'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0,0,0.2272,1,0,0,0,0,0,0,0,0,0]
  //  Referenced by: '<S26>/Constant1'

  { 0.0, 0.0, 0.2272, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S26>/Zero'

  0.0,

  // Expression: 2
  //  Referenced by: '<S5>/Constant'

  2.0,

  // Computed Parameter: TransferFcn_A
  //  Referenced by: '<S13>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C
  //  Referenced by: '<S13>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_h
  //  Referenced by: '<S14>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_m
  //  Referenced by: '<S14>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_k
  //  Referenced by: '<S15>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_a
  //  Referenced by: '<S15>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_j
  //  Referenced by: '<S16>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_j
  //  Referenced by: '<S16>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_n
  //  Referenced by: '<S17>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_d
  //  Referenced by: '<S17>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_l
  //  Referenced by: '<S18>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_k
  //  Referenced by: '<S18>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_j1
  //  Referenced by: '<S19>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_g
  //  Referenced by: '<S19>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_d
  //  Referenced by: '<S20>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_c
  //  Referenced by: '<S20>/Transfer Fcn'

  6.666666666666667,

  // Expression: 0
  //  Referenced by: '<S9>/Z Drift'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/X Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/Y Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/Z Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/Roll Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/Pitch Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S9>/Yaw Wave'

  0.0,

  // Expression: [0,0,.2272]
  //  Referenced by: '<Root>/Constant'

  { 0.0, 0.0, 0.2272 },

  // Expression: 0
  //  Referenced by: '<S7>/Memory'

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//
