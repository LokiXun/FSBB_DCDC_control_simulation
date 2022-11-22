/* Include files */

#include "simstruc.h"
#include "fixedpoint.h"
#include "simtarget/slSimTgtLogLoadBlocksSfcnBridge.h"
#include "Balancing_Logic_sfun.h"
#include "c1_Balancing_Logic.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define c1_IN_BalancingOFF             (1U)
#define c1_IN_BalancingON              (2U)
#define c1_IN_NO_ACTIVE_LEAF           (0U)
#define c1_finally_IN_BalancingOFF     (1U)
#define c1_finally_IN_BalActive        (2U)
#define c1_finally_IN_BalNotActive     (3U)
#define c1_IN_BalActive                (1U)
#define c1_IN_BalNotActive             (2U)
#define c1_b_finally_IN_BalActive      (1U)
#define c1_b_finally_IN_BalNotActive   (2U)
#define CALL_EVENT                     (-1)
#define c1_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRTEInfo c1_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "E:\\MATLAB_2022\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

/* Function Declarations */
static void initialize_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void initialize_params_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void mdl_start_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void mdl_terminate_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance);
static void mdl_setup_runtime_resources_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void enable_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void disable_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void c1_set_sim_state_side_effects_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void sf_gateway_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance);
static void c1_update_jit_animation_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void set_sim_state_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance, const mxArray *c1_st);
static void c1_sdiInitializec1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void c1_sdiTerminatec1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void initSimStructsc1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance);
static void c1_enter_atomic_BalancingOFF(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void c1_BalancingON(SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void c1_enter_atomic_BalActive(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static const mxArray *c1_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static const mxArray *c1_b_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static const mxArray *c1_c_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void c1_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_BalCmd, const char_T *c1_identifier,
  boolean_T c1_y[6]);
static void c1_b_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[6]);
static real32_T c1_c_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_DeltaCellVolt, const char_T *c1_identifier);
static real32_T c1_d_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static boolean_T c1_e_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_flgBalCompl, const char_T *c1_identifier);
static boolean_T c1_f_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_g_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Balancing_Logic, const char_T
  *c1_identifier);
static uint8_T c1_h_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint32_T c1_i_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_is_c1_Balancing_Logic, const char_T
  *c1_identifier);
static uint32_T c1_j_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint16_T c1_k_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_temporalCounter_i1, const char_T
  *c1_identifier);
static uint16_T c1_l_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_m_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_dataWrittenToVector, const char_T
  *c1_identifier, boolean_T c1_y[1]);
static void c1_n_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[1]);
static const mxArray *c1_o_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_identifier);
static const mxArray *c1_p_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void c1_init_sf_message_store_memory(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static void c1_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  void *c1_streamedData);
static void c1_b_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  int32_T c1_streamedData);
static void c1_c_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  int32_T c1_streamedData);
static void c1_d_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  void *c1_streamedData);
static void init_test_point_addr_map(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_Balancing_LogicInstanceStruct *chartInstance);
static void **get_dataset_logging_obj_vector(SFc1_Balancing_LogicInstanceStruct *
  chartInstance);
static void init_dsm_address_info(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_Balancing_LogicInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  int32_T c1_i;
  int32_T c1_i1;
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
  c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
    &chartInstance->c1_is_BalancingON);
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
    (chartInstance->c1_is_BalancingON == 1U));
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
    (chartInstance->c1_is_BalancingON == 2U));
  c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 0);
  c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 0);
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_is_active_c1_Balancing_Logic = 0U;
  chartInstance->c1_is_c1_Balancing_Logic = c1_IN_NO_ACTIVE_CHILD;
  c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
    &chartInstance->c1_is_c1_Balancing_Logic);
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
    (chartInstance->c1_is_c1_Balancing_Logic == 1U));
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
    (chartInstance->c1_is_c1_Balancing_Logic == 2U));
  c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 0);
  chartInstance->c1_flgBalCompl = false;
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 4, 474U,
    &chartInstance->c1_flgBalCompl);
  chartInstance->c1_DeltaCellVolt = 0.0F;
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
    &chartInstance->c1_DeltaCellVolt);
  if (sf_get_output_port_reusable(chartInstance->S, 1) == 0) {
    for (c1_i = 0; c1_i < 6; c1_i++) {
      (*chartInstance->c1_BalCmd)[c1_i] = false;
    }

    c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 3, 451U,
      chartInstance->c1_BalCmd);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                    chartInstance->c1_flgBalCompl);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                    chartInstance->c1_DeltaCellVolt);
  for (c1_i1 = 0; c1_i1 < 6; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                      (*chartInstance->c1_BalCmd)[c1_i1]);
  }
}

static void initialize_params_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  int16_T c1_i;
  int16_T c1_i1;
  int16_T c1_i2;
  sf_mex_import_named("TargetDeltaV", sf_mex_get_sfun_param(chartInstance->S, 3U,
    0U), &c1_d, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_TargetDeltaV = (real32_T)c1_d;
  sf_mex_import_named("BalNotActWait", sf_mex_get_sfun_param(chartInstance->S,
    0U, 0U), &c1_d1, 0, 0, 0U, 0, 0U, 0);
  c1_d2 = c1_d1;
  if (c1_d2 < 32768.0) {
    if (c1_d2 >= -32768.0) {
      c1_i = (int16_T)c1_d2;
    } else {
      c1_i = MIN_int16_T;
    }
  } else if (c1_d2 >= 32768.0) {
    c1_i = MAX_int16_T;
  } else {
    c1_i = 0;
  }

  chartInstance->c1_BalNotActWait = c1_i;
  sf_mex_import_named("BalOffWait", sf_mex_get_sfun_param(chartInstance->S, 1U,
    0U), &c1_d3, 0, 0, 0U, 0, 0U, 0);
  c1_d4 = c1_d3;
  if (c1_d4 < 32768.0) {
    if (c1_d4 >= -32768.0) {
      c1_i1 = (int16_T)c1_d4;
    } else {
      c1_i1 = MIN_int16_T;
    }
  } else if (c1_d4 >= 32768.0) {
    c1_i1 = MAX_int16_T;
  } else {
    c1_i1 = 0;
  }

  chartInstance->c1_BalOffWait = c1_i1;
  sf_mex_import_named("BalOnWait", sf_mex_get_sfun_param(chartInstance->S, 2U,
    0U), &c1_d5, 0, 0, 0U, 0, 0U, 0);
  c1_d6 = c1_d5;
  if (c1_d6 < 32768.0) {
    if (c1_d6 >= -32768.0) {
      c1_i2 = (int16_T)c1_d6;
    } else {
      c1_i2 = MIN_int16_T;
    }
  } else if (c1_d6 >= 32768.0) {
    c1_i2 = MAX_int16_T;
  } else {
    c1_i2 = 0;
  }

  chartInstance->c1_BalOnWait = c1_i2;
  sf_mex_import_named("flgEnBalancing", sf_mex_get_sfun_param(chartInstance->S,
    4U, 0U), &c1_d7, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_flgEnBalancing = (c1_d7 != 0.0);
}

static void mdl_start_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  static const int32_T c1_b_postfixPredicateTree[7] = { 0, 1, -3, 2, -3, 3, -3 };

  static const int32_T c1_b_condTxtEndIdx[4] = { 15, 62, 91, 127 };

  static const int32_T c1_b_condTxtStartIdx[4] = { 1, 23, 70, 99 };

  static const int32_T c1_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_condTxtEndIdx[2] = { 25, 61 };

  static const int32_T c1_condTxtStartIdx[2] = { 1, 33 };

  static const uint32_T c1_b_decisionTxtEndIdx = 0U;
  static const uint32_T c1_b_decisionTxtStartIdx = 0U;
  static const uint32_T c1_c_decisionTxtEndIdx = 0U;
  static const uint32_T c1_c_decisionTxtStartIdx = 0U;
  static const uint32_T c1_d_decisionTxtEndIdx = 0U;
  static const uint32_T c1_d_decisionTxtStartIdx = 0U;
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sfListenerRegisterHover(chartInstance->c1_RuntimeVar, (void *)
    &sf_c1_Balancing_Logic_getDebuggerHoverDataFor);
  if (sim_mode_is_external(chartInstance->S) == 0U) {
    c1_sdiInitializec1_Balancing_Logic(chartInstance);
  }

  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 4U, 0U, 7U,
    24U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 2U, true, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 1U, 2U, true, true, false,
                    0U, &c1_b_decisionTxtStartIdx, &c1_b_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 2U, 0U, false, false, false,
                    0U, &c1_c_decisionTxtStartIdx, &c1_c_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 3U, 0U, false, false, false,
                    0U, &c1_d_decisionTxtStartIdx, &c1_d_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 1U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 5U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 2U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 3U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 4U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 6U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 1U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 2U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 4U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 1, 61, -1, 61,
                    false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 1, 61, 2U, 0U,
                      c1_condTxtStartIdx, c1_condTxtEndIdx, 3U,
                      c1_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 33, 61,
    -3, 4U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 6U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 6U, 0U, 1, 12, -1, 12,
                    false);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 0U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 1U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 4U, 1U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 0U, 1, 127, -1, 127,
                    false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 0U, 1, 127, 4U,
                      0U, c1_b_condTxtStartIdx, c1_b_condTxtEndIdx, 7U,
                      c1_b_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 1U, 99, 127,
    -3, 4U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 5U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 5U, 0U, 1, 40, -1, 40,
                    false);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 2U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 2U, 0U, 1, 21, -1, 21,
                    false);
}

static void mdl_cleanup_runtime_resources_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  if (sim_mode_is_external(chartInstance->S) == 0U) {
    c1_sdiTerminatec1_Balancing_Logic(chartInstance);
  }

  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_set_sim_state_side_effects_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if ((chartInstance->c1_is_c1_Balancing_Logic == c1_IN_BalancingOFF) &&
        (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                    "setSimStateSideEffectsInfo", 1, 2) == 0.0)) {
      chartInstance->c1_temporalCounter_i1 = 0U;
    }

    if ((chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) && (sf_mex_sub
         (chartInstance->c1_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 5) == 0.0)) {
      chartInstance->c1_temporalCounter_i1 = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void sf_gateway_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  int32_T c1_i;
  boolean_T c1_guard1 = false;
  boolean_T c1_out;
  c1_set_sim_state_side_effects_c1_Balancing_Logic(chartInstance);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  chartInstance->c1_JITTransitionAnimation[1] = 0U;
  chartInstance->c1_JITTransitionAnimation[2] = 0U;
  chartInstance->c1_JITTransitionAnimation[3] = 0U;
  chartInstance->c1_JITTransitionAnimation[4] = 0U;
  chartInstance->c1_JITTransitionAnimation[5] = 0U;
  chartInstance->c1_JITTransitionAnimation[6] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  if (chartInstance->c1_temporalCounter_i1 < 8191U) {
    chartInstance->c1_temporalCounter_i1 = (uint16_T)((uint32_T)
      chartInstance->c1_temporalCounter_i1 + 1U);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U, (real_T)
                    *chartInstance->c1_MinCellVolt);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U, (real_T)
                    *chartInstance->c1_MaxCellVolt);
  for (c1_i = 0; c1_i < 6; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U, (real_T)
                      (*chartInstance->c1_CellVoltages)[c1_i]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  if (chartInstance->c1_is_active_c1_Balancing_Logic == 0U) {
    chartInstance->c1_is_active_c1_Balancing_Logic = 1U;
    chartInstance->c1_JITTransitionAnimation[0U] = 1U;
    chartInstance->c1_flgBalCompl = true;
    chartInstance->c1_dataWrittenToVector[0U] = true;
    c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 4, 474U,
      &chartInstance->c1_flgBalCompl);
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      chartInstance->c1_flgBalCompl);
    chartInstance->c1_is_c1_Balancing_Logic = c1_IN_BalancingOFF;
    c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
      &chartInstance->c1_is_c1_Balancing_Logic);
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 1U));
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 2U));
    c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 1);
    chartInstance->c1_temporalCounter_i1 = 0U;
    chartInstance->c1_is_finally_c1_Balancing_Logic = c1_finally_IN_BalancingOFF;
    c1_enter_atomic_BalancingOFF(chartInstance);
  } else {
    switch (chartInstance->c1_is_c1_Balancing_Logic) {
     case c1_IN_BalancingOFF:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0,
                        c1_IN_BalancingOFF);
      c1_guard1 = false;
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 1, 0,
                           chartInstance->c1_flgEnBalancing) && covrtEmlCondEval
          (chartInstance->c1_covrtInstance, 5U, 1, 1,
           *chartInstance->c1_BMS_State != c1_BMS_State_Enum_BMS_Driving)) {
        sf_temporal_value_range_check_min(chartInstance->S, 464U, (real_T)
          chartInstance->c1_BalOffWait, 0.0);
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 1, 2,
                             chartInstance->c1_temporalCounter_i1 * 5 >=
                             chartInstance->c1_BalOffWait) && covrtEmlCondEval
            (chartInstance->c1_covrtInstance, 5U, 1, 3,
             covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 5U, 1U,
              1U, (real_T)chartInstance->c1_DeltaCellVolt, (real_T)
              chartInstance->c1_TargetDeltaV, -3, 4U,
              chartInstance->c1_DeltaCellVolt > chartInstance->c1_TargetDeltaV)))
        {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 1, 0, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 1, 0, true);
          c1_out = true;
        } else {
          c1_guard1 = true;
        }
      } else {
        c1_guard1 = true;
      }

      if (c1_guard1) {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 1, 0, false);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 1, 0, false);
        c1_out = false;
      }

      if (c1_out) {
        chartInstance->c1_JITTransitionAnimation[1U] = 1U;
        chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
        chartInstance->c1_is_c1_Balancing_Logic = c1_IN_NO_ACTIVE_CHILD;
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
          (chartInstance->c1_is_c1_Balancing_Logic == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
          (chartInstance->c1_is_c1_Balancing_Logic == 2U));
        chartInstance->c1_is_c1_Balancing_Logic = c1_IN_BalancingON;
        c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
          &chartInstance->c1_is_c1_Balancing_Logic);
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
          (chartInstance->c1_is_c1_Balancing_Logic == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
          (chartInstance->c1_is_c1_Balancing_Logic == 2U));
        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
          &chartInstance->c1_DeltaCellVolt);
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
        chartInstance->c1_JITTransitionAnimation[3U] = 1U;
        chartInstance->c1_is_BalancingON = c1_IN_BalActive;
        c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
          &chartInstance->c1_is_BalancingON);
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
          (chartInstance->c1_is_BalancingON == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
          (chartInstance->c1_is_BalancingON == 2U));
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 2);
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 1);
        chartInstance->c1_is_finally_c1_Balancing_Logic =
          c1_finally_IN_BalActive;
        chartInstance->c1_is_finally_BalancingON = c1_b_finally_IN_BalActive;
        c1_enter_atomic_BalActive(chartInstance);
      } else {
        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
          &chartInstance->c1_DeltaCellVolt);
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
      }
      break;

     case c1_IN_BalancingON:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0,
                        c1_IN_BalancingON);
      c1_BalancingON(chartInstance);
      break;

     default:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0, 0);

      /* Unreachable state, for coverage only */
      chartInstance->c1_is_c1_Balancing_Logic = c1_IN_NO_ACTIVE_CHILD;
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
        (chartInstance->c1_is_c1_Balancing_Logic == 1U));
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
        (chartInstance->c1_is_c1_Balancing_Logic == 2U));
      break;
    }
  }

  c1_update_jit_animation_c1_Balancing_Logic(chartInstance);
  c1_do_animation_call_c1_Balancing_Logic(chartInstance);
}

static void ext_mode_exec_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  chartInstance->c1_JITStateAnimation[0U] = (uint8_T)
    (chartInstance->c1_is_c1_Balancing_Logic == c1_IN_BalancingON);
  chartInstance->c1_JITStateAnimation[1U] = (uint8_T)
    (chartInstance->c1_is_c1_Balancing_Logic == c1_IN_BalancingOFF);
  chartInstance->c1_JITStateAnimation[2U] = (uint8_T)
    (chartInstance->c1_is_BalancingON == c1_IN_BalActive);
  chartInstance->c1_JITStateAnimation[3U] = (uint8_T)
    (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive);
}

static void c1_do_animation_call_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(10, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_BalCmd, 11, 0U,
    1U, 0U, 2, 1, 6), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &chartInstance->c1_DeltaCellVolt, 1,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &chartInstance->c1_flgBalCompl, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_Balancing_Logic, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y",
    &chartInstance->c1_is_c1_Balancing_Logic, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_is_BalancingON, 7,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y",
    &chartInstance->c1_temporalCounter_i1, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y",
    chartInstance->c1_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 1), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y",
    &chartInstance->c1_is_finally_c1_Balancing_Logic, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 8, c1_j_y);
  c1_k_y = NULL;
  sf_mex_assign(&c1_k_y, sf_mex_create("y",
    &chartInstance->c1_is_finally_BalancingON, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 9, c1_k_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  int32_T c1_i;
  boolean_T c1_bv[6];
  boolean_T c1_bv1[1];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
                      "BalCmd", c1_bv);
  for (c1_i = 0; c1_i < 6; c1_i++) {
    (*chartInstance->c1_BalCmd)[c1_i] = c1_bv[c1_i];
  }

  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 3, 451U,
    chartInstance->c1_BalCmd);
  chartInstance->c1_DeltaCellVolt = c1_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)), "DeltaCellVolt");
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
    &chartInstance->c1_DeltaCellVolt);
  chartInstance->c1_flgBalCompl = c1_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 2)), "flgBalCompl");
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 4, 474U,
    &chartInstance->c1_flgBalCompl);
  chartInstance->c1_is_active_c1_Balancing_Logic = c1_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
     "is_active_c1_Balancing_Logic");
  chartInstance->c1_is_c1_Balancing_Logic = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 4)), "is_c1_Balancing_Logic");
  c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
    &chartInstance->c1_is_c1_Balancing_Logic);
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
    (chartInstance->c1_is_c1_Balancing_Logic == 1U));
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
    (chartInstance->c1_is_c1_Balancing_Logic == 2U));
  chartInstance->c1_is_BalancingON = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 5)), "is_BalancingON");
  c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
    &chartInstance->c1_is_BalancingON);
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
    (chartInstance->c1_is_BalancingON == 1U));
  c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
    (chartInstance->c1_is_BalancingON == 2U));
  chartInstance->c1_temporalCounter_i1 = c1_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 6)), "temporalCounter_i1");
  c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 7)),
                        "dataWrittenToVector", c1_bv1);
  chartInstance->c1_dataWrittenToVector[0] = c1_bv1[0];
  chartInstance->c1_is_finally_c1_Balancing_Logic = c1_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 8)),
     "is_finally_c1_Balancing_Logic");
  chartInstance->c1_is_finally_BalancingON = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 9)), "is_finally_BalancingON");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 10)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_jit_animation_c1_Balancing_Logic(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_sdiInitializec1_Balancing_Logic
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  int32_T c1_g[4] = { 0, 1, 2, 3 };

  int32_T c1_e[3] = { 0, 1, 2 };

  int32_T c1_i[3] = { 0, 1, 2 };

  int32_T c1_k[3] = { 0, 1, 2 };

  int32_T c1_l[2] = { 1, 6 };

  int32_T c1_m[1] = { 1 };

  int32_T c1_n[1] = { 1 };

  uint32_T c1_c[12] = { 469U, 453U, 191U, 451U, 474U, 430U, 443U, 485U, 486U,
    487U, 492U, 465U };

  uint32_T c1_b[5] = { 0U, 463U, 414U, 475U, 477U };

  const char_T *c1_f[4] = { "None", "BalancingOFF", "BalActive", "BalNotActive"
  };

  const char_T *c1_d[3] = { "None", "BalancingOFF", "BalancingON" };

  const char_T *c1_h[3] = { "None", "BalActive", "BalNotActive" };

  const char_T *c1_j[3] = { "None", "BalActive", "BalNotActive" };

  chartInstance->c1_sdiBlockInfo.mdlRefFullPath = "";
  chartInstance->c1_sdiBlockInfo.SimStruct = (void *)chartInstance->S;
  chartInstance->c1_sdiBlockInfo.blkPath = "";
  chartInstance->c1_sdiBlockInfo.blkSID = "Balancing_Logic:8";
  chartInstance->c1_sdiBlockInfo.sharedSCMPath = "";
  chartInstance->c1_sdiBlockInfo.sdiRuntime = NULL;
  sdi_database_initialize(&chartInstance->c1_sdiBlockInfo, c1_b, (uint8_T *)
    &chartInstance->c1_sdiLoggedStatesBuffer[0U], 5, c1_c, (uint8_T *)
    &chartInstance->c1_sdiLoggedDataBuffer[0U], 12);
  if (chartInstance->c1_sdiLoggedStatesBuffer[0U] & 1) {
    sdi_register_child_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "Balancing", "", 3, c1_d, c1_e, sizeof(uint32_T), 1, 0U);
  }

  if (chartInstance->c1_sdiLoggedStatesBuffer[0U] & 2) {
    sdi_register_leaf_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "Balancing", "", 4, c1_f, c1_g, 1, 0U);
  }

  chartInstance->c1_SignalExportProp.logName = "";
  chartInstance->c1_SignalExportProp.signalName = "BalancingOFF";
  chartInstance->c1_SignalExportProp.useCustomName = 0;
  chartInstance->c1_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_SignalExportProp.decimate = 0;
  chartInstance->c1_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_SignalExportProp.decimation = 2U;
  if (chartInstance->c1_sdiLoggedStatesBuffer[1U] & 4) {
    sdi_register_self_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingOFF", "BalancingOFF", 1, &chartInstance->c1_SignalExportProp,
      463U);
  }

  if (chartInstance->c1_sdiLoggedStatesBuffer[2U] & 1) {
    sdi_register_child_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingON", "BalancingON", 3, c1_h, c1_i, sizeof(uint32_T), 1, 414U);
  }

  chartInstance->c1_b_SignalExportProp.logName = "";
  chartInstance->c1_b_SignalExportProp.signalName = "BalancingON";
  chartInstance->c1_b_SignalExportProp.useCustomName = 0;
  chartInstance->c1_b_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_b_SignalExportProp.decimate = 0;
  chartInstance->c1_b_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_b_SignalExportProp.decimation = 2U;
  if (chartInstance->c1_sdiLoggedStatesBuffer[2U] & 4) {
    sdi_register_self_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingON", "BalancingON", 1, &chartInstance->c1_b_SignalExportProp,
      414U);
  }

  if (chartInstance->c1_sdiLoggedStatesBuffer[2U] & 2) {
    sdi_register_leaf_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingON", "BalancingON", 3, c1_j, c1_k, 1, 414U);
  }

  chartInstance->c1_c_SignalExportProp.logName = "";
  chartInstance->c1_c_SignalExportProp.signalName = "BalancingON.BalActive";
  chartInstance->c1_c_SignalExportProp.useCustomName = 0;
  chartInstance->c1_c_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_c_SignalExportProp.decimate = 0;
  chartInstance->c1_c_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_c_SignalExportProp.decimation = 2U;
  if (chartInstance->c1_sdiLoggedStatesBuffer[3U] & 4) {
    sdi_register_self_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingON.BalActive", "BalancingON/BalActive", 1,
      &chartInstance->c1_c_SignalExportProp, 475U);
  }

  chartInstance->c1_d_SignalExportProp.logName = "";
  chartInstance->c1_d_SignalExportProp.signalName = "BalancingON.BalNotActive";
  chartInstance->c1_d_SignalExportProp.useCustomName = 0;
  chartInstance->c1_d_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_d_SignalExportProp.decimate = 0;
  chartInstance->c1_d_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_d_SignalExportProp.decimation = 2U;
  if (chartInstance->c1_sdiLoggedStatesBuffer[4U] & 4) {
    sdi_register_self_activity_signal(&chartInstance->c1_sdiBlockInfo,
      "BalancingON.BalNotActive", "BalancingON/BalNotActive", 1,
      &chartInstance->c1_d_SignalExportProp, 477U);
  }

  chartInstance->c1_e_SignalExportProp.logName = "";
  chartInstance->c1_e_SignalExportProp.signalName = "BalCmd";
  chartInstance->c1_e_SignalExportProp.useCustomName = 0;
  chartInstance->c1_e_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_e_SignalExportProp.decimate = 0;
  chartInstance->c1_e_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_e_SignalExportProp.decimation = 1U;
  if (chartInstance->c1_sdiLoggedDataBuffer[3U]) {
    sdi_register_builtin_data_type_signal(&chartInstance->c1_sdiBlockInfo,
      "BalCmd", "", 2, c1_l, 1, 10, 0, 0, &chartInstance->c1_e_SignalExportProp,
      "", 451U);
    sdi_register_base_address(&chartInstance->c1_sdiBlockInfo,
      chartInstance->c1_BalCmd, 451U);
  }

  chartInstance->c1_f_SignalExportProp.logName = "";
  chartInstance->c1_f_SignalExportProp.signalName = "flgBalCompl";
  chartInstance->c1_f_SignalExportProp.useCustomName = 0;
  chartInstance->c1_f_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_f_SignalExportProp.decimate = 0;
  chartInstance->c1_f_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_f_SignalExportProp.decimation = 1U;
  if (chartInstance->c1_sdiLoggedDataBuffer[4U]) {
    sdi_register_builtin_data_type_signal(&chartInstance->c1_sdiBlockInfo,
      "flgBalCompl", "", 1, c1_m, 1, 10, 0, 0,
      &chartInstance->c1_f_SignalExportProp, "", 474U);
    sdi_register_base_address(&chartInstance->c1_sdiBlockInfo,
      &chartInstance->c1_flgBalCompl, 474U);
  }

  chartInstance->c1_g_SignalExportProp.logName = "";
  chartInstance->c1_g_SignalExportProp.signalName = "DeltaCellVolt";
  chartInstance->c1_g_SignalExportProp.useCustomName = 0;
  chartInstance->c1_g_SignalExportProp.limitDataPoints = 0;
  chartInstance->c1_g_SignalExportProp.decimate = 0;
  chartInstance->c1_g_SignalExportProp.maxPoints = 5000U;
  chartInstance->c1_g_SignalExportProp.decimation = 1U;
  if (chartInstance->c1_sdiLoggedDataBuffer[11U]) {
    sdi_register_builtin_data_type_signal(&chartInstance->c1_sdiBlockInfo,
      "DeltaCellVolt", "", 1, c1_n, 1, 1, 0, 0,
      &chartInstance->c1_g_SignalExportProp, "", 465U);
    sdi_register_base_address(&chartInstance->c1_sdiBlockInfo,
      &chartInstance->c1_DeltaCellVolt, 465U);
  }
}

static void c1_sdiTerminatec1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  sdi_database_terminate(&chartInstance->c1_sdiBlockInfo);
}

static void initSimStructsc1_Balancing_Logic(SFc1_Balancing_LogicInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c1_enter_atomic_BalancingOFF(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  int32_T c1_i;
  int32_T c1_i1;
  for (c1_i = 0; c1_i < 6; c1_i++) {
    (*chartInstance->c1_BalCmd)[c1_i] = false;
  }

  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 3, 451U,
    chartInstance->c1_BalCmd);
  for (c1_i1 = 0; c1_i1 < 6; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                      (*chartInstance->c1_BalCmd)[c1_i1]);
  }

  chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
    *chartInstance->c1_MinCellVolt;
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
    &chartInstance->c1_DeltaCellVolt);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                    chartInstance->c1_DeltaCellVolt);
}

static void c1_BalancingON(SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  real_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_k;
  real32_T c1_b_x;
  real32_T c1_x;
  real32_T c1_z;
  boolean_T c1_c_x[6];
  boolean_T c1_x_data[6];
  boolean_T c1_b_out;
  boolean_T c1_c_out;
  boolean_T c1_d_out;
  boolean_T c1_exitg1;
  boolean_T c1_out;
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 5, 0,
                     *chartInstance->c1_BMS_State ==
                     c1_BMS_State_Enum_BMS_Driving)) {
    c1_out = true;
  } else {
    c1_out = false;
  }

  if (c1_out) {
    chartInstance->c1_JITTransitionAnimation[5U] = 1U;
    switch (chartInstance->c1_is_BalancingON) {
     case c1_IN_BalActive:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1,
                        c1_IN_BalActive);
      chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
      chartInstance->c1_is_finally_BalancingON = c1_IN_NO_ACTIVE_LEAF;
      chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
        (chartInstance->c1_is_BalancingON == 1U));
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
        (chartInstance->c1_is_BalancingON == 2U));
      break;

     case c1_IN_BalNotActive:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1,
                        c1_IN_BalNotActive);
      chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
      chartInstance->c1_is_finally_BalancingON = c1_IN_NO_ACTIVE_LEAF;
      chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
        (chartInstance->c1_is_BalancingON == 1U));
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
        (chartInstance->c1_is_BalancingON == 2U));
      break;

     default:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1, 0);
      chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
        (chartInstance->c1_is_BalancingON == 1U));
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
        (chartInstance->c1_is_BalancingON == 2U));
      break;
    }

    chartInstance->c1_is_c1_Balancing_Logic = c1_IN_NO_ACTIVE_CHILD;
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 1U));
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 2U));
    c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 0);
    c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
      &chartInstance->c1_is_BalancingON);
    chartInstance->c1_is_c1_Balancing_Logic = c1_IN_BalancingOFF;
    c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
      &chartInstance->c1_is_c1_Balancing_Logic);
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 1U));
    c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
      (chartInstance->c1_is_c1_Balancing_Logic == 2U));
    c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 1);
    chartInstance->c1_temporalCounter_i1 = 0U;
    chartInstance->c1_is_finally_c1_Balancing_Logic = c1_finally_IN_BalancingOFF;
    c1_enter_atomic_BalancingOFF(chartInstance);
  } else {
    chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
      *chartInstance->c1_MinCellVolt;
    c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 11, 465U,
      &chartInstance->c1_DeltaCellVolt);
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      chartInstance->c1_DeltaCellVolt);
    switch (chartInstance->c1_is_BalancingON) {
     case c1_IN_BalActive:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0,
                        c1_IN_BalActive);
      if (!chartInstance->c1_dataWrittenToVector[0U]) {
        sf_read_before_write_error(chartInstance->S, 1U, 482U, 1, 11);
      }

      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 6, 0,
                         chartInstance->c1_flgBalCompl)) {
        c1_b_out = true;
      } else {
        c1_b_out = false;
      }

      if (c1_b_out) {
        chartInstance->c1_JITTransitionAnimation[6U] = 1U;
        chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
        chartInstance->c1_is_finally_BalancingON = c1_IN_NO_ACTIVE_LEAF;
        chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
          (chartInstance->c1_is_BalancingON == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
          (chartInstance->c1_is_BalancingON == 2U));
        chartInstance->c1_is_BalancingON = c1_IN_BalNotActive;
        c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
          &chartInstance->c1_is_BalancingON);
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
          (chartInstance->c1_is_BalancingON == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
          (chartInstance->c1_is_BalancingON == 2U));
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 3);
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 2);
        chartInstance->c1_temporalCounter_i1 = 0U;
        chartInstance->c1_is_finally_c1_Balancing_Logic =
          c1_finally_IN_BalNotActive;
        chartInstance->c1_is_finally_BalancingON = c1_b_finally_IN_BalNotActive;
      } else {
        c1_x = chartInstance->c1_TargetDeltaV;
        c1_b_x = c1_x;
        c1_z = c1_b_x / 2.0F;
        for (c1_i = 0; c1_i < 6; c1_i++) {
          (*chartInstance->c1_BalCmd)[c1_i] = ((*chartInstance->c1_CellVoltages)
            [c1_i] - *chartInstance->c1_MinCellVolt > c1_z);
        }

        c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 3, 451U,
          chartInstance->c1_BalCmd);
        for (c1_i1 = 0; c1_i1 < 6; c1_i1++) {
          covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                            (*chartInstance->c1_BalCmd)[c1_i1]);
        }

        for (c1_i2 = 0; c1_i2 < 6; c1_i2++) {
          c1_c_x[c1_i2] = !(*chartInstance->c1_BalCmd)[c1_i2];
        }

        for (c1_i3 = 0; c1_i3 < 6; c1_i3++) {
          c1_x_data[c1_i3] = c1_c_x[c1_i3];
        }

        chartInstance->c1_flgBalCompl = true;
        c1_k = 0;
        c1_exitg1 = false;
        while ((!c1_exitg1) && (c1_k < 6)) {
          c1_b_k = (real_T)c1_k + 1.0;
          if (!c1_x_data[(int32_T)c1_b_k - 1]) {
            chartInstance->c1_flgBalCompl = false;
            c1_exitg1 = true;
          } else {
            c1_k++;
          }
        }

        chartInstance->c1_dataWrittenToVector[0U] = true;
        c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 4, 474U,
          &chartInstance->c1_flgBalCompl);
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                          chartInstance->c1_flgBalCompl);
      }
      break;

     case c1_IN_BalNotActive:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0,
                        c1_IN_BalNotActive);
      sf_temporal_value_range_check_min(chartInstance->S, 480U, (real_T)
        chartInstance->c1_BalNotActWait, 0.0);
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 4, 0,
                           chartInstance->c1_temporalCounter_i1 * 5 >=
                           chartInstance->c1_BalNotActWait) && covrtEmlCondEval
          (chartInstance->c1_covrtInstance, 5U, 4, 1, covrtRelationalopUpdateFcn
           (chartInstance->c1_covrtInstance, 5U, 4U, 0U, (real_T)
            chartInstance->c1_DeltaCellVolt, (real_T)
            chartInstance->c1_TargetDeltaV, -3, 4U,
            chartInstance->c1_DeltaCellVolt > chartInstance->c1_TargetDeltaV)))
      {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 4, 0, true);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 4, 0, true);
        c1_c_out = true;
      } else {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 4, 0, false);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 4, 0, false);
        c1_c_out = false;
      }

      if (c1_c_out) {
        chartInstance->c1_JITTransitionAnimation[4U] = 1U;
        chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
        chartInstance->c1_is_finally_BalancingON = c1_IN_NO_ACTIVE_LEAF;
        chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
          (chartInstance->c1_is_BalancingON == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
          (chartInstance->c1_is_BalancingON == 2U));
        chartInstance->c1_is_BalancingON = c1_IN_BalActive;
        c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
          &chartInstance->c1_is_BalancingON);
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
          (chartInstance->c1_is_BalancingON == 1U));
        c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
          (chartInstance->c1_is_BalancingON == 2U));
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 2);
        c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 1);
        chartInstance->c1_is_finally_c1_Balancing_Logic =
          c1_finally_IN_BalActive;
        chartInstance->c1_is_finally_BalancingON = c1_b_finally_IN_BalActive;
        c1_enter_atomic_BalActive(chartInstance);
      } else {
        sf_temporal_value_range_check_min(chartInstance->S, 466U, (real_T)
          chartInstance->c1_BalOnWait, 0.0);
        if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 2, 0,
                           chartInstance->c1_temporalCounter_i1 * 5 >=
                           chartInstance->c1_BalOnWait)) {
          c1_d_out = true;
        } else {
          c1_d_out = false;
        }

        if (c1_d_out) {
          chartInstance->c1_JITTransitionAnimation[2U] = 1U;
          chartInstance->c1_is_finally_c1_Balancing_Logic = c1_IN_NO_ACTIVE_LEAF;
          chartInstance->c1_is_finally_BalancingON = c1_IN_NO_ACTIVE_LEAF;
          chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
            (chartInstance->c1_is_BalancingON == 1U));
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
            (chartInstance->c1_is_BalancingON == 2U));
          chartInstance->c1_is_c1_Balancing_Logic = c1_IN_NO_ACTIVE_CHILD;
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
            (chartInstance->c1_is_c1_Balancing_Logic == 1U));
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
            (chartInstance->c1_is_c1_Balancing_Logic == 2U));
          c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 2, 414U, 0);
          c1_sdiStreamingWrapperFcn(chartInstance, 1, 2, 414U,
            &chartInstance->c1_is_BalancingON);
          chartInstance->c1_is_c1_Balancing_Logic = c1_IN_BalancingOFF;
          c1_sdiStreamingWrapperFcn(chartInstance, 1, 0, 0U,
            &chartInstance->c1_is_c1_Balancing_Logic);
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 1, 463U, (int32_T)
            (chartInstance->c1_is_c1_Balancing_Logic == 1U));
          c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 2, 414U, (int32_T)
            (chartInstance->c1_is_c1_Balancing_Logic == 2U));
          c1_c_sdiStreamingWrapperFcn(chartInstance, 2, 0, 0U, 1);
          chartInstance->c1_temporalCounter_i1 = 0U;
          chartInstance->c1_is_finally_c1_Balancing_Logic =
            c1_finally_IN_BalancingOFF;
          c1_enter_atomic_BalancingOFF(chartInstance);
        }
      }
      break;

     default:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0, 0);

      /* Unreachable state, for coverage only */
      chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 3, 475U, (int32_T)
        (chartInstance->c1_is_BalancingON == 1U));
      c1_b_sdiStreamingWrapperFcn(chartInstance, 4, 4, 477U, (int32_T)
        (chartInstance->c1_is_BalancingON == 2U));
      break;
    }
  }
}

static void c1_enter_atomic_BalActive(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  real_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_k;
  real32_T c1_b_x;
  real32_T c1_x;
  real32_T c1_z;
  boolean_T c1_c_x[6];
  boolean_T c1_x_data[6];
  boolean_T c1_exitg1;
  c1_x = chartInstance->c1_TargetDeltaV;
  c1_b_x = c1_x;
  c1_z = c1_b_x / 2.0F;
  for (c1_i = 0; c1_i < 6; c1_i++) {
    (*chartInstance->c1_BalCmd)[c1_i] = ((*chartInstance->c1_CellVoltages)[c1_i]
      - *chartInstance->c1_MinCellVolt > c1_z);
  }

  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 3, 451U,
    chartInstance->c1_BalCmd);
  for (c1_i1 = 0; c1_i1 < 6; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                      (*chartInstance->c1_BalCmd)[c1_i1]);
  }

  for (c1_i2 = 0; c1_i2 < 6; c1_i2++) {
    c1_c_x[c1_i2] = !(*chartInstance->c1_BalCmd)[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 6; c1_i3++) {
    c1_x_data[c1_i3] = c1_c_x[c1_i3];
  }

  chartInstance->c1_flgBalCompl = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 6)) {
    c1_b_k = (real_T)c1_k + 1.0;
    if (!c1_x_data[(int32_T)c1_b_k - 1]) {
      chartInstance->c1_flgBalCompl = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  chartInstance->c1_dataWrittenToVector[0U] = true;
  c1_d_sdiStreamingWrapperFcn(chartInstance, 0, 4, 474U,
    &chartInstance->c1_flgBalCompl);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                    chartInstance->c1_flgBalCompl);
}

const mxArray *sf_c1_Balancing_Logic_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  const char_T *c1_data[4] = {
    "789c6360f4f465646060e0638000053608cd0be50b4069260654802ecf88838601560616147d30f97e289d9c9f57925a5102e1e425e6a6c275a6e4e766e625e6"
    "95845416a43214a516e7e794a5a68065d2327352433273538391397e205eae1b92149c039202b19d335293b3834b73198a328a112ecc41e6c0c32301877f5908",
    "84073a400f0f747530fb0ac8b40f663e1f1a1fdd3e98bc936f707c704962496abc6b1e302406ccbf2bc8b40f66be2301fb60f2d17eb12e5631be99c945f9ee45"
    "9929313e99251999a5b99ef9794e892525a9459531c010897106a6c2a2fc9c9cd4a218d400d2cb457377020e77f113e96e5cf9849781034caf6ab8ca484ffb18",
    "024e4fa3ab7d503050f655e0308fd8742786c33e013479cf3023bfdc3ce7e00203f3c4c06413c750cf0c9f5067843b0208d843c81d0c38f8b4361f00a30d56c3",
    "" };

  c1_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c1_data[0], 1592U, &c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_m;
}

static const mxArray *c1_b_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_c1_Balancing_Logic == c1_IN_BalancingOFF) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_m;
}

static const mxArray *c1_c_sfAfterOrElapsed(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_m;
}

static void c1_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_BalCmd, const char_T *c1_identifier,
  boolean_T c1_y[6])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_BalCmd), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_BalCmd);
}

static void c1_b_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[6])
{
  int32_T c1_i;
  boolean_T c1_bv[6];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_bv, 1, 11, 0U, 1, 0U, 2, 1, 6);
  for (c1_i = 0; c1_i < 6; c1_i++) {
    c1_y[c1_i] = c1_bv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static real32_T c1_c_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_DeltaCellVolt, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real32_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_DeltaCellVolt),
    &c1_thisId);
  sf_mex_destroy(&c1_b_DeltaCellVolt);
  return c1_y;
}

static real32_T c1_d_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real32_T c1_f;
  real32_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_f, 0, 1, 0U, 0, 0U, 0);
  c1_y = c1_f;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static boolean_T c1_e_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_flgBalCompl, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_flgBalCompl),
    &c1_thisId);
  sf_mex_destroy(&c1_b_flgBalCompl);
  return c1_y;
}

static boolean_T c1_f_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_b;
  boolean_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_g_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Balancing_Logic, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_Balancing_Logic), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_Balancing_Logic);
  return c1_y;
}

static uint8_T c1_h_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint32_T c1_i_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_is_c1_Balancing_Logic, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_c1_Balancing_Logic), &c1_thisId);
  sf_mex_destroy(&c1_b_is_c1_Balancing_Logic);
  return c1_y;
}

static uint32_T c1_j_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint32_T c1_b_u;
  uint32_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 7, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint16_T c1_k_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_temporalCounter_i1, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint16_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_temporalCounter_i1),
    &c1_thisId);
  sf_mex_destroy(&c1_b_temporalCounter_i1);
  return c1_y;
}

static uint16_T c1_l_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint16_T c1_b_u;
  uint16_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 5, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_m_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_dataWrittenToVector, const char_T
  *c1_identifier, boolean_T c1_y[1])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_dataWrittenToVector),
                        &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_dataWrittenToVector);
}

static void c1_n_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[1])
{
  boolean_T c1_bv[1];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_bv, 1, 11, 0U, 1, 0U, 1, 1);
  c1_y[0] = c1_bv[0];
  sf_mex_destroy(&c1_u);
}

static const mxArray *c1_o_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  sf_mex_assign(&c1_y, c1_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_setSimStateSideEffectsInfo), &c1_thisId), true);
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static const mxArray *c1_p_emlrt_marshallIn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  const mxArray *c1_y = NULL;
  (void)chartInstance;
  (void)c1_parentId;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u), true);
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_init_sf_message_store_memory(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

mxArray *sf_c1_Balancing_Logic_getDebuggerHoverDataFor
  (SFc1_Balancing_LogicInstanceStruct *chartInstance, uint32_T c1_u)
{
  const mxArray *c1_m = NULL;
  const mxArray *c1_m1 = NULL;
  const mxArray *c1_m2 = NULL;
  mxArray *c1_m3 = NULL;
  c1_m3 = NULL;
  switch (c1_u) {
   case 480U:
    sf_mex_assign(&c1_m, c1_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m), 480U, "afterOrElapsed", "", 477U,
                      -1, -1, -1, -1);
    break;

   case 464U:
    sf_mex_assign(&c1_m1, c1_b_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m1), 464U, "afterOrElapsed", "",
                      463U, -1, -1, -1, -1);
    break;

   case 466U:
    sf_mex_assign(&c1_m2, c1_c_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m2), 466U, "afterOrElapsed", "",
                      477U, -1, -1, -1, -1);
    break;
  }

  sf_mex_destroy(&c1_m);
  sf_mex_destroy(&c1_m1);
  sf_mex_destroy(&c1_m2);
  return c1_m3;
}

static void c1_chart_data_browse_helper(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  const mxArray *c1_m = NULL;
  int32_T c1_i;
  real32_T c1_f;
  real32_T c1_f1;
  c1_BMS_State_Enum c1_r;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 469U:
    c1_r = *chartInstance->c1_BMS_State;
    c1_i = (int32_T)c1_r;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_i, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_assign(c1_mxData, sf_mex_create_enum("BMS_State_Enum", c1_m), false);
    break;

   case 453U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_CellVoltages, 1, 0U, 1U, 0U, 1, 6), false);
    break;

   case 191U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_TargetDeltaV, 1, 0U, 0U, 0U, 0), false);
    break;

   case 451U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_BalCmd,
      11, 0U, 1U, 0U, 2, 1, 6), false);
    break;

   case 474U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_flgBalCompl, 11, 0U, 0U, 0U, 0), false);
    break;

   case 430U:
    c1_f = *chartInstance->c1_MaxCellVolt;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_f, 1, 0U, 0U, 0U, 0),
                  false);
    break;

   case 443U:
    c1_f1 = *chartInstance->c1_MinCellVolt;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_f1, 1, 0U, 0U, 0U, 0),
                  false);
    break;

   case 485U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalNotActWait, 4, 0U, 0U, 0U, 0), false);
    break;

   case 486U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalOffWait, 4, 0U, 0U, 0U, 0), false);
    break;

   case 487U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalOnWait, 4, 0U, 0U, 0U, 0), false);
    break;

   case 492U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_flgEnBalancing, 11, 0U, 0U, 0U, 0), false);
    break;

   case 465U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_DeltaCellVolt, 1, 0U, 0U, 0U, 0), false);
    break;
  }

  sf_mex_destroy(&c1_m);
}

static void c1_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  void *c1_streamedData)
{
  if (chartInstance->c1_sdiLoggedStatesBuffer[c1_ssidIdx] & (uint8_T)c1_modeFlag)
  {
    sdi_stream_child_activity_signal(&chartInstance->c1_sdiBlockInfo, c1_ssid,
      c1_streamedData);
  }
}

static void c1_b_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  int32_T c1_streamedData)
{
  if (chartInstance->c1_sdiLoggedStatesBuffer[c1_ssidIdx] & (uint8_T)c1_modeFlag)
  {
    sdi_update_self_activity_signal(&chartInstance->c1_sdiBlockInfo, c1_ssid,
      c1_streamedData);
  }
}

static void c1_c_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  int32_T c1_streamedData)
{
  if (chartInstance->c1_sdiLoggedStatesBuffer[c1_ssidIdx] & (uint8_T)c1_modeFlag)
  {
    sdi_update_leaf_activity_signal(&chartInstance->c1_sdiBlockInfo, c1_ssid,
      c1_streamedData);
  }
}

static void c1_d_sdiStreamingWrapperFcn(SFc1_Balancing_LogicInstanceStruct
  *chartInstance, int32_T c1_modeFlag, int32_T c1_ssidIdx, uint32_T c1_ssid,
  void *c1_streamedData)
{
  (void)c1_modeFlag;
  if (chartInstance->c1_sdiLoggedDataBuffer[c1_ssidIdx]) {
    sdi_stream_data_signal(&chartInstance->c1_sdiBlockInfo, c1_ssid,
      c1_streamedData);
  }
}

static void init_test_point_addr_map(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  chartInstance->c1_testPointAddrMap[0] = &chartInstance->c1_flgBalCompl;
  chartInstance->c1_testPointAddrMap[1] = &chartInstance->c1_DeltaCellVolt;
}

static void **get_test_point_address_map(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  return &chartInstance->c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_Balancing_LogicInstanceStruct *chartInstance)
{
  return &chartInstance->c1_testPointMappingInfo;
}

static void **get_dataset_logging_obj_vector(SFc1_Balancing_LogicInstanceStruct *
  chartInstance)
{
  return &chartInstance->c1_dataSetLogObjVector[0];
}

static void init_dsm_address_info(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_Balancing_LogicInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_BMS_State = (c1_BMS_State_Enum *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c1_CellVoltages = (real32_T (*)[6])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_BalCmd = (boolean_T (*)[6])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_MaxCellVolt = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_MinCellVolt = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_Balancing_Logic_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3430422422U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1630618111U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3011251316U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(771448525U);
}

mxArray *sf_c1_Balancing_Logic_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_Balancing_Logic_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("testpoint");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("DeltaCellVolt");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_Balancing_Logic_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_Balancing_Logic(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrNld1qwjAUx9POSd2YyIZeTZBd7Frv5tXK3MWEfV0Md1lCjBJIE6lxTNB32WPsMfYIe4Q9wpK"
    "mag1llbVzBkL4Hzgn+Z3TngOs7h2Qqyz3ewmAojwduW2g136kLbkPolPbC0t7Q24xHWFlHweo25"
    "cng36o4eS1ywY8jH8BVvGLCfGtWPxSZNfr6zKTf3Pmmv6FBP9izL8S6StIO35f52eRp99zOG4m/"
    "8o89HdTOI4MDqWvMRWwgyntcSrAjvC8bcZzaPAoPaBDVRruj+iSIztPIxtPdP9jCs+pwaM0GXsQ"
    "CfKCPdTyJBlkiLChd8uHBOXHd5YL300KX9Xgq2q+RLCd4PqcbvQdlg2usuZaQj3c58VzvpU6HRs"
    "8Sgvsj3ig/qwJEzjwSGsVz7F+ng+WMR/2Iq3ehgXgY4BE/H3NlPfZa++zARTaz03Ji23kpbK49G"
    "Pu6nEyc/91HoHmVup7YtRX6T4U8DkgQmD2xHsYCR7k2D/bW+mfdYOrrv/DAWGQ0ulf9pl2Ln0mr"
    "W41g6+2zpfYb74BHC11sQ=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Balancing_Logic_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sCsg9oiKSKINpYOQifTg4RH";
}

static void sf_opaque_initialize_c1_Balancing_Logic(void *chartInstanceVar)
{
  initialize_params_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
  initialize_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_Balancing_Logic(void *chartInstanceVar)
{
  enable_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_Balancing_Logic(void *chartInstanceVar)
{
  disable_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_Balancing_Logic(void *chartInstanceVar)
{
  sf_gateway_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_Balancing_Logic(SimStruct* S)
{
  return get_sim_state_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_Balancing_Logic(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_Balancing_Logic(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Balancing_LogicInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Balancing_Logic_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_Balancing_Logic
      ((SFc1_Balancing_LogicInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_Balancing_Logic(void *chartInstanceVar)
{
  mdl_start_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_Balancing_Logic(void *chartInstanceVar)
{
  mdl_terminate_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Balancing_Logic(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc1_Balancing_Logic((SFc1_Balancing_LogicInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_Balancing_Logic_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [32] = {
    "eNrtWstvG0UYXydplLRNWxUVLq2oOCAOCKVQCYoQJH61Vp1Hu05aIGBNdsfeUWZn3JlZJ4ZW6pE",
    "bN44IiUvFiSN/ADcuFRJ3rkgcOHLkm92Nvdm48c46SYPaldz02/VvvvdjZm0VaksWXOfgs/C2ZU",
    "3D3xn4TFjRdSqmC4lPdH/K+iimH56xLIe7uI2ZHbRaZMcyu1jgryKBfGmZXwz5+C6WnAaKcFZjL",
    "Z4dS1gLC8wcWKDDhTLiK4kfUMK2qgFzNGd5zyOOZ3s8oG4RFkTuCqO9Z/HtBGoVOJaJwI6qYuwq",
    "T/Cg7VUpah9sBaG2Sx52tmTgG9tKYmUHHa2qXAqoIh2KKzvYqTGpEFhBjtDXVkjhktoxM7LWV9q",
    "7aO53KEEsu609JG3cgehQeK3jwr8rgQLrZcI6HhKqiD3UxbJOtkLunOFM3ImEb28ShhQXBNGKT0",
    "t6tYz6rlLQcQlSgpr6CPQtCoy2OpwwZZgQdhXsXGFok+Iy3gzahnxt/CDQ2bBO8DYWZv5tlXgXC",
    "9TGK8xM5tBHlZ0wKPu5lBGriI/XkVh0IHYlds3qBiSdtBGEI27AMkZYHJq4JhuCdCE2TGtdTad/",
    "rloX+FH0y1zYkG+li43jqs+36rASolSaYRu8U8ddTEP+ZaRQDmzE3wAsJXEbHKJDVxvDihUwApk",
    "QY0ucuSR7VHZTqLCxLUOTygAnvk4D7IKZ+6L3FxqVR4FU3C9BySnX6xn57cfWmMKihRycuccIRC",
    "QGgcO4MuTrEqkTCdBgJRVqmXmFKAdzQS3ZClh5m4stsLFpMxvYSmeCGRq7bSjMCodFrgLRvY5ok",
    "FFmX7YhfyA81iRUWTO+gNX5kwvsIMfDru6chOIlqLOwQFYXS93yF0HbLlG9MpaOIJ2smRRAQYem",
    "q63U6HXwGttifJtVBfftePI6IK4whqqBBCOsXYQWLnpVED6b1AI/aITV3XTI0XZGiqJNHRs3MYN",
    "uqHXVUwNyIKsqDEZkEGgcrE2+giGGSSIVNOpe1Oqjvqfn91vWYH6fGjK/X0zM7xdi2rnWLCKYVh",
    "xYvlnnbeJY/fXmE+udzbAfOBXjfp4020fMxfS3Wh4OJWhHDYb7gVe5D75kSocDuAlG/m6se4tET",
    "dxOEsua8quJR31CP9L/D4ucDUVOeIngoElinx3Sdt29knbt76dG+ONcCqfp4pLdDEflpg798fjv",
    "jOC/mMJp+vPlL8ofbiwRR/CbgrgbdaI8ArMDZ0WkIBR7GyDhBgShEpxSLDb2CvyOn+D/QYL/+RF",
    "xMBff/+nxH4Vx8Nbqb9+NhR9T/iR+VD6+mrK/pmvr7y77rGR35t9Hd5zri2s1r75WitZ7K7FeYc",
    "h6yTjI8/28uGR8zk7s/f5Uyk4TcKcAVzo/5qyDcdOxjb653vz19NML/pc/fv3X72f+Pj+Kf2Ef/",
    "0I/97zTZnVqN18v7+5b+lNSd98gkcX/r6X8r2lZku0bnNy2b9eWO5+u3CGtRvv63Vvher/MHizv",
    "6ZS8u/ev6r2Srpp6feHU3ERpRUG0n0/H+/QIe8zuifd/PhkLP/9wIY0fZq/plL00Dc2r5Lt74ze",
    "/HjMLY+EvPFrIUvfnUnpouoypQiVM6Tqnyjoh+vyQTZ8zKX003aJt7Rp93rOvvuTX5+p4+sT8V0",
    "foczmlz+XwjKOJ9CSLm8MnpsPR741D0W9U3bmU0u9SpN9QxU6EXn/2FvLOU6BXX6mV5cPS581j8",
    "dOweV1hfUigMyvQe/UmuTZYb6Zg1s8mY1rLhpXFpeWorHNvIeYxkG/CQmr/3Ds9AjebmFmtp48W",
    "onbycOG59iNr/lj8+0rKv5p2kUL3BIFRW58BYUdxcYj188ax1M8rKb2uRHnYgu0bpb2jrDM3DqX",
    "O5JnbE/o9s97knVNNcdZL3InAFV5AObOcE03lxBVy4qxjxo2r31Hv80/a9/Oeb500PdJ/D/K/tc",
    "//J1ev+zNmc+XrMf1x/z1cySPUHfImIH5cx6g17GnM/8nkwfJOHRBPcyPknU7k+WPD+fliYk53t",
    "IY1d6fB9XuoJdRJ2rtwtPIXMp43n03l0dno/CQeVqrVvPwnMvIfdk6wZ1jKyf/7wovhv9mU/WYj",
    "+4WZg8fgPzFe/CxzNRAhtNfU8eSrFvwo/P1khL+nX5B8Pap4mzzkeHtZL/7n9eKI55d/LTM/776",
    "Xqej5Jf7B5GfvLcLuvidJ9HJ49/aq0L976z8SGMnhv294HvvArOd4k3v8NGndLN7OvY/8D6H5FQ",
    "k=",
    ""
  };

  static char newstr [2253] = "";
  newstr[0] = '\0';
  for (i = 0; i < 32; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_Balancing_Logic(SimStruct *S)
{
  const char* newstr = sf_c1_Balancing_Logic_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3294573704U));
  ssSetChecksum1(S,(1829818378U));
  ssSetChecksum2(S,(3917194078U));
  ssSetChecksum3(S,(267127762U));
}

static void mdlRTW_c1_Balancing_Logic(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlSetupRuntimeResources_c1_Balancing_Logic(SimStruct *S)
{
  SFc1_Balancing_LogicInstanceStruct *chartInstance;
  chartInstance = (SFc1_Balancing_LogicInstanceStruct *)utMalloc(sizeof
    (SFc1_Balancing_LogicInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_Balancing_LogicInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_Balancing_Logic;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_Balancing_Logic;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_Balancing_Logic;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_Balancing_Logic;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_Balancing_Logic;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_Balancing_Logic;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_Balancing_Logic;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_Balancing_Logic;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_Balancing_Logic;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_Balancing_Logic;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Balancing_Logic;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_Balancing_Logic;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
  }

  mdl_setup_runtime_resources_c1_Balancing_Logic(chartInstance);
}

void c1_Balancing_Logic_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_Balancing_Logic(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Balancing_Logic(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Balancing_Logic(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Balancing_Logic_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "boolean_T", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "real32_T", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 } };

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  { &sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0 }
};

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 } };

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  { 0, 0, "StateflowChart/flgBalCompl", "flgBalCompl", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/DeltaCellVolt", "DeltaCellVolt", 0, 1, 0, 0, 0 } };

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0 } };

static const uint_T dimensionArray[] = {
  1, 1 };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    2,                                 /* Num Block IO signals */
    NULL,                              /* Root Inputs Array    */
    0,                                 /* Num root inputs      */
    NULL,                              /* Root Outputs Array */
    0                                  /* Num root outputs   */
  },

  /* parameter tuning */
  {
    NULL,                              /* Block parameters Array    */
    0,                                 /* Num block parameters      */
    NULL,                              /* Variable parameters Array */
    0                                  /* Num variable parameters   */
  },

  /* block states */
  {
    NULL,                              /* Block States array        */
    0                                  /* Num Block States          */
  },

  /* Static maps */
  {
    dataTypeMap,                       /* Data Type Map            */
    dimensionMap,                      /* Data Dimension Map       */
    fixedPointMap,                     /* Fixed Point Map          */
    NULL,                              /* Structure Element map    */
    sampleTimeMap,                     /* Sample Times Map         */
    dimensionArray                     /* Dimension Array          */
  },

  /* Target type */
  "float",

  {
    3294573704U,
    1829818378U,
    3917194078U,
    267127762U
  }
};

static void init_test_point_mapping_info(SimStruct *S)
{
  rtwCAPI_ModelMappingInfo *testPointMappingInfo;
  void **testPointAddrMap;
  SFc1_Balancing_LogicInstanceStruct *chartInstance =
    (SFc1_Balancing_LogicInstanceStruct *)sf_get_chart_instance_ptr(S);
  init_test_point_addr_map(chartInstance);
  testPointMappingInfo = get_test_point_mapping_info(chartInstance);
  testPointAddrMap = get_test_point_address_map(chartInstance);
  rtwCAPI_SetStaticMap(*testPointMappingInfo, &testPointMappingStaticInfo);
  rtwCAPI_SetLoggingStaticMap(*testPointMappingInfo, NULL);
  rtwCAPI_SetInstanceLoggingInfo(*testPointMappingInfo, NULL);
  rtwCAPI_SetPath(*testPointMappingInfo, "");
  rtwCAPI_SetFullPath(*testPointMappingInfo, NULL);
  rtwCAPI_SetDataAddressMap(*testPointMappingInfo, testPointAddrMap);
  rtwCAPI_SetChildMMIArray(*testPointMappingInfo, NULL);
  rtwCAPI_SetChildMMIArrayLen(*testPointMappingInfo, 0);
  ssSetModelMappingInfoPtr(S, testPointMappingInfo);
}
