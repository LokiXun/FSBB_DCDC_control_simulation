#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_zc.h"
#include "Battery_Model_981c414b_1_ds_tdxy_p.h"
#include "Battery_Model_981c414b_1_ds_dxy_p.h"
#include "Battery_Model_981c414b_1_ds_y.h"
#include "Battery_Model_981c414b_1_ds_nldv.h"
#include "Battery_Model_981c414b_1_ds_obs_il.h"
#include "Battery_Model_981c414b_1_ds_obs_all.h"
#include "Battery_Model_981c414b_1_ds_obs_act.h"
#include "Battery_Model_981c414b_1_ds_obs_exp.h"
#include "Battery_Model_981c414b_1_ds_mode.h"
#include "Battery_Model_981c414b_1_ds_m_p.h"
#include "Battery_Model_981c414b_1_ds_dxm_p.h"
#include "Battery_Model_981c414b_1_ds_log.h"
#include "Battery_Model_981c414b_1_ds_dnf_p.h"
#include "Battery_Model_981c414b_1_ds_tdxf_p.h"
#include "Battery_Model_981c414b_1_ds_m.h"
#include "Battery_Model_981c414b_1_ds_a_p.h"
#include "Battery_Model_981c414b_1_ds_dxy.h"
#include "Battery_Model_981c414b_1_ds_a.h"
#include "Battery_Model_981c414b_1_ds_tduf_p.h"
#include "Battery_Model_981c414b_1_ds_dxf_p.h"
#include "Battery_Model_981c414b_1_ds_vmf.h"
#include "Battery_Model_981c414b_1_ds_ic.h"
#include "Battery_Model_981c414b_1_ds_dxf.h"
#include "Battery_Model_981c414b_1_ds_f.h"
#include "Battery_Model_981c414b_1_ds_duf.h"
#include "Battery_Model_981c414b_1_ds_assert.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "ssc_ml_fun.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
static int32_T ds_vmm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vpf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vsf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dwf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dwf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dnf_v_x ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cer ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxcer_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddcer_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icrm_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ddicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_freqs ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_mdxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dtdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_l ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qx ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_q1 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qx_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_var_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_eq_tol ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_slv ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_sclv ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_imin ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_imax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mduy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_nldv (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_imin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dimin ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static void
release_reference ( NeDynamicSystem * ds ) ; static void get_reference (
NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics (
NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 116 ]
= { { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 0U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 2U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 4U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 5U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 6U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 8U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 11U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 12U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 14U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 16U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 17U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 18U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 20U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 22U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 23U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 24U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 26U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 28U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 29U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 30U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 32U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 34U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 35U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
, "Battery_Model/PreChargeCircuit/Capacitor" , 1U , 36U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/Capacitor1" , 1U , 37U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
3U , 38U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
3U , 41U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
3U , 44U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
3U , 47U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
3U , 50U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
3U , 53U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, 3U , 56U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, 3U , 59U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, 3U , 62U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, 3U , 65U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, 3U , 68U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, 3U , 71U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 74U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 76U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 78U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 79U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 80U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 81U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 82U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 83U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 85U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 87U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 2U , 88U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 90U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 91U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 93U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 95U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 96U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 97U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 98U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 99U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 100U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 102U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 104U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 2U , 105U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 107U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 108U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 110U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 112U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 113U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 114U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 115U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 116U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 117U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 119U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 121U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 2U , 122U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 124U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 125U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 127U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 129U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 130U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 131U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 132U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 133U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 134U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 136U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 138U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 2U , 139U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 141U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 142U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 144U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 146U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 147U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 148U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 149U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 150U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 151U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 153U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 155U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 2U , 156U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 158U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 159U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 161U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 163U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 164U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 165U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 166U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 167U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 168U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 170U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 172U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 2U , 173U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 175U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
, "Battery_Model/PreChargeCircuit/NegativeContactorChgr" , 3U , 176U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , 3U , 179U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , 3U , 182U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , 3U , 185U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , 3U , 188U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , 3U , 191U , TRUE , 1.0
, "1" , } } ; static NeCERData * s_cer_data = NULL ; static NeICRData
s_icr_data [ 24 ] = { { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 0U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 1U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 2U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 3U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 4U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 5U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 6U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 7U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 8U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 9U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 10U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 11U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 12U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 13U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 14U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 15U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 16U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 17U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 18U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 19U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 20U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 21U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 22U , } , { "" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 23U , } } ; static NeVariableData s_variable_data [ 116 ] = { {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.cell_temperature"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.charge" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.num_cycles"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"vrc1" , } , { "PreChargeCircuit.Capacitor.vc" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/Capacitor" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ { 1 , 1 } } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"PreChargeCircuit.Capacitor1.vc" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/Capacitor1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"Battery_Pack.Batt0.v" , 0U , 1 , "Battery_Model/Battery_Pack" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn2.v" , 0U , 1 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , 1.0
, "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" ,
} , { "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn3.v" , 0U
, 1 , "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn4.v" , 0U , 1 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , 1.0
, "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" ,
} , { "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn5.v" , 0U
, 1 , "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn6.v" , 0U , 1 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , 1.0
, "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" ,
} , { "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.v" , 0U , 0
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.v" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.v" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.v" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.v" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.v" , 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.v" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.i" , 0U , 0
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xVint" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.power_dissipated"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.stateOfCharge"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xR0" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xR1" , 0U ,
0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdAH_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdR0_fade" ,
0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdR1_fading"
, 0U , 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xqnom" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xtau1" , 0U
, 0 ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted first time constant" , } , {
"PreChargeCircuit.Capacitor1.i" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/Capacitor1" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"PreChargeCircuit.NegativeContactorChgr.i" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"PreChargeCircuit.NegativeContactorInvtr.i" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.v" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.v" , 0U , 0 ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } } ; static
NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 537 ] = { { "Battery_Pack.Batt0.v" ,
"Battery_Model/Battery_Pack" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Batt1.v" , "Battery_Model/Battery_Pack" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Batt0.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Batt1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn6.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Conn7.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.power_dissipated"
, "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6"
, { { 1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter1_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter2_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter3_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter4_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter4_output" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter5_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter5_output" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter6_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Simulink-PS\nConverter6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter6_output" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5.vT" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor1_V" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor2_V" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor3_V" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor4_V" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor5_V" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6.V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6.n.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6.p.v"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Voltage Sensor6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6_V" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/PS-Simulink\nConverter6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor6_V" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter11"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell1_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter10"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell2_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter9"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell3_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter8"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell4_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter7"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell5_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.H.T" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.Q" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.cell_temperature"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.charge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.i" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.num_cycles"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xVint" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdVint_fade"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.ocv" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.power_dissipated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.q_generated"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.soc" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.stateOfCharge"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vrc1" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.vrc5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG2" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG3" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG4" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xG5" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xGsd" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xR0" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xR1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first polarization resistance" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdAH_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdR0_fade" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xdR1_fading"
,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"First polarization resistance fading factor" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xqnom" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xtau1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, { { 1 , 1 } } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted first time constant" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6_soc" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter6"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Cell6_soc" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn1.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn2.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn3.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn4.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn5.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn6.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Conn7.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Controlled_Temperature_Source.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Controlled Temperature Source"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Controlled_Temperature_Source.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Controlled Temperature Source"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Controlled_Temperature_Source.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Controlled Temperature Source"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Controlled_Temperature_Source.S"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Controlled Temperature Source"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Controlled_Temperature_Source.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Controlled Temperature Source"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer1.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer1.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer1.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer1"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer1.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer1.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer1"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer2.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer2.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer2.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer2"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer2.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer2.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer2"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer3.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer3.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer3.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer3"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer3.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer3.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer3"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer4.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer4.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer4.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer4"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer4.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer4.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer4"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer5.A.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer5.B.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer5.Q"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer5"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer5.T"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Convective_Heat_Transfer5.var_heat_tr_coeff"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Convective Heat Transfer5"
, { { 1 , 1 } } , "W/(m^2*K)" , 1.0 , "kg/(K*s^3)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Perfect_Insulator.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Perfect Insulator"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Perfect_Insulator.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Perfect Insulator"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Simulink_PS_Converter1_output"
,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Simulink-PS\nConverter1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor1_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor2_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor3_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor4_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5.A.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5.B.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Temperature Sensor5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor5_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor_T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/PS-Simulink\nConverter"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature_Sensor_T" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference1.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference2.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference3.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference4.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference4"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference5.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference5"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Thermal_Reference6.H.T" ,
 "Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Thermal Reference6"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , { "Battery_Pack.Battery_Pack_1Module.Current_Sensor.I" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Current Sensor" , { { 1 , 1
} } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery_Pack.Battery_Pack_1Module.Current_Sensor.i1" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Current Sensor" , { { 1 , 1
} } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_Pack.Battery_Pack_1Module.Current_Sensor.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Current Sensor" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Current_Sensor.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Current Sensor" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Current_Sensor_I" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/PS-Simulink\nConverter5" , {
{ 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I" , }
, { "Battery_Pack.Battery_Pack_1Module.Electrical_Reference.V.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Electrical Reference" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4.V" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Voltage Sensor4" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4.n.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Voltage Sensor4" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4.p.v" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Voltage Sensor4" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4_V" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/PS-Simulink\nConverter3" , {
{ 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor4_V" ,
} , { "Charger_Load.Charger.Chgr0.v" , "Battery_Model/Charger_Load/Charger" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.Charger.Chgr1.v" , "Battery_Model/Charger_Load/Charger" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.Charger.Controlled_Current_Source.head.v" ,
"Battery_Model/Charger_Load/Charger/Controlled Current Source" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.Charger.Controlled_Current_Source.i" ,
"Battery_Model/Charger_Load/Charger/Controlled Current Source" , { { 1 , 1 }
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Charger_Load.Charger.Controlled_Current_Source.iT" ,
"Battery_Model/Charger_Load/Charger/Controlled Current Source" , { { 1 , 1 }
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "iT" , } , {
"Charger_Load.Charger.Controlled_Current_Source.tail.v" ,
"Battery_Model/Charger_Load/Charger/Controlled Current Source" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.Charger.Controlled_Current_Source.v" ,
"Battery_Model/Charger_Load/Charger/Controlled Current Source" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Charger_Load.Charger.Electrical_Reference.V.v" ,
"Battery_Model/Charger_Load/Charger/Electrical Reference" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.Charger.Simulink_PS_Converter1_output" ,
"Battery_Model/Charger_Load/Charger/Simulink-PS\nConverter1" , { { 1 , 1 } }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output" , } , { "Charger_Load.Chgr0.v" ,
"Battery_Model/Charger_Load" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.Chgr1.v" , "Battery_Model/Charger_Load" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Controlled_Current_Source.head.v" ,
"Battery_Model/Charger_Load/DriveLoad/Controlled Current Source" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Controlled_Current_Source.i" ,
"Battery_Model/Charger_Load/DriveLoad/Controlled Current Source" , { { 1 , 1
} } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Charger_Load.DriveLoad.Controlled_Current_Source.iT" ,
"Battery_Model/Charger_Load/DriveLoad/Controlled Current Source" , { { 1 , 1
} } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "iT" , } , {
"Charger_Load.DriveLoad.Controlled_Current_Source.tail.v" ,
"Battery_Model/Charger_Load/DriveLoad/Controlled Current Source" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Controlled_Current_Source.v" ,
"Battery_Model/Charger_Load/DriveLoad/Controlled Current Source" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Charger_Load.DriveLoad.Electrical_Reference.V.v" ,
"Battery_Model/Charger_Load/DriveLoad/Electrical Reference" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Invtr0.v" , "Battery_Model/Charger_Load/DriveLoad" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Invtr1.v" , "Battery_Model/Charger_Load/DriveLoad" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.DriveLoad.Simulink_PS_Converter1_output" ,
"Battery_Model/Charger_Load/DriveLoad/Simulink-PS\nConverter1" , { { 1 , 1 }
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output" , } , { "Charger_Load.Invtr0.v" ,
"Battery_Model/Charger_Load" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Charger_Load.Invtr1.v" , "Battery_Model/Charger_Load" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Batt0.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 } }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Batt1.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 } }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Capacitor.n.v" , "Battery_Model/PreChargeCircuit/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "PreChargeCircuit.Capacitor.p.v" ,
"Battery_Model/PreChargeCircuit/Capacitor" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Capacitor.i" , "Battery_Model/PreChargeCircuit/Capacitor" ,
{ { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.Capacitor.power_dissipated" ,
"Battery_Model/PreChargeCircuit/Capacitor" , { { 1 , 1 } } , "W" , 1.0 , "kW"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"PreChargeCircuit.Capacitor.v" , "Battery_Model/PreChargeCircuit/Capacitor" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Capacitor.vc" , "Battery_Model/PreChargeCircuit/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Capacitor voltage" , } , { "PreChargeCircuit.Capacitor1.n.v" ,
"Battery_Model/PreChargeCircuit/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Capacitor1.p.v" ,
"Battery_Model/PreChargeCircuit/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Capacitor1.i" , "Battery_Model/PreChargeCircuit/Capacitor1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "PreChargeCircuit.Capacitor1.power_dissipated" ,
"Battery_Model/PreChargeCircuit/Capacitor1" , { { 1 , 1 } } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"PreChargeCircuit.Capacitor1.v" , "Battery_Model/PreChargeCircuit/Capacitor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "PreChargeCircuit.Capacitor1.vc" ,
"Battery_Model/PreChargeCircuit/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"PreChargeCircuit.Chgr0.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 } }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Chgr1.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 } }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Invtr0.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Invtr1.v" , "Battery_Model/PreChargeCircuit" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorChgr.i" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.NegativeContactorChgr.n.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorChgr.p.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorChgr.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorChgr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } ,
"A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.NegativeContactorChgr.vT" ,
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.NegativeContactorInvtr.i" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.NegativeContactorInvtr.n.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorInvtr.p.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorInvtr.v" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.NegativeContactorInvtr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } ,
"A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.NegativeContactorInvtr.vT" ,
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.PositiveContactorChgr.i" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PositiveContactorChgr.n.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorChgr.p.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorChgr.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorChgr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } ,
"A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.PositiveContactorChgr.vT" ,
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.PositiveContactorInvtr.i" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PositiveContactorInvtr.n.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorInvtr.p.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorInvtr.v" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PositiveContactorInvtr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } ,
"A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.PositiveContactorInvtr.vT" ,
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.PreChrgResistorChgr.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorChgr.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorChgr.Resistor.i" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PreChrgResistorChgr.Resistor.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorChgr.Resistor.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorChgr.Resistor.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorChgr.Resistor.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , { { 1 , 1 } } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "PreChargeCircuit.PreChrgResistorInvtr.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.i" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.v" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , { { 1 , 1 } } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "PreChargeCircuit.PreChrgSwitchChgr.i" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "A*V" ,
1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.PreChrgSwitchChgr.vT" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , { { 1 , 1 } } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.i" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.n.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.p.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.v" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.power_dissipated" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "A*V" ,
1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"PreChargeCircuit.PreChrgSwitchInvtr.vT" ,
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , { { 1 , 1 } } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"PreChargeCircuit.Simulink_PS_Converter1_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter1" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter1_output" , }
, { "PreChargeCircuit.Simulink_PS_Converter2_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter2" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter2_output" , }
, { "PreChargeCircuit.Simulink_PS_Converter3_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter3" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output" , }
, { "PreChargeCircuit.Simulink_PS_Converter4_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter4" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter4_output" , }
, { "PreChargeCircuit.Simulink_PS_Converter5_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter5" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter5_output" , }
, { "PreChargeCircuit.Simulink_PS_Converter_output" ,
"Battery_Model/PreChargeCircuit/Simulink-PS\nConverter" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output" , } , {
"PreChargeCircuit.Voltage_Sensor.V" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"PreChargeCircuit.Voltage_Sensor.n.v" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Voltage_Sensor.p.v" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Voltage_Sensor1.V" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"PreChargeCircuit.Voltage_Sensor1.n.v" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Voltage_Sensor1.p.v" ,
"Battery_Model/PreChargeCircuit/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"PreChargeCircuit.Voltage_Sensor1_V" ,
"Battery_Model/PreChargeCircuit/PS-Simulink\nConverter2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V" , } , {
"PreChargeCircuit.Voltage_Sensor_V" ,
"Battery_Model/PreChargeCircuit/PS-Simulink\nConverter1" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 90 ] = {
{
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 0U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 1U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 2U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 3U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 4U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 5U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 6U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 7U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 8U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 9U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 10U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 11U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 12U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 13U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 14U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 15U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 16U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 17U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 18U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 19U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 20U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 21U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 22U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 23U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 24U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 25U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 26U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 27U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 28U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 29U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 30U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 31U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 32U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 33U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 34U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 35U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 36U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 37U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 38U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 39U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 40U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 41U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 42U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 43U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 44U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 45U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 46U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 47U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 48U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 49U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 50U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 51U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 52U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 53U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 54U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 55U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 56U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 57U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 58U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 59U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 60U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 61U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xxR0" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 62U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6.xxqnom" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 63U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 64U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 65U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 66U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 67U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 68U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 69U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 70U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 71U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
1U , 72U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
1U , 73U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
1U , 74U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
1U , 75U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
1U , 76U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
1U , 77U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, 1U , 78U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, 1U , 79U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, 1U , 80U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, 1U , 81U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, 1U , 82U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, 1U , 83U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , 1U , 84U ,
"PreChargeCircuit.NegativeContactorChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , 1U , 85U ,
"PreChargeCircuit.NegativeContactorInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , 1U , 86U ,
"PreChargeCircuit.PositiveContactorChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , 1U , 87U ,
"PreChargeCircuit.PositiveContactorInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , { "Battery_Model/PreChargeCircuit/PreChrgSwitchChgr"
, 1U , 88U , "PreChargeCircuit.PreChrgSwitchChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } , {
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , 1U , 89U ,
"PreChargeCircuit.PreChrgSwitchInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 90 ] = { {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData
s_assert_data [ 204 ] = { {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 0U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 1U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 2U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 3U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 4U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 5U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 6U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 7U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 8U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 9U , "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1"
,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 10U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 11U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 12U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 13U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 14U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 15U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 16U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 17U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 18U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 19U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 20U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 21U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 22U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 23U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 24U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 25U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 26U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 27U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 28U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 29U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 30U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 31U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 32U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 33U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 34U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 35U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 36U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 37U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 38U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 39U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 40U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 41U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 42U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 43U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 44U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 45U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 46U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 47U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 48U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 49U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 50U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 51U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 52U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 53U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 54U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 55U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 56U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 57U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 58U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 59U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 60U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 61U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 62U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 63U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 64U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 65U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 66U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 67U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 68U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 69U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 70U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"First polarization resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 71U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
1U , 72U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R1" ,
1U , 73U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R1.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
1U , 74U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R2" ,
1U , 75U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R2.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
1U , 76U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R3" ,
1U , 77U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R3.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
1U , 78U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R4" ,
1U , 79U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R4.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
1U , 80U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R5" ,
1U , 81U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R5.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
1U , 82U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/R6" ,
1U , 83U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.R6.power_dissipated"
,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/Capacitor" , 1U , 84U ,
"PreChargeCircuit.Capacitor" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/Capacitor" , 1U , 85U ,
"PreChargeCircuit.Capacitor" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/Capacitor" , 1U , 86U ,
"PreChargeCircuit.Capacitor" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/Capacitor" , 1U , 87U ,
"PreChargeCircuit.Capacitor" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/Capacitor1" , 1U , 88U ,
"PreChargeCircuit.Capacitor1" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/Capacitor1" , 1U , 89U ,
"PreChargeCircuit.Capacitor1" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/Capacitor1" , 1U , 90U ,
"PreChargeCircuit.Capacitor1" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/Capacitor1" , 1U , 91U ,
"PreChargeCircuit.Capacitor1" ,
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , 1U , 92U ,
"PreChargeCircuit.PreChrgResistorChgr.Resistor.power_dissipated" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/PreChrgResistorChgr" , 1U , 93U ,
"PreChargeCircuit.PreChrgResistorChgr.Resistor.power_dissipated" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , 1U , 94U ,
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.power_dissipated" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/PreChargeCircuit/PreChrgResistorInvtr" , 1U , 95U ,
"PreChargeCircuit.PreChrgResistorInvtr.Resistor.power_dissipated" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 96U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 97U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 98U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 99U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 100U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 101U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D1" ,
1U , 102U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D1" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D2" ,
1U , 103U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D2" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D3" ,
1U , 104U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D3" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D4" ,
1U , 105U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D4" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D5" ,
1U , 106U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D5" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/D6" ,
1U , 107U , "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.D6" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch"
, 1U , 108U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch1"
, 1U , 109U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch1" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch2"
, 1U , 110U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch2" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch3"
, 1U , 111U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch3" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch4"
, 1U , 112U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch4" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/CellMonitoringUnit_01/Switch5"
, 1U , 113U ,
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Switch5" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 114U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 115U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 116U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 117U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 118U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 119U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 120U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 121U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 122U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 123U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 124U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 125U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 126U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, 1U , 127U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 128U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 129U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 130U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 131U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 132U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 133U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 134U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 135U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 136U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 137U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 138U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 139U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 140U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, 1U , 141U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 142U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 143U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 144U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 145U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 146U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 147U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 148U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 149U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 150U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 151U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 152U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 153U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 154U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, 1U , 155U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 156U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 157U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 158U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 159U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 160U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 161U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 162U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 163U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 164U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 165U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 166U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 167U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 168U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, 1U , 169U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 170U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 171U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 172U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 173U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 174U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 175U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 176U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 177U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 178U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 179U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 180U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 181U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 182U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, 1U , 183U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 184U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 185U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 186U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 187U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 188U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 189U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 190U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 191U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 192U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 193U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 194U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 195U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 196U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, 1U , 197U ,
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6" ,
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Battery_Model/PreChargeCircuit/NegativeContactorChgr" , 1U , 198U ,
"PreChargeCircuit.NegativeContactorChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/PreChargeCircuit/NegativeContactorInvtr" , 1U , 199U ,
"PreChargeCircuit.NegativeContactorInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/PreChargeCircuit/PositiveContactorChgr" , 1U , 200U ,
"PreChargeCircuit.PositiveContactorChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/PreChargeCircuit/PositiveContactorInvtr" , 1U , 201U ,
"PreChargeCircuit.PositiveContactorInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/PreChargeCircuit/PreChrgSwitchChgr" , 1U , 202U ,
"PreChargeCircuit.PreChrgSwitchChgr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Battery_Model/PreChargeCircuit/PreChrgSwitchInvtr" , 1U , 203U ,
"PreChargeCircuit.PreChrgSwitchInvtr" ,
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 204 ] = { {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 16U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 194 ] = { {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"E:/MATLAB_2022/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 46U , 8U , 46U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 47U , 9U , 47U , 24U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_2022/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc"
, 49U , 9U , 49U , 22U , NE_RANGE_TYPE_NORMAL , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 24 ] = { {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_2022/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 12 ] = { { "RTP_3F9C37AB_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, "" , 0U , 1U , TRUE , } , { "RTP_489B073D_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, "" , 0U , 1U , TRUE , } , { "RTP_3F9C37AB_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell1"
, "" , 0U , 1U , TRUE , } , { "RTP_D6FF929E_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, "" , 0U , 1U , TRUE , } , { "RTP_489B073D_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell2"
, "" , 0U , 1U , TRUE , } , { "RTP_A6956611_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, "" , 0U , 1U , TRUE , } , { "RTP_D6FF929E_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell3"
, "" , 0U , 1U , TRUE , } , { "RTP_D1925687_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, "" , 0U , 1U , TRUE , } , { "RTP_A6956611_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell4"
, "" , 0U , 1U , TRUE , } , { "RTP_AD01F8A6_cell_temperature" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, "" , 0U , 1U , TRUE , } , { "RTP_D1925687_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell5"
, "" , 0U , 1U , TRUE , } , { "RTP_AD01F8A6_stateOfCharge" ,
"Battery_Model/Battery_Pack/Battery_Pack_1Module/Cell_Module_1TC/Battery_Cell6"
, "" , 0U , 1U , TRUE , } } ; static real_T s_constant_table0 [ 30 ] = {
3.4958759606354097 , 3.5585858579836995 , 3.6072417703285651 ,
3.6477123578810522 , 3.6931462119468947 , 3.7554917727858883 ,
3.841654177271328 , 3.9510505925678463 , 4.0636658069480678 ,
4.1906518044004679 , 3.5132611143057861 , 3.5719535891022747 ,
3.6206832776361231 , 3.6576000194742893 , 3.6976096265148315 ,
3.7577326361394681 , 3.8508348904713392 , 3.9577248998673342 ,
4.0670892320049186 , 4.19061236732397 , 3.5159290900872318 ,
3.5723735697447565 , 3.6276550186985541 , 3.6661128609733216 ,
3.706816042987497 , 3.7669665176346161 , 3.866458653816919 ,
3.9661735549629862 , 4.0723631795794439 , 4.19167206628709 } ; static real_T
s_constant_table1 [ 30 ] = { 0.0049994776995861091 , 0.0049951996147120118 ,
0.004979423190976987 , 0.0049811721127188445 , 0.0045094054379641538 ,
0.0039812796695914169 , 0.0037669149277279085 , 0.0041916362206415106 ,
0.0044260401791164621 , 0.0043148382380379631 , 0.0017641477716760067 ,
0.0018231995879484889 , 0.0021560263955701358 , 0.0019006029312371644 ,
0.0017898790502983487 , 0.0019185478109661862 , 0.0018800837575675537 ,
0.00214433717754946 , 0.0015524682164607261 , 0.0015497078403642977 ,
0.0031640356154338375 , 0.0022275828893420137 , 0.0019851572515811964 ,
0.0018301981076225954 , 0.001838037725586734 , 0.0020743137909541437 ,
0.0019867238484944619 , 0.0016190219982629307 , 0.0021103441137020006 ,
0.0021872774927868934 } ; static real_T s_constant_table2 [ 30 ] = {
0.0099999811688461417 , 0.00999856430024017 , 0.0099873027271161711 ,
0.0099626288404371724 , 0.0098727543924410372 , 0.0099954313405087383 ,
0.0099019970567568 , 0.0099475314201310679 , 0.0098886426251903851 ,
0.0099354661346584133 , 0.00969375106236189 , 0.009112390763261714 ,
0.0089463253088402032 , 0.0087943015677151813 , 0.0083702809344980249 ,
0.0079665777279155064 , 0.0082931776284943751 , 0.0084622390461548212 ,
0.0086004633911622233 , 0.0086943056279542123 , 0.0070814589673861561 ,
0.00787358934878206 , 0.0083717461520792028 , 0.0083561100080138534 ,
0.0082078980955552928 , 0.0078372923375043015 , 0.00843184907817345 ,
0.0085774737397294135 , 0.00783809261162198 , 0.0076103062416778867 } ;
static real_T s_constant_table3 [ 30 ] = { 9.91588661932643 ,
23.403983192386338 , 49.578998385055307 , 55.634061607037985 ,
19.127788406256578 , 19.349755728809541 , 32.257331362474638 ,
47.25005036016627 , 17.260019688375159 , 12.674343049586037 ,
139.08804535594533 , 84.650576400585777 , 136.59808879492491 ,
84.458468573320687 , 44.965087575506296 , 29.603507971145646 ,
36.78893546440905 , 46.60105590766215 , 24.52743201164596 ,
65.353230799095087 , 3.4854265092168735 , 9.2122320926965546 ,
25.272238315634581 , 22.107817712893691 , 18.148732981071756 ,
4.7996365068486684 , 17.43071250211079 , 18.013996404970388 ,
5.3732900838597466 , 3.7639309050734551 } ; static NeDsMethodOutput *
ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P .
mNumCol = 116 ; out -> mM_P . mNumRow = 116 ; out -> mM_P . mJc = ( int32_T *
) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 26 ) ; return out ; } static NeDsMethodOutput * ds_output_m (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 26 ; out ->
mM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 26 ) ; return out ; } static NeDsMethodOutput * ds_output_vmm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 26 ; out -> mVMM .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 26 ) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 116 ; out ->
mDXM_P . mNumRow = 26 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 12 ; out -> mDXM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
12 ) ; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 26 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 15 ; out ->
mDUM_P . mNumRow = 26 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 26 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 12 ; out ->
mDPM_P . mNumRow = 26 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 116 ; out ->
mA_P . mNumRow = 116 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 200 )
; return out ; } static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 200 ; out -> mA . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 200 )
; return out ; } static NeDsMethodOutput * ds_output_b_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 15 ; out ->
mB_P . mNumRow = 116 ; out -> mB_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mB_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB . mN = 3 ; out -> mB . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ; return out ;
} static NeDsMethodOutput * ds_output_c_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mC_P . mNumCol = 1 ; out -> mC_P . mNumRow
= 116 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 2 ) ; out -> mC_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mC . mN = 0 ; out -> mC . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_f ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mF .
mN = 116 ; out -> mF . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 116 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMF .
mN = 116 ; out -> mVMF . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 116 ) ; return out ; } static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVPF . mN = 116 ; out -> mVPF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 116 ) ; return out ; } static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVSF . mN = 116 ; out -> mVSF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 116 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSLF . mN = 116 ; out -> mSLF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 116 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 116 ; out -> mSLF0 . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) ,
116 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 116 ; out ->
mDXF_P . mNumRow = 116 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 383 )
; return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 383 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
383 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 15 ; out ->
mDUF_P . mNumRow = 116 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 5 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 116 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 116 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 12 ; out ->
mDPDXF_P . mNumRow = 383 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDPDXF_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 116 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 15 ; out ->
mTDUF_P . mNumRow = 116 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 20 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 116 ; out ->
mTDXF_P . mNumRow = 116 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out -> mTDXF_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 580
) ; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 56 ; out ->
mDNF_P . mNumRow = 116 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 57 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 0 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 116 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 116 ) ; return out ; } static NeDsMethodOutput *
ds_output_cer ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER .
mN = 0 ; out -> mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER
. mN = 0 ; out -> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mDXCER_P . mNumCol = 116 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 117 ) ; out -> mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_ddcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER
. mN = 0 ; out -> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mDDCER_P . mNumCol = 0 ; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P .
mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 1 ) ; out -> mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_ic ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC .
mN = 116 ; out -> mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 116 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR .
mN = 24 ; out -> mICR . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 24 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IM . mN = 24 ; out -> mICR_IM . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 24 ) ; return out ; } static
NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 24 ; out -> mICR_ID . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 24
) ; return out ; } static NeDsMethodOutput * ds_output_icr_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IL . mN = 24 ; out ->
mICR_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 24 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicr
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out
-> mDXICR . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol =
116 ; out -> mDXICR_P . mNumRow = 24 ; out -> mDXICR_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mDXICR_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out
-> mDDICR . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0
; out -> mDDICR_P . mNumRow = 24 ; out -> mDDICR_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICR_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduicr_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol =
15 ; out -> mTDUICR_P . mNumRow = 24 ; out -> mTDUICR_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out ->
mTDUICR_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol =
116 ; out -> mICRM_P . mNumRow = 24 ; out -> mICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icrm (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out
-> mICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol =
116 ; out -> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mDXICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out
-> mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 15
; out -> mMDUY_P . mNumRow = 22 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol =
116 ; out -> mMDXY_P . mNumRow = 22 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 15
; out -> mTDUY_P . mNumRow = 22 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 2 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol =
116 ; out -> mTDXY_P . mNumRow = 22 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 38 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 22 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 116 ; out ->
mDXY_P . mNumRow = 22 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 117 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 38 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 38 ; out -> mDXY .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
38 ) ; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 15 ; out ->
mDUY_P . mNumRow = 22 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 2 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 22 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 90 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
90 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 90 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 90 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 425 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 425 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 204 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 204 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 116 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 117 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 15 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 505 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 505 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 505 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 505 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 505 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 505
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 505 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 505 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 116 ; out -> mQX_P .
mNumRow = 116 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 117 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 15 ; out -> mQU_P .
mNumRow = 116 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 16 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 116 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 116 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 116 ; out -> mVAR_TOL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 116
) ; return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 116 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 116 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 116 ; out
-> mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 116 ) ; return out ; } static NeDsMethodOutput * ds_output_slv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 116 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 116 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 116 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 116 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 116 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 116 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 116 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 116 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 116 ; out -> mIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
116 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * Battery_Model_981c414b_1_dae_ds ( PmAllocator * allocator )
{ NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo input_info
[ 15 ] ; static SscIoInfo output_info [ 22 ] ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 116 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 26 ; ds -> mNumEquations = 116 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 24 ; ds -> mNumFreqs = 0 ; ds
-> mNumModes = 90 ; ds -> mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds
-> mNumIntCache = 0 ; ds -> mNumObservables = 537 ; ds ->
mNumObservableElements = 505 ; ds -> mNumZcs = 90 ; ds -> mNumAsserts = 204 ;
ds -> mNumAssertRanges = 204 ; ds -> mNumParamAsserts = 0 ; ds ->
mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 90 ; ds ->
mNumEquationRanges = 194 ; ds -> mNumCERRanges = 0 ; ds -> mNumICRRanges = 24
; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 12 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 15 ; input_info [
0 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter1_output"
; input_info [ 0 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 1 , 1 ) ; input_info [
0 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter1_output"
; input_info [ 0 ] . mUnit = "1" ; input_info [ 1 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter2_output"
; input_info [ 1 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 1 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 1 ] . mSize , 1 , 1 ) ; input_info [
1 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter2_output"
; input_info [ 1 ] . mUnit = "1" ; input_info [ 2 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter3_output"
; input_info [ 2 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 1 , 1 ) ; input_info [
2 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter3_output"
; input_info [ 2 ] . mUnit = "1" ; input_info [ 3 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter4_output"
; input_info [ 3 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 1 , 1 ) ; input_info [
3 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter4_output"
; input_info [ 3 ] . mUnit = "1" ; input_info [ 4 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter5_output"
; input_info [ 4 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 4 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 4 ] . mSize , 1 , 1 ) ; input_info [
4 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter5_output"
; input_info [ 4 ] . mUnit = "1" ; input_info [ 5 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter6_output"
; input_info [ 5 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 5 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 5 ] . mSize , 1 , 1 ) ; input_info [
5 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Simulink_PS_Converter6_output"
; input_info [ 5 ] . mUnit = "1" ; input_info [ 6 ] . mIdentifier =
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Simulink_PS_Converter1_output"
; input_info [ 6 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 6 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 6 ] . mSize , 1 , 1 ) ; input_info [
6 ] . mName =
 "Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Simulink_PS_Converter1_output"
; input_info [ 6 ] . mUnit = "1" ; input_info [ 7 ] . mIdentifier =
"Charger_Load.Charger.Simulink_PS_Converter1_output" ; input_info [ 7 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
input_info [ 7 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [
7 ] . mSize , 1 , 1 ) ; input_info [ 7 ] . mName =
"Charger_Load.Charger.Simulink_PS_Converter1_output" ; input_info [ 7 ] .
mUnit = "A" ; input_info [ 8 ] . mIdentifier =
"Charger_Load.DriveLoad.Simulink_PS_Converter1_output" ; input_info [ 8 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
input_info [ 8 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [
8 ] . mSize , 1 , 1 ) ; input_info [ 8 ] . mName =
"Charger_Load.DriveLoad.Simulink_PS_Converter1_output" ; input_info [ 8 ] .
mUnit = "A" ; input_info [ 9 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter1_output" ; input_info [ 9 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 9 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 9 ] . mSize , 1 ,
1 ) ; input_info [ 9 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter1_output" ; input_info [ 9 ] . mUnit =
"1" ; input_info [ 10 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter2_output" ; input_info [ 10 ] . mSize
= ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 10
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 10 ] . mSize ,
1 , 1 ) ; input_info [ 10 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter2_output" ; input_info [ 10 ] . mUnit
= "1" ; input_info [ 11 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter3_output" ; input_info [ 11 ] . mSize
= ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 11
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 11 ] . mSize ,
1 , 1 ) ; input_info [ 11 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter3_output" ; input_info [ 11 ] . mUnit
= "1" ; input_info [ 12 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter4_output" ; input_info [ 12 ] . mSize
= ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 12
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 12 ] . mSize ,
1 , 1 ) ; input_info [ 12 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter4_output" ; input_info [ 12 ] . mUnit
= "1" ; input_info [ 13 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter5_output" ; input_info [ 13 ] . mSize
= ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 13
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 13 ] . mSize ,
1 , 1 ) ; input_info [ 13 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter5_output" ; input_info [ 13 ] . mUnit
= "1" ; input_info [ 14 ] . mIdentifier =
"PreChargeCircuit.Simulink_PS_Converter_output" ; input_info [ 14 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 14 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 14 ] . mSize , 1
, 1 ) ; input_info [ 14 ] . mName =
"PreChargeCircuit.Simulink_PS_Converter_output" ; input_info [ 14 ] . mUnit =
"1" ; ds -> mIo [ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [
SSC_OUTPUT_IO_TYPE ] = 22 ; output_info [ 0 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1_V" ;
output_info [ 0 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 1 , 1 ) ; output_info
[ 0 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor1_V" ;
output_info [ 0 ] . mUnit = "V" ; output_info [ 1 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2_V" ;
output_info [ 1 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 1 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 1 ] . mSize , 1 , 1 ) ; output_info
[ 1 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor2_V" ;
output_info [ 1 ] . mUnit = "V" ; output_info [ 2 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3_V" ;
output_info [ 2 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 1 , 1 ) ; output_info
[ 2 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor3_V" ;
output_info [ 2 ] . mUnit = "V" ; output_info [ 3 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4_V" ;
output_info [ 3 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 3 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 3 ] . mSize , 1 , 1 ) ; output_info
[ 3 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor4_V" ;
output_info [ 3 ] . mUnit = "V" ; output_info [ 4 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5_V" ;
output_info [ 4 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 4 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 4 ] . mSize , 1 , 1 ) ; output_info
[ 4 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor5_V" ;
output_info [ 4 ] . mUnit = "V" ; output_info [ 5 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6_V" ;
output_info [ 5 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 1 , 1 ) ; output_info
[ 5 ] . mName =
"Battery_Pack.Battery_Pack_1Module.CellMonitoringUnit_01.Voltage_Sensor6_V" ;
output_info [ 5 ] . mUnit = "V" ; output_info [ 6 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1_soc" ;
output_info [ 6 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 6 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 6 ] . mSize , 1 , 1 ) ; output_info
[ 6 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell1_soc" ;
output_info [ 6 ] . mUnit = "1" ; output_info [ 7 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2_soc" ;
output_info [ 7 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 1 , 1 ) ; output_info
[ 7 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell2_soc" ;
output_info [ 7 ] . mUnit = "1" ; output_info [ 8 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3_soc" ;
output_info [ 8 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 8 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 8 ] . mSize , 1 , 1 ) ; output_info
[ 8 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell3_soc" ;
output_info [ 8 ] . mUnit = "1" ; output_info [ 9 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4_soc" ;
output_info [ 9 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 9 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 9 ] . mSize , 1 , 1 ) ; output_info
[ 9 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell4_soc" ;
output_info [ 9 ] . mUnit = "1" ; output_info [ 10 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5_soc" ;
output_info [ 10 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 10 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 10 ] . mSize , 1 , 1 ) ; output_info
[ 10 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell5_soc" ;
output_info [ 10 ] . mUnit = "1" ; output_info [ 11 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6_soc" ;
output_info [ 11 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 11 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 11 ] . mSize , 1 , 1 ) ; output_info
[ 11 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Battery_Cell6_soc" ;
output_info [ 11 ] . mUnit = "1" ; output_info [ 12 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1_T" ;
output_info [ 12 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 12 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 12 ] . mSize , 1 , 1 ) ; output_info
[ 12 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor1_T" ;
output_info [ 12 ] . mUnit = "K" ; output_info [ 13 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2_T" ;
output_info [ 13 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 13 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 13 ] . mSize , 1 , 1 ) ; output_info
[ 13 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor2_T" ;
output_info [ 13 ] . mUnit = "K" ; output_info [ 14 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3_T" ;
output_info [ 14 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 14 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 14 ] . mSize , 1 , 1 ) ; output_info
[ 14 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor3_T" ;
output_info [ 14 ] . mUnit = "K" ; output_info [ 15 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4_T" ;
output_info [ 15 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 15 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 15 ] . mSize , 1 , 1 ) ; output_info
[ 15 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor4_T" ;
output_info [ 15 ] . mUnit = "K" ; output_info [ 16 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5_T" ;
output_info [ 16 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 16 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 16 ] . mSize , 1 , 1 ) ; output_info
[ 16 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor5_T" ;
output_info [ 16 ] . mUnit = "K" ; output_info [ 17 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor_T" ;
output_info [ 17 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 17 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 17 ] . mSize , 1 , 1 ) ; output_info
[ 17 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Cell_Module_1TC.Temperature_Sensor_T" ;
output_info [ 17 ] . mUnit = "K" ; output_info [ 18 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Current_Sensor_I" ; output_info [ 18 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
output_info [ 18 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info
[ 18 ] . mSize , 1 , 1 ) ; output_info [ 18 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Current_Sensor_I" ; output_info [ 18 ] .
mUnit = "A" ; output_info [ 19 ] . mIdentifier =
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4_V" ; output_info [ 19 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
output_info [ 19 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info
[ 19 ] . mSize , 1 , 1 ) ; output_info [ 19 ] . mName =
"Battery_Pack.Battery_Pack_1Module.Voltage_Sensor4_V" ; output_info [ 19 ] .
mUnit = "V" ; output_info [ 20 ] . mIdentifier =
"PreChargeCircuit.Voltage_Sensor1_V" ; output_info [ 20 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 20
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 20 ] . mSize ,
1 , 1 ) ; output_info [ 20 ] . mName = "PreChargeCircuit.Voltage_Sensor1_V" ;
output_info [ 20 ] . mUnit = "V" ; output_info [ 21 ] . mIdentifier =
"PreChargeCircuit.Voltage_Sensor_V" ; output_info [ 21 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 21
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 21 ] . mSize ,
1 , 1 ) ; output_info [ 21 ] . mName = "PreChargeCircuit.Voltage_Sensor_V" ;
output_info [ 21 ] . mUnit = "V" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mRtpMapFcn = rtpmap ; ds -> mMethods [
NE_DS_METHOD_M_P ] = Battery_Model_981c414b_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] =
Battery_Model_981c414b_1_ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] =
ds_output_m ; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds ->
mMakeOutput [ NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [
NE_DS_METHOD_DXM_P ] = Battery_Model_981c414b_1_ds_dxm_p ; ds -> mMakeOutput
[ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM
] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds ->
mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ]
= ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds ->
mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ]
= ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds ->
mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ]
= ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds ->
mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [ NE_DS_METHOD_DPM ]
= ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] = ds_output_dpm ; ds ->
mMethods [ NE_DS_METHOD_A_P ] = Battery_Model_981c414b_1_ds_a_p ; ds ->
mMakeOutput [ NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [
NE_DS_METHOD_A ] = Battery_Model_981c414b_1_ds_a ; ds -> mMakeOutput [
NE_DS_METHOD_A ] = ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p
; ds -> mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = Battery_Model_981c414b_1_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] =
Battery_Model_981c414b_1_ds_vmf ; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] =
ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_VPF ] = ds_vpf ; ds ->
mMakeOutput [ NE_DS_METHOD_VPF ] = ds_output_vpf ; ds -> mMethods [
NE_DS_METHOD_VSF ] = ds_vsf ; ds -> mMakeOutput [ NE_DS_METHOD_VSF ] =
ds_output_vsf ; ds -> mMethods [ NE_DS_METHOD_SLF ] = ds_slf ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF ] = ds_output_slf ; ds -> mMethods [
NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0 ] =
ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] =
Battery_Model_981c414b_1_ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ]
= ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] =
Battery_Model_981c414b_1_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] =
ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [
NE_DS_METHOD_DUF ] = Battery_Model_981c414b_1_ds_duf ; ds -> mMakeOutput [
NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] =
ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds ->
mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF
] = ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] =
Battery_Model_981c414b_1_ds_tduf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUF_P
] = ds_output_tduf_p ; ds -> mMethods [ NE_DS_METHOD_TDXF_P ] =
Battery_Model_981c414b_1_ds_tdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXF_P
] = ds_output_tdxf_p ; ds -> mMethods [ NE_DS_METHOD_DNF_P ] =
Battery_Model_981c414b_1_ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ]
= ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = ds_dxcer_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = Battery_Model_981c414b_1_ds_ic ; ds -> mMakeOutput [
NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] =
ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds ->
mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [
NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods
[ NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ]
= ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = ds_icrm_p ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM_P ]
= ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM ] = ds_icrm ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds -> mMethods [
NE_DS_METHOD_DXICRM_P ] = ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDXY_P ]
= ds_output_mdxy_p ; ds -> mMethods [ NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_TDUY_P ] = ds_output_tduy_p ; ds -> mMethods [
NE_DS_METHOD_TDXY_P ] = Battery_Model_981c414b_1_ds_tdxy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [
NE_DS_METHOD_Y ] = Battery_Model_981c414b_1_ds_y ; ds -> mMakeOutput [
NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
Battery_Model_981c414b_1_ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P ]
= ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] =
Battery_Model_981c414b_1_ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] =
ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [
NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] =
ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
Battery_Model_981c414b_1_ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ] =
ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
Battery_Model_981c414b_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = Battery_Model_981c414b_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
Battery_Model_981c414b_1_ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT
] = ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ;
ds -> mMakeOutput [ NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds ->
mMethods [ NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
Battery_Model_981c414b_1_ds_obs_exp ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = Battery_Model_981c414b_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = Battery_Model_981c414b_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = Battery_Model_981c414b_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] =
Battery_Model_981c414b_1_ds_nldv ; ds -> mMakeOutput [ NE_DS_METHOD_NLDV ] =
ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ] = ds_sclv ; ds ->
mMakeOutput [ NE_DS_METHOD_SCLV ] = ds_output_sclv ; ds -> mMethods [
NE_DS_METHOD_IMIN ] = ds_imin ; ds -> mMakeOutput [ NE_DS_METHOD_IMIN ] =
ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ] = ds_imax ; ds ->
mMakeOutput [ NE_DS_METHOD_IMAX ] = ds_output_imax ; ds -> mMethods [
NE_DS_METHOD_DIMIN ] = ds_dimin ; ds -> mMakeOutput [ NE_DS_METHOD_DIMIN ] =
ds_output_dimin ; ds -> mMethods [ NE_DS_METHOD_DIMAX ] = ds_dimax ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMAX ] = ds_output_dimax ; ds -> mEquationData =
s_equation_data ; ds -> mCERData = s_cer_data ; ds -> mICRData = s_icr_data ;
ds -> mVariableData = s_variable_data ; ds -> mDiscreteData = s_discrete_data
; ds -> mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; _ds
-> mField0 = s_constant_table0 ; _ds -> mField1 = s_constant_table1 ; _ds ->
mField2 = s_constant_table2 ; _ds -> mField3 = s_constant_table3 ; ds ->
mNumLargeArray = 4 ; return ( NeDynamicSystem * ) _ds ; } static int32_T
ds_passert ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_iassert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_cer (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxcer ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mDXCER_P ; out . mNumCol = 116ULL ; out . mNumRow =
0ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] = 0 ; } ( void ) LC ;
( void ) t2 ; return 0 ; } static int32_T ds_ddcer ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDCER_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_v0 ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_tmax ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_t ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxdelt_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXDELT_P ; out .
mNumCol = 116ULL ; out . mNumRow = 0ULL ; for ( b = 0 ; b < 117 ; b ++ ) {
out . mJc [ b ] = 0 ; } ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dudelt ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dudelt_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUDELT_P ;
out . mNumCol = 15ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] =
0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out .
mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ]
= 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ;
out . mJc [ 15 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dtdelt ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTDELT_P ;
out . mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc
[ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_init_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_init_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_sfp (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_sfo ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_duf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUF_P
; out . mNumCol = 15ULL ; out . mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; out
. mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ]
= 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out .
mJc [ 8 ] = 2 ; out . mJc [ 9 ] = 5 ; out . mJc [ 10 ] = 5 ; out . mJc [ 11 ]
= 5 ; out . mJc [ 12 ] = 5 ; out . mJc [ 13 ] = 5 ; out . mJc [ 14 ] = 5 ;
out . mJc [ 15 ] = 5 ; out . mIr [ 0 ] = 112 ; out . mIr [ 1 ] = 114 ; out .
mIr [ 2 ] = 112 ; out . mIr [ 3 ] = 113 ; out . mIr [ 4 ] = 114 ; ( void ) LC
; ( void ) t2 ; return 0 ; } static int32_T ds_dtf ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDTF_P ; out . mNumCol = 1ULL ; out . mNumRow = 116ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ;
} static int32_T ds_ddf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDDF_P
; out . mNumCol = 0ULL ; out . mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; (
void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mB ; out .
mX [ 0 ] = 0.00050950000000000008 ; out . mX [ 1 ] = - 1.0 ; out . mX [ 2 ] =
- 1.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_b_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mB_P ; out . mNumCol = 15ULL ; out . mNumRow = 116ULL ; out . mJc
[ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ;
out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [
7 ] = 1 ; out . mJc [ 8 ] = 2 ; out . mJc [ 9 ] = 3 ; out . mJc [ 10 ] = 3 ;
out . mJc [ 11 ] = 3 ; out . mJc [ 12 ] = 3 ; out . mJc [ 13 ] = 3 ; out .
mJc [ 14 ] = 3 ; out . mJc [ 15 ] = 3 ; out . mIr [ 0 ] = 22 ; out . mIr [ 1
] = 24 ; out . mIr [ 2 ] = 24 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_c ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_c_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mC_P ; out . mNumCol = 1ULL ;
out . mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dwf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDWF_P ; out . mNumCol = 0ULL ; out . mNumRow = 116ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dpdxf ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dpdxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDPDXF_P ; out . mNumCol =
12ULL ; out . mNumRow = 383ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [
5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ;
out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc
[ 12 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_slf (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; int32_T b ; boolean_T t0 [ 116 ]
; ( void ) t1 ; ( void ) LC ; out = t2 -> mSLF ; for ( b = 0 ; b < 116 ; b ++
) { t0 [ b ] = false ; } for ( b = 0 ; b < 116 ; b ++ ) { out . mX [ b ] = t0
[ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dnf_v_x ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mDNF_V_X ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = true ; } for ( b = 0 ;
b < 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_slf0 ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mSLF0 ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b
< 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_vpf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mVPF ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b
< 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_vsf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mVSF ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b
< 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_freqs ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mICR ; out
. mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3
] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = 0.0
; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out . mX [ 9 ] = 0.0 ; out .
mX [ 10 ] = 0.0 ; out . mX [ 11 ] = 0.0 ; out . mX [ 12 ] = 0.0 ; out . mX [
13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0 ; out . mX [ 16 ]
= 0.0 ; out . mX [ 17 ] = 0.0 ; out . mX [ 18 ] = 0.0 ; out . mX [ 19 ] = 0.0
; out . mX [ 20 ] = 0.0 ; out . mX [ 21 ] = 0.0 ; out . mX [ 22 ] = 0.0 ; out
. mX [ 23 ] = 0.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmIntVector out ; ( void ) t1 ; ( void ) LC ; out =
t2 -> mICR_IM ; out . mX [ 0 ] = 3 ; out . mX [ 1 ] = 3 ; out . mX [ 2 ] = 3
; out . mX [ 3 ] = 3 ; out . mX [ 4 ] = 3 ; out . mX [ 5 ] = 3 ; out . mX [ 6
] = 3 ; out . mX [ 7 ] = 3 ; out . mX [ 8 ] = 3 ; out . mX [ 9 ] = 3 ; out .
mX [ 10 ] = 3 ; out . mX [ 11 ] = 3 ; out . mX [ 12 ] = 3 ; out . mX [ 13 ] =
3 ; out . mX [ 14 ] = 3 ; out . mX [ 15 ] = 3 ; out . mX [ 16 ] = 3 ; out .
mX [ 17 ] = 3 ; out . mX [ 18 ] = 3 ; out . mX [ 19 ] = 3 ; out . mX [ 20 ] =
3 ; out . mX [ 21 ] = 3 ; out . mX [ 22 ] = 3 ; out . mX [ 23 ] = 3 ; ( void
) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_id ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mICR_ID ;
out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ;
out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ;
out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ;
out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ;
out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ;
out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] = false ;
out . mX [ 21 ] = false ; out . mX [ 22 ] = false ; out . mX [ 23 ] = false ;
( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mICR_IL ;
out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [ 2 ] = true ; out .
mX [ 3 ] = true ; out . mX [ 4 ] = true ; out . mX [ 5 ] = true ; out . mX [
6 ] = true ; out . mX [ 7 ] = true ; out . mX [ 8 ] = true ; out . mX [ 9 ] =
true ; out . mX [ 10 ] = true ; out . mX [ 11 ] = true ; out . mX [ 12 ] =
true ; out . mX [ 13 ] = true ; out . mX [ 14 ] = true ; out . mX [ 15 ] =
true ; out . mX [ 16 ] = true ; out . mX [ 17 ] = true ; out . mX [ 18 ] =
true ; out . mX [ 19 ] = true ; out . mX [ 20 ] = true ; out . mX [ 21 ] =
true ; out . mX [ 22 ] = true ; out . mX [ 23 ] = true ; ( void ) LC ; ( void
) t2 ; return 0 ; } static int32_T ds_dxicr ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mDXICR_P ; out . mNumCol = 116ULL ; out . mNumRow =
24ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] = 0 ; } ( void ) LC
; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDICR_P ; out . mNumCol = 0ULL ; out . mNumRow = 24ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_tduicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mTDUICR_P ; out . mNumCol = 15ULL ; out . mNumRow = 24ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_icrm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icrm_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mICRM_P ; out . mNumCol = 116ULL ; out . mNumRow =
24ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] = 0 ; } ( void ) LC
; ( void ) t2 ; return 0 ; } static int32_T ds_dxicrm ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mDXICRM_P ; out . mNumCol = 116ULL ; out . mNumRow =
0ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] = 0 ; } ( void ) LC ;
( void ) t2 ; return 0 ; } static int32_T ds_ddicrm ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDICRM_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_imin ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; real_T t0 [ 116 ] ; int32_T b ;
( void ) t1 ; ( void ) LC ; out = t2 -> mIMIN ; for ( b = 0 ; b < 116 ; b ++
) { t0 [ b ] = - pmf_get_inf ( ) ; } for ( b = 0 ; b < 116 ; b ++ ) { out .
mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_imax ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; real_T t0 [ 116 ] ; int32_T
b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mIMAX ; for ( b = 0 ; b < 116 ; b
++ ) { t0 [ b ] = pmf_get_inf ( ) ; } for ( b = 0 ; b < 116 ; b ++ ) { out .
mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dimin ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dimax ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxm (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; real_T X [ 116 ] ; int32_T b ; (
void ) LC ; for ( b = 0 ; b < 116 ; b ++ ) { X [ b ] = t1 -> mX . mX [ b ] ;
} out = t2 -> mDXM ; out . mX [ 0 ] = X [ 55ULL ] ; out . mX [ 1 ] = X [
48ULL ] ; out . mX [ 2 ] = X [ 66ULL ] ; out . mX [ 3 ] = X [ 59ULL ] ; out .
mX [ 4 ] = X [ 77ULL ] ; out . mX [ 5 ] = X [ 70ULL ] ; out . mX [ 6 ] = X [
88ULL ] ; out . mX [ 7 ] = X [ 81ULL ] ; out . mX [ 8 ] = X [ 99ULL ] ; out .
mX [ 9 ] = X [ 92ULL ] ; out . mX [ 10 ] = X [ 110ULL ] ; out . mX [ 11 ] = X
[ 103ULL ] ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddm (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDDM_P ; out . mNumCol = 0ULL ;
out . mNumRow = 26ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_dum ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUM_P
; out . mNumCol = 15ULL ; out . mNumRow = 26ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] =
0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out .
mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ]
= 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ;
out . mJc [ 15 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dtm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void
) t2 ; return 0 ; } static int32_T ds_dtm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTM_P ; out . mNumCol = 1ULL ;
out . mNumRow = 26ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dpm ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dpm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDPM_P ; out . mNumCol = 12ULL ; out . mNumRow = 26ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) LC ; ( void ) t2
; return 0 ; } static int32_T ds_vmm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mVMM ; out . mX [ 0 ] = false ; out .
mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX
[ 4 ] = true ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7
] = false ; out . mX [ 8 ] = true ; out . mX [ 9 ] = false ; out . mX [ 10 ]
= false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = true ; out . mX [ 13 ]
= false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ]
= true ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ]
= false ; out . mX [ 20 ] = true ; out . mX [ 21 ] = false ; out . mX [ 22 ]
= false ; out . mX [ 23 ] = true ; out . mX [ 24 ] = false ; out . mX [ 25 ]
= false ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_l (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dp_i ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_j ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_r ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qx ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qu ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qt ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_q1 ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qx_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out =
t2 -> mQX_P ; out . mNumCol = 116ULL ; out . mNumRow = 116ULL ; for ( b = 0 ;
b < 117 ; b ++ ) { out . mJc [ b ] = 0 ; } ( void ) LC ; ( void ) t2 ; return
0 ; } static int32_T ds_qu_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mQU_P ; out . mNumCol = 15ULL ; out .
mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2
] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out
. mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ]
= 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ;
out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qt_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mQT_P
; out . mNumCol = 1ULL ; out . mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_q1_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mQ1_P ; out . mNumCol = 1ULL ; out . mNumRow = 116ULL ; out . mJc
[ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_var_tol ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T t0 [ 116 ] ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mVAR_TOL ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = 1.0E-9 ; } for ( b = 0
; b < 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2
; return 0 ; } static int32_T ds_eq_tol ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T t0 [ 116 ] ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mEQ_TOL ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = 1.0E-9 ; } for ( b = 0
; b < 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2
; return 0 ; } static int32_T ds_lv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mLV ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b <
116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_slv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mSLV ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b
< 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_sclv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ;
int32_T b ; boolean_T t0 [ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mSCLV ; for ( b = 0 ; b < 116 ; b ++ ) { t0 [ b ] = false ; } for ( b = 0 ; b
< 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_duy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t2 , NeDsMethodOutput * t3 ) { PmRealVector out ; (
void ) t2 ; ( void ) LC ; out = t3 -> mDUY ; out . mX [ 0 ] = 1.0E-9 ; out .
mX [ 1 ] = 1.0E-9 ; ( void ) LC ; ( void ) t3 ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDUY_P ; out . mNumCol = 15ULL ; out . mNumRow = 22ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 1 ; out . mJc [ 9 ] = 2 ; out . mJc [ 10 ]
= 2 ; out . mJc [ 11 ] = 2 ; out . mJc [ 12 ] = 2 ; out . mJc [ 13 ] = 2 ;
out . mJc [ 14 ] = 2 ; out . mJc [ 15 ] = 2 ; out . mIr [ 0 ] = 21 ; out .
mIr [ 1 ] = 21 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_mduy_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mMDUY_P ; out . mNumCol = 15ULL ; out . mNumRow = 22ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_mdxy_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mMDXY_P ; out . mNumCol =
116ULL ; out . mNumRow = 22ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [
b ] = 0 ; } ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_tduy_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mTDUY_P ; out . mNumCol = 15ULL ; out . mNumRow = 22ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 1 ; out . mJc [ 9 ] = 2 ; out . mJc [ 10 ]
= 2 ; out . mJc [ 11 ] = 2 ; out . mJc [ 12 ] = 2 ; out . mJc [ 13 ] = 2 ;
out . mJc [ 14 ] = 2 ; out . mJc [ 15 ] = 2 ; out . mIr [ 0 ] = 21 ; out .
mIr [ 1 ] = 21 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dty ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dty_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTY_P ; out . mNumCol = 1ULL ;
out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; }
