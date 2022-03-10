/*
 * File: task2.c
 *
 * Code generated for Simulink model 'task2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Mar 02 00:38:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "task2.h"
#include "task2_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_task2_T task2_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_task2_T task2_Y;

/* Real-time model */
RT_MODEL_task2_T task2_M_;
RT_MODEL_task2_T *const task2_M = &task2_M_;

/* Model step function */
void task2_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  task2_Y.Out1 = task2_U.In1 & task2_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   */
  task2_Y.Out2 = task2_U.In1 | task2_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  task2_Y.Out3 = task2_U.In1 ^ task2_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator6'
   */
  task2_Y.Out4 = ~(task2_U.In1 ^ task2_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  task2_Y.Out5 = ~task2_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator5'
   */
  task2_Y.Out6 = ~task2_U.In2;
}

/* Model initialize function */
void task2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(task2_M, (NULL));

  /* external inputs */
  (void) memset((void *)&task2_U, 0,
                sizeof(ExtU_task2_T));

  /* external outputs */
  (void) memset((void *)&task2_Y, 0,
                sizeof(ExtY_task2_T));
}

/* Model terminate function */
void task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
