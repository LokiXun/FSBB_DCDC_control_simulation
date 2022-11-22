#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_m.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T X [ 116 ] ; int32_T b ; ( void ) LC ; for ( b = 0 ; b < 116 ; b ++ ) {
X [ b ] = t1 -> mX . mX [ b ] ; } out = t2 -> mM ; out . mX [ 0 ] =
0.81053279999999994 ; out . mX [ 1 ] = 0.81053279999999994 ; out . mX [ 2 ] =
1.0 ; out . mX [ 3 ] = 1.0 ; out . mX [ 4 ] = X [ 48ULL ] * X [ 55ULL ] ; out
. mX [ 5 ] = 0.81053279999999994 ; out . mX [ 6 ] = 1.0 ; out . mX [ 7 ] =
1.0 ; out . mX [ 8 ] = X [ 59ULL ] * X [ 66ULL ] ; out . mX [ 9 ] =
0.81053279999999994 ; out . mX [ 10 ] = 1.0 ; out . mX [ 11 ] = 1.0 ; out .
mX [ 12 ] = X [ 70ULL ] * X [ 77ULL ] ; out . mX [ 13 ] = 0.81053279999999994
; out . mX [ 14 ] = 1.0 ; out . mX [ 15 ] = 1.0 ; out . mX [ 16 ] = X [ 81ULL
] * X [ 88ULL ] ; out . mX [ 17 ] = 0.81053279999999994 ; out . mX [ 18 ] =
1.0 ; out . mX [ 19 ] = 1.0 ; out . mX [ 20 ] = X [ 92ULL ] * X [ 99ULL ] ;
out . mX [ 21 ] = 1.0 ; out . mX [ 22 ] = 1.0 ; out . mX [ 23 ] = X [ 103ULL
] * X [ 110ULL ] ; out . mX [ 24 ] = - 0.01 ; out . mX [ 25 ] = - 0.01 ; (
void ) LC ; ( void ) t2 ; return 0 ; }
