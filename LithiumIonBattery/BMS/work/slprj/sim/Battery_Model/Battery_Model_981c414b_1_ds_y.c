#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_y.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t16 , NeDsMethodOutput * t17 ) { PmRealVector out ;
real_T X [ 116 ] ; real_T U_idx_7 ; real_T U_idx_8 ; int32_T b ; ( void ) LC
; U_idx_7 = t16 -> mU . mX [ 7 ] ; U_idx_8 = t16 -> mU . mX [ 8 ] ; for ( b =
0 ; b < 116 ; b ++ ) { X [ b ] = t16 -> mX . mX [ b ] ; } out = t17 -> mY ;
out . mX [ 0 ] = X [ 26ULL ] - X [ 27ULL ] ; out . mX [ 1 ] = X [ 27ULL ] - X
[ 28ULL ] ; out . mX [ 2 ] = X [ 28ULL ] - X [ 29ULL ] ; out . mX [ 3 ] = X [
29ULL ] - X [ 30ULL ] ; out . mX [ 4 ] = X [ 30ULL ] - X [ 31ULL ] ; out . mX
[ 5 ] = X [ 31ULL ] ; out . mX [ 6 ] = X [ 47ULL ] ; out . mX [ 7 ] = X [
58ULL ] ; out . mX [ 8 ] = X [ 69ULL ] ; out . mX [ 9 ] = X [ 80ULL ] ; out .
mX [ 10 ] = X [ 91ULL ] ; out . mX [ 11 ] = X [ 102ULL ] ; out . mX [ 12 ] =
X [ 13ULL ] ; out . mX [ 13 ] = X [ 9ULL ] ; out . mX [ 14 ] = X [ 5ULL ] ;
out . mX [ 15 ] = X [ 1ULL ] ; out . mX [ 16 ] = X [ 0ULL ] ; out . mX [ 17 ]
= X [ 17ULL ] ; out . mX [ 18 ] = ( ( ( X [ 27ULL ] * 0.05 + X [ 28ULL ] * -
0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [ 44ULL ] ; out
. mX [ 19 ] = X [ 26ULL ] ; out . mX [ 20 ] = X [ 111ULL ] * 1.0E-9 + X [
25ULL ] ; out . mX [ 21 ] = ( ( ( ( ( ( ( X [ 27ULL ] * -
5.0000000000000008E-11 + X [ 28ULL ] * 5.0000000000000008E-11 ) + X [ 34ULL ]
* 5.0000000000000008E-11 ) + X [ 35ULL ] * 5.0000000000000008E-11 ) + X [
44ULL ] * - 1.0E-9 ) + X [ 111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) +
U_idx_8 * 1.0E-9 ) + X [ 24ULL ] ; ( void ) LC ; ( void ) t17 ; return 0 ; }
