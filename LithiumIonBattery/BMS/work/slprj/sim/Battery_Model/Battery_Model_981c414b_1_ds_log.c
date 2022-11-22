#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_log.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_log ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t62 , NeDsMethodOutput * t63 ) { PmRealVector out ;
real_T t0 [ 425 ] ; real_T X [ 116 ] ; real_T t6 [ 1 ] ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v ; real_T
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 ; real_T
PreChargeCircuit_PositiveContactorChgr_i ; real_T
PreChargeCircuit_PositiveContactorChgr_v ; real_T
PreChargeCircuit_PositiveContactorInvtr_i ; real_T
PreChargeCircuit_PositiveContactorInvtr_v ; real_T
PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; real_T
PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; real_T
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; real_T
PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_13 ; real_T U_idx_14 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4
; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T t19 ; real_T t21 ; real_T t23 ; real_T t27 ; real_T t31 ;
real_T t34 ; real_T t40 ; real_T t42 ; real_T t43 ; real_T t44 ; real_T t45 ;
real_T t46 ; real_T t48 ; real_T t54 ; real_T t55 ; real_T t56 ; real_T t57 ;
size_t t15 ; size_t t18 ; int32_T b ; U_idx_0 = t62 -> mU . mX [ 0 ] ;
U_idx_1 = t62 -> mU . mX [ 1 ] ; U_idx_2 = t62 -> mU . mX [ 2 ] ; U_idx_3 =
t62 -> mU . mX [ 3 ] ; U_idx_4 = t62 -> mU . mX [ 4 ] ; U_idx_5 = t62 -> mU .
mX [ 5 ] ; U_idx_6 = t62 -> mU . mX [ 6 ] ; U_idx_7 = t62 -> mU . mX [ 7 ] ;
U_idx_8 = t62 -> mU . mX [ 8 ] ; U_idx_9 = t62 -> mU . mX [ 9 ] ; U_idx_10 =
t62 -> mU . mX [ 10 ] ; U_idx_11 = t62 -> mU . mX [ 11 ] ; U_idx_12 = t62 ->
mU . mX [ 12 ] ; U_idx_13 = t62 -> mU . mX [ 13 ] ; U_idx_14 = t62 -> mU . mX
[ 14 ] ; for ( b = 0 ; b < 116 ; b ++ ) { X [ b ] = t62 -> mX . mX [ b ] ; }
out = t63 -> mLOG ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i = ( ( X [ 26ULL
] * 0.05 + X [ 27ULL ] * - 0.05 ) + X [ 32ULL ] * - 0.05 ) + X [ 33ULL ] * -
0.05 ; Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v = X [
27ULL ] + X [ 33ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v = ( X [ 27ULL
] + X [ 32ULL ] ) + X [ 33ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i = ( ( X [ 27ULL
] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 35ULL ] * -
0.05 ; Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v = X [
28ULL ] + X [ 35ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v = ( X [ 28ULL
] + X [ 34ULL ] ) + X [ 35ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i = ( ( X [ 28ULL
] * 0.05 + X [ 29ULL ] * - 0.05 ) + X [ 36ULL ] * - 0.05 ) + X [ 37ULL ] * -
0.05 ; Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v = X [
29ULL ] + X [ 37ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v = ( X [ 29ULL
] + X [ 36ULL ] ) + X [ 37ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i = ( ( X [ 29ULL
] * 0.05 + X [ 30ULL ] * - 0.05 ) + X [ 38ULL ] * - 0.05 ) + X [ 39ULL ] * -
0.05 ; Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v = X [
30ULL ] + X [ 39ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v = ( X [ 30ULL
] + X [ 38ULL ] ) + X [ 39ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i = ( ( X [ 30ULL
] * 0.05 + X [ 31ULL ] * - 0.05 ) + X [ 40ULL ] * - 0.05 ) + X [ 41ULL ] * -
0.05 ; Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v = X [
31ULL ] + X [ 41ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v = ( X [ 31ULL
] + X [ 40ULL ] ) + X [ 41ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i = ( X [ 31ULL ]
* 0.05 + X [ 42ULL ] * - 0.05 ) + X [ 43ULL ] * - 0.05 ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v = X [ 42ULL ]
+ X [ 43ULL ] ;
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 = X [ 26ULL ]
- X [ 27ULL ] ; t43 = X [ 27ULL ] - X [ 28ULL ] ; t44 = X [ 28ULL ] - X [
29ULL ] ; t45 = X [ 29ULL ] - X [ 30ULL ] ; t46 = X [ 30ULL ] - X [ 31ULL ] ;
t48 = X [ 0ULL ] * - 0.00050950000000000008 + X [ 1ULL ] *
0.00050950000000000008 ; t6 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ;
t15 < 30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t19 = t6 [ t18 > 0ULL ? 0ULL :
t18 ] ; t21 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ;
t6 [ t18 > 0ULL ? 0ULL : t18 ] = t19 > t21 ? t21 : t19 ; } t21 = X [ 45ULL ]
; t19 = t21 > t6 [ 0ULL ] ? t21 : t6 [ 0ULL ] ; t6 [ 0ULL ] = pmf_get_inf ( )
; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t23 = t6 [
t18 > 0ULL ? 0ULL : t18 ] ; t21 = ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 [ t15 ] * 1.0E-5 ; t6 [ t18 > 0ULL ? 0ULL : t18 ] = t23 > t21 ? t21 :
t23 ; } t21 = X [ 56ULL ] ; t23 = t21 > t6 [ 0ULL ] ? t21 : t6 [ 0ULL ] ; t6
[ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18
= t15 / 30ULL ; t27 = t6 [ t18 > 0ULL ? 0ULL : t18 ] ; t21 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ; t6 [ t18 > 0ULL ?
0ULL : t18 ] = t27 > t21 ? t21 : t27 ; } t21 = X [ 67ULL ] ; t27 = t21 > t6 [
0ULL ] ? t21 : t6 [ 0ULL ] ; t6 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL
; t15 < 30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t31 = t6 [ t18 > 0ULL ? 0ULL :
t18 ] ; t21 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ;
t6 [ t18 > 0ULL ? 0ULL : t18 ] = t31 > t21 ? t21 : t31 ; } t21 = X [ 78ULL ]
; t31 = t21 > t6 [ 0ULL ] ? t21 : t6 [ 0ULL ] ; t6 [ 0ULL ] = pmf_get_inf ( )
; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t21 = t6 [
t18 > 0ULL ? 0ULL : t18 ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ; t6 [ t18 > 0ULL ?
0ULL : t18 ] = t21 >
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 ?
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 : t21 ; } t21
= X [ 89ULL ] ; t34 = t21 > t6 [ 0ULL ] ? t21 : t6 [ 0ULL ] ; t6 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 /
30ULL ; t21 = t6 [ t18 > 0ULL ? 0ULL : t18 ] ; t40 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ; t6 [ t18 > 0ULL ? 0ULL : t18 ] = t21 >
t40 ? t40 : t21 ; } t21 = X [ 100ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 = t21 > t6 [
0ULL ] ? t21 : t6 [ 0ULL ] ; t40 = X [ 17ULL ] * 0.00050950000000000008 +
U_idx_6 * - 0.00050950000000000008 ; t21 = X [ 13ULL ] * -
0.00050950000000000008 + X [ 17ULL ] * 0.00050950000000000008 ; t42 = X [
9ULL ] * - 0.00050950000000000008 + X [ 13ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 = X [ 5ULL ]
* - 0.00050950000000000008 + X [ 9ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 = X [ 1ULL ]
* - 0.00050950000000000008 + X [ 5ULL ] * 0.00050950000000000008 ; t54 = ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [
35ULL ] * - 0.05 ) + X [ 44ULL ] ; t55 = ( ( ( ( ( ( ( X [ 27ULL ] * -
5.0000000000000008E-11 + X [ 28ULL ] * 5.0000000000000008E-11 ) + X [ 34ULL ]
* 5.0000000000000008E-11 ) + X [ 35ULL ] * 5.0000000000000008E-11 ) + X [
44ULL ] * - 1.0E-9 ) + X [ 111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) +
U_idx_8 * 1.0E-9 ) + X [ 24ULL ] ; t56 = X [ 111ULL ] * 1.0E-9 + X [ 25ULL ]
; t57 = ( ( ( ( ( ( X [ 27ULL ] * - 0.05 + X [ 28ULL ] * 0.05 ) + X [ 34ULL ]
* 0.05 ) + X [ 35ULL ] * 0.05 ) - X [ 44ULL ] ) - X [ 111ULL ] ) + U_idx_7 )
+ U_idx_8 ; PreChargeCircuit_PositiveContactorChgr_i = ( ( ( ( ( ( ( ( ( X [
24ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 27ULL ] * 0.0500000000025 ) + X
[ 28ULL ] * - 0.0500000000025 ) + X [ 34ULL ] * - 0.0500000000025 ) + X [
35ULL ] * - 0.0500000000025 ) + X [ 44ULL ] * 1.00000000005 ) + X [ 111ULL ]
* 1.00000000005 ) + X [ 114ULL ] * 0.05 ) + U_idx_7 * - 5.000000413701855E-11
) + U_idx_8 * - 1.00000000005 ; PreChargeCircuit_PositiveContactorChgr_v = (
( ( ( ( ( ( ( - X [ 26ULL ] + X [ 27ULL ] * - 5.0000000000000008E-11 ) + X [
28ULL ] * 5.0000000000000008E-11 ) + X [ 34ULL ] * 5.0000000000000008E-11 ) +
X [ 35ULL ] * 5.0000000000000008E-11 ) + X [ 44ULL ] * - 1.0E-9 ) + X [
111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) + U_idx_8 * 1.0E-9 ) + X [ 24ULL ]
; PreChargeCircuit_PositiveContactorInvtr_i = ( ( ( X [ 25ULL ] * - 0.05 + X
[ 26ULL ] * 0.05 ) + X [ 111ULL ] * - 1.00000000005 ) + X [ 115ULL ] * 0.05 )
+ U_idx_8 ; PreChargeCircuit_PositiveContactorInvtr_v = ( - X [ 26ULL ] + X [
111ULL ] * 1.0E-9 ) + X [ 25ULL ] ;
PreChargeCircuit_PreChrgResistorChgr_Resistor_i = ( ( ( ( ( ( ( ( ( X [ 24ULL
] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 27ULL ] * 2.5000000000000007E-12 ) +
X [ 28ULL ] * - 2.5000000000000007E-12 ) + X [ 34ULL ] * -
2.5000000000000007E-12 ) + X [ 35ULL ] * - 2.5000000000000007E-12 ) + X [
44ULL ] * 5.0000000000000008E-11 ) + X [ 111ULL ] * 5.0000000000000008E-11 )
+ X [ 114ULL ] * 0.05 ) + U_idx_7 * - 5.0000000000000008E-11 ) + U_idx_8 * -
5.0000000000000008E-11 ; PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v =
X [ 26ULL ] + X [ 114ULL ] ; PreChargeCircuit_PreChrgResistorInvtr_Resistor_i
= ( ( X [ 25ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 111ULL ] * -
5.0000000000000008E-11 ) + X [ 115ULL ] * 0.05 ;
PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v = X [ 26ULL ] + X [ 115ULL
] ; t0 [ 0ULL ] = X [ 26ULL ] ; t0 [ 1ULL ] = X [ 26ULL ] ; t0 [ 2ULL ] = X [
26ULL ] ; t0 [ 3ULL ] = X [ 27ULL ] ; t0 [ 4ULL ] = X [ 28ULL ] ; t0 [ 5ULL ]
= X [ 29ULL ] ; t0 [ 6ULL ] = X [ 30ULL ] ; t0 [ 7ULL ] = X [ 31ULL ] ; t0 [
8ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ; t0 [
9ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v ; t0
[ 10ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v ;
t0 [ 11ULL ] = X [ 32ULL ] ; t0 [ 12ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i * X [ 32ULL ] ;
t0 [ 13ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ;
t0 [ 14ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v
; t0 [ 15ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v ; t0 [ 16ULL ]
= X [ 34ULL ] ; t0 [ 17ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i * X [ 34ULL ] ;
t0 [ 18ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ;
t0 [ 19ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v
; t0 [ 20ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v ; t0 [ 21ULL ]
= X [ 36ULL ] ; t0 [ 22ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i * X [ 36ULL ] ;
t0 [ 23ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ;
t0 [ 24ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v
; t0 [ 25ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v ; t0 [ 26ULL ]
= X [ 38ULL ] ; t0 [ 27ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i * X [ 38ULL ] ;
t0 [ 28ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ;
t0 [ 29ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v
; t0 [ 30ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v ; t0 [ 31ULL ]
= X [ 40ULL ] ; t0 [ 32ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i * X [ 40ULL ] ;
t0 [ 33ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ;
t0 [ 34ULL ] = X [ 43ULL ] ; t0 [ 35ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v ; t0 [ 36ULL ]
= X [ 42ULL ] ; t0 [ 37ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i * X [ 42ULL ] ;
t0 [ 38ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ;
t0 [ 39ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v
; t0 [ 40ULL ] = X [ 26ULL ] ; t0 [ 41ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i * 20.0 ; t0 [
42ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i * 20.0 ; t0 [
43ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; t0 [
44ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v ; t0
[ 45ULL ] = X [ 27ULL ] ; t0 [ 46ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i * 20.0 ; t0 [
47ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i * 20.0 ; t0 [
48ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; t0 [
49ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v ; t0
[ 50ULL ] = X [ 28ULL ] ; t0 [ 51ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i * 20.0 ; t0 [
52ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i * 20.0 ; t0 [
53ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; t0 [
54ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v ; t0
[ 55ULL ] = X [ 29ULL ] ; t0 [ 56ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i * 20.0 ; t0 [
57ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i * 20.0 ; t0 [
58ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; t0 [
59ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v ; t0
[ 60ULL ] = X [ 30ULL ] ; t0 [ 61ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i * 20.0 ; t0 [
62ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i * 20.0 ; t0 [
63ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; t0 [
64ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v ; t0
[ 65ULL ] = X [ 31ULL ] ; t0 [ 66ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i * 20.0 ; t0 [
67ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i *
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i * 20.0 ; t0 [
68ULL ] = U_idx_0 ; t0 [ 69ULL ] = U_idx_1 ; t0 [ 70ULL ] = U_idx_2 ; t0 [
71ULL ] = U_idx_3 ; t0 [ 72ULL ] = U_idx_4 ; t0 [ 73ULL ] = U_idx_5 ; t0 [
74ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ; t0 [
75ULL ] = X [ 27ULL ] ; t0 [ 76ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v ; t0 [ 77ULL ]
= X [ 33ULL ] ; t0 [ 78ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i * X [ 33ULL ] ;
t0 [ 79ULL ] = U_idx_2 ; t0 [ 80ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; t0 [ 81ULL ] =
X [ 28ULL ] ; t0 [ 82ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v ; t0 [ 83ULL ]
= X [ 35ULL ] ; t0 [ 84ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i * X [ 35ULL ] ;
t0 [ 85ULL ] = U_idx_0 ; t0 [ 86ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; t0 [ 87ULL ] =
X [ 29ULL ] ; t0 [ 88ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v ; t0 [ 89ULL ]
= X [ 37ULL ] ; t0 [ 90ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i * X [ 37ULL ] ;
t0 [ 91ULL ] = U_idx_3 ; t0 [ 92ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; t0 [ 93ULL ] =
X [ 30ULL ] ; t0 [ 94ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v ; t0 [ 95ULL ]
= X [ 39ULL ] ; t0 [ 96ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i * X [ 39ULL ] ;
t0 [ 97ULL ] = U_idx_1 ; t0 [ 98ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; t0 [ 99ULL ] =
X [ 31ULL ] ; t0 [ 100ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v ; t0 [ 101ULL
] = X [ 41ULL ] ; t0 [ 102ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i * X [ 41ULL ] ;
t0 [ 103ULL ] = U_idx_4 ; t0 [ 104ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; t0 [ 105ULL ]
= X [ 43ULL ] ; t0 [ 106ULL ] = X [ 43ULL ] ; t0 [ 107ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i * X [ 43ULL ] ;
t0 [ 108ULL ] = U_idx_5 ; t0 [ 109ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 ; t0 [ 110ULL
] = X [ 27ULL ] ; t0 [ 111ULL ] = X [ 26ULL ] ; t0 [ 112ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 ; t0 [ 113ULL
] = t43 ; t0 [ 114ULL ] = X [ 28ULL ] ; t0 [ 115ULL ] = X [ 27ULL ] ; t0 [
116ULL ] = t43 ; t0 [ 117ULL ] = t44 ; t0 [ 118ULL ] = X [ 29ULL ] ; t0 [
119ULL ] = X [ 28ULL ] ; t0 [ 120ULL ] = t44 ; t0 [ 121ULL ] = t45 ; t0 [
122ULL ] = X [ 30ULL ] ; t0 [ 123ULL ] = X [ 29ULL ] ; t0 [ 124ULL ] = t45 ;
t0 [ 125ULL ] = t46 ; t0 [ 126ULL ] = X [ 31ULL ] ; t0 [ 127ULL ] = X [ 30ULL
] ; t0 [ 128ULL ] = t46 ; t0 [ 129ULL ] = X [ 31ULL ] ; t0 [ 130ULL ] = X [
31ULL ] ; t0 [ 131ULL ] = X [ 31ULL ] ; t0 [ 132ULL ] = X [ 0ULL ] ; t0 [
133ULL ] = t48 * 1000.0 ; t0 [ 134ULL ] = X [ 0ULL ] ; t0 [ 135ULL ] = X [
2ULL ] * 0.00027777777777777778 ; t0 [ 136ULL ] = ( ( ( ( ( ( X [ 27ULL ] *
0.05 + X [ 28ULL ] * - 0.05 ) + X [ 31ULL ] * - 0.05 ) + X [ 34ULL ] * - 0.05
) + X [ 42ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [ 43ULL ] * 0.05 ) + X
[ 44ULL ] ; t0 [ 137ULL ] = X [ 3ULL ] ; t0 [ 138ULL ] = X [ 45ULL ] ; t0 [
139ULL ] = t19 ; t0 [ 140ULL ] = X [ 31ULL ] ; t0 [ 141ULL ] = X [ 46ULL ] *
1000.0 ; t0 [ 142ULL ] = X [ 46ULL ] * 1000.0 ; t0 [ 143ULL ] = X [ 47ULL ] ;
t0 [ 144ULL ] = X [ 47ULL ] ; t0 [ 145ULL ] = X [ 31ULL ] ; t0 [ 146ULL ] = X
[ 4ULL ] ; t0 [ 147ULL ] = X [ 48ULL ] ; t0 [ 148ULL ] = X [ 49ULL ] ; t0 [
149ULL ] = X [ 50ULL ] ; t0 [ 150ULL ] = X [ 51ULL ] ; t0 [ 151ULL ] = X [
52ULL ] ; t0 [ 152ULL ] = X [ 53ULL ] ; t0 [ 153ULL ] = X [ 54ULL ] *
0.00027777777777777778 ; t0 [ 154ULL ] = X [ 55ULL ] ; t0 [ 155ULL ] = X [
47ULL ] ; t0 [ 156ULL ] = X [ 1ULL ] ; t0 [ 157ULL ] = ( ( X [ 0ULL ] *
0.00050950000000000008 + X [ 1ULL ] * - 0.0010190000000000002 ) + X [ 5ULL ]
* 0.00050950000000000008 ) * 1000.0 ; t0 [ 158ULL ] = X [ 1ULL ] ; t0 [
159ULL ] = X [ 6ULL ] * 0.00027777777777777778 ; t0 [ 160ULL ] = ( ( ( ( ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 30ULL ] * - 0.05 ) + X [
31ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 40ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 41ULL ] * 0.05 ) + X [ 44ULL ] ; t0 [ 161ULL ] = X [ 31ULL
] ; t0 [ 162ULL ] = X [ 7ULL ] ; t0 [ 163ULL ] = X [ 56ULL ] ; t0 [ 164ULL ]
= t23 ; t0 [ 165ULL ] = X [ 30ULL ] ; t0 [ 166ULL ] = X [ 57ULL ] * 1000.0 ;
t0 [ 167ULL ] = X [ 57ULL ] * 1000.0 ; t0 [ 168ULL ] = X [ 58ULL ] ; t0 [
169ULL ] = X [ 58ULL ] ; t0 [ 170ULL ] = - X [ 31ULL ] + X [ 30ULL ] ; t0 [
171ULL ] = X [ 8ULL ] ; t0 [ 172ULL ] = X [ 59ULL ] ; t0 [ 173ULL ] = X [
60ULL ] ; t0 [ 174ULL ] = X [ 61ULL ] ; t0 [ 175ULL ] = X [ 62ULL ] ; t0 [
176ULL ] = X [ 63ULL ] ; t0 [ 177ULL ] = X [ 64ULL ] ; t0 [ 178ULL ] = X [
65ULL ] * 0.00027777777777777778 ; t0 [ 179ULL ] = X [ 66ULL ] ; t0 [ 180ULL
] = X [ 58ULL ] ; t0 [ 181ULL ] = X [ 5ULL ] ; t0 [ 182ULL ] = ( ( X [ 1ULL ]
* 0.00050950000000000008 + X [ 5ULL ] * - 0.0010190000000000002 ) + X [ 9ULL
] * 0.00050950000000000008 ) * 1000.0 ; t0 [ 183ULL ] = X [ 5ULL ] ; t0 [
184ULL ] = X [ 10ULL ] * 0.00027777777777777778 ; t0 [ 185ULL ] = ( ( ( ( ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 29ULL ] * - 0.05 ) + X [
30ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 38ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 39ULL ] * 0.05 ) + X [ 44ULL ] ; t0 [ 186ULL ] = X [ 30ULL
] ; t0 [ 187ULL ] = X [ 11ULL ] ; t0 [ 188ULL ] = X [ 67ULL ] ; t0 [ 189ULL ]
= t27 ; t0 [ 190ULL ] = X [ 29ULL ] ; t0 [ 191ULL ] = X [ 68ULL ] * 1000.0 ;
t0 [ 192ULL ] = X [ 68ULL ] * 1000.0 ; t0 [ 193ULL ] = X [ 69ULL ] ; t0 [
194ULL ] = X [ 69ULL ] ; t0 [ 195ULL ] = - X [ 30ULL ] + X [ 29ULL ] ; t0 [
196ULL ] = X [ 12ULL ] ; t0 [ 197ULL ] = X [ 70ULL ] ; t0 [ 198ULL ] = X [
71ULL ] ; t0 [ 199ULL ] = X [ 72ULL ] ; t0 [ 200ULL ] = X [ 73ULL ] ; t0 [
201ULL ] = X [ 74ULL ] ; t0 [ 202ULL ] = X [ 75ULL ] ; t0 [ 203ULL ] = X [
76ULL ] * 0.00027777777777777778 ; t0 [ 204ULL ] = X [ 77ULL ] ; t0 [ 205ULL
] = X [ 69ULL ] ; t0 [ 206ULL ] = X [ 9ULL ] ; t0 [ 207ULL ] = ( ( X [ 5ULL ]
* 0.00050950000000000008 + X [ 9ULL ] * - 0.0010190000000000002 ) + X [ 13ULL
] * 0.00050950000000000008 ) * 1000.0 ; t0 [ 208ULL ] = X [ 9ULL ] ; t0 [
209ULL ] = X [ 14ULL ] * 0.00027777777777777778 ; t0 [ 210ULL ] = ( ( ( ( ( (
X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.1 ) + X [ 29ULL ] * 0.05 ) + X [ 34ULL
] * - 0.05 ) + X [ 36ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [ 37ULL ] *
0.05 ) + X [ 44ULL ] ; t0 [ 211ULL ] = X [ 29ULL ] ; t0 [ 212ULL ] = X [
15ULL ] ; t0 [ 213ULL ] = X [ 78ULL ] ; t0 [ 214ULL ] = t31 ; t0 [ 215ULL ] =
X [ 28ULL ] ; t0 [ 216ULL ] = X [ 79ULL ] * 1000.0 ; t0 [ 217ULL ] = X [
79ULL ] * 1000.0 ; t0 [ 218ULL ] = X [ 80ULL ] ; t0 [ 219ULL ] = X [ 80ULL ]
; t0 [ 220ULL ] = - X [ 29ULL ] + X [ 28ULL ] ; t0 [ 221ULL ] = X [ 16ULL ] ;
t0 [ 222ULL ] = X [ 81ULL ] ; t0 [ 223ULL ] = X [ 82ULL ] ; t0 [ 224ULL ] = X
[ 83ULL ] ; t0 [ 225ULL ] = X [ 84ULL ] ; t0 [ 226ULL ] = X [ 85ULL ] ; t0 [
227ULL ] = X [ 86ULL ] ; t0 [ 228ULL ] = X [ 87ULL ] * 0.00027777777777777778
; t0 [ 229ULL ] = X [ 88ULL ] ; t0 [ 230ULL ] = X [ 80ULL ] ; t0 [ 231ULL ] =
X [ 13ULL ] ; t0 [ 232ULL ] = ( ( X [ 9ULL ] * 0.00050950000000000008 + X [
13ULL ] * - 0.0010190000000000002 ) + X [ 17ULL ] * 0.00050950000000000008 )
* 1000.0 ; t0 [ 233ULL ] = X [ 13ULL ] ; t0 [ 234ULL ] = X [ 18ULL ] *
0.00027777777777777778 ; t0 [ 235ULL ] = X [ 44ULL ] ; t0 [ 236ULL ] = X [
28ULL ] ; t0 [ 237ULL ] = X [ 19ULL ] ; t0 [ 238ULL ] = X [ 89ULL ] ; t0 [
239ULL ] = t34 ; t0 [ 240ULL ] = X [ 27ULL ] ; t0 [ 241ULL ] = X [ 90ULL ] *
1000.0 ; t0 [ 242ULL ] = X [ 90ULL ] * 1000.0 ; t0 [ 243ULL ] = X [ 91ULL ] ;
t0 [ 244ULL ] = X [ 91ULL ] ; t0 [ 245ULL ] = - X [ 28ULL ] + X [ 27ULL ] ;
t0 [ 246ULL ] = X [ 20ULL ] ; t0 [ 247ULL ] = X [ 92ULL ] ; t0 [ 248ULL ] = X
[ 93ULL ] ; t0 [ 249ULL ] = X [ 94ULL ] ; t0 [ 250ULL ] = X [ 95ULL ] ; t0 [
251ULL ] = X [ 96ULL ] ; t0 [ 252ULL ] = X [ 97ULL ] ; t0 [ 253ULL ] = X [
98ULL ] * 0.00027777777777777778 ; t0 [ 254ULL ] = X [ 99ULL ] ; t0 [ 255ULL
] = X [ 91ULL ] ; t0 [ 256ULL ] = X [ 17ULL ] ; t0 [ 257ULL ] = ( ( X [ 13ULL
] * 0.00050950000000000008 + X [ 17ULL ] * - 0.0010190000000000002 ) +
U_idx_6 * 0.00050950000000000008 ) * 1000.0 ; t0 [ 258ULL ] = X [ 17ULL ] ;
t0 [ 259ULL ] = X [ 21ULL ] * 0.00027777777777777778 ; t0 [ 260ULL ] = ( ( (
( ( ( X [ 26ULL ] * - 0.05 + X [ 27ULL ] * 0.1 ) + X [ 28ULL ] * - 0.05 ) + X
[ 32ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 33ULL ] * 0.05 ) + X [
35ULL ] * - 0.05 ) + X [ 44ULL ] ; t0 [ 261ULL ] = X [ 27ULL ] ; t0 [ 262ULL
] = X [ 22ULL ] ; t0 [ 263ULL ] = X [ 100ULL ] ; t0 [ 264ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel29 ; t0 [ 265ULL
] = X [ 26ULL ] ; t0 [ 266ULL ] = X [ 101ULL ] * 1000.0 ; t0 [ 267ULL ] = X [
101ULL ] * 1000.0 ; t0 [ 268ULL ] = X [ 102ULL ] ; t0 [ 269ULL ] = X [ 102ULL
] ; t0 [ 270ULL ] = - X [ 27ULL ] + X [ 26ULL ] ; t0 [ 271ULL ] = X [ 23ULL ]
; t0 [ 272ULL ] = X [ 103ULL ] ; t0 [ 273ULL ] = X [ 104ULL ] ; t0 [ 274ULL ]
= X [ 105ULL ] ; t0 [ 275ULL ] = X [ 106ULL ] ; t0 [ 276ULL ] = X [ 107ULL ]
; t0 [ 277ULL ] = X [ 108ULL ] ; t0 [ 278ULL ] = X [ 109ULL ] *
0.00027777777777777778 ; t0 [ 279ULL ] = X [ 110ULL ] ; t0 [ 280ULL ] = X [
102ULL ] ; t0 [ 281ULL ] = X [ 26ULL ] ; t0 [ 282ULL ] = X [ 27ULL ] ; t0 [
283ULL ] = X [ 28ULL ] ; t0 [ 284ULL ] = X [ 29ULL ] ; t0 [ 285ULL ] = X [
30ULL ] ; t0 [ 286ULL ] = X [ 31ULL ] ; t0 [ 287ULL ] = U_idx_6 ; t0 [ 288ULL
] = t40 * 1000.0 ; t0 [ 289ULL ] = U_idx_6 ; t0 [ 290ULL ] = U_idx_6 ; t0 [
291ULL ] = U_idx_6 ; t0 [ 292ULL ] = X [ 17ULL ] ; t0 [ 293ULL ] = t40 * -
1000.0 ; t0 [ 294ULL ] = t40 * - 1962.708537782139 ; t0 [ 295ULL ] = X [
17ULL ] ; t0 [ 296ULL ] = X [ 13ULL ] ; t0 [ 297ULL ] = t21 * 1000.0 ; t0 [
298ULL ] = t21 * 1962.708537782139 ; t0 [ 299ULL ] = X [ 13ULL ] ; t0 [
300ULL ] = X [ 9ULL ] ; t0 [ 301ULL ] = t42 * 1000.0 ; t0 [ 302ULL ] = t42 *
1962.708537782139 ; t0 [ 303ULL ] = X [ 9ULL ] ; t0 [ 304ULL ] = X [ 5ULL ] ;
t0 [ 305ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 * 1000.0 ; t0
[ 306ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2
* 1962.708537782139 ; t0 [ 307ULL ] = X [ 5ULL ] ; t0 [ 308ULL ] = X [ 1ULL ]
; t0 [ 309ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 * 1000.0 ; t0
[ 310ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3
* 1962.708537782139 ; t0 [ 311ULL ] = X [ 1ULL ] ; t0 [ 312ULL ] = X [ 0ULL ]
; t0 [ 313ULL ] = t48 * 1000.0 ; t0 [ 314ULL ] = t48 * 1962.708537782139 ; t0
[ 315ULL ] = X [ 0ULL ] ; t0 [ 316ULL ] = X [ 0ULL ] ; t0 [ 317ULL ] =
U_idx_6 ; t0 [ 318ULL ] = X [ 17ULL ] ; t0 [ 319ULL ] = X [ 17ULL ] ; t0 [
320ULL ] = X [ 13ULL ] ; t0 [ 321ULL ] = X [ 13ULL ] ; t0 [ 322ULL ] = X [
13ULL ] ; t0 [ 323ULL ] = X [ 9ULL ] ; t0 [ 324ULL ] = X [ 9ULL ] ; t0 [
325ULL ] = X [ 9ULL ] ; t0 [ 326ULL ] = X [ 5ULL ] ; t0 [ 327ULL ] = X [ 5ULL
] ; t0 [ 328ULL ] = X [ 5ULL ] ; t0 [ 329ULL ] = X [ 1ULL ] ; t0 [ 330ULL ] =
X [ 1ULL ] ; t0 [ 331ULL ] = X [ 1ULL ] ; t0 [ 332ULL ] = X [ 0ULL ] ; t0 [
333ULL ] = X [ 0ULL ] ; t0 [ 334ULL ] = X [ 0ULL ] ; t0 [ 335ULL ] = X [
17ULL ] ; t0 [ 336ULL ] = t54 ; t0 [ 337ULL ] = t54 ; t0 [ 338ULL ] = t54 ;
t0 [ 339ULL ] = X [ 26ULL ] ; t0 [ 340ULL ] = X [ 26ULL ] ; t0 [ 341ULL ] = X
[ 26ULL ] ; t0 [ 342ULL ] = t55 ; t0 [ 343ULL ] = t55 ; t0 [ 344ULL ] =
U_idx_7 ; t0 [ 345ULL ] = U_idx_7 ; t0 [ 346ULL ] = - t55 ; t0 [ 347ULL ] =
U_idx_7 ; t0 [ 348ULL ] = t55 ; t0 [ 349ULL ] = t56 ; t0 [ 350ULL ] = U_idx_8
; t0 [ 351ULL ] = U_idx_8 ; t0 [ 352ULL ] = - t56 ; t0 [ 353ULL ] = t56 ; t0
[ 354ULL ] = U_idx_8 ; t0 [ 355ULL ] = t56 ; t0 [ 356ULL ] = X [ 26ULL ] ; t0
[ 357ULL ] = t55 ; t0 [ 358ULL ] = t57 ; t0 [ 359ULL ] = t57 * t57 *
1.0000000000000002E-12 * 1000.0 ; t0 [ 360ULL ] = t55 ; t0 [ 361ULL ] = X [
24ULL ] ; t0 [ 362ULL ] = t56 ; t0 [ 363ULL ] = X [ 111ULL ] ; t0 [ 364ULL ]
= X [ 111ULL ] * X [ 111ULL ] * 1.0000000000000002E-12 * 1000.0 ; t0 [ 365ULL
] = t56 ; t0 [ 366ULL ] = X [ 25ULL ] ; t0 [ 367ULL ] = t55 ; t0 [ 368ULL ] =
t56 ; t0 [ 369ULL ] = X [ 112ULL ] ; t0 [ 370ULL ] = 0.0 * X [ 112ULL ] ; t0
[ 371ULL ] = U_idx_10 ; t0 [ 372ULL ] = X [ 113ULL ] ; t0 [ 373ULL ] = 0.0 *
X [ 113ULL ] ; t0 [ 374ULL ] = U_idx_13 ; t0 [ 375ULL ] =
PreChargeCircuit_PositiveContactorChgr_i ; t0 [ 376ULL ] = X [ 26ULL ] ; t0 [
377ULL ] = t55 ; t0 [ 378ULL ] = PreChargeCircuit_PositiveContactorChgr_v ;
t0 [ 379ULL ] = PreChargeCircuit_PositiveContactorChgr_i *
PreChargeCircuit_PositiveContactorChgr_v ; t0 [ 380ULL ] = U_idx_14 ; t0 [
381ULL ] = PreChargeCircuit_PositiveContactorInvtr_i ; t0 [ 382ULL ] = X [
26ULL ] ; t0 [ 383ULL ] = t56 ; t0 [ 384ULL ] =
PreChargeCircuit_PositiveContactorInvtr_v ; t0 [ 385ULL ] =
PreChargeCircuit_PositiveContactorInvtr_i *
PreChargeCircuit_PositiveContactorInvtr_v ; t0 [ 386ULL ] = U_idx_11 ; t0 [
387ULL ] = t55 ; t0 [ 388ULL ] =
PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [ 389ULL ] =
PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; t0 [ 390ULL ] = t55 ; t0 [
391ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [ 392ULL ]
= PreChargeCircuit_PreChrgResistorChgr_Resistor_i * 20.0 ; t0 [ 393ULL ] =
PreChargeCircuit_PreChrgResistorChgr_Resistor_i *
PreChargeCircuit_PreChrgResistorChgr_Resistor_i * 20.0 ; t0 [ 394ULL ] = t56
; t0 [ 395ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0 [
396ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; t0 [ 397ULL ] =
t56 ; t0 [ 398ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0
[ 399ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_i * 20.0 ; t0 [
400ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_i *
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i * 20.0 ; t0 [ 401ULL ] = -
PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; t0 [ 402ULL ] = X [ 26ULL ]
; t0 [ 403ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [
404ULL ] = X [ 114ULL ] ; t0 [ 405ULL ] = - (
PreChargeCircuit_PreChrgResistorChgr_Resistor_i * X [ 114ULL ] ) ; t0 [
406ULL ] = U_idx_9 ; t0 [ 407ULL ] = -
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; t0 [ 408ULL ] = X [ 26ULL
] ; t0 [ 409ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0 [
410ULL ] = X [ 115ULL ] ; t0 [ 411ULL ] = - (
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i * X [ 115ULL ] ) ; t0 [
412ULL ] = U_idx_12 ; t0 [ 413ULL ] = U_idx_9 ; t0 [ 414ULL ] = U_idx_10 ; t0
[ 415ULL ] = U_idx_11 ; t0 [ 416ULL ] = U_idx_12 ; t0 [ 417ULL ] = U_idx_13 ;
t0 [ 418ULL ] = U_idx_14 ; t0 [ 419ULL ] = t55 ; t0 [ 420ULL ] = t55 ; t0 [
421ULL ] = t56 ; t0 [ 422ULL ] = t56 ; t0 [ 423ULL ] = t56 ; t0 [ 424ULL ] =
t55 ; for ( b = 0 ; b < 425 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void )
LC ; ( void ) t63 ; return 0 ; }
