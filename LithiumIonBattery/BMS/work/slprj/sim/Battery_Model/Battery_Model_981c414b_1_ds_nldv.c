#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_nldv.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_nldv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static boolean_T
_cg_const_1 [ 116 ] = { false , false , false , false , true , false , false
, false , true , false , false , false , true , false , false , false , true
, false , false , false , true , false , false , true , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false } ; PmBoolVector out ; int32_T b ; boolean_T t0
[ 116 ] ; ( void ) t1 ; ( void ) LC ; out = t2 -> mNLDV ; for ( b = 0 ; b <
116 ; b ++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 116 ; b ++
) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
