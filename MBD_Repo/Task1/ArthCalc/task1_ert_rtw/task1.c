/*
 * File: task1.c
 *
 * Code generated for Simulink model 'task1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Mar 02 00:22:56 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "task1.h"
#include "task1_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_task1_T task1_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_task1_T task1_Y;

/* Real-time model */
RT_MODEL_task1_T task1_M_;
RT_MODEL_task1_T *const task1_M = &task1_M_;

/* Model step function */
void task1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  task1_Y.Out1 = task1_U.In1 * task1_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide1'
   */
  task1_Y.Out2 = task1_U.In1 / task1_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  task1_Y.Out3 = task1_U.In1 + task1_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  task1_Y.Out4 = task1_U.In1 - task1_U.In2;
}

/* Model initialize function */
void task1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(task1_M, (NULL));

  /* external inputs */
  (void) memset((void *)&task1_U, 0,
                sizeof(ExtU_task1_T));

  /* external outputs */
  (void) memset((void *)&task1_Y, 0,
                sizeof(ExtY_task1_T));
}

/* Model terminate function */
void task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
