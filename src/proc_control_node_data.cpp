//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_node_data.cpp
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
#include "proc_control_node.h"
#include "proc_control_node_private.h"

// Block parameters (default storage)
proc_control_nodeModelClass::P_proc_control_node_T proc_control_nodeModelClass::
  proc_control_node_P = {
  // Variable: MPC
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

  {
    13.0,
    13.0,
    8.0,
    0.1,
    10.0,
    3.0,
    10.0,
    40.0,
    -30.0,

    {
      {
        { 70.0, 60.0, 70.0, 90.0, 90.0, 90.0, 90.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
        },

        { 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2 },

        { 0.1, 0.1, 0.1, 0.1, 0.3, 0.3, 0.3, 0.3 }
      },

      {
        { 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
        },

        { 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2 },

        { 0.4, 0.4, 0.4, 0.4, 0.6, 0.6, 0.6, 0.6 }
      },

      {
        { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0
        },

        { 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2 },

        { 0.1, 0.1, 0.1, 0.1, 0.3, 0.3, 0.3, 0.3 }
      }
    }
  },

  // Variable: physics
  //  Referenced by:
  //    '<S16>/Constant'
  //    '<S72>/Constant'
  //    '<S135>/MATLAB System'
  //    '<S238>/Constant'

  {
    31.0,
    0.0315,
    998.0,
    9.81,
    0.1435,
    0.3,

    { 0.4756, 0.008, 0.004, 0.008, 1.3735, -0.001, 0.004, -0.001, 1.5371 },

    { 0.001, 0.002, 0.018 },

    { 0.002, 0.001, -0.006 },

    { 45.0, 60.0, 70.0, 10.0, 7.0, 15.0 },

    { 1.17, 0.82, 0.756, 0.167, 0.1, 0.102 },

    { 0.12, 0.22, 0.292 },

    { -1.4648, -12.6156, -15.7695, -0.1164, -0.3493, -0.3493 },

    { 0.0, -0.136, 0.178 }
  },

  // Variable: simulation
  //  Referenced by:
  //    '<S72>/ '
  //    '<S72>/  '

  {
    { 119U, 111U, 114U, 108U, 100U },

    { 97U, 117U, 118U, 56U }
  },

  // Variable: Config10
  //  Referenced by: '<S136>/MPC manager'

  { 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2,
    0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.4, 0.4, 0.4, 0.4, 0.6, 0.6, 0.6, 0.6 },

  // Variable: Config19
  //  Referenced by: '<S136>/MPC manager'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 0.2,
    0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.1, 0.1, 0.1, 0.1, 0.3, 0.3, 0.3, 0.3 },

  // Variable: N
  //  Referenced by:
  //    '<S7>/N to PWM'
  //    '<S13>/ PWM to N'

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

  // Variable: Ui
  //  Referenced by: '<S136>/MPC manager'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Variable: binv
  //  Referenced by: '<S135>/MATLAB System'

  { 0.35355339059327379, 0.35355339059327379, 0.35355339059327384,
    0.35355339059327379, -0.11325966850828753, -0.11325966850828727,
    0.11325966850828718, 0.11325966850828745, -0.35355339059327384,
    0.35355339059327373, -0.35355339059327373, 0.35355339059327379,
    -0.12893081761006281, 0.128930817610063, 0.12893081761006286,
    -0.12893081761006295, 1.4543065414234989E-16, 1.6807543137987495E-16,
    1.73485928288418E-16, 1.3535796391773632E-16, -0.25000000000000611,
    0.24999999999999409, -0.24999999999999403, 0.25000000000000616,
    -1.5725561596033818E-16, 6.0446858017370254E-16, -9.9780905568484218E-17,
    -3.3355427083706572E-16, -1.5723270440251562, 1.5723270440251569,
    1.5723270440251567, -1.5723270440251562, 5.9525353991634417E-16,
    -4.3894899494290382E-16, -7.5899831345297663E-16, 5.3283447436302194E-16,
    1.3812154696132604, 1.3812154696132601, -1.3812154696132597,
    -1.3812154696132601, -0.76032987224359927, -0.76032987224359938,
    0.76032987224359916, 0.76032987224359971, -9.1672645525390172E-15,
    8.6123292209463532E-15, 9.14324666311198E-15, -9.1054869706790153E-15 },

  // Variable: constValues
  //  Referenced by: '<S136>/MPC manager'

  { 31.0, 0.0315, 0.3, 0.12, 0.22, 0.292, 0.4756, 0.008, 0.004, 0.008, 1.3735,
    -0.001, 0.004, -0.001, 1.5371, 0.001, 0.002, 0.018, 0.002, 0.001, -0.006,
    45.0, 60.0, 70.0, 10.0, 7.0, 15.0, 1.17, 0.82, 0.756, 0.167, 0.1, 0.102,
    -1.4648, -12.6156, -15.7695, -0.1164, -0.3493, -0.3493, 998.0, 9.81 },

  // Variable: dMaxX
  //  Referenced by: '<S14>/X Drift'

  0.3395186547679343,

  // Variable: dMaxY
  //  Referenced by: '<S14>/Y Drift'

  0.38901098674490664,

  // Variable: dMinX
  //  Referenced by: '<S14>/X Drift'

  -0.20182626085475697,

  // Variable: dMinY
  //  Referenced by: '<S14>/Y Drift'

  -0.030166149180693214,

  // Variable: dSeedX
  //  Referenced by: '<S14>/X Drift'

  1.0,

  // Variable: dSeedY
  //  Referenced by: '<S14>/Y Drift'

  5.0,

  // Variable: dampA
  //  Referenced by: '<S14>/Constant'

  -0.4,

  // Variable: dampB
  //  Referenced by: '<S14>/Constant1'

  1.0,

  // Variable: ratioMax
  //  Referenced by: '<S14>/Saturation'

  1.0,

  // Variable: ratioMin
  //  Referenced by: '<S14>/Saturation'

  0.2,

  // Variable: waPhi
  //  Referenced by: '<S14>/Roll Wave'

  0.25,

  // Variable: waPsi
  //  Referenced by: '<S14>/Yaw Wave'

  0.25,

  // Variable: waTheta
  //  Referenced by: '<S14>/Pitch Wave'

  0.25,

  // Variable: waX
  //  Referenced by: '<S14>/X Wave'

  0.5,

  // Variable: waY
  //  Referenced by: '<S14>/Y Wave'

  1.0,

  // Variable: waZ
  //  Referenced by: '<S14>/Z Wave'

  1.5,

  // Variable: wfPhi
  //  Referenced by: '<S14>/Roll Wave'

  1.0471975511965976,

  // Variable: wfPsi
  //  Referenced by: '<S14>/Yaw Wave'

  1.0471975511965976,

  // Variable: wfTheta
  //  Referenced by: '<S14>/Pitch Wave'

  1.0471975511965976,

  // Variable: wfX
  //  Referenced by: '<S14>/X Wave'

  1.5707963267948966,

  // Variable: wfY
  //  Referenced by: '<S14>/Y Wave'

  1.5707963267948966,

  // Variable: wfZ
  //  Referenced by: '<S14>/Z Wave'

  1.5707963267948966,

  // Variable: wn_l
  //  Referenced by: '<S284>/Gain'

  1.5557249463348581,

  // Variable: wpPhi
  //  Referenced by: '<S14>/Roll Wave'

  0.0,

  // Variable: wpPsi
  //  Referenced by: '<S14>/Yaw Wave'

  3.1415926535897931,

  // Variable: wpTheta
  //  Referenced by: '<S14>/Pitch Wave'

  1.5707963267948966,

  // Variable: wpX
  //  Referenced by: '<S14>/X Wave'

  0.0,

  // Variable: wpY
  //  Referenced by: '<S14>/Y Wave'

  1.5707963267948966,

  // Variable: wpZ
  //  Referenced by: '<S14>/Z Wave'

  3.1415926535897931,

  // Variable: zeta_l
  //  Referenced by: '<S284>/Gain'

  0.99,

  // Variable: PWM
  //  Referenced by:
  //    '<S7>/N to PWM'
  //    '<S13>/ PWM to N'

  { 1100U, 1104U, 1108U, 1112U, 1116U, 1120U, 1124U, 1128U, 1132U, 1136U, 1140U,
    1144U, 1148U, 1152U, 1156U, 1160U, 1164U, 1168U, 1172U, 1176U, 1180U, 1184U,
    1188U, 1192U, 1196U, 1200U, 1204U, 1208U, 1212U, 1216U, 1220U, 1224U, 1228U,
    1232U, 1236U, 1240U, 1244U, 1248U, 1252U, 1256U, 1260U, 1264U, 1268U, 1272U,
    1276U, 1280U, 1284U, 1288U, 1292U, 1296U, 1300U, 1304U, 1308U, 1312U, 1316U,
    1320U, 1324U, 1328U, 1332U, 1336U, 1340U, 1344U, 1348U, 1352U, 1356U, 1360U,
    1364U, 1368U, 1372U, 1376U, 1380U, 1384U, 1388U, 1392U, 1396U, 1400U, 1404U,
    1408U, 1412U, 1416U, 1420U, 1424U, 1428U, 1432U, 1436U, 1440U, 1444U, 1448U,
    1452U, 1456U, 1460U, 1464U, 1468U, 1472U, 1476U, 1480U, 1484U, 1488U, 1492U,
    1496U, 1500U, 1504U, 1508U, 1512U, 1516U, 1520U, 1524U, 1528U, 1532U, 1536U,
    1540U, 1544U, 1548U, 1552U, 1556U, 1560U, 1564U, 1568U, 1572U, 1576U, 1580U,
    1584U, 1588U, 1592U, 1596U, 1600U, 1604U, 1608U, 1612U, 1616U, 1620U, 1624U,
    1628U, 1632U, 1636U, 1640U, 1644U, 1648U, 1652U, 1656U, 1660U, 1664U, 1668U,
    1672U, 1676U, 1680U, 1684U, 1688U, 1692U, 1696U, 1700U, 1704U, 1708U, 1712U,
    1716U, 1720U, 1724U, 1728U, 1732U, 1736U, 1740U, 1744U, 1748U, 1752U, 1756U,
    1760U, 1764U, 1768U, 1772U, 1776U, 1780U, 1784U, 1788U, 1792U, 1796U, 1800U,
    1804U, 1808U, 1812U, 1816U, 1820U, 1824U, 1828U, 1832U, 1836U, 1840U, 1844U,
    1848U, 1852U, 1856U, 1860U, 1864U, 1868U, 1872U, 1876U, 1880U, 1884U, 1888U,
    1892U, 1896U, 1900U },

  // Mask Parameter: BandLimitedWhiteNoise_Cov
  //  Referenced by: '<S25>/Output'

  2.5E-10,

  // Mask Parameter: BandLimitedWhiteNoise1_Cov
  //  Referenced by: '<S26>/Output'

  4.0E-10,

  // Mask Parameter: BandLimitedWhiteNoise2_Cov
  //  Referenced by: '<S27>/Output'

  4.0E-10,

  // Mask Parameter: SecondOrderFilter_FilterType
  //  Referenced by: '<S284>/Constant4'

  1.0,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S213>/UD'

  0.0,

  // Mask Parameter: BandLimitedWhiteNoise_seed
  //  Referenced by: '<S25>/White Noise'

  23341.0,

  // Mask Parameter: BandLimitedWhiteNoise1_seed
  //  Referenced by: '<S26>/White Noise'

  23341.0,

  // Mask Parameter: BandLimitedWhiteNoise2_seed
  //  Referenced by: '<S27>/White Noise'

  23341.0,

  // Mask Parameter: MinMaxRunningResettable_vinit
  //  Referenced by:
  //    '<S67>/Initial Condition'
  //    '<S67>/Memory'

  false,

  // Mask Parameter: MinMaxRunningResettable1_vinit
  //  Referenced by:
  //    '<S68>/Initial Condition'
  //    '<S68>/Memory'

  false,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S105>/Constant'

  {
    {
      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Label

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          },                           // Label_SL_Info
          0U,                          // Size
          0U                           // Stride
        } }
      ,                                // Dim

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // Dim_SL_Info
      0U                               // DataOffset
    },                                 // Layout

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // Data

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    }                                  // Data_SL_Info
  },

  // Computed Parameter: Constant_Value_f
  //  Referenced by: '<S117>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ChildFrameId

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ChildFrameId_SL_Info

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Position

        {
          0.0,                         // X
          0.0,                         // Y
          0.0,                         // Z
          0.0                          // W
        }                              // Orientation
      },                               // Pose

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    },                                 // Pose

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      },                               // Twist

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    }                                  // Twist
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S61>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S58>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Out1_Y0_l
  //  Referenced by: '<S55>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S52>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_g
  //  Referenced by: '<S79>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    },                                 // Orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // OrientationCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // AngularVelocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // AngularVelocityCovariance

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // LinearAcceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // LinearAccelerationCovariance
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S82>/Constant'

  {
    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ModelName

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ModelName_SL_Info

    {
      {
        0.0,                           // X
        0.0,                           // Y
        0.0                            // Z
      },                               // Position

      {
        0.0,                           // X
        0.0,                           // Y
        0.0,                           // Z
        0.0                            // W
      }                                // Orientation
    },                                 // Pose

    {
      {
        0.0,                           // X
        0.0,                           // Y
        0.0                            // Z
      },                               // Linear

      {
        0.0,                           // X
        0.0,                           // Y
        0.0                            // Z
      }                                // Angular
    },                                 // Twist

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ReferenceFrame

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    }                                  // ReferenceFrame_SL_Info
  },

  // Computed Parameter: Out1_Y0_m
  //  Referenced by: '<S62>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header
    0.0,                               // XVelBtm
    0.0,                               // YVelBtm
    0.0,                               // ZVelBtm
    0.0,                               // EVelBtm
    0.0,                               // Velocity1
    0.0,                               // Velocity2
    0.0,                               // Velocity3
    0.0                                // Velocity4
  },

  // Computed Parameter: Constant_Value_k
  //  Referenced by: '<S59>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header
    0.0,                               // XVelBtm
    0.0,                               // YVelBtm
    0.0,                               // ZVelBtm
    0.0,                               // EVelBtm
    0.0,                               // Velocity1
    0.0,                               // Velocity2
    0.0,                               // Velocity3
    0.0                                // Velocity4
  },

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S56>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header
    0.0,                               // XVelBtm
    0.0,                               // YVelBtm
    0.0,                               // ZVelBtm
    0.0,                               // EVelBtm
    0.0,                               // Velocity1
    0.0,                               // Velocity2
    0.0,                               // Velocity3
    0.0                                // Velocity4
  },

  // Computed Parameter: Constant_Value_f2
  //  Referenced by: '<S53>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header
    0.0,                               // XVelBtm
    0.0,                               // YVelBtm
    0.0,                               // ZVelBtm
    0.0,                               // EVelBtm
    0.0,                               // Velocity1
    0.0,                               // Velocity2
    0.0,                               // Velocity3
    0.0                                // Velocity4
  },

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S74>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header
    0.0,                               // XVelBtm
    0.0,                               // YVelBtm
    0.0,                               // ZVelBtm
    0.0,                               // EVelBtm
    0.0,                               // Velocity1
    0.0,                               // Velocity2
    0.0,                               // Velocity3
    0.0                                // Velocity4
  },

  // Computed Parameter: Output_Y0
  //  Referenced by: '<S6>/Output'

  {
    {
      0.0, 0.0, 0.0 }
    ,                                  // World_Position

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // qS2W

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // qW2S

    {
      0.0, 0.0, 0.0 }
    ,                                  // Body_Velocity

    {
      0.0, 0.0, 0.0 }
    // Angular_Rate
  },

  // Computed Parameter: CleanOutput_Y0
  //  Referenced by: '<S1>/Clean Output'

  {
    {
      0.0, 0.0, 0.0 }
    ,                                  // World_Position

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // Quaternion

    {
      0.0, 0.0, 0.0 }
    ,                                  // Linear_Acceleration

    {
      0.0, 0.0, 0.0 }
    ,                                  // Body_Velocity

    {
      0.0, 0.0, 0.0 }
    // Angular_Rate
  },

  // Computed Parameter: Output_Y0_k
  //  Referenced by: '<S4>/Output'

  {
    {
      0.0, 0.0, 0.0 }
    ,                                  // World_Position

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // Quaternion

    {
      0.0, 0.0, 0.0 }
    ,                                  // Linear_Acceleration

    {
      0.0, 0.0, 0.0 }
    ,                                  // Body_Velocity

    {
      0.0, 0.0, 0.0 }
    // Angular_Rate
  },

  // Computed Parameter: SensorsOutput_Y0
  //  Referenced by: '<S1>/Sensors Output'

  {
    0.0,                               // Pressure_Depth

    {
      0.0, 0.0, 0.0, 0.0 }
    ,                                  // Quaternion

    {
      0.0, 0.0, 0.0 }
    ,                                  // Angular_Rate

    {
      0.0, 0.0, 0.0 }
    // DVL_Velocity
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S297>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Position

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Orientation
    0U,                                // Frame
    0U,                                // Speed
    0.0,                               // Fine
    false                              // Rotation
  },

  // Computed Parameter: Constant_Value_lq
  //  Referenced by: '<S294>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Position

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Orientation
    0U,                                // Frame
    0U,                                // Speed
    0.0,                               // Fine
    false                              // Rotation
  },

  // Computed Parameter: Constant_Value_oj
  //  Referenced by: '<S101>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Position

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    }                                  // Orientation
  },

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S305>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Position

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    }                                  // Orientation
  },

  // Computed Parameter: Constant_Value_b
  //  Referenced by: '<S299>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Position

    {
      0.0,                             // X
      0.0,                             // Y
      0.0,                             // Z
      0.0                              // W
    }                                  // Orientation
  },

  // Computed Parameter: Out1_Y0_pb
  //  Referenced by: '<S290>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_hg
  //  Referenced by: '<S285>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S306>/Out1'

  {
    false                              // State
  },

  // Computed Parameter: Constant_Value_ok
  //  Referenced by: '<S300>/Constant'

  {
    false                              // State
  },

  // Computed Parameter: Constant_Value_m
  //  Referenced by: '<S104>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_c
  //  Referenced by: '<S107>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<S115>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S308>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_kd
  //  Referenced by: '<S302>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S309>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_n
  //  Referenced by: '<S303>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S310>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_p
  //  Referenced by: '<S304>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S63>/Out1'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S60>/Constant'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Out1_Y0_nb
  //  Referenced by: '<S57>/Out1'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Constant_Value_oz
  //  Referenced by: '<S54>/Constant'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Constant_Value_bv
  //  Referenced by: '<S77>/Constant'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Constant_Value_ly
  //  Referenced by: '<S106>/Constant'

  {
    0                                  // Data
  },

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S307>/Out1'

  {
    0U                                 // Data
  },

  // Computed Parameter: Constant_Value_a
  //  Referenced by: '<S301>/Constant'

  {
    0U                                 // Data
  },

  // Computed Parameter: TransferFcn_A
  //  Referenced by: '<S17>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C
  //  Referenced by: '<S17>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_j
  //  Referenced by: '<S18>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_m
  //  Referenced by: '<S18>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_h
  //  Referenced by: '<S19>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_l
  //  Referenced by: '<S19>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_i
  //  Referenced by: '<S20>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_f
  //  Referenced by: '<S20>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_jp
  //  Referenced by: '<S21>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_n
  //  Referenced by: '<S21>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_l
  //  Referenced by: '<S22>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_nr
  //  Referenced by: '<S22>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_p
  //  Referenced by: '<S23>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_h
  //  Referenced by: '<S23>/Transfer Fcn'

  6.666666666666667,

  // Computed Parameter: TransferFcn_A_n
  //  Referenced by: '<S24>/Transfer Fcn'

  -6.666666666666667,

  // Computed Parameter: TransferFcn_C_fa
  //  Referenced by: '<S24>/Transfer Fcn'

  6.666666666666667,

  // Expression: 0
  //  Referenced by: '<S14>/Z Drift'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/X Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/Y Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/Z Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/Roll Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/Pitch Wave'

  0.0,

  // Expression: 0
  //  Referenced by: '<S14>/Yaw Wave'

  0.0,

  // Expression: [0,0,0]
  //  Referenced by: '<S1>/Initial Body velocity '

  { 0.0, 0.0, 0.0 },

  // Expression: [0,0,0]
  //  Referenced by: '<S1>/Initial Angular Rates'

  { 0.0, 0.0, 0.0 },

  // Expression: [0,pi,pi/2]
  //  Referenced by: '<S16>/ y devant Z haut'

  { 0.0, 3.1415926535897931, 1.5707963267948966 },

  // Expression: 0
  //  Referenced by: '<S25>/White Noise'

  0.0,

  // Computed Parameter: WhiteNoise_StdDev
  //  Referenced by: '<S25>/White Noise'

  1.0,

  // Expression: 0
  //  Referenced by: '<S26>/White Noise'

  0.0,

  // Computed Parameter: WhiteNoise_StdDev_d
  //  Referenced by: '<S26>/White Noise'

  1.0,

  // Expression: 0
  //  Referenced by: '<S27>/White Noise'

  0.0,

  // Computed Parameter: WhiteNoise_StdDev_e
  //  Referenced by: '<S27>/White Noise'

  1.0,

  // Expression: 0.5
  //  Referenced by: '<S33>/1//2'

  0.5,

  // Expression: 0.5
  //  Referenced by: '<S43>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S43>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S43>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S43>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S44>/Gain'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S44>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S44>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S44>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S45>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S45>/Gain1'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S45>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S45>/Gain2'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S39>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S39>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S39>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S39>/Gain2'

  2.0,

  // Computed Parameter: y_Y0
  //  Referenced by: '<S51>/y'

  0.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Delay'

  0.0,

  // Expression: [pi,0,0]
  //  Referenced by: '<S72>/ENU 2 NED'

  { 3.1415926535897931, 0.0, 0.0 },

  // Expression: 0.5
  //  Referenced by: '<S88>/1//2'

  0.5,

  // Expression: 0.5
  //  Referenced by: '<S96>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S96>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S96>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S96>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S97>/Gain'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S97>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S97>/Gain2'

  2.0,

  // Expression: 2
  //  Referenced by: '<S97>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S98>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S98>/Gain1'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S98>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S98>/Gain2'

  2.0,

  // Expression: 0.0
  //  Referenced by: '<S5>/Delay'

  0.0,

  // Expression: 1
  //  Referenced by: '<S127>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<S128>/Constant'

  1.0,

  // Expression: 180/pi
  //  Referenced by: '<S123>/Gain'

  57.295779513082323,

  // Expression: 180/pi
  //  Referenced by: '<S122>/Gain'

  57.295779513082323,

  // Expression: 0
  //  Referenced by: '<S136>/MPC manager'

  0.0,

  // Expression: [0,0,0,0,0,0,0,0].'
  //  Referenced by: '<S136>/Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S215>/md_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S215>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S215>/y.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S215>/y.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S215>/dmv.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S215>/dmv.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S215>/x.min_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S215>/x.max_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S215>/ecr.wt_zero'

  0.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S215>/params_zero'

  0.0,

  // Expression: 1
  //  Referenced by: '<S136>/Pulse Generator'

  1.0,

  // Expression: 20
  //  Referenced by: '<S136>/Pulse Generator'

  20.0,

  // Expression: 10
  //  Referenced by: '<S136>/Pulse Generator'

  10.0,

  // Expression: 0
  //  Referenced by: '<S136>/Pulse Generator'

  0.0,

  // Expression: 40
  //  Referenced by: '<S135>/MATLAB System'

  40.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant1'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S213>/TSamp'

  10.0,

  // Expression: 1
  //  Referenced by: '<S175>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<S176>/Constant'

  1.0,

  // Expression: zeros(1,8)
  //  Referenced by: '<S137>/E_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,12)
  //  Referenced by: '<S137>/F_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S137>/G_zero'

  0.0,

  // Expression: lastPcov
  //  Referenced by: '<S141>/LastPcov'

  { 0.0032588230377660677, -4.1275350839094379E-8, 1.1748281098086128E-6,
    8.05127114568007E-9, 3.1513477136128155E-5, 2.3970686153696472E-5,
    5.3096391594278218E-5, 2.1218123840040222E-10, 5.5430861389662169E-9,
    6.4667763663882048E-9, -2.499168230190829E-5, 7.0245990604459193E-7,
    -4.5138459352980595E-9, -4.6145023324909495E-5, -8.2540332953721349E-5,
    -3.0635371107114478E-10, -3.7662987924193285E-8, -2.0296046332545188E-9,
    1.3284048777445004E-5, -1.3359405614940576E-6, -4.1275350839094379E-8,
    0.0024439090753805518, 2.0233296857857033E-6, -2.4075576721129816E-5,
    -5.2145098119032704E-9, 9.4763268181772763E-6, -3.2294943632715166E-10,
    2.9869671323421069E-5, 7.5096775232575847E-9, 1.5097622123689812E-5,
    -9.4916538051833043E-9, 5.051330864531298E-7, 3.2340366000564354E-5,
    2.887889905741404E-9, 2.66793864680632E-10, -4.65438512165173E-5,
    -5.0803739335742766E-8, -7.32896156098396E-6, 1.0168499504145662E-9,
    -5.0539005864200322E-7, 1.1748281098086128E-6, 2.0233296857857033E-6,
    0.0028343357953646044, -9.210410013285046E-7, 4.5356989598119825E-7,
    6.4201929708740307E-7, 6.60050098493026E-8, 9.880956446690247E-8,
    4.0187442760804664E-5, 8.4532272843157308E-7, -4.6137467895422315E-7,
    3.0884065457233419E-8, 1.2546193024564188E-6, -6.2083478141713568E-7,
    -6.4374935578056042E-8, -9.7335260222213172E-8, -6.3975120616676637E-5,
    -2.7682653562502535E-7, 1.4173044565180949E-7, -3.82047503495363E-8,
    8.05127114568007E-9, -2.4075576721129816E-5, -9.210410013285046E-7,
    7.3160598247651055E-5, 4.06778919248893E-9, -1.6878391332583937E-6,
    -6.2491897471116345E-9, -1.572647297120449E-5, -9.3460879480792326E-7,
    1.004214854805186E-5, -2.256536348817251E-7, -1.5590078348073008E-6,
    -4.2269428028122194E-5, -3.5595713511963384E-8, -7.4612860421181723E-9,
    9.8583802168260373E-6, 4.7510356093419974E-7, -3.0323549109795266E-5,
    1.9273731964039936E-8, 7.5357746684509427E-7, 3.1513477136128155E-5,
    -5.2145098119032704E-9, 4.5356989598119825E-7, 4.06778919248893E-9,
    0.00013319209026218967, 2.5243896103558687E-6, 2.6043330500900276E-5,
    9.2923500128958223E-9, 4.8355982849832609E-7, 8.8019276023569007E-8,
    1.9245025866658719E-6, 2.6036233485542708E-6, 1.362544435407186E-9,
    -6.9852456758457955E-5, -1.5986264122826982E-5, 4.6141360914994929E-9,
    -2.9628688421728136E-7, 2.5736347934467865E-11, -6.3149021303908508E-5,
    -1.3877402313499191E-6, 2.3970686153696472E-5, 9.4763268181772763E-6,
    6.4201929708740307E-7, -1.6878391332583937E-6, 2.5243896103558687E-6,
    0.0043831407339474764, 1.1528894945531415E-6, 1.2949717280341419E-7,
    1.6011728867276135E-8, 1.3950584115578322E-6, -2.4834087569840064E-6,
    0.00010060785861503634, 2.6074649052277969E-6, -3.9577737191634288E-6,
    -1.5267233258995843E-6, -2.9275177086533917E-7, -3.1946253943990696E-8,
    -8.2836344506234262E-7, 1.2984783102778275E-6, -0.00017752360967168907,
    5.3096391594278218E-5, -3.2294943632715166E-10, 6.60050098493026E-8,
    -6.2491897471116345E-9, 2.6043330500900276E-5, 1.1528894945531415E-6,
    7.0665021612798128E-5, -1.9778543766783976E-11, 1.5280157333645638E-8,
    5.2912823943955591E-8, 8.8821877202538454E-6, 2.6600996703820297E-6,
    3.6100074760723384E-9, -1.4846142161802305E-5, -2.8646710544051622E-5,
    -1.3206293982597156E-10, -3.3122357224753947E-8, 5.7211921875475937E-9,
    -1.07214883882284E-5, -5.9641166585584885E-7, 2.1218123840040222E-10,
    2.9869671323421069E-5, 9.880956446690247E-8, -1.572647297120449E-5,
    9.2923500128958223E-9, 1.2949717280341419E-7, -1.9778543766783976E-11,
    3.92191400078037E-5, 1.9855255457164368E-8, -5.0802274901665805E-6,
    -3.4542796118284824E-8, -4.9238193888900984E-7, 8.2748186009213072E-6,
    -2.0987118906698422E-9, -1.4425354277581371E-10, -1.5870463741894754E-5,
    -4.4097278593489116E-8, 7.1666160154723245E-6, -8.92966967870368E-9,
    -5.0034990845535904E-8, 5.5430861389662169E-9, 7.5096775232575847E-9,
    4.0187442760804664E-5, -9.3460879480792326E-7, 4.8355982849832609E-7,
    1.6011728867276135E-8, 1.5280157333645638E-8, 1.9855255457164368E-8,
    6.097127100360642E-5, -2.2708000497114111E-6, 1.0827842729870661E-6,
    2.6110616949967208E-8, 3.2552280483556785E-7, -1.6232016113581013E-7,
    -6.17753528681213E-10, -1.6801490063368248E-9, -2.2593254201728344E-5,
    4.5924110717588519E-7, -2.6180505377122057E-7, -8.405634835233919E-9,
    6.4667763663882048E-9, 1.5097622123689812E-5, 8.4532272843157308E-7,
    1.004214854805186E-5, 8.8019276023569007E-8, 1.3950584115578322E-6,
    5.2912823943955591E-8, -5.0802274901665805E-6, -2.2708000497114111E-6,
    0.00072789785459649082, -3.7715983737000138E-6, -1.0514275556494021E-6,
    3.049251295159482E-5, -2.20209469259877E-8, -1.0282419396741547E-8,
    -5.9188783910628315E-6, -5.24080702746357E-7, 6.2729256179697178E-6,
    -3.1619707213811847E-7, -7.8888320608859312E-7, -2.499168230190829E-5,
    -9.4916538051833043E-9, -4.6137467895422315E-7, -2.256536348817251E-7,
    1.9245025866658719E-6, -2.4834087569840064E-6, 8.8821877202538454E-6,
    -3.4542796118284824E-8, 1.0827842729870661E-6, -3.7715983737000138E-6,
    0.00055567651659500284, 6.6288769737428645E-8, -1.0539291760023519E-9,
    6.2875402508658128E-5, 1.0372601808721656E-5, 1.1332204032628047E-8,
    2.3446275137750874E-7, -4.2372267141720649E-8, -3.4975933058341592E-5,
    1.2041178436415494E-6, 7.0245990604459193E-7, 5.051330864531298E-7,
    3.0884065457233419E-8, -1.5590078348073008E-6, 2.6036233485542708E-6,
    0.00010060785861503634, 2.6600996703820297E-6, -4.9238193888900984E-7,
    2.6110616949967208E-8, -1.0514275556494021E-6, 6.6288769737428645E-8,
    0.00072635376621133071, 9.60925850007821E-7, -1.4878671326895195E-6,
    -3.4434963611502695E-7, -1.9946140028939771E-7, -1.6514073550230774E-8,
    4.9958601066032107E-7, -1.1114191672936E-6, -5.2751144415964461E-5,
    -4.5138459352980595E-9, 3.2340366000564354E-5, 1.2546193024564188E-6,
    -4.2269428028122194E-5, 1.362544435407186E-9, 2.6074649052277969E-6,
    3.6100074760723384E-9, 8.2748186009213072E-6, 3.2552280483556785E-7,
    3.049251295159482E-5, -1.0539291760023519E-9, 9.60925850007821E-7,
    0.10516872403048545, 1.6522440675202535E-8, 1.5379483164354959E-9,
    -9.3904135264394873E-6, -4.2651429438785473E-7, 4.2788265801401691E-7,
    -1.9945866814822408E-8, -8.8974030895501136E-7, -4.6145023324909495E-5,
    2.887889905741404E-9, -6.2083478141713568E-7, -3.5595713511963384E-8,
    -6.9852456758457955E-5, -3.9577737191634288E-6, -1.4846142161802305E-5,
    -2.0987118906698422E-9, -1.6232016113581013E-7, -2.20209469259877E-8,
    6.2875402508658128E-5, -1.4878671326895195E-6, 1.6522440675202535E-8,
    0.10519790654139506, 1.5924039102191678E-5, -7.4038611606026473E-10,
    2.4172394425529524E-7, 1.4713832881609403E-8, 2.3682673327489408E-7,
    1.4917534619206197E-6, -8.2540332953721349E-5, 2.66793864680632E-10,
    -6.4374935578056042E-8, -7.4612860421181723E-9, -1.5986264122826982E-5,
    -1.5267233258995843E-6, -2.8646710544051622E-5, -1.4425354277581371E-10,
    -6.17753528681213E-10, -1.0282419396741547E-8, 1.0372601808721656E-5,
    -3.4434963611502695E-7, 1.5379483164354959E-9, 1.5924039102191678E-5,
    0.10515563144896527, 1.2702641528297081E-10, 1.6743031148886617E-8,
    4.7810689410316842E-9, 6.1645803772644984E-7, 5.7771925652596189E-7,
    -3.0635371107114478E-10, -4.65438512165173E-5, -9.7335260222213172E-8,
    9.8583802168260373E-6, 4.6141360914994929E-9, -2.9275177086533917E-7,
    -1.3206293982597156E-10, -1.5870463741894754E-5, -1.6801490063368248E-9,
    -5.9188783910628315E-6, 1.1332204032628047E-8, -1.9946140028939771E-7,
    -9.3904135264394873E-6, -7.4038611606026473E-10, 1.2702641528297081E-10,
    0.10514194707295861, 2.2680162994038441E-8, -8.4934957562833858E-7,
    -2.8596173023535986E-9, 9.3521206036334709E-8, -3.7662987924193285E-8,
    -5.0803739335742766E-8, -6.3975120616676637E-5, 4.7510356093419974E-7,
    -2.9628688421728136E-7, -3.1946253943990696E-8, -3.3122357224753947E-8,
    -4.4097278593489116E-8, -2.2593254201728344E-5, -5.24080702746357E-7,
    2.3446275137750874E-7, -1.6514073550230774E-8, -4.2651429438785473E-7,
    2.4172394425529524E-7, 1.6743031148886617E-8, 2.2680162994038441E-8,
    0.10514941075547606, -8.2759052213267726E-8, 6.7117929513348592E-8,
    1.3097034858204439E-8, -2.0296046332545188E-9, -7.32896156098396E-6,
    -2.7682653562502535E-7, -3.0323549109795266E-5, 2.5736347934467865E-11,
    -8.2836344506234262E-7, 5.7211921875475937E-9, 7.1666160154723245E-6,
    4.5924110717588519E-7, 6.2729256179697178E-6, -4.2372267141720649E-8,
    4.9958601066032107E-7, 4.2788265801401691E-7, 1.4713832881609403E-8,
    4.7810689410316842E-9, -8.4934957562833858E-7, -8.2759052213267726E-8,
    0.10515529970775339, -1.794008883760317E-8, 8.4067636860351335E-8,
    1.3284048777445004E-5, 1.0168499504145662E-9, 1.4173044565180949E-7,
    1.9273731964039936E-8, -6.3149021303908508E-5, 1.2984783102778275E-6,
    -1.07214883882284E-5, -8.92966967870368E-9, -2.6180505377122057E-7,
    -3.1619707213811847E-7, -3.4975933058341592E-5, -1.1114191672936E-6,
    -1.9945866814822408E-8, 2.3682673327489408E-7, 6.1645803772644984E-7,
    -2.8596173023535986E-9, 6.7117929513348592E-8, -1.794008883760317E-8,
    0.10518587543459129, -3.9366809669315237E-8, -1.3359405614940576E-6,
    -5.0539005864200322E-7, -3.82047503495363E-8, 7.5357746684509427E-7,
    -1.3877402313499191E-6, -0.00017752360967168907, -5.9641166585584885E-7,
    -5.0034990845535904E-8, -8.405634835233919E-9, -7.8888320608859312E-7,
    1.2041178436415494E-6, -5.2751144415964461E-5, -8.8974030895501136E-7,
    1.4917534619206197E-6, 5.7771925652596189E-7, 9.3521206036334709E-8,
    1.3097034858204439E-8, 8.4067636860351335E-8, -3.9366809669315237E-8,
    0.10521114632382016 },

  // Expression: zeros(12,1)
  //  Referenced by: '<S137>/y.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/u.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/du.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/ext.mv_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S141>/ext.mv_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: lastu+uoff
  //  Referenced by: '<S141>/last_mv'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: lastx+xoff
  //  Referenced by: '<S141>/last_x'

  { 0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S137>/md_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/umin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/umax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(12,1)
  //  Referenced by: '<S137>/ymin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(12,1)
  //  Referenced by: '<S137>/ymax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S141>/umin_scale4'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: Yscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S141>/ymin_scale1'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S137>/S_zero'

  0.0,

  // Expression: MDscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S141>/ymin_scale2'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S137>/switch_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S137>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S141>/uref_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S137>/ecr.wt_zero'

  0.0,

  // Expression: [0,0,0,0,0,0,0,0].'
  //  Referenced by: '<S132>/Delay1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale
  //  Referenced by: '<S141>/u_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S132>/Pulse Generator'

  1.0,

  // Expression: 2
  //  Referenced by: '<S132>/Pulse Generator'

  2.0,

  // Expression: 1
  //  Referenced by: '<S132>/Pulse Generator'

  1.0,

  // Expression: 0
  //  Referenced by: '<S132>/Pulse Generator'

  0.0,

  // Expression: zeros(1,8)
  //  Referenced by: '<S180>/E_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,13)
  //  Referenced by: '<S180>/F_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S180>/G_zero'

  0.0,

  // Expression: lastPcov
  //  Referenced by: '<S183>/LastPcov'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S180>/y.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/u.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/du.wt_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/ext.mv_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S183>/ext.mv_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: lastu+uoff
  //  Referenced by: '<S183>/last_mv'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,8)
  //  Referenced by: '<S133>/Constant'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(nym,1)
  //  Referenced by: '<S183>/ym_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S180>/md_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/umin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/umax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S180>/ymin_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: zeros(13,1)
  //  Referenced by: '<S180>/ymax_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S183>/umin_scale4'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: Yscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S183>/ymin_scale1'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S180>/S_zero'

  0.0,

  // Expression: MDscale(:,ones(1,max(nCC,1)))'
  //  Referenced by: '<S183>/ymin_scale2'

  1.0,

  // Expression: zeros(1,1)
  //  Referenced by: '<S180>/switch_zero'

  0.0,

  // Expression: zeros(8,1)
  //  Referenced by: '<S180>/mv.target_zero'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: RMVscale
  //  Referenced by: '<S183>/uref_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: zeros(1,1)
  //  Referenced by: '<S180>/ecr.wt_zero'

  0.0,

  // Expression: [0,0,0,0,0,0,0,0].'
  //  Referenced by: '<S133>/Delay1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: MVscale
  //  Referenced by: '<S183>/u_scale'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S133>/Pulse Generator'

  1.0,

  // Expression: 2
  //  Referenced by: '<S133>/Pulse Generator'

  2.0,

  // Expression: 1
  //  Referenced by: '<S133>/Pulse Generator'

  1.0,

  // Expression: 0
  //  Referenced by: '<S133>/Pulse Generator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S134>/Constant'

  0.0,

  // Expression: zeros(1,8)
  //  Referenced by: '<S134>/Constant1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S134>/Constant2'

  0.0,

  // Computed Parameter: Quat_Y0
  //  Referenced by: '<S258>/Quat'

  0.0,

  // Expression: [0,pi,pi/2]
  //  Referenced by: '<S258>/si y devant'

  { 0.0, 3.1415926535897931, 1.5707963267948966 },

  // Expression: 0.5
  //  Referenced by: '<S259>/1//2'

  0.5,

  // Computed Parameter: enable_Y0
  //  Referenced by: '<S239>/enable'

  0.0,

  // Computed Parameter: error_Y0
  //  Referenced by: '<S239>/error'

  0.0,

  // Computed Parameter: BodyVelocity_Y0
  //  Referenced by: '<S239>/Body Velocity'

  0.0,

  // Expression: 10
  //  Referenced by: '<S239>/Constant1'

  10.0,

  // Expression: 0
  //  Referenced by: '<S255>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S255>/Delay'

  1.0,

  // Expression: 0.5
  //  Referenced by: '<S261>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S261>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S261>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S261>/Gain2'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S262>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S262>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S262>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S262>/Gain2'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S263>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S263>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S263>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S263>/Gain2'

  2.0,

  // Computed Parameter: xhat_Y0
  //  Referenced by: '<S242>/xhat'

  0.0,

  // Expression: p.Q
  //  Referenced by: '<S269>/Q'

  { 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 10.0 },

  // Expression: p.R{2}
  //  Referenced by: '<S269>/R2'

  { 0.31622776601683794, 0.0, 0.0, 0.0, 0.31622776601683794, 0.0, 0.0, 0.0,
    0.31622776601683794 },

  // Expression: 1
  //  Referenced by: '<S269>/MeasurementFcn2Inputs'

  1.0,

  // Expression: p.R{1}
  //  Referenced by: '<S269>/R1'

  { 0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.31622776601683794 },

  // Expression: 0
  //  Referenced by: '<S269>/MeasurementFcn1Inputs'

  0.0,

  // Expression: p.InitialCovariance
  //  Referenced by: '<S269>/DataStoreMemory - P'

  { 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    3.1622776601683795 },

  // Expression: p.InitialState
  //  Referenced by: '<S269>/DataStoreMemory - x'

  { 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0.5
  //  Referenced by: '<S252>/Constant'

  0.5,

  // Expression: 2
  //  Referenced by: '<S252>/Gain'

  2.0,

  // Expression: 2
  //  Referenced by: '<S252>/Gain1'

  2.0,

  // Expression: 2
  //  Referenced by: '<S252>/Gain2'

  2.0,

  // Expression: [0,0,0,0,0,0,0,0]
  //  Referenced by: '<S243>/ '

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0 0 0 1 0 0 0]
  //  Referenced by: '<S281>/Constant7'

  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },

  // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
  //  Referenced by: '<S280>/Constant'

  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: .2
  //  Referenced by: '<S282>/MATLAB System'

  0.2,

  // Expression: .1
  //  Referenced by: '<S282>/MATLAB System'

  0.1,

  // Expression: 3
  //  Referenced by: '<S282>/MATLAB System'

  3.0,

  // Computed Parameter: linWpts_Y0
  //  Referenced by: '<S293>/linWpts'

  0.0,

  // Computed Parameter: RotWpts_Y0
  //  Referenced by: '<S293>/RotWpts'

  0.0,

  // Computed Parameter: time_Y0
  //  Referenced by: '<S293>/time'

  0.0,

  // Computed Parameter: Input_Y0
  //  Referenced by: '<S293>/Input'

  0.0,

  // Computed Parameter: target_Y0
  //  Referenced by: '<S293>/target'

  0.0,

  // Expression: 0
  //  Referenced by: '<S293>/Constant1'

  0.0,

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S295>/Out1'

  0.0,

  // Expression: zeros( 3, 2 )
  //  Referenced by: '<S298>/Polynomial Trajectory1'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 1
  //  Referenced by: '<S296>/Constant'

  1.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S296>/Discrete-Time Integrator'

  0.05,

  // Expression: 0
  //  Referenced by: '<S296>/Discrete-Time Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S282>/Constant'

  0.0,

  // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
  //  Referenced by: '<S278>/Constant'

  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S10>/MATLAB System'

  0.0,

  // Expression: 0
  //  Referenced by: '<S10>/Delay'

  0.0,

  // Expression: 0
  //  Referenced by: '<S284>/Constant'

  0.0,

  // Expression: x0
  //  Referenced by: '<S284>/Constant3'

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S288>/Integrator'

  0.05,

  // Expression: antiwindupUpperLimit
  //  Referenced by: '<S288>/Integrator'

  0.0,

  // Expression: antiwindupLowerLimit
  //  Referenced by: '<S288>/Integrator'

  0.0,

  // Expression: windupUpperLimit
  //  Referenced by: '<S288>/Saturation'

  0.0,

  // Expression: windupLowerLimit
  //  Referenced by: '<S288>/Saturation'

  0.0,

  // Expression: (2*pi*fn).^2
  //  Referenced by: '<S284>/Gain3'

  95.5488288487489,

  // Expression: -1
  //  Referenced by: '<S279>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S284>/Constant1'

  0.0,

  // Expression: xdot0
  //  Referenced by: '<S284>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_e
  //  Referenced by: '<S289>/Integrator'

  0.05,

  // Expression: antiwindupUpperLimit
  //  Referenced by: '<S289>/Integrator'

  0.0,

  // Expression: antiwindupLowerLimit
  //  Referenced by: '<S289>/Integrator'

  0.0,

  // Expression: windupUpperLimit
  //  Referenced by: '<S289>/Saturation'

  0.0,

  // Expression: windupLowerLimit
  //  Referenced by: '<S289>/Saturation'

  0.0,

  // Expression: Ndis
  //  Referenced by: '<S169>/FixedHorizonOptimizer'

  0,

  // Expression: Ndis
  //  Referenced by: '<S211>/FixedHorizonOptimizer'

  0,

  // Computed Parameter: mv_Y0
  //  Referenced by: '<S5>/mv'

  0U,

  // Computed Parameter: depthnew_Y0
  //  Referenced by: '<S50>/depth new'

  false,

  // Computed Parameter: depthnew_Y0_l
  //  Referenced by: '<S49>/depth new'

  false,

  // Expression: iA
  //  Referenced by: '<S141>/Memory'

  { false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false },

  // Expression: iA
  //  Referenced by: '<S183>/Memory'

  { false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false },

  // Computed Parameter: yBlockOrdering_Y0
  //  Referenced by: '<S270>/yBlockOrdering'

  false,

  // Computed Parameter: yBlockOrdering_Y0_o
  //  Referenced by: '<S271>/yBlockOrdering'

  false,

  // Expression: true()
  //  Referenced by: '<S269>/BlockOrdering'

  true,

  // Expression: true()
  //  Referenced by: '<S269>/Enable1'

  true,

  // Computed Parameter: Delay1_InitialCondition_k
  //  Referenced by: '<S282>/Delay1'

  false,

  // Computed Parameter: Merge1_InitialOutput
  //  Referenced by: '<S9>/Merge1'

  false
};

//
// File trailer for generated code.
//
// [EOF]
//
