/*
 * File: task2.h
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

#ifndef RTW_HEADER_task2_h_
#define RTW_HEADER_task2_h_
#include <stddef.h>
#include <string.h>
#ifndef task2_COMMON_INCLUDES_
# define task2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* task2_COMMON_INCLUDES_ */

#include "task2_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
  int32_T In2;                         /* '<Root>/In2' */
} ExtU_task2_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
  int32_T Out2;                        /* '<Root>/Out2' */
  int32_T Out3;                        /* '<Root>/Out3' */
  int32_T Out4;                        /* '<Root>/Out4' */
  int32_T Out5;                        /* '<Root>/Out5' */
  int32_T Out6;                        /* '<Root>/Out6' */
} ExtY_task2_T;

/* Real-time Model Data Structure */
struct tag_RTM_task2_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_task2_T task2_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_task2_T task2_Y;

/* Model entry point functions */
extern void task2_initialize(void);
extern void task2_step(void);
extern void task2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_task2_T *const task2_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'task2'
 */
#endif                                 /* RTW_HEADER_task2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
