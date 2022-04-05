/*
 * File: task4.h
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

#ifndef RTW_HEADER_task4_h_
#define RTW_HEADER_task4_h_
#include <stddef.h>
#ifndef task4_COMMON_INCLUDES_
# define task4_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* task4_COMMON_INCLUDES_ */

#include "task4_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int8_T In1;                          /* '<Root>/In1' */
} ExtU_task4_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int8_T Out1;                         /* '<Root>/Out1' */
} ExtY_task4_T;

/* Real-time Model Data Structure */
struct tag_RTM_task4_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_task4_T task4_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_task4_T task4_Y;

/* Model entry point functions */
extern void task4_initialize(void);
extern void task4_step(void);
extern void task4_terminate(void);

/* Real-time Model object */
extern RT_MODEL_task4_T *const task4_M;

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
 * '<Root>' : 'task4'
 * '<S1>'   : 'task4/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_task4_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
