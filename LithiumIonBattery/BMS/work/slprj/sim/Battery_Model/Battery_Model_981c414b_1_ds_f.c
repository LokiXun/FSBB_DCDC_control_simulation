#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_f.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t298 , NeDsMethodOutput * t299 ) { ETTS0 b_efOut ;
ETTS0 c_efOut ; ETTS0 d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 f_efOut ;
ETTS0 g_efOut ; ETTS0 h_efOut ; ETTS0 i_efOut ; ETTS0 j_efOut ; ETTS0 k_efOut
; ETTS0 l_efOut ; ETTS0 t0 ; ETTS0 t1 ; ETTS0 t10 ; ETTS0 t11 ; ETTS0 t2 ;
ETTS0 t3 ; ETTS0 t4 ; ETTS0 t5 ; ETTS0 t6 ; ETTS0 t7 ; ETTS0 t8 ; ETTS0 t9 ;
PmRealVector out ; real_T X [ 116 ] ; real_T t156 [ 116 ] ; real_T nonscalar3
[ 10 ] ; real_T nonscalar1 [ 3 ] ; real_T nonscalar4 [ 3 ] ; real_T ab_efOut
[ 1 ] ; real_T bb_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T db_efOut [ 1 ]
; real_T eb_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ;
real_T hb_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ;
real_T kb_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T
mb_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T
pb_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T t169 [ 1 ] ; real_T t_efOut [ 1
] ; real_T u_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T w_efOut [ 1 ] ;
real_T x_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 ; real_T
U_idx_7 ; real_T U_idx_8 ; real_T t12 ; real_T t173_idx_0 ; real_T t174_idx_0
; real_T t175_idx_0 ; real_T t176_idx_0 ; real_T t177_idx_0 ; real_T
t178_idx_0 ; real_T t179_idx_0 ; real_T t180_idx_0 ; real_T t181_idx_0 ;
real_T t182_idx_0 ; real_T t183_idx_0 ; real_T t184_idx_0 ; real_T t185_idx_0
; real_T t186_idx_0 ; real_T t187_idx_0 ; real_T t188_idx_0 ; real_T
t189_idx_0 ; real_T t190_idx_0 ; real_T t191_idx_0 ; real_T t192_idx_0 ;
real_T t193_idx_0 ; real_T t194_idx_0 ; real_T t195_idx_0 ; real_T t196_idx_0
; real_T t197_idx_0 ; real_T t198_idx_0 ; real_T t20 ; real_T t21 ; real_T
t22 ; real_T t23 ; real_T t24 ; real_T t25 ; real_T t259 ; real_T t26 ;
real_T t260 ; real_T t261 ; real_T t262 ; real_T t263 ; real_T t264 ; real_T
t27 ; real_T t277 ; real_T t278 ; real_T t28 ; real_T t286 ; real_T t29 ;
real_T t295 ; real_T t297 ; real_T t30 ; real_T t33 ; real_T t34 ; real_T t35
; real_T zc_int0 ; real_T zc_int1 ; real_T zc_int10 ; real_T zc_int11 ;
real_T zc_int12 ; real_T zc_int13 ; real_T zc_int14 ; real_T zc_int15 ;
real_T zc_int16 ; real_T zc_int17 ; real_T zc_int2 ; real_T zc_int3 ; real_T
zc_int4 ; real_T zc_int5 ; real_T zc_int6 ; real_T zc_int7 ; real_T zc_int8 ;
size_t t157 [ 1 ] ; size_t t158 [ 1 ] ; size_t t159 [ 1 ] ; size_t t168 [ 1 ]
; size_t t232 ; size_t t233 ; size_t t234 ; int32_T M_idx_0 ; int32_T M_idx_1
; int32_T M_idx_10 ; int32_T M_idx_11 ; int32_T M_idx_12 ; int32_T M_idx_13 ;
int32_T M_idx_14 ; int32_T M_idx_15 ; int32_T M_idx_16 ; int32_T M_idx_17 ;
int32_T M_idx_18 ; int32_T M_idx_19 ; int32_T M_idx_2 ; int32_T M_idx_20 ;
int32_T M_idx_21 ; int32_T M_idx_22 ; int32_T M_idx_23 ; int32_T M_idx_24 ;
int32_T M_idx_25 ; int32_T M_idx_26 ; int32_T M_idx_27 ; int32_T M_idx_28 ;
int32_T M_idx_29 ; int32_T M_idx_3 ; int32_T M_idx_30 ; int32_T M_idx_31 ;
int32_T M_idx_32 ; int32_T M_idx_33 ; int32_T M_idx_34 ; int32_T M_idx_35 ;
int32_T M_idx_36 ; int32_T M_idx_4 ; int32_T M_idx_45 ; int32_T M_idx_5 ;
int32_T M_idx_56 ; int32_T M_idx_6 ; int32_T M_idx_67 ; int32_T M_idx_7 ;
int32_T M_idx_78 ; int32_T M_idx_8 ; int32_T M_idx_89 ; int32_T M_idx_9 ;
int32_T b ; M_idx_0 = t298 -> mM . mX [ 0 ] ; M_idx_1 = t298 -> mM . mX [ 1 ]
; M_idx_2 = t298 -> mM . mX [ 2 ] ; M_idx_3 = t298 -> mM . mX [ 3 ] ; M_idx_4
= t298 -> mM . mX [ 4 ] ; M_idx_5 = t298 -> mM . mX [ 5 ] ; M_idx_6 = t298 ->
mM . mX [ 6 ] ; M_idx_7 = t298 -> mM . mX [ 7 ] ; M_idx_8 = t298 -> mM . mX [
8 ] ; M_idx_9 = t298 -> mM . mX [ 9 ] ; M_idx_10 = t298 -> mM . mX [ 10 ] ;
M_idx_11 = t298 -> mM . mX [ 11 ] ; M_idx_12 = t298 -> mM . mX [ 12 ] ;
M_idx_13 = t298 -> mM . mX [ 13 ] ; M_idx_14 = t298 -> mM . mX [ 14 ] ;
M_idx_15 = t298 -> mM . mX [ 15 ] ; M_idx_16 = t298 -> mM . mX [ 16 ] ;
M_idx_17 = t298 -> mM . mX [ 17 ] ; M_idx_18 = t298 -> mM . mX [ 18 ] ;
M_idx_19 = t298 -> mM . mX [ 19 ] ; M_idx_20 = t298 -> mM . mX [ 20 ] ;
M_idx_21 = t298 -> mM . mX [ 21 ] ; M_idx_22 = t298 -> mM . mX [ 22 ] ;
M_idx_23 = t298 -> mM . mX [ 23 ] ; M_idx_24 = t298 -> mM . mX [ 24 ] ;
M_idx_25 = t298 -> mM . mX [ 25 ] ; M_idx_26 = t298 -> mM . mX [ 26 ] ;
M_idx_27 = t298 -> mM . mX [ 27 ] ; M_idx_28 = t298 -> mM . mX [ 28 ] ;
M_idx_29 = t298 -> mM . mX [ 29 ] ; M_idx_30 = t298 -> mM . mX [ 30 ] ;
M_idx_31 = t298 -> mM . mX [ 31 ] ; M_idx_32 = t298 -> mM . mX [ 32 ] ;
M_idx_33 = t298 -> mM . mX [ 33 ] ; M_idx_34 = t298 -> mM . mX [ 34 ] ;
M_idx_35 = t298 -> mM . mX [ 35 ] ; M_idx_36 = t298 -> mM . mX [ 36 ] ;
M_idx_45 = t298 -> mM . mX [ 45 ] ; M_idx_56 = t298 -> mM . mX [ 56 ] ;
M_idx_67 = t298 -> mM . mX [ 67 ] ; M_idx_78 = t298 -> mM . mX [ 78 ] ;
M_idx_89 = t298 -> mM . mX [ 89 ] ; U_idx_7 = t298 -> mU . mX [ 7 ] ; U_idx_8
= t298 -> mU . mX [ 8 ] ; for ( b = 0 ; b < 116 ; b ++ ) { X [ b ] = t298 ->
mX . mX [ b ] ; } out = t299 -> mF ; nonscalar1 [ 0 ] = 111600.0 ; nonscalar1
[ 1 ] = 111600.0 ; nonscalar1 [ 2 ] = 111600.0 ; nonscalar3 [ 0 ] = 0.0 ;
nonscalar3 [ 1 ] = 0.233616805137395 ; nonscalar3 [ 2 ] = 0.329414704495221 ;
nonscalar3 [ 3 ] = 0.425212603853047 ; nonscalar3 [ 4 ] = 0.521010503210872 ;
nonscalar3 [ 5 ] = 0.616808402568698 ; nonscalar3 [ 6 ] = 0.712606301926523 ;
nonscalar3 [ 7 ] = 0.808404201284349 ; nonscalar3 [ 8 ] = 0.904202100642174 ;
nonscalar3 [ 9 ] = 1.0 ; nonscalar4 [ 0 ] = 278.15 ; nonscalar4 [ 1 ] =
293.15 ; nonscalar4 [ 2 ] = 323.15 ; t295 = ( ( X [ 26ULL ] * 0.05 + X [
27ULL ] * - 0.05 ) + X [ 32ULL ] * - 0.05 ) + X [ 33ULL ] * - 0.05 ; t20 = (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [
35ULL ] * - 0.05 ; t21 = ( ( X [ 28ULL ] * 0.05 + X [ 29ULL ] * - 0.05 ) + X
[ 36ULL ] * - 0.05 ) + X [ 37ULL ] * - 0.05 ; t22 = ( ( X [ 29ULL ] * 0.05 +
X [ 30ULL ] * - 0.05 ) + X [ 38ULL ] * - 0.05 ) + X [ 39ULL ] * - 0.05 ; t23
= ( ( X [ 30ULL ] * 0.05 + X [ 31ULL ] * - 0.05 ) + X [ 40ULL ] * - 0.05 ) +
X [ 41ULL ] * - 0.05 ; t24 = ( X [ 31ULL ] * 0.05 + X [ 42ULL ] * - 0.05 ) +
X [ 43ULL ] * - 0.05 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 = ( ( ( ( ( (
X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 31ULL ] * - 0.05 ) + X [
34ULL ] * - 0.05 ) + X [ 42ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [
43ULL ] * 0.05 ) + X [ 44ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 = ( ( ( ( ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 30ULL ] * - 0.05 ) + X [
31ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 40ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 41ULL ] * 0.05 ) + X [ 44ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 = ( ( ( ( ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 29ULL ] * - 0.05 ) + X [
30ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 38ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 39ULL ] * 0.05 ) + X [ 44ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 = ( ( ( ( ( (
X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.1 ) + X [ 29ULL ] * 0.05 ) + X [ 34ULL
] * - 0.05 ) + X [ 36ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [ 37ULL ] *
0.05 ) + X [ 44ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 = ( ( ( ( ( (
X [ 26ULL ] * - 0.05 + X [ 27ULL ] * 0.1 ) + X [ 28ULL ] * - 0.05 ) + X [
32ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 33ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 44ULL ] ; t33 = ( ( ( ( ( ( ( ( ( X [ 24ULL ] * - 0.05 + X
[ 26ULL ] * 0.05 ) + X [ 27ULL ] * 0.0500000000025 ) + X [ 28ULL ] * -
0.0500000000025 ) + X [ 34ULL ] * - 0.0500000000025 ) + X [ 35ULL ] * -
0.0500000000025 ) + X [ 44ULL ] * 1.00000000005 ) + X [ 111ULL ] *
1.00000000005 ) + X [ 114ULL ] * 0.05 ) + U_idx_7 * - 5.000000413701855E-11 )
+ U_idx_8 * - 1.00000000005 ; t34 = ( ( ( ( ( ( ( ( - X [ 26ULL ] + X [ 27ULL
] * - 5.0000000000000008E-11 ) + X [ 28ULL ] * 5.0000000000000008E-11 ) + X [
34ULL ] * 5.0000000000000008E-11 ) + X [ 35ULL ] * 5.0000000000000008E-11 ) +
X [ 44ULL ] * - 1.0E-9 ) + X [ 111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) +
U_idx_8 * 1.0E-9 ) + X [ 24ULL ] ; t35 = ( ( ( X [ 25ULL ] * - 0.05 + X [
26ULL ] * 0.05 ) + X [ 111ULL ] * - 1.00000000005 ) + X [ 115ULL ] * 0.05 ) +
U_idx_8 ; t286 = ( - X [ 26ULL ] + X [ 111ULL ] * 1.0E-9 ) + X [ 25ULL ] ;
U_idx_7 = ( ( ( ( ( ( ( ( ( X [ 24ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [
27ULL ] * 2.5000000000000007E-12 ) + X [ 28ULL ] * - 2.5000000000000007E-12 )
+ X [ 34ULL ] * - 2.5000000000000007E-12 ) + X [ 35ULL ] * -
2.5000000000000007E-12 ) + X [ 44ULL ] * 5.0000000000000008E-11 ) + X [
111ULL ] * 5.0000000000000008E-11 ) + X [ 114ULL ] * 0.05 ) + U_idx_7 * -
5.0000000000000008E-11 ) + U_idx_8 * - 5.0000000000000008E-11 ; U_idx_8 = ( (
X [ 25ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 111ULL ] * -
5.0000000000000008E-11 ) + X [ 115ULL ] * 0.05 ; if ( M_idx_0 != 0 ) { t157 [
0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 /
30ULL ; t234 = ( t232 - t232 % 30ULL ) + t157 [ t233 > 0ULL ? 0ULL : t233 ] ;
if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t157 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } t232 =
t157 [ 0ULL ] ; zc_int0 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t232
> 29ULL ? 29ULL : t232 ] * 1.0E-5 ; } else { zc_int0 = X [ 45ULL ] ; } if (
M_idx_1 != 0 ) { zc_int1 = 1.116 ; } else { zc_int1 = X [ 51ULL ] * X [ 54ULL
] ; } if ( M_idx_2 != 0 ) { t158 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 <
30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL ) +
t158 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) )
-> mField0 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t158 [ t233 > 0ULL ? 0ULL : t233 ]
= t232 % 30ULL ; } } t232 = t158 [ 0ULL ] ; zc_int10 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField0 [ t232 > 29ULL ? 29ULL : t232 ] * 1.0E-5 ; } else {
zc_int10 = X [ 100ULL ] ; } if ( M_idx_3 != 0 ) { zc_int11 = 1.116 ; } else {
zc_int11 = X [ 106ULL ] * X [ 109ULL ] ; } if ( M_idx_17 != 0 ) { zc_int12 =
7.0814589673861568E-8 ; } else { zc_int12 = X [ 49ULL ] * X [ 52ULL ] ; } if
( M_idx_19 != 0 ) { zc_int13 = 7.0814589673861568E-8 ; } else { zc_int13 = X
[ 60ULL ] * X [ 63ULL ] ; } if ( M_idx_21 != 0 ) { zc_int14 =
7.0814589673861568E-8 ; } else { zc_int14 = X [ 71ULL ] * X [ 74ULL ] ; } if
( M_idx_24 != 0 ) { zc_int15 = 7.0814589673861568E-8 ; } else { zc_int15 = X
[ 82ULL ] * X [ 85ULL ] ; } if ( M_idx_26 != 0 ) { zc_int16 =
7.0814589673861568E-8 ; } else { zc_int16 = X [ 93ULL ] * X [ 96ULL ] ; } if
( M_idx_28 != 0 ) { zc_int17 = 7.0814589673861568E-8 ; } else { zc_int17 = X
[ 104ULL ] * X [ 107ULL ] ; } if ( M_idx_12 != 0 ) { t159 [ 0ULL ] = 0ULL ;
for ( t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = (
t232 - t232 % 30ULL ) + t159 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t159 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } t232 =
t159 [ 0ULL ] ; zc_int2 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t232
> 29ULL ? 29ULL : t232 ] * 1.0E-5 ; } else { zc_int2 = X [ 56ULL ] ; } if (
M_idx_23 != 0 ) { zc_int3 = 1.116 ; } else { zc_int3 = X [ 62ULL ] * X [
65ULL ] ; } if ( M_idx_34 != 0 ) { t168 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ;
t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL
) + t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0
[ t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233
] = t232 % 30ULL ; } } zc_int4 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0
[ t168 [ 0ULL ] > 29ULL ? 29ULL : t168 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int4
= X [ 67ULL ] ; } if ( M_idx_45 != 0 ) { zc_int5 = 1.116 ; } else { zc_int5 =
X [ 73ULL ] * X [ 76ULL ] ; } if ( M_idx_56 != 0 ) { t168 [ 0ULL ] = 0ULL ;
for ( t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = (
t232 - t232 % 30ULL ) + t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } zc_int6 =
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t168 [ 0ULL ] > 29ULL ? 29ULL
: t168 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int6 = X [ 78ULL ] ; } if ( M_idx_67
!= 0 ) { zc_int7 = 1.116 ; } else { zc_int7 = X [ 84ULL ] * X [ 87ULL ] ; }
if ( M_idx_78 != 0 ) { t168 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 <
30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL ) +
t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) )
-> mField0 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ]
= t232 % 30ULL ; } } zc_int8 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t168 [ 0ULL ] > 29ULL ? 29ULL : t168 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int8 =
X [ 89ULL ] ; } if ( M_idx_89 != 0 ) { t297 = 1.116 ; } else { t297 = X [
95ULL ] * X [ 98ULL ] ; } t169 [ 0ULL ] = X [ 47ULL ] ; t157 [ 0 ] = 10ULL ;
t158 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ]
, & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , & nonscalar3 [
0ULL ] , & t169 [ 0ULL ] , & t157 [ 0ULL ] , & t158 [ 0ULL ] ) ; t10 = efOut
; t169 [ 0ULL ] = X [ 0ULL ] ; t159 [ 0 ] = 3ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , &
t169 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t8 = b_efOut ; t169 [
0ULL ] = X [ 58ULL ] ; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [
0ULL ] , & c_efOut . mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , &
nonscalar3 [ 0ULL ] , & t169 [ 0ULL ] , & t157 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t7 = c_efOut ; t169 [ 0ULL ] = X [ 1ULL ] ; tlu2_linear_linear_prelookup ( &
d_efOut . mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut .
mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t169 [ 0ULL ] , & t159 [ 0ULL ]
, & t158 [ 0ULL ] ) ; t6 = d_efOut ; t169 [ 0ULL ] = X [ 69ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , & nonscalar3 [ 0ULL ] , &
t169 [ 0ULL ] , & t157 [ 0ULL ] , & t158 [ 0ULL ] ) ; t9 = e_efOut ; t169 [
0ULL ] = X [ 5ULL ] ; tlu2_linear_linear_prelookup ( & f_efOut . mField0 [
0ULL ] , & f_efOut . mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t169 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t11 = f_efOut ; t169 [ 0ULL ] = X [ 80ULL ] ; tlu2_linear_linear_prelookup (
& g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , & nonscalar3 [ 0ULL ] , & t169 [ 0ULL ] , & t157 [ 0ULL ]
, & t158 [ 0ULL ] ) ; t5 = g_efOut ; t169 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , &
t169 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t4 = h_efOut ; t169 [
0ULL ] = X [ 91ULL ] ; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [
0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , &
nonscalar3 [ 0ULL ] , & t169 [ 0ULL ] , & t157 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t3 = i_efOut ; t169 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( &
j_efOut . mField0 [ 0ULL ] , & j_efOut . mField1 [ 0ULL ] , & j_efOut .
mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t169 [ 0ULL ] , & t159 [ 0ULL ]
, & t158 [ 0ULL ] ) ; t2 = j_efOut ; t169 [ 0ULL ] = X [ 102ULL ] ;
tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , & nonscalar3 [ 0ULL ] , &
t169 [ 0ULL ] , & t157 [ 0ULL ] , & t158 [ 0ULL ] ) ; t1 = k_efOut ; t169 [
0ULL ] = X [ 17ULL ] ; tlu2_linear_linear_prelookup ( & l_efOut . mField0 [
0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t169 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t0 = l_efOut ; if ( M_idx_4 != 0 ) { t12 = t295 - ( X [ 32ULL ] -
0.59999999819999994 ) / 0.3 ; } else { t12 = t295 - X [ 32ULL ] * 1.0E-8 ; }
if ( M_idx_5 != 0 ) { t259 = t20 - ( X [ 34ULL ] - 0.59999999819999994 ) /
0.3 ; } else { t259 = t20 - X [ 34ULL ] * 1.0E-8 ; } if ( M_idx_6 != 0 ) {
t260 = t21 - ( X [ 36ULL ] - 0.59999999819999994 ) / 0.3 ; } else { t260 =
t21 - X [ 36ULL ] * 1.0E-8 ; } if ( M_idx_7 != 0 ) { t261 = t22 - ( X [ 38ULL
] - 0.59999999819999994 ) / 0.3 ; } else { t261 = t22 - X [ 38ULL ] * 1.0E-8
; } if ( M_idx_8 != 0 ) { t262 = t23 - ( X [ 40ULL ] - 0.59999999819999994 )
/ 0.3 ; } else { t262 = t23 - X [ 40ULL ] * 1.0E-8 ; } if ( M_idx_9 != 0 ) {
t263 = t24 - ( X [ 42ULL ] - 0.59999999819999994 ) / 0.3 ; } else { t263 =
t24 - X [ 42ULL ] * 1.0E-8 ; } if ( M_idx_10 != 0 ) { t264 = X [ 33ULL ] -
t295 * 0.01 ; } else { t264 = X [ 33ULL ] - t295 / 1.0E-8 ; } if ( M_idx_11
!= 0 ) { t295 = X [ 35ULL ] - t20 * 0.01 ; } else { t295 = X [ 35ULL ] - t20
/ 1.0E-8 ; } if ( M_idx_13 != 0 ) { t20 = X [ 37ULL ] - t21 * 0.01 ; } else {
t20 = X [ 37ULL ] - t21 / 1.0E-8 ; } if ( M_idx_14 != 0 ) { t21 = X [ 39ULL ]
- t22 * 0.01 ; } else { t21 = X [ 39ULL ] - t22 / 1.0E-8 ; } if ( M_idx_15 !=
0 ) { t22 = X [ 41ULL ] - t23 * 0.01 ; } else { t22 = X [ 41ULL ] - t23 /
1.0E-8 ; } if ( M_idx_16 != 0 ) { t23 = X [ 43ULL ] - t24 * 0.01 ; } else {
t23 = X [ 43ULL ] - t24 / 1.0E-8 ; } if ( M_idx_18 != 0 ) { t168 [ 0ULL ] =
0ULL ; for ( t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ;
t234 = ( t232 - t232 % 30ULL ) + t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } t24 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t168 [ 0ULL ] > 29ULL ? 29ULL :
t168 [ 0ULL ] ] * 1.0E-5 ; } else { t24 = X [ 50ULL ] * X [ 53ULL ] ; } if (
M_idx_20 != 0 ) { t168 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 < 30ULL ;
t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL ) + t168 [
t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ]
= t232 % 30ULL ; } } t25 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t168 [ 0ULL ] > 29ULL ? 29ULL : t168 [ 0ULL ] ] * 1.0E-5 ; } else { t25 = X [
61ULL ] * X [ 64ULL ] ; } if ( M_idx_22 != 0 ) { t168 [ 0ULL ] = 0ULL ; for (
t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232
- t232 % 30ULL ) + t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } t26 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t168 [ 0ULL ] > 29ULL ? 29ULL :
t168 [ 0ULL ] ] * 1.0E-5 ; } else { t26 = X [ 72ULL ] * X [ 75ULL ] ; } if (
M_idx_25 != 0 ) { t168 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 < 30ULL ;
t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL ) + t168 [
t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ]
= t232 % 30ULL ; } } t27 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t168 [ 0ULL ] > 29ULL ? 29ULL : t168 [ 0ULL ] ] * 1.0E-5 ; } else { t27 = X [
83ULL ] * X [ 86ULL ] ; } if ( M_idx_27 != 0 ) { t168 [ 0ULL ] = 0ULL ; for (
t232 = 0ULL ; t232 < 30ULL ; t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232
- t232 % 30ULL ) + t168 [ t233 > 0ULL ? 0ULL : t233 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t232 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t234 > 29ULL ? 29ULL : t234 ] *
1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ] = t232 % 30ULL ; } } t28 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 [ t168 [ 0ULL ] > 29ULL ? 29ULL :
t168 [ 0ULL ] ] * 1.0E-5 ; } else { t28 = X [ 94ULL ] * X [ 97ULL ] ; } if (
M_idx_29 != 0 ) { t168 [ 0ULL ] = 0ULL ; for ( t232 = 0ULL ; t232 < 30ULL ;
t232 ++ ) { t233 = t232 / 30ULL ; t234 = ( t232 - t232 % 30ULL ) + t168 [
t233 > 0ULL ? 0ULL : t233 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 [ t232 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t234 > 29ULL ? 29ULL : t234 ] * 1.0E-5 ) { t168 [ t233 > 0ULL ? 0ULL : t233 ]
= t232 % 30ULL ; } } t29 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [
t168 [ 0ULL ] > 29ULL ? 29ULL : t168 [ 0ULL ] ] * 1.0E-5 ; } else { t29 = X [
105ULL ] * X [ 108ULL ] ; } if ( M_idx_30 != 0 ) { t30 = 0.0 - X [ 112ULL ] *
0.01 ; } else { t30 = 0.0 - X [ 112ULL ] / 1.0E-8 ; } if ( M_idx_31 != 0 ) {
t277 = 0.0 - X [ 113ULL ] * 0.01 ; } else { t277 = 0.0 - X [ 113ULL ] /
1.0E-8 ; } if ( M_idx_32 != 0 ) { t278 = t34 - t33 * 0.0001 ; } else { t278 =
t34 - t33 / 1.0E-8 ; } if ( M_idx_33 != 0 ) { t33 = t286 - t35 * 0.0001 ; }
else { t33 = t286 - t35 / 1.0E-8 ; } if ( M_idx_35 != 0 ) { t34 = X [ 114ULL
] - U_idx_7 * - 0.0001 ; } else { t34 = X [ 114ULL ] - - U_idx_7 / 1.0E-8 ; }
if ( M_idx_36 != 0 ) { t35 = X [ 115ULL ] - U_idx_8 * - 0.0001 ; } else { t35
= X [ 115ULL ] - - U_idx_8 / 1.0E-8 ; } tlu2_2d_linear_linear_value ( &
m_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , & t8
. mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField0 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t169
[ 0 ] = m_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , &
t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , &
t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; U_idx_7 = n_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; U_idx_8 = o_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & p_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t286 = p_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t173_idx_0 = q_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t174_idx_0 = r_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & s_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [
0ULL ] ) ; t175_idx_0 = s_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( &
t_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t176_idx_0 = t_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ]
, & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t177_idx_0 = u_efOut [
0 ] ; tlu2_2d_linear_linear_value ( & v_efOut [ 0ULL ] , & t7 . mField0 [
0ULL ] , & t7 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [ 0ULL ] , &
t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t178_idx_0 = v_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & w_efOut [ 0ULL ] , & t9 . mField0 [ 0ULL ] ,
& t9 . mField2 [ 0ULL ] , & t11 . mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t179_idx_0 = w_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & x_efOut [ 0ULL ] , & t11 . mField0 [ 0ULL ] ,
& t11 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [
0ULL ] ) ; t180_idx_0 = x_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( &
y_efOut [ 0ULL ] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] , & t11
. mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t181_idx_0 = y_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & ab_efOut [ 0ULL
] , & t9 . mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] , & t11 . mField0 [
0ULL ] , & t11 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t182_idx_0
= ab_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t9 .
mField0 [ 0ULL ] , & t9 . mField2 [ 0ULL ] , & t11 . mField0 [ 0ULL ] , & t11
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [
0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t183_idx_0 = bb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t184_idx_0 = cb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & db_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [
0ULL ] ) ; t185_idx_0 = db_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( &
eb_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t4
. mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t186_idx_0 = eb_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & fb_efOut [ 0ULL
] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL
] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 ,
& t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t187_idx_0 = fb_efOut
[ 0 ] ; tlu2_2d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [ 0ULL ] , &
t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t188_idx_0 = gb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t189_idx_0 = hb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [
0ULL ] ) ; t190_idx_0 = ib_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( &
jb_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2
. mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t191_idx_0 = jb_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL
] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL
] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 ,
& t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t192_idx_0 = kb_efOut
[ 0 ] ; tlu2_2d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t3 . mField0 [
0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [ 0ULL ] , &
t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t193_idx_0 = lb_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t157 [ 0ULL ] , & t159 [
0ULL ] , & t158 [ 0ULL ] ) ; t194_idx_0 = mb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & nb_efOut [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [
0ULL ] ) ; t195_idx_0 = nb_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( &
ob_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t0
. mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ;
t196_idx_0 = ob_efOut [ 0 ] ; tlu2_2d_linear_linear_value ( & pb_efOut [ 0ULL
] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL
] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 ,
& t157 [ 0ULL ] , & t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t197_idx_0 = pb_efOut
[ 0 ] ; tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t157 [ 0ULL ] , &
t159 [ 0ULL ] , & t158 [ 0ULL ] ) ; t198_idx_0 = qb_efOut [ 0 ] ; t156 [ 0ULL
] = - 0.0 ; t156 [ 1ULL ] = -
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 * ( real_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 < 0.0 ) / (
zc_int1 == 0.0 ? 1.0E-16 : zc_int1 ) ; t156 [ 2ULL ] = - 0.0 ; t156 [ 3ULL ]
= - ( X [ 4ULL ] * X [ 48ULL ] ) ; t156 [ 4ULL ] = - 0.0 ; t156 [ 5ULL ] = -
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 * ( real_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 < 0.0 ) / (
zc_int3 == 0.0 ? 1.0E-16 : zc_int3 ) ; t156 [ 6ULL ] = - 0.0 ; t156 [ 7ULL ]
= - ( X [ 8ULL ] * X [ 59ULL ] ) ; t156 [ 8ULL ] = - 0.0 ; t156 [ 9ULL ] = -
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 * ( real_T )
( Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 < 0.0 ) / (
zc_int5 == 0.0 ? 1.0E-16 : zc_int5 ) ; t156 [ 10ULL ] = - 0.0 ; t156 [ 11ULL
] = - ( X [ 12ULL ] * X [ 70ULL ] ) ; t156 [ 12ULL ] = - 0.0 ; t156 [ 13ULL ]
= - Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 * (
real_T ) ( Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 <
0.0 ) / ( zc_int7 == 0.0 ? 1.0E-16 : zc_int7 ) ; t156 [ 14ULL ] = - 0.0 ;
t156 [ 15ULL ] = - ( X [ 16ULL ] * X [ 81ULL ] ) ; t156 [ 16ULL ] = - 0.0 ;
t156 [ 17ULL ] = - X [ 44ULL ] * ( real_T ) ( X [ 44ULL ] < 0.0 ) / ( t297 ==
0.0 ? 1.0E-16 : t297 ) ; t156 [ 18ULL ] = - 0.0 ; t156 [ 19ULL ] = - ( X [
20ULL ] * X [ 92ULL ] ) ; t156 [ 20ULL ] = - 0.0 ; t156 [ 21ULL ] = -
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 * ( real_T )
( Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 < 0.0 ) / (
zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ; t156 [ 22ULL ] = - 0.0 ; t156 [
23ULL ] = - ( X [ 23ULL ] * X [ 103ULL ] ) ; t156 [ 24ULL ] = - 0.0 ; t156 [
25ULL ] = - 0.0 ; t156 [ 26ULL ] = t12 ; t156 [ 27ULL ] = t259 ; t156 [ 28ULL
] = t260 ; t156 [ 29ULL ] = t261 ; t156 [ 30ULL ] = t262 ; t156 [ 31ULL ] =
t263 ; t156 [ 32ULL ] = t264 / 1.0E+8 ; t156 [ 33ULL ] = t295 / 1.0E+8 ; t156
[ 34ULL ] = t20 / 1.0E+8 ; t156 [ 35ULL ] = t21 / 1.0E+8 ; t156 [ 36ULL ] =
t22 / 1.0E+8 ; t156 [ 37ULL ] = t23 / 1.0E+8 ; t156 [ 38ULL ] = - t169 [ 0ULL
] ; t156 [ 39ULL ] = - U_idx_7 ; t156 [ 40ULL ] = - 0.0 - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 * zc_int12 +
zc_int0 ) ; t156 [ 41ULL ] = - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 *
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel2 * zc_int12 *
0.001 + X [ 4ULL ] * X [ 4ULL ] * X [ 48ULL ] * 0.001 ) ; t156 [ 42ULL ] = -
( X [ 2ULL ] / ( zc_int1 == 0.0 ? 1.0E-16 : zc_int1 ) ) ; t156 [ 43ULL ] = -
1.0 ; t156 [ 44ULL ] = - 1.0 ; t156 [ 45ULL ] = - U_idx_8 ; t156 [ 46ULL ] =
- t286 ; t156 [ 47ULL ] = - ( 1.0 / ( t24 == 0.0 ? 1.0E-16 : t24 ) ) ; t156 [
48ULL ] = - t173_idx_0 / 5449.327582718237 ; t156 [ 49ULL ] = - 1.0 ; t156 [
50ULL ] = - t174_idx_0 ; t156 [ 51ULL ] = - t175_idx_0 ; t156 [ 52ULL ] = -
0.0 - ( Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 *
zc_int13 + zc_int2 ) ; t156 [ 53ULL ] = - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 *
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel9 * zc_int13 *
0.001 + X [ 8ULL ] * X [ 8ULL ] * X [ 59ULL ] * 0.001 ) ; t156 [ 54ULL ] = -
( X [ 6ULL ] / ( zc_int3 == 0.0 ? 1.0E-16 : zc_int3 ) ) ; t156 [ 55ULL ] = -
1.0 ; t156 [ 56ULL ] = - 1.0 ; t156 [ 57ULL ] = - t176_idx_0 ; t156 [ 58ULL ]
= - t177_idx_0 ; t156 [ 59ULL ] = - ( 1.0 / ( t25 == 0.0 ? 1.0E-16 : t25 ) )
; t156 [ 60ULL ] = - t178_idx_0 / 5449.327582718237 ; t156 [ 61ULL ] = - 1.0
; t156 [ 62ULL ] = - t179_idx_0 ; t156 [ 63ULL ] = - t180_idx_0 ; t156 [
64ULL ] = - 0.0 - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 * zc_int14 +
zc_int4 ) ; t156 [ 65ULL ] = - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 *
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel14 * zc_int14 *
0.001 + X [ 12ULL ] * X [ 12ULL ] * X [ 70ULL ] * 0.001 ) ; t156 [ 66ULL ] =
- ( X [ 10ULL ] / ( zc_int5 == 0.0 ? 1.0E-16 : zc_int5 ) ) ; t156 [ 67ULL ] =
- 1.0 ; t156 [ 68ULL ] = - 1.0 ; t156 [ 69ULL ] = - t181_idx_0 ; t156 [ 70ULL
] = - t182_idx_0 ; t156 [ 71ULL ] = - ( 1.0 / ( t26 == 0.0 ? 1.0E-16 : t26 )
) ; t156 [ 72ULL ] = - t183_idx_0 / 5449.327582718237 ; t156 [ 73ULL ] = -
1.0 ; t156 [ 74ULL ] = - t184_idx_0 ; t156 [ 75ULL ] = - t185_idx_0 ; t156 [
76ULL ] = - 0.0 - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 * zc_int15 +
zc_int6 ) ; t156 [ 77ULL ] = - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 *
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel19 * zc_int15 *
0.001 + X [ 16ULL ] * X [ 16ULL ] * X [ 81ULL ] * 0.001 ) ; t156 [ 78ULL ] =
- ( X [ 14ULL ] / ( zc_int7 == 0.0 ? 1.0E-16 : zc_int7 ) ) ; t156 [ 79ULL ] =
- 1.0 ; t156 [ 80ULL ] = - 1.0 ; t156 [ 81ULL ] = - t186_idx_0 ; t156 [ 82ULL
] = - t187_idx_0 ; t156 [ 83ULL ] = - ( 1.0 / ( t27 == 0.0 ? 1.0E-16 : t27 )
) ; t156 [ 84ULL ] = - t188_idx_0 / 5449.327582718237 ; t156 [ 85ULL ] = -
1.0 ; t156 [ 86ULL ] = - t189_idx_0 ; t156 [ 87ULL ] = - t190_idx_0 ; t156 [
88ULL ] = - 0.0 - ( X [ 44ULL ] * zc_int16 + zc_int8 ) ; t156 [ 89ULL ] = - (
X [ 44ULL ] * X [ 44ULL ] * zc_int16 * 0.001 + X [ 20ULL ] * X [ 20ULL ] * X
[ 92ULL ] * 0.001 ) ; t156 [ 90ULL ] = - ( X [ 18ULL ] / ( t297 == 0.0 ?
1.0E-16 : t297 ) ) ; t156 [ 91ULL ] = - 1.0 ; t156 [ 92ULL ] = - 1.0 ; t156 [
93ULL ] = - t191_idx_0 ; t156 [ 94ULL ] = - t192_idx_0 ; t156 [ 95ULL ] = - (
1.0 / ( t28 == 0.0 ? 1.0E-16 : t28 ) ) ; t156 [ 96ULL ] = - t193_idx_0 /
5449.327582718237 ; t156 [ 97ULL ] = - 1.0 ; t156 [ 98ULL ] = - t194_idx_0 ;
t156 [ 99ULL ] = - t195_idx_0 ; t156 [ 100ULL ] = - 0.0 - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 * zc_int17 +
zc_int10 ) ; t156 [ 101ULL ] = - (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 *
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel28 * zc_int17 *
0.001 + X [ 23ULL ] * X [ 23ULL ] * X [ 103ULL ] * 0.001 ) ; t156 [ 102ULL ]
= - ( X [ 21ULL ] / ( zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ) ; t156 [
103ULL ] = - 1.0 ; t156 [ 104ULL ] = - 1.0 ; t156 [ 105ULL ] = - t196_idx_0 ;
t156 [ 106ULL ] = - t197_idx_0 ; t156 [ 107ULL ] = - ( 1.0 / ( t29 == 0.0 ?
1.0E-16 : t29 ) ) ; t156 [ 108ULL ] = - t198_idx_0 / 5449.327582718237 ; t156
[ 109ULL ] = - 1.0 ; t156 [ 110ULL ] = t30 / 1.0E+8 ; t156 [ 111ULL ] = t277
/ 1.0E+8 ; t156 [ 112ULL ] = t278 / 1.0E+8 ; t156 [ 113ULL ] = t33 / 1.0E+8 ;
t156 [ 114ULL ] = t34 / 1.0E+8 ; t156 [ 115ULL ] = t35 / 1.0E+8 ; for ( b = 0
; b < 116 ; b ++ ) { out . mX [ b ] = t156 [ b ] ; } ( void ) LC ; ( void )
t299 ; return 0 ; }
