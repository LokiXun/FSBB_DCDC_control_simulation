#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_obs_il.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_obs_il ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static boolean_T
_cg_const_1 [ 505 ] = { true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , false , false , false ,
false , false , false , true , true , true , true , false , true , true ,
true , true , false , true , true , true , true , false , true , true , true
, true , false , true , true , true , true , false , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , false ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , false , false , false ,
false , false , true , false , false , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , false ,
true , false , false , false , true , false , true , false , false , true ,
true , false , false , true , true , true , true , true , false , true , true
, true , true , true , false , false , false , false , true , true , true ,
true , false , true , true , false , true , true , true , true , true , true
, true , false , true , true , true , true , false , false , true , false ,
false , false , false , true , true , true , false , false , true , false ,
false , true , false , true , true , true , true , true , true , false , true
, true , true , false , true , true , true , true , false , false , false ,
false , false , false , false , false , true , false , true , true , true ,
true , false } ; PmBoolVector out ; int32_T b ; boolean_T t0 [ 505 ] ; ( void
) t1 ; ( void ) LC ; out = t2 -> mOBS_IL ; for ( b = 0 ; b < 505 ; b ++ ) {
t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 505 ; b ++ ) { out . mX [
b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
