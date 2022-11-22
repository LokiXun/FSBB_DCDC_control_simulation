#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_obs_all.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_obs_all ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t20 , NeDsMethodOutput * t21 ) { PmRealVector
out ; real_T t0 [ 505 ] ; real_T X [ 116 ] ; real_T
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
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Controlled_T1 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H0 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H1 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 ; real_T
PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; real_T
PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; real_T
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; real_T
PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_13 ; real_T U_idx_14 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4
; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T t1 ; real_T t12 ; real_T t13 ; real_T t14 ; real_T t15 ;
real_T t2 ; real_T t3 ; real_T t4 ; real_T t6 ; int32_T b ; ( void ) LC ;
U_idx_0 = t20 -> mU . mX [ 0 ] ; U_idx_1 = t20 -> mU . mX [ 1 ] ; U_idx_2 =
t20 -> mU . mX [ 2 ] ; U_idx_3 = t20 -> mU . mX [ 3 ] ; U_idx_4 = t20 -> mU .
mX [ 4 ] ; U_idx_5 = t20 -> mU . mX [ 5 ] ; U_idx_6 = t20 -> mU . mX [ 6 ] ;
U_idx_7 = t20 -> mU . mX [ 7 ] ; U_idx_8 = t20 -> mU . mX [ 8 ] ; U_idx_9 =
t20 -> mU . mX [ 9 ] ; U_idx_10 = t20 -> mU . mX [ 10 ] ; U_idx_11 = t20 ->
mU . mX [ 11 ] ; U_idx_12 = t20 -> mU . mX [ 12 ] ; U_idx_13 = t20 -> mU . mX
[ 13 ] ; U_idx_14 = t20 -> mU . mX [ 14 ] ; for ( b = 0 ; b < 116 ; b ++ ) {
X [ b ] = t20 -> mX . mX [ b ] ; } out = t21 -> mOBS_ALL ;
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
- X [ 27ULL ] ; t1 = X [ 27ULL ] - X [ 28ULL ] ; t2 = X [ 28ULL ] - X [ 29ULL
] ; t3 = X [ 29ULL ] - X [ 30ULL ] ; t4 = X [ 30ULL ] - X [ 31ULL ] ; t6 = X
[ 0ULL ] * - 0.00050950000000000008 + X [ 1ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Controlled_T1 = X [ 17ULL ]
* 0.00050950000000000008 + U_idx_6 * - 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H0 = X [ 13ULL ]
* - 0.00050950000000000008 + X [ 17ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H1 = X [ 9ULL ]
* - 0.00050950000000000008 + X [ 13ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 = X [ 5ULL ]
* - 0.00050950000000000008 + X [ 9ULL ] * 0.00050950000000000008 ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 = X [ 1ULL ]
* - 0.00050950000000000008 + X [ 5ULL ] * 0.00050950000000000008 ; t12 = ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [
35ULL ] * - 0.05 ) + X [ 44ULL ] ; t13 = ( ( ( ( ( ( ( X [ 27ULL ] * -
5.0000000000000008E-11 + X [ 28ULL ] * 5.0000000000000008E-11 ) + X [ 34ULL ]
* 5.0000000000000008E-11 ) + X [ 35ULL ] * 5.0000000000000008E-11 ) + X [
44ULL ] * - 1.0E-9 ) + X [ 111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) +
U_idx_8 * 1.0E-9 ) + X [ 24ULL ] ; t14 = X [ 111ULL ] * 1.0E-9 + X [ 25ULL ]
; t15 = ( ( ( ( ( ( X [ 27ULL ] * - 0.05 + X [ 28ULL ] * 0.05 ) + X [ 34ULL ]
* 0.05 ) + X [ 35ULL ] * 0.05 ) - X [ 44ULL ] ) - X [ 111ULL ] ) + U_idx_7 )
+ U_idx_8 ; PreChargeCircuit_PreChrgResistorChgr_Resistor_i = ( ( ( ( ( ( ( (
( X [ 24ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 27ULL ] *
2.5000000000000007E-12 ) + X [ 28ULL ] * - 2.5000000000000007E-12 ) + X [
34ULL ] * - 2.5000000000000007E-12 ) + X [ 35ULL ] * - 2.5000000000000007E-12
) + X [ 44ULL ] * 5.0000000000000008E-11 ) + X [ 111ULL ] *
5.0000000000000008E-11 ) + X [ 114ULL ] * 0.05 ) + U_idx_7 * -
5.0000000000000008E-11 ) + U_idx_8 * - 5.0000000000000008E-11 ;
PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v = X [ 26ULL ] + X [ 114ULL
] ; PreChargeCircuit_PreChrgResistorInvtr_Resistor_i = ( ( X [ 25ULL ] * -
0.05 + X [ 26ULL ] * 0.05 ) + X [ 111ULL ] * - 5.0000000000000008E-11 ) + X [
115ULL ] * 0.05 ; PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v = X [
26ULL ] + X [ 115ULL ] ; t0 [ 0ULL ] = X [ 26ULL ] ; t0 [ 1ULL ] = 0.0 ; t0 [
2ULL ] = X [ 26ULL ] ; t0 [ 3ULL ] = 0.0 ; t0 [ 4ULL ] = X [ 26ULL ] ; t0 [
5ULL ] = X [ 27ULL ] ; t0 [ 6ULL ] = X [ 28ULL ] ; t0 [ 7ULL ] = X [ 29ULL ]
; t0 [ 8ULL ] = X [ 30ULL ] ; t0 [ 9ULL ] = X [ 31ULL ] ; t0 [ 10ULL ] = 0.0
; t0 [ 11ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i
; t0 [ 12ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v ; t0 [ 13ULL ]
= Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v ; t0 [ 14ULL
] = X [ 32ULL ] ; t0 [ 15ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; t0 [ 16ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v ; t0 [ 17ULL ]
= Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v ; t0 [ 18ULL
] = X [ 34ULL ] ; t0 [ 19ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; t0 [ 20ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v ; t0 [ 21ULL ]
= Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v ; t0 [ 22ULL
] = X [ 36ULL ] ; t0 [ 23ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; t0 [ 24ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v ; t0 [ 25ULL ]
= Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v ; t0 [ 26ULL
] = X [ 38ULL ] ; t0 [ 27ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; t0 [ 28ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v ; t0 [ 29ULL ]
= Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v ; t0 [ 30ULL
] = X [ 40ULL ] ; t0 [ 31ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; t0 [ 32ULL ] =
X [ 43ULL ] ; t0 [ 33ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v ; t0 [ 34ULL ]
= X [ 42ULL ] ; t0 [ 35ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ; t0 [ 36ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_p_v ; t0 [ 37ULL ]
= X [ 26ULL ] ; t0 [ 38ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i * 20.0 ; t0 [
39ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; t0 [
40ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_p_v ; t0
[ 41ULL ] = X [ 27ULL ] ; t0 [ 42ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i * 20.0 ; t0 [
43ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; t0 [
44ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_p_v ; t0
[ 45ULL ] = X [ 28ULL ] ; t0 [ 46ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i * 20.0 ; t0 [
47ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; t0 [
48ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_p_v ; t0
[ 49ULL ] = X [ 29ULL ] ; t0 [ 50ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i * 20.0 ; t0 [
51ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; t0 [
52ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_p_v ; t0
[ 53ULL ] = X [ 30ULL ] ; t0 [ 54ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i * 20.0 ; t0 [
55ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; t0 [
56ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_p_v ; t0
[ 57ULL ] = X [ 31ULL ] ; t0 [ 58ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i * 20.0 ; t0 [
59ULL ] = U_idx_0 ; t0 [ 60ULL ] = U_idx_1 ; t0 [ 61ULL ] = U_idx_2 ; t0 [
62ULL ] = U_idx_3 ; t0 [ 63ULL ] = U_idx_4 ; t0 [ 64ULL ] = U_idx_5 ; t0 [
65ULL ] = Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_i ; t0 [
66ULL ] = X [ 27ULL ] ; t0 [ 67ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D1_n_v ; t0 [ 68ULL ]
= X [ 33ULL ] ; t0 [ 69ULL ] = U_idx_2 ; t0 [ 70ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_i ; t0 [ 71ULL ] =
X [ 28ULL ] ; t0 [ 72ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D2_n_v ; t0 [ 73ULL ]
= X [ 35ULL ] ; t0 [ 74ULL ] = U_idx_0 ; t0 [ 75ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_i ; t0 [ 76ULL ] =
X [ 29ULL ] ; t0 [ 77ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D3_n_v ; t0 [ 78ULL ]
= X [ 37ULL ] ; t0 [ 79ULL ] = U_idx_3 ; t0 [ 80ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_i ; t0 [ 81ULL ] =
X [ 30ULL ] ; t0 [ 82ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D4_n_v ; t0 [ 83ULL ]
= X [ 39ULL ] ; t0 [ 84ULL ] = U_idx_1 ; t0 [ 85ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_i ; t0 [ 86ULL ] =
X [ 31ULL ] ; t0 [ 87ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D5_n_v ; t0 [ 88ULL ]
= X [ 41ULL ] ; t0 [ 89ULL ] = U_idx_4 ; t0 [ 90ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_D6_i ; t0 [ 91ULL ] =
0.0 ; t0 [ 92ULL ] = X [ 43ULL ] ; t0 [ 93ULL ] = X [ 43ULL ] ; t0 [ 94ULL ]
= U_idx_5 ; t0 [ 95ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 ; t0 [ 96ULL
] = X [ 27ULL ] ; t0 [ 97ULL ] = X [ 26ULL ] ; t0 [ 98ULL ] =
Battery_Pack_Battery_Pack_1Module_CellMonitoringUnit_01_Voltag0 ; t0 [ 99ULL
] = t1 ; t0 [ 100ULL ] = X [ 28ULL ] ; t0 [ 101ULL ] = X [ 27ULL ] ; t0 [
102ULL ] = t1 ; t0 [ 103ULL ] = t2 ; t0 [ 104ULL ] = X [ 29ULL ] ; t0 [
105ULL ] = X [ 28ULL ] ; t0 [ 106ULL ] = t2 ; t0 [ 107ULL ] = t3 ; t0 [
108ULL ] = X [ 30ULL ] ; t0 [ 109ULL ] = X [ 29ULL ] ; t0 [ 110ULL ] = t3 ;
t0 [ 111ULL ] = t4 ; t0 [ 112ULL ] = X [ 31ULL ] ; t0 [ 113ULL ] = X [ 30ULL
] ; t0 [ 114ULL ] = t4 ; t0 [ 115ULL ] = X [ 31ULL ] ; t0 [ 116ULL ] = 0.0 ;
t0 [ 117ULL ] = X [ 31ULL ] ; t0 [ 118ULL ] = X [ 31ULL ] ; t0 [ 119ULL ] = X
[ 0ULL ] ; t0 [ 120ULL ] = t6 * 1000.0 ; t0 [ 121ULL ] = X [ 0ULL ] ; t0 [
122ULL ] = X [ 2ULL ] * 0.00027777777777777778 ; t0 [ 123ULL ] = ( ( ( ( ( (
X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 31ULL ] * - 0.05 ) + X [
34ULL ] * - 0.05 ) + X [ 42ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [
43ULL ] * 0.05 ) + X [ 44ULL ] ; t0 [ 124ULL ] = 0.0 ; t0 [ 125ULL ] = X [
3ULL ] ; t0 [ 126ULL ] = X [ 45ULL ] ; t0 [ 127ULL ] = 1.0 ; t0 [ 128ULL ] =
X [ 31ULL ] ; t0 [ 129ULL ] = X [ 46ULL ] * 1000.0 ; t0 [ 130ULL ] = X [
46ULL ] * 1000.0 ; t0 [ 131ULL ] = X [ 47ULL ] ; t0 [ 132ULL ] = X [ 47ULL ]
; t0 [ 133ULL ] = X [ 31ULL ] ; t0 [ 134ULL ] = X [ 4ULL ] ; t0 [ 135ULL ] =
0.0 ; t0 [ 136ULL ] = 0.0 ; t0 [ 137ULL ] = 0.0 ; t0 [ 138ULL ] = 0.0 ; t0 [
139ULL ] = X [ 48ULL ] ; t0 [ 140ULL ] = 0.0 ; t0 [ 141ULL ] = 0.0 ; t0 [
142ULL ] = 0.0 ; t0 [ 143ULL ] = 0.0 ; t0 [ 144ULL ] = 0.0 ; t0 [ 145ULL ] =
X [ 49ULL ] ; t0 [ 146ULL ] = X [ 50ULL ] ; t0 [ 147ULL ] = X [ 51ULL ] ; t0
[ 148ULL ] = X [ 52ULL ] ; t0 [ 149ULL ] = X [ 53ULL ] ; t0 [ 150ULL ] = X [
54ULL ] * 0.00027777777777777778 ; t0 [ 151ULL ] = X [ 55ULL ] ; t0 [ 152ULL
] = X [ 47ULL ] ; t0 [ 153ULL ] = X [ 1ULL ] ; t0 [ 154ULL ] = ( ( X [ 0ULL ]
* 0.00050950000000000008 + X [ 1ULL ] * - 0.0010190000000000002 ) + X [ 5ULL
] * 0.00050950000000000008 ) * 1000.0 ; t0 [ 155ULL ] = X [ 1ULL ] ; t0 [
156ULL ] = X [ 6ULL ] * 0.00027777777777777778 ; t0 [ 157ULL ] = ( ( ( ( ( (
( X [ 27ULL ] * 0.05 + X [ 28ULL ] * - 0.05 ) + X [ 30ULL ] * - 0.05 ) + X [
31ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 40ULL ] * 0.05 ) + X [ 35ULL
] * - 0.05 ) + X [ 41ULL ] * 0.05 ) + X [ 44ULL ] ; t0 [ 158ULL ] = X [ 31ULL
] ; t0 [ 159ULL ] = X [ 7ULL ] ; t0 [ 160ULL ] = X [ 56ULL ] ; t0 [ 161ULL ]
= 1.0 ; t0 [ 162ULL ] = X [ 30ULL ] ; t0 [ 163ULL ] = X [ 57ULL ] * 1000.0 ;
t0 [ 164ULL ] = X [ 57ULL ] * 1000.0 ; t0 [ 165ULL ] = X [ 58ULL ] ; t0 [
166ULL ] = X [ 58ULL ] ; t0 [ 167ULL ] = - X [ 31ULL ] + X [ 30ULL ] ; t0 [
168ULL ] = X [ 8ULL ] ; t0 [ 169ULL ] = 0.0 ; t0 [ 170ULL ] = 0.0 ; t0 [
171ULL ] = 0.0 ; t0 [ 172ULL ] = 0.0 ; t0 [ 173ULL ] = X [ 59ULL ] ; t0 [
174ULL ] = 0.0 ; t0 [ 175ULL ] = 0.0 ; t0 [ 176ULL ] = 0.0 ; t0 [ 177ULL ] =
0.0 ; t0 [ 178ULL ] = 0.0 ; t0 [ 179ULL ] = X [ 60ULL ] ; t0 [ 180ULL ] = X [
61ULL ] ; t0 [ 181ULL ] = X [ 62ULL ] ; t0 [ 182ULL ] = X [ 63ULL ] ; t0 [
183ULL ] = X [ 64ULL ] ; t0 [ 184ULL ] = X [ 65ULL ] * 0.00027777777777777778
; t0 [ 185ULL ] = X [ 66ULL ] ; t0 [ 186ULL ] = X [ 58ULL ] ; t0 [ 187ULL ] =
X [ 5ULL ] ; t0 [ 188ULL ] = ( ( X [ 1ULL ] * 0.00050950000000000008 + X [
5ULL ] * - 0.0010190000000000002 ) + X [ 9ULL ] * 0.00050950000000000008 ) *
1000.0 ; t0 [ 189ULL ] = X [ 5ULL ] ; t0 [ 190ULL ] = X [ 10ULL ] *
0.00027777777777777778 ; t0 [ 191ULL ] = ( ( ( ( ( ( ( X [ 27ULL ] * 0.05 + X
[ 28ULL ] * - 0.05 ) + X [ 29ULL ] * - 0.05 ) + X [ 30ULL ] * 0.05 ) + X [
34ULL ] * - 0.05 ) + X [ 38ULL ] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [
39ULL ] * 0.05 ) + X [ 44ULL ] ; t0 [ 192ULL ] = X [ 30ULL ] ; t0 [ 193ULL ]
= X [ 11ULL ] ; t0 [ 194ULL ] = X [ 67ULL ] ; t0 [ 195ULL ] = 1.0 ; t0 [
196ULL ] = X [ 29ULL ] ; t0 [ 197ULL ] = X [ 68ULL ] * 1000.0 ; t0 [ 198ULL ]
= X [ 68ULL ] * 1000.0 ; t0 [ 199ULL ] = X [ 69ULL ] ; t0 [ 200ULL ] = X [
69ULL ] ; t0 [ 201ULL ] = - X [ 30ULL ] + X [ 29ULL ] ; t0 [ 202ULL ] = X [
12ULL ] ; t0 [ 203ULL ] = 0.0 ; t0 [ 204ULL ] = 0.0 ; t0 [ 205ULL ] = 0.0 ;
t0 [ 206ULL ] = 0.0 ; t0 [ 207ULL ] = X [ 70ULL ] ; t0 [ 208ULL ] = 0.0 ; t0
[ 209ULL ] = 0.0 ; t0 [ 210ULL ] = 0.0 ; t0 [ 211ULL ] = 0.0 ; t0 [ 212ULL ]
= 0.0 ; t0 [ 213ULL ] = X [ 71ULL ] ; t0 [ 214ULL ] = X [ 72ULL ] ; t0 [
215ULL ] = X [ 73ULL ] ; t0 [ 216ULL ] = X [ 74ULL ] ; t0 [ 217ULL ] = X [
75ULL ] ; t0 [ 218ULL ] = X [ 76ULL ] * 0.00027777777777777778 ; t0 [ 219ULL
] = X [ 77ULL ] ; t0 [ 220ULL ] = X [ 69ULL ] ; t0 [ 221ULL ] = X [ 9ULL ] ;
t0 [ 222ULL ] = ( ( X [ 5ULL ] * 0.00050950000000000008 + X [ 9ULL ] * -
0.0010190000000000002 ) + X [ 13ULL ] * 0.00050950000000000008 ) * 1000.0 ;
t0 [ 223ULL ] = X [ 9ULL ] ; t0 [ 224ULL ] = X [ 14ULL ] *
0.00027777777777777778 ; t0 [ 225ULL ] = ( ( ( ( ( ( X [ 27ULL ] * 0.05 + X [
28ULL ] * - 0.1 ) + X [ 29ULL ] * 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 36ULL
] * 0.05 ) + X [ 35ULL ] * - 0.05 ) + X [ 37ULL ] * 0.05 ) + X [ 44ULL ] ; t0
[ 226ULL ] = X [ 29ULL ] ; t0 [ 227ULL ] = X [ 15ULL ] ; t0 [ 228ULL ] = X [
78ULL ] ; t0 [ 229ULL ] = 1.0 ; t0 [ 230ULL ] = X [ 28ULL ] ; t0 [ 231ULL ] =
X [ 79ULL ] * 1000.0 ; t0 [ 232ULL ] = X [ 79ULL ] * 1000.0 ; t0 [ 233ULL ] =
X [ 80ULL ] ; t0 [ 234ULL ] = X [ 80ULL ] ; t0 [ 235ULL ] = - X [ 29ULL ] + X
[ 28ULL ] ; t0 [ 236ULL ] = X [ 16ULL ] ; t0 [ 237ULL ] = 0.0 ; t0 [ 238ULL ]
= 0.0 ; t0 [ 239ULL ] = 0.0 ; t0 [ 240ULL ] = 0.0 ; t0 [ 241ULL ] = X [ 81ULL
] ; t0 [ 242ULL ] = 0.0 ; t0 [ 243ULL ] = 0.0 ; t0 [ 244ULL ] = 0.0 ; t0 [
245ULL ] = 0.0 ; t0 [ 246ULL ] = 0.0 ; t0 [ 247ULL ] = X [ 82ULL ] ; t0 [
248ULL ] = X [ 83ULL ] ; t0 [ 249ULL ] = X [ 84ULL ] ; t0 [ 250ULL ] = X [
85ULL ] ; t0 [ 251ULL ] = X [ 86ULL ] ; t0 [ 252ULL ] = X [ 87ULL ] *
0.00027777777777777778 ; t0 [ 253ULL ] = X [ 88ULL ] ; t0 [ 254ULL ] = X [
80ULL ] ; t0 [ 255ULL ] = X [ 13ULL ] ; t0 [ 256ULL ] = ( ( X [ 9ULL ] *
0.00050950000000000008 + X [ 13ULL ] * - 0.0010190000000000002 ) + X [ 17ULL
] * 0.00050950000000000008 ) * 1000.0 ; t0 [ 257ULL ] = X [ 13ULL ] ; t0 [
258ULL ] = X [ 18ULL ] * 0.00027777777777777778 ; t0 [ 259ULL ] = X [ 44ULL ]
; t0 [ 260ULL ] = X [ 28ULL ] ; t0 [ 261ULL ] = X [ 19ULL ] ; t0 [ 262ULL ] =
X [ 89ULL ] ; t0 [ 263ULL ] = 1.0 ; t0 [ 264ULL ] = X [ 27ULL ] ; t0 [ 265ULL
] = X [ 90ULL ] * 1000.0 ; t0 [ 266ULL ] = X [ 90ULL ] * 1000.0 ; t0 [ 267ULL
] = X [ 91ULL ] ; t0 [ 268ULL ] = X [ 91ULL ] ; t0 [ 269ULL ] = - X [ 28ULL ]
+ X [ 27ULL ] ; t0 [ 270ULL ] = X [ 20ULL ] ; t0 [ 271ULL ] = 0.0 ; t0 [
272ULL ] = 0.0 ; t0 [ 273ULL ] = 0.0 ; t0 [ 274ULL ] = 0.0 ; t0 [ 275ULL ] =
X [ 92ULL ] ; t0 [ 276ULL ] = 0.0 ; t0 [ 277ULL ] = 0.0 ; t0 [ 278ULL ] = 0.0
; t0 [ 279ULL ] = 0.0 ; t0 [ 280ULL ] = 0.0 ; t0 [ 281ULL ] = X [ 93ULL ] ;
t0 [ 282ULL ] = X [ 94ULL ] ; t0 [ 283ULL ] = X [ 95ULL ] ; t0 [ 284ULL ] = X
[ 96ULL ] ; t0 [ 285ULL ] = X [ 97ULL ] ; t0 [ 286ULL ] = X [ 98ULL ] *
0.00027777777777777778 ; t0 [ 287ULL ] = X [ 99ULL ] ; t0 [ 288ULL ] = X [
91ULL ] ; t0 [ 289ULL ] = X [ 17ULL ] ; t0 [ 290ULL ] = ( ( X [ 13ULL ] *
0.00050950000000000008 + X [ 17ULL ] * - 0.0010190000000000002 ) + U_idx_6 *
0.00050950000000000008 ) * 1000.0 ; t0 [ 291ULL ] = X [ 17ULL ] ; t0 [ 292ULL
] = X [ 21ULL ] * 0.00027777777777777778 ; t0 [ 293ULL ] = ( ( ( ( ( ( X [
26ULL ] * - 0.05 + X [ 27ULL ] * 0.1 ) + X [ 28ULL ] * - 0.05 ) + X [ 32ULL ]
* 0.05 ) + X [ 34ULL ] * - 0.05 ) + X [ 33ULL ] * 0.05 ) + X [ 35ULL ] * -
0.05 ) + X [ 44ULL ] ; t0 [ 294ULL ] = X [ 27ULL ] ; t0 [ 295ULL ] = X [
22ULL ] ; t0 [ 296ULL ] = X [ 100ULL ] ; t0 [ 297ULL ] = 1.0 ; t0 [ 298ULL ]
= X [ 26ULL ] ; t0 [ 299ULL ] = X [ 101ULL ] * 1000.0 ; t0 [ 300ULL ] = X [
101ULL ] * 1000.0 ; t0 [ 301ULL ] = X [ 102ULL ] ; t0 [ 302ULL ] = X [ 102ULL
] ; t0 [ 303ULL ] = - X [ 27ULL ] + X [ 26ULL ] ; t0 [ 304ULL ] = X [ 23ULL ]
; t0 [ 305ULL ] = 0.0 ; t0 [ 306ULL ] = 0.0 ; t0 [ 307ULL ] = 0.0 ; t0 [
308ULL ] = 0.0 ; t0 [ 309ULL ] = X [ 103ULL ] ; t0 [ 310ULL ] = 0.0 ; t0 [
311ULL ] = 0.0 ; t0 [ 312ULL ] = 0.0 ; t0 [ 313ULL ] = 0.0 ; t0 [ 314ULL ] =
0.0 ; t0 [ 315ULL ] = X [ 104ULL ] ; t0 [ 316ULL ] = X [ 105ULL ] ; t0 [
317ULL ] = X [ 106ULL ] ; t0 [ 318ULL ] = X [ 107ULL ] ; t0 [ 319ULL ] = X [
108ULL ] ; t0 [ 320ULL ] = X [ 109ULL ] * 0.00027777777777777778 ; t0 [
321ULL ] = X [ 110ULL ] ; t0 [ 322ULL ] = X [ 102ULL ] ; t0 [ 323ULL ] = X [
26ULL ] ; t0 [ 324ULL ] = X [ 27ULL ] ; t0 [ 325ULL ] = X [ 28ULL ] ; t0 [
326ULL ] = X [ 29ULL ] ; t0 [ 327ULL ] = X [ 30ULL ] ; t0 [ 328ULL ] = X [
31ULL ] ; t0 [ 329ULL ] = 0.0 ; t0 [ 330ULL ] = 0.0 ; t0 [ 331ULL ] = U_idx_6
; t0 [ 332ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Controlled_T1 * 1000.0 ; t0
[ 333ULL ] = U_idx_6 ; t0 [ 334ULL ] = U_idx_6 ; t0 [ 335ULL ] = U_idx_6 ; t0
[ 336ULL ] = X [ 17ULL ] ; t0 [ 337ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Controlled_T1 * - 1000.0 ;
t0 [ 338ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Controlled_T1 * -
1962.708537782139 ; t0 [ 339ULL ] = 0.0 ; t0 [ 340ULL ] = X [ 17ULL ] ; t0 [
341ULL ] = X [ 13ULL ] ; t0 [ 342ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H0 * 1000.0 ; t0
[ 343ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H0
* 1962.708537782139 ; t0 [ 344ULL ] = 0.0 ; t0 [ 345ULL ] = X [ 13ULL ] ; t0
[ 346ULL ] = X [ 9ULL ] ; t0 [ 347ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H1 * 1000.0 ; t0
[ 348ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H1
* 1962.708537782139 ; t0 [ 349ULL ] = 0.0 ; t0 [ 350ULL ] = X [ 9ULL ] ; t0 [
351ULL ] = X [ 5ULL ] ; t0 [ 352ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2 * 1000.0 ; t0
[ 353ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H2
* 1962.708537782139 ; t0 [ 354ULL ] = 0.0 ; t0 [ 355ULL ] = X [ 5ULL ] ; t0 [
356ULL ] = X [ 1ULL ] ; t0 [ 357ULL ] =
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3 * 1000.0 ; t0
[ 358ULL ] = Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Convective_H3
* 1962.708537782139 ; t0 [ 359ULL ] = 0.0 ; t0 [ 360ULL ] = X [ 1ULL ] ; t0 [
361ULL ] = X [ 0ULL ] ; t0 [ 362ULL ] = t6 * 1000.0 ; t0 [ 363ULL ] = t6 *
1962.708537782139 ; t0 [ 364ULL ] = 0.0 ; t0 [ 365ULL ] = X [ 0ULL ] ; t0 [
366ULL ] = X [ 0ULL ] ; t0 [ 367ULL ] = U_idx_6 ; t0 [ 368ULL ] = X [ 17ULL ]
; t0 [ 369ULL ] = 0.0 ; t0 [ 370ULL ] = X [ 17ULL ] ; t0 [ 371ULL ] = X [
13ULL ] ; t0 [ 372ULL ] = 0.0 ; t0 [ 373ULL ] = X [ 13ULL ] ; t0 [ 374ULL ] =
X [ 13ULL ] ; t0 [ 375ULL ] = X [ 9ULL ] ; t0 [ 376ULL ] = 0.0 ; t0 [ 377ULL
] = X [ 9ULL ] ; t0 [ 378ULL ] = X [ 9ULL ] ; t0 [ 379ULL ] = X [ 5ULL ] ; t0
[ 380ULL ] = 0.0 ; t0 [ 381ULL ] = X [ 5ULL ] ; t0 [ 382ULL ] = X [ 5ULL ] ;
t0 [ 383ULL ] = X [ 1ULL ] ; t0 [ 384ULL ] = 0.0 ; t0 [ 385ULL ] = X [ 1ULL ]
; t0 [ 386ULL ] = X [ 1ULL ] ; t0 [ 387ULL ] = X [ 0ULL ] ; t0 [ 388ULL ] =
0.0 ; t0 [ 389ULL ] = X [ 0ULL ] ; t0 [ 390ULL ] = X [ 0ULL ] ; t0 [ 391ULL ]
= X [ 17ULL ] ; t0 [ 392ULL ] = 0.0 ; t0 [ 393ULL ] = 0.0 ; t0 [ 394ULL ] =
0.0 ; t0 [ 395ULL ] = 0.0 ; t0 [ 396ULL ] = 0.0 ; t0 [ 397ULL ] = 0.0 ; t0 [
398ULL ] = 0.0 ; t0 [ 399ULL ] = t12 ; t0 [ 400ULL ] = t12 ; t0 [ 401ULL ] =
0.0 ; t0 [ 402ULL ] = 0.0 ; t0 [ 403ULL ] = t12 ; t0 [ 404ULL ] = 0.0 ; t0 [
405ULL ] = X [ 26ULL ] ; t0 [ 406ULL ] = 0.0 ; t0 [ 407ULL ] = X [ 26ULL ] ;
t0 [ 408ULL ] = X [ 26ULL ] ; t0 [ 409ULL ] = t13 ; t0 [ 410ULL ] = 0.0 ; t0
[ 411ULL ] = t13 ; t0 [ 412ULL ] = U_idx_7 ; t0 [ 413ULL ] = U_idx_7 ; t0 [
414ULL ] = 0.0 ; t0 [ 415ULL ] = - t13 ; t0 [ 416ULL ] = 0.0 ; t0 [ 417ULL ]
= U_idx_7 ; t0 [ 418ULL ] = t13 ; t0 [ 419ULL ] = 0.0 ; t0 [ 420ULL ] = t14 ;
t0 [ 421ULL ] = U_idx_8 ; t0 [ 422ULL ] = U_idx_8 ; t0 [ 423ULL ] = 0.0 ; t0
[ 424ULL ] = - t14 ; t0 [ 425ULL ] = 0.0 ; t0 [ 426ULL ] = t14 ; t0 [ 427ULL
] = 0.0 ; t0 [ 428ULL ] = U_idx_8 ; t0 [ 429ULL ] = t14 ; t0 [ 430ULL ] = 0.0
; t0 [ 431ULL ] = X [ 26ULL ] ; t0 [ 432ULL ] = 0.0 ; t0 [ 433ULL ] = 0.0 ;
t0 [ 434ULL ] = t13 ; t0 [ 435ULL ] = t15 ; t0 [ 436ULL ] = t15 * t15 *
1.0000000000000002E-12 * 1000.0 ; t0 [ 437ULL ] = t13 ; t0 [ 438ULL ] = X [
24ULL ] ; t0 [ 439ULL ] = 0.0 ; t0 [ 440ULL ] = t14 ; t0 [ 441ULL ] = X [
111ULL ] ; t0 [ 442ULL ] = X [ 111ULL ] * X [ 111ULL ] *
1.0000000000000002E-12 * 1000.0 ; t0 [ 443ULL ] = t14 ; t0 [ 444ULL ] = X [
25ULL ] ; t0 [ 445ULL ] = t13 ; t0 [ 446ULL ] = 0.0 ; t0 [ 447ULL ] = t14 ;
t0 [ 448ULL ] = 0.0 ; t0 [ 449ULL ] = X [ 112ULL ] ; t0 [ 450ULL ] = 0.0 ; t0
[ 451ULL ] = 0.0 ; t0 [ 452ULL ] = 0.0 ; t0 [ 453ULL ] = U_idx_10 ; t0 [
454ULL ] = X [ 113ULL ] ; t0 [ 455ULL ] = 0.0 ; t0 [ 456ULL ] = 0.0 ; t0 [
457ULL ] = 0.0 ; t0 [ 458ULL ] = U_idx_13 ; t0 [ 459ULL ] = ( ( ( ( ( ( ( ( (
X [ 24ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 27ULL ] * 0.0500000000025 )
+ X [ 28ULL ] * - 0.0500000000025 ) + X [ 34ULL ] * - 0.0500000000025 ) + X [
35ULL ] * - 0.0500000000025 ) + X [ 44ULL ] * 1.00000000005 ) + X [ 111ULL ]
* 1.00000000005 ) + X [ 114ULL ] * 0.05 ) + U_idx_7 * - 5.000000413701855E-11
) + U_idx_8 * - 1.00000000005 ; t0 [ 460ULL ] = X [ 26ULL ] ; t0 [ 461ULL ] =
t13 ; t0 [ 462ULL ] = ( ( ( ( ( ( ( ( - X [ 26ULL ] + X [ 27ULL ] * -
5.0000000000000008E-11 ) + X [ 28ULL ] * 5.0000000000000008E-11 ) + X [ 34ULL
] * 5.0000000000000008E-11 ) + X [ 35ULL ] * 5.0000000000000008E-11 ) + X [
44ULL ] * - 1.0E-9 ) + X [ 111ULL ] * - 1.0E-9 ) + U_idx_7 * 1.0E-9 ) +
U_idx_8 * 1.0E-9 ) + X [ 24ULL ] ; t0 [ 463ULL ] = U_idx_14 ; t0 [ 464ULL ] =
( ( ( X [ 25ULL ] * - 0.05 + X [ 26ULL ] * 0.05 ) + X [ 111ULL ] * -
1.00000000005 ) + X [ 115ULL ] * 0.05 ) + U_idx_8 ; t0 [ 465ULL ] = X [ 26ULL
] ; t0 [ 466ULL ] = t14 ; t0 [ 467ULL ] = ( - X [ 26ULL ] + X [ 111ULL ] *
1.0E-9 ) + X [ 25ULL ] ; t0 [ 468ULL ] = U_idx_11 ; t0 [ 469ULL ] = t13 ; t0
[ 470ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [ 471ULL
] = PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; t0 [ 472ULL ] = t13 ;
t0 [ 473ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [
474ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_i * 20.0 ; t0 [
475ULL ] = t14 ; t0 [ 476ULL ] =
PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0 [ 477ULL ] =
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; t0 [ 478ULL ] = t14 ; t0 [
479ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0 [ 480ULL ]
= PreChargeCircuit_PreChrgResistorInvtr_Resistor_i * 20.0 ; t0 [ 481ULL ] = -
PreChargeCircuit_PreChrgResistorChgr_Resistor_i ; t0 [ 482ULL ] = X [ 26ULL ]
; t0 [ 483ULL ] = PreChargeCircuit_PreChrgResistorChgr_Resistor_p_v ; t0 [
484ULL ] = X [ 114ULL ] ; t0 [ 485ULL ] = U_idx_9 ; t0 [ 486ULL ] = -
PreChargeCircuit_PreChrgResistorInvtr_Resistor_i ; t0 [ 487ULL ] = X [ 26ULL
] ; t0 [ 488ULL ] = PreChargeCircuit_PreChrgResistorInvtr_Resistor_p_v ; t0 [
489ULL ] = X [ 115ULL ] ; t0 [ 490ULL ] = U_idx_12 ; t0 [ 491ULL ] = U_idx_9
; t0 [ 492ULL ] = U_idx_10 ; t0 [ 493ULL ] = U_idx_11 ; t0 [ 494ULL ] =
U_idx_12 ; t0 [ 495ULL ] = U_idx_13 ; t0 [ 496ULL ] = U_idx_14 ; t0 [ 497ULL
] = t13 ; t0 [ 498ULL ] = 0.0 ; t0 [ 499ULL ] = t13 ; t0 [ 500ULL ] = t14 ;
t0 [ 501ULL ] = 0.0 ; t0 [ 502ULL ] = t14 ; t0 [ 503ULL ] = t14 ; t0 [ 504ULL
] = t13 ; for ( b = 0 ; b < 505 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } (
void ) LC ; ( void ) t21 ; return 0 ; }
