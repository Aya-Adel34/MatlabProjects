/*
 * File: task4.c
 *
 * Code generated for Simulink model 'task4'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Mar 02 01:15:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "task4.h"
#include "task4_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_task4_T task4_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_task4_T task4_Y;

/* Real-time model */
RT_MODEL_task4_T task4_M_;
RT_MODEL_task4_T *const task4_M = &task4_M_;

/* Model step function */
void task4_step(void)
{
  int8_T s1_iter;
  int8_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* Inport: '<Root>/In1' */
  for (s1_iter = 1; s1_iter <= task4_U.In1; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    task4_Y.Out1 = (int8_T)(s1_iter * UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    UnitDelay_DSTATE = task4_Y.Out1;
  }

  /* End of Inport: '<Root>/In1' */
  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void task4_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(task4_M, (NULL));

  /* external inputs */
  task4_U.In1 = 0;

  /* external outputs */
  task4_Y.Out1 = 0;
}

/* Model terminate function */
void task4_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
