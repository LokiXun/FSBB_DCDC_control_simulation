#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_dxy_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_dxy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 117 ] = { 0 , 1 , 2 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4
, 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 7 , 8 , 10 , 14 , 18 , 20 , 22
, 24 , 24 , 24 , 26 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 30 , 30 ,
30 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 32 , 32 , 32 , 32
, 32 , 32 , 32 , 32 , 32 , 32 , 32 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 ,
33 , 33 , 33 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 35 , 35
, 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 36 , 36 , 36 , 36 , 36 , 36 ,
36 , 36 , 36 , 38 , 38 , 38 , 38 , 38 } ; PmSparsityPattern out ; int32_T b ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDXY_P ; out . mNumCol = 116ULL ; out
. mNumRow = 22ULL ; for ( b = 0 ; b < 117 ; b ++ ) { out . mJc [ b ] =
_cg_const_1 [ b ] ; } out . mIr [ 0 ] = 16 ; out . mIr [ 1 ] = 15 ; out . mIr
[ 2 ] = 14 ; out . mIr [ 3 ] = 13 ; out . mIr [ 4 ] = 12 ; out . mIr [ 5 ] =
17 ; out . mIr [ 6 ] = 21 ; out . mIr [ 7 ] = 20 ; out . mIr [ 8 ] = 0 ; out
. mIr [ 9 ] = 19 ; out . mIr [ 10 ] = 0 ; out . mIr [ 11 ] = 1 ; out . mIr [
12 ] = 18 ; out . mIr [ 13 ] = 21 ; out . mIr [ 14 ] = 1 ; out . mIr [ 15 ] =
2 ; out . mIr [ 16 ] = 18 ; out . mIr [ 17 ] = 21 ; out . mIr [ 18 ] = 2 ;
out . mIr [ 19 ] = 3 ; out . mIr [ 20 ] = 3 ; out . mIr [ 21 ] = 4 ; out .
mIr [ 22 ] = 4 ; out . mIr [ 23 ] = 5 ; out . mIr [ 24 ] = 18 ; out . mIr [
25 ] = 21 ; out . mIr [ 26 ] = 18 ; out . mIr [ 27 ] = 21 ; out . mIr [ 28 ]
= 18 ; out . mIr [ 29 ] = 21 ; out . mIr [ 30 ] = 6 ; out . mIr [ 31 ] = 7 ;
out . mIr [ 32 ] = 8 ; out . mIr [ 33 ] = 9 ; out . mIr [ 34 ] = 10 ; out .
mIr [ 35 ] = 11 ; out . mIr [ 36 ] = 20 ; out . mIr [ 37 ] = 21 ; ( void ) LC
; ( void ) t2 ; return 0 ; }
