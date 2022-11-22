#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_duf.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_duf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t17 , NeDsMethodOutput * t18 ) { PmRealVector out ;
real_T t12 ; real_T t13 ; real_T t14 ; real_T t15 ; real_T t4 ; int32_T
M_idx_32 ; int32_T M_idx_33 ; int32_T M_idx_35 ; ( void ) LC ; M_idx_32 = t17
-> mM . mX [ 32 ] ; M_idx_33 = t17 -> mM . mX [ 33 ] ; M_idx_35 = t17 -> mM .
mX [ 35 ] ; out = t18 -> mDUF ; if ( M_idx_32 != 0 ) { t13 =
1.0000050000004138E-9 ; } else { t13 = 0.0050000014137018553 ; } if (
M_idx_35 != 0 ) { t12 = - 5.0000000000000008E-15 ; } else { t12 = -
0.005000000000000001 ; } if ( M_idx_32 != 0 ) { t15 = 0.00010000100000500001
; } else { t15 = 1.00000000005E+8 ; } if ( M_idx_33 != 0 ) { t14 = - 0.0001 ;
} else { t14 = - 1.0E+8 ; } if ( M_idx_35 != 0 ) { t4 = -
5.0000000000000008E-15 ; } else { t4 = - 0.005000000000000001 ; } out . mX [
0 ] = t13 / 1.0E+8 ; out . mX [ 1 ] = t12 / 1.0E+8 ; out . mX [ 2 ] = t15 /
1.0E+8 ; out . mX [ 3 ] = t14 / 1.0E+8 ; out . mX [ 4 ] = t4 / 1.0E+8 ; (
void ) LC ; ( void ) t18 ; return 0 ; }
