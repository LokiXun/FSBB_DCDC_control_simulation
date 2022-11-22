#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_ic.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T t0 [ 116 ] ; real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T P_R_idx_10 ;
real_T P_R_idx_11 ; real_T P_R_idx_2 ; real_T P_R_idx_3 ; real_T P_R_idx_4 ;
real_T P_R_idx_5 ; real_T P_R_idx_6 ; real_T P_R_idx_7 ; real_T P_R_idx_8 ;
real_T P_R_idx_9 ; int32_T b ; ( void ) LC ; P_R_idx_0 = t1 -> mP_R . mX [ 0
] ; P_R_idx_1 = t1 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t1 -> mP_R . mX [ 2 ] ;
P_R_idx_3 = t1 -> mP_R . mX [ 3 ] ; P_R_idx_4 = t1 -> mP_R . mX [ 4 ] ;
P_R_idx_5 = t1 -> mP_R . mX [ 5 ] ; P_R_idx_6 = t1 -> mP_R . mX [ 6 ] ;
P_R_idx_7 = t1 -> mP_R . mX [ 7 ] ; P_R_idx_8 = t1 -> mP_R . mX [ 8 ] ;
P_R_idx_9 = t1 -> mP_R . mX [ 9 ] ; P_R_idx_10 = t1 -> mP_R . mX [ 10 ] ;
P_R_idx_11 = t1 -> mP_R . mX [ 11 ] ; out = t2 -> mIC ; t0 [ 0ULL ] =
P_R_idx_0 ; t0 [ 1ULL ] = P_R_idx_1 ; t0 [ 2ULL ] = 0.0 ; t0 [ 3ULL ] = 0.0 ;
t0 [ 4ULL ] = 0.0 ; t0 [ 5ULL ] = P_R_idx_3 ; t0 [ 6ULL ] = 0.0 ; t0 [ 7ULL ]
= 0.0 ; t0 [ 8ULL ] = 0.0 ; t0 [ 9ULL ] = P_R_idx_5 ; t0 [ 10ULL ] = 0.0 ; t0
[ 11ULL ] = 0.0 ; t0 [ 12ULL ] = 0.0 ; t0 [ 13ULL ] = P_R_idx_7 ; t0 [ 14ULL
] = 0.0 ; t0 [ 15ULL ] = 0.0 ; t0 [ 16ULL ] = 0.0 ; t0 [ 17ULL ] = P_R_idx_9
; t0 [ 18ULL ] = 0.0 ; t0 [ 19ULL ] = 0.0 ; t0 [ 20ULL ] = 0.0 ; t0 [ 21ULL ]
= 0.0 ; t0 [ 22ULL ] = 0.0 ; t0 [ 23ULL ] = 0.0 ; t0 [ 24ULL ] = 0.0 ; t0 [
25ULL ] = 0.0 ; t0 [ 26ULL ] = 0.0 ; t0 [ 27ULL ] = 0.0 ; t0 [ 28ULL ] = 0.0
; t0 [ 29ULL ] = 0.0 ; t0 [ 30ULL ] = 0.0 ; t0 [ 31ULL ] = 0.0 ; t0 [ 32ULL ]
= 0.0 ; t0 [ 33ULL ] = 0.0 ; t0 [ 34ULL ] = 0.0 ; t0 [ 35ULL ] = 0.0 ; t0 [
36ULL ] = 0.0 ; t0 [ 37ULL ] = 0.0 ; t0 [ 38ULL ] = 0.0 ; t0 [ 39ULL ] = 0.0
; t0 [ 40ULL ] = 0.0 ; t0 [ 41ULL ] = 0.0 ; t0 [ 42ULL ] = 0.0 ; t0 [ 43ULL ]
= 0.0 ; t0 [ 44ULL ] = 0.0 ; t0 [ 45ULL ] = 1.0 ; t0 [ 46ULL ] = 0.0 ; t0 [
47ULL ] = P_R_idx_2 ; t0 [ 48ULL ] = 0.0 ; t0 [ 49ULL ] = 1.0 ; t0 [ 50ULL ]
= 1.0 ; t0 [ 51ULL ] = 1.0 ; t0 [ 52ULL ] = 1.0 ; t0 [ 53ULL ] = 1.0 ; t0 [
54ULL ] = 3600.0 ; t0 [ 55ULL ] = 1.0 ; t0 [ 56ULL ] = 1.0 ; t0 [ 57ULL ] =
0.0 ; t0 [ 58ULL ] = P_R_idx_4 ; t0 [ 59ULL ] = 0.0 ; t0 [ 60ULL ] = 1.0 ; t0
[ 61ULL ] = 1.0 ; t0 [ 62ULL ] = 1.0 ; t0 [ 63ULL ] = 1.0 ; t0 [ 64ULL ] =
1.0 ; t0 [ 65ULL ] = 3600.0 ; t0 [ 66ULL ] = 1.0 ; t0 [ 67ULL ] = 1.0 ; t0 [
68ULL ] = 0.0 ; t0 [ 69ULL ] = P_R_idx_6 ; t0 [ 70ULL ] = 0.0 ; t0 [ 71ULL ]
= 1.0 ; t0 [ 72ULL ] = 1.0 ; t0 [ 73ULL ] = 1.0 ; t0 [ 74ULL ] = 1.0 ; t0 [
75ULL ] = 1.0 ; t0 [ 76ULL ] = 3600.0 ; t0 [ 77ULL ] = 1.0 ; t0 [ 78ULL ] =
1.0 ; t0 [ 79ULL ] = 0.0 ; t0 [ 80ULL ] = P_R_idx_8 ; t0 [ 81ULL ] = 0.0 ; t0
[ 82ULL ] = 1.0 ; t0 [ 83ULL ] = 1.0 ; t0 [ 84ULL ] = 1.0 ; t0 [ 85ULL ] =
1.0 ; t0 [ 86ULL ] = 1.0 ; t0 [ 87ULL ] = 3600.0 ; t0 [ 88ULL ] = 1.0 ; t0 [
89ULL ] = 1.0 ; t0 [ 90ULL ] = 0.0 ; t0 [ 91ULL ] = P_R_idx_10 ; t0 [ 92ULL ]
= 0.0 ; t0 [ 93ULL ] = 1.0 ; t0 [ 94ULL ] = 1.0 ; t0 [ 95ULL ] = 1.0 ; t0 [
96ULL ] = 1.0 ; t0 [ 97ULL ] = 1.0 ; t0 [ 98ULL ] = 3600.0 ; t0 [ 99ULL ] =
1.0 ; t0 [ 100ULL ] = 1.0 ; t0 [ 101ULL ] = 0.0 ; t0 [ 102ULL ] = P_R_idx_11
; t0 [ 103ULL ] = 0.0 ; t0 [ 104ULL ] = 1.0 ; t0 [ 105ULL ] = 1.0 ; t0 [
106ULL ] = 1.0 ; t0 [ 107ULL ] = 1.0 ; t0 [ 108ULL ] = 1.0 ; t0 [ 109ULL ] =
3600.0 ; t0 [ 110ULL ] = 1.0 ; t0 [ 111ULL ] = 0.0 ; t0 [ 112ULL ] = 0.0 ; t0
[ 113ULL ] = 0.0 ; t0 [ 114ULL ] = 0.0 ; t0 [ 115ULL ] = 0.0 ; for ( b = 0 ;
b < 116 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ;
return 0 ; }
