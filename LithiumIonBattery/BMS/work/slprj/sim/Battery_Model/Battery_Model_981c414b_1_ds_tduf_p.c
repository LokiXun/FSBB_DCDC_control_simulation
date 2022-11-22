#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_tduf_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_tduf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out . mNumCol = 15ULL
; out . mNumRow = 116ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out .
mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] =
5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 10 ; out .
mJc [ 9 ] = 14 ; out . mJc [ 10 ] = 15 ; out . mJc [ 11 ] = 16 ; out . mJc [
12 ] = 17 ; out . mJc [ 13 ] = 18 ; out . mJc [ 14 ] = 19 ; out . mJc [ 15 ]
= 20 ; out . mIr [ 0 ] = 33 ; out . mIr [ 1 ] = 35 ; out . mIr [ 2 ] = 32 ;
out . mIr [ 3 ] = 34 ; out . mIr [ 4 ] = 36 ; out . mIr [ 5 ] = 37 ; out .
mIr [ 6 ] = 22 ; out . mIr [ 7 ] = 24 ; out . mIr [ 8 ] = 112 ; out . mIr [ 9
] = 114 ; out . mIr [ 10 ] = 24 ; out . mIr [ 11 ] = 112 ; out . mIr [ 12 ] =
113 ; out . mIr [ 13 ] = 114 ; out . mIr [ 14 ] = 114 ; out . mIr [ 15 ] =
110 ; out . mIr [ 16 ] = 113 ; out . mIr [ 17 ] = 115 ; out . mIr [ 18 ] =
111 ; out . mIr [ 19 ] = 112 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
