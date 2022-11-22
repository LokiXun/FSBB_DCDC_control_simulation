#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_dxm_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_dxm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 117 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 5 ,
5 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8
, 8 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 , 11 , 11 , 11 , 11
, 11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 } ; PmSparsityPattern out ; int32_T b
; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXM_P ; out . mNumCol = 116ULL ;
out . mNumRow = 26ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] =
_cg_const_1 [ b ] ; } out . mIr [ 0 ] = 4 ; out . mIr [ 1 ] = 4 ; out . mIr [
2 ] = 8 ; out . mIr [ 3 ] = 8 ; out . mIr [ 4 ] = 12 ; out . mIr [ 5 ] = 12 ;
out . mIr [ 6 ] = 16 ; out . mIr [ 7 ] = 16 ; out . mIr [ 8 ] = 20 ; out .
mIr [ 9 ] = 20 ; out . mIr [ 10 ] = 23 ; out . mIr [ 11 ] = 23 ; ( void ) LC
; ( void ) t2 ; return 0 ; }
