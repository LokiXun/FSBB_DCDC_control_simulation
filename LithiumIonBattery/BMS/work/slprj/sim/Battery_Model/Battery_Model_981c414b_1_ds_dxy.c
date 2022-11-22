#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_dxy.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_dxy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t43 , NeDsMethodOutput * t44 ) { PmRealVector out ;
real_T t0 [ 38 ] ; real_T t2 [ 4 ] ; real_T t3 [ 4 ] ; size_t t13 ; ( void )
t43 ; ( void ) LC ; out = t44 -> mDXY ; t2 [ 0ULL ] = - 1.0 ; t2 [ 1ULL ] =
1.0 ; t2 [ 2ULL ] = 0.05 ; t2 [ 3ULL ] = - 5.0000000000000008E-11 ; t3 [ 0ULL
] = - 1.0 ; t3 [ 1ULL ] = 1.0 ; t3 [ 2ULL ] = - 0.05 ; t3 [ 3ULL ] =
5.0000000000000008E-11 ; t0 [ 0ULL ] = 1.0 ; t0 [ 1ULL ] = 1.0 ; t0 [ 2ULL ]
= 1.0 ; t0 [ 3ULL ] = 1.0 ; t0 [ 4ULL ] = 1.0 ; t0 [ 5ULL ] = 1.0 ; t0 [ 6ULL
] = 1.0 ; t0 [ 7ULL ] = 1.0 ; t0 [ 8ULL ] = 1.0 ; t0 [ 9ULL ] = 1.0 ; for (
t13 = 0ULL ; t13 < 4ULL ; t13 ++ ) { t0 [ t13 + 10ULL ] = t2 [ t13 ] ; } for
( t13 = 0ULL ; t13 < 4ULL ; t13 ++ ) { t0 [ t13 + 14ULL ] = t3 [ t13 ] ; }
out . mX [ 0 ] = t0 [ 0 ] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [
2 ] ; out . mX [ 3 ] = t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ]
= t0 [ 5 ] ; out . mX [ 6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX
[ 8 ] = t0 [ 8 ] ; out . mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ;
out . mX [ 11 ] = t0 [ 11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] =
t0 [ 13 ] ; out . mX [ 14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0 [ 15 ] ; out .
mX [ 16 ] = t0 [ 16 ] ; out . mX [ 17 ] = t0 [ 17 ] ; out . mX [ 18 ] = - 1.0
; out . mX [ 19 ] = 1.0 ; out . mX [ 20 ] = - 1.0 ; out . mX [ 21 ] = 1.0 ;
out . mX [ 22 ] = - 1.0 ; out . mX [ 23 ] = 1.0 ; out . mX [ 24 ] = - 0.05 ;
out . mX [ 25 ] = 5.0000000000000008E-11 ; out . mX [ 26 ] = - 0.05 ; out .
mX [ 27 ] = 5.0000000000000008E-11 ; out . mX [ 28 ] = 1.0 ; out . mX [ 29 ]
= - 1.0E-9 ; out . mX [ 30 ] = 1.0 ; out . mX [ 31 ] = 1.0 ; out . mX [ 32 ]
= 1.0 ; out . mX [ 33 ] = 1.0 ; out . mX [ 34 ] = 1.0 ; out . mX [ 35 ] = 1.0
; out . mX [ 36 ] = 1.0E-9 ; out . mX [ 37 ] = - 1.0E-9 ; ( void ) LC ; (
void ) t44 ; return 0 ; }
