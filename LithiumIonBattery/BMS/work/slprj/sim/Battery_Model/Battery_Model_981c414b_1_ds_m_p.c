#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_m_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_m_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 117 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12
, 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 26 ,
26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26
, 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 ,
26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26
, 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 ,
26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26
, 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 } ; PmSparsityPattern
out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mM_P ; out .
mNumCol = 116ULL ; out . mNumRow = 116ULL ; for ( b = 0 ; b < 117 ; b ++ ) {
out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 2 ; out . mIr [ 1 ]
= 6 ; out . mIr [ 2 ] = 0 ; out . mIr [ 3 ] = 1 ; out . mIr [ 4 ] = 3 ; out .
mIr [ 5 ] = 10 ; out . mIr [ 6 ] = 4 ; out . mIr [ 7 ] = 5 ; out . mIr [ 8 ]
= 7 ; out . mIr [ 9 ] = 14 ; out . mIr [ 10 ] = 8 ; out . mIr [ 11 ] = 9 ;
out . mIr [ 12 ] = 11 ; out . mIr [ 13 ] = 18 ; out . mIr [ 14 ] = 12 ; out .
mIr [ 15 ] = 13 ; out . mIr [ 16 ] = 15 ; out . mIr [ 17 ] = 22 ; out . mIr [
18 ] = 16 ; out . mIr [ 19 ] = 17 ; out . mIr [ 20 ] = 19 ; out . mIr [ 21 ]
= 20 ; out . mIr [ 22 ] = 21 ; out . mIr [ 23 ] = 23 ; out . mIr [ 24 ] = 24
; out . mIr [ 25 ] = 25 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
