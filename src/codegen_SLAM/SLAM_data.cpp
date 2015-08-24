//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM_data.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 24-Aug-2015 21:00:43
//

// Include Files
#include "rt_nonfinite.h"
#include "SLAM.h"
#include "SLAM_data.h"
#include <stdio.h>

// Variable Definitions
double R_bc[9];
double numStates;
double numStatesxt;
double minFeatureThreshold;
double sigma_Init;
double maxEKFIterations;
unsigned int state[625];
boolean_T useOrientation;
double orientationNoise;
boolean_T useAirPressure;

//
// File trailer for SLAM_data.cpp
//
// [EOF]
//
