/*
 * File: trafficLight.c
 *
 * Code generated for Simulink model 'trafficLight'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Apr 04 14:53:47 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "trafficLight.h"
#include "trafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define trafficLight_IN_Go             ((uint8_T)1U)
#define trafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define trafficLight_IN_Start          ((uint8_T)2U)
#define trafficLight_IN_Stop           ((uint8_T)3U)

/* Block signals (auto storage) */
B_trafficLight_T trafficLight_B;

/* Block states (auto storage) */
DW_trafficLight_T trafficLight_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_trafficLight_T trafficLight_Y;

/* Real-time model */
RT_MODEL_trafficLight_T trafficLight_M_;
RT_MODEL_trafficLight_T *const trafficLight_M = &trafficLight_M_;

/* Model step function */
void trafficLight_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (trafficLight_DW.temporalCounter_i1 < 31U) {
    trafficLight_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (trafficLight_DW.is_active_c3_trafficLight == 0U) {
    /* Entry: Chart */
    trafficLight_DW.is_active_c3_trafficLight = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Start;
    trafficLight_DW.temporalCounter_i1 = 0U;

    /* Entry 'Start': '<S1>:1' */
    trafficLight_B.red = 0U;
    trafficLight_B.green = 0U;
    trafficLight_B.yellow = 0U;
  } else {
    switch (trafficLight_DW.is_c3_trafficLight) {
     case trafficLight_IN_Go:
      /* During 'Go': '<S1>:3' */
      if (trafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:10' */
        trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Stop;
        trafficLight_DW.temporalCounter_i1 = 0U;

        /* Entry 'Stop': '<S1>:4' */
        trafficLight_B.red = 0U;
        trafficLight_B.green = 0U;
        trafficLight_B.yellow = 0U;
      } else {
        trafficLight_B.red = 0U;
        trafficLight_B.green = 1U;
        trafficLight_B.yellow = 0U;
      }
      break;

     case trafficLight_IN_Start:
      /* During 'Start': '<S1>:1' */
      if (trafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:11' */
        trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Go;
        trafficLight_DW.temporalCounter_i1 = 0U;

        /* Entry 'Go': '<S1>:3' */
        trafficLight_B.red = 0U;
        trafficLight_B.green = 0U;
        trafficLight_B.yellow = 0U;
      } else {
        trafficLight_B.red = 0U;
        trafficLight_B.green = 0U;
        trafficLight_B.yellow = 1U;
      }
      break;

     default:
      /* During 'Stop': '<S1>:4' */
      if (trafficLight_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:12' */
        trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Start;
        trafficLight_DW.temporalCounter_i1 = 0U;

        /* Entry 'Start': '<S1>:1' */
        trafficLight_B.red = 0U;
        trafficLight_B.green = 0U;
        trafficLight_B.yellow = 0U;
      } else {
        trafficLight_B.red = 1U;
        trafficLight_B.green = 0U;
        trafficLight_B.yellow = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/Out1' */
  trafficLight_Y.Out1 = trafficLight_B.green;

  /* Outport: '<Root>/Out2' */
  trafficLight_Y.Out2 = trafficLight_B.red;

  /* Outport: '<Root>/Out3' */
  trafficLight_Y.Out3 = trafficLight_B.yellow;
}

/* Model initialize function */
void trafficLight_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(trafficLight_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &trafficLight_B), 0,
                sizeof(B_trafficLight_T));

  /* states (dwork) */
  (void) memset((void *)&trafficLight_DW, 0,
                sizeof(DW_trafficLight_T));

  /* external outputs */
  (void) memset((void *)&trafficLight_Y, 0,
                sizeof(ExtY_trafficLight_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  trafficLight_DW.temporalCounter_i1 = 0U;
  trafficLight_DW.is_active_c3_trafficLight = 0U;
  trafficLight_DW.is_c3_trafficLight = trafficLight_IN_NO_ACTIVE_CHILD;
  trafficLight_B.green = 0U;
  trafficLight_B.red = 0U;
  trafficLight_B.yellow = 0U;
}

/* Model terminate function */
void trafficLight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
