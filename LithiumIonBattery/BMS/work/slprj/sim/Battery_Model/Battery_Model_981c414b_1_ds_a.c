#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_a.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_a ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t117 , NeDsMethodOutput * t118 ) { PmRealVector out ;
real_T t0 [ 200 ] ; real_T t25 [ 13 ] ; real_T t8 [ 13 ] ; real_T t9 [ 13 ] ;
real_T t15 [ 11 ] ; real_T t16 [ 11 ] ; real_T t10 [ 6 ] ; real_T t11 [ 6 ] ;
real_T t12 [ 6 ] ; size_t t57 ; int32_T b ; ( void ) t117 ; ( void ) LC ; out
= t118 -> mA ; t8 [ 0ULL ] = 0.05 ; t8 [ 1ULL ] = 0.05 ; t8 [ 2ULL ] = 0.05 ;
t8 [ 3ULL ] = 0.05 ; t8 [ 4ULL ] = 0.05 ; t8 [ 5ULL ] = 0.05 ; t8 [ 6ULL ] =
0.05 ; t8 [ 7ULL ] = 0.05 ; t8 [ 8ULL ] = 0.1 ; t8 [ 9ULL ] = 0.1 ; t8 [
10ULL ] = 0.05 ; t8 [ 11ULL ] = 1.0 ; t8 [ 12ULL ] = - 1.0 ; t9 [ 0ULL ] = -
0.05 ; t9 [ 1ULL ] = - 0.05 ; t9 [ 2ULL ] = - 0.05 ; t9 [ 3ULL ] = - 0.05 ;
t9 [ 4ULL ] = - 0.05 ; t9 [ 5ULL ] = - 0.05 ; t9 [ 6ULL ] = - 0.1 ; t9 [ 7ULL
] = - 0.1 ; t9 [ 8ULL ] = - 0.05 ; t9 [ 9ULL ] = - 0.05 ; t9 [ 10ULL ] = -
0.05 ; t9 [ 11ULL ] = 1.0 ; t9 [ 12ULL ] = - 1.0 ; t10 [ 0ULL ] = - 0.05 ;
t10 [ 1ULL ] = - 0.05 ; t10 [ 2ULL ] = 0.05 ; t10 [ 3ULL ] = 0.05 ; t10 [
4ULL ] = 1.0 ; t10 [ 5ULL ] = - 1.0 ; t11 [ 0ULL ] = - 0.05 ; t11 [ 1ULL ] =
- 0.05 ; t11 [ 2ULL ] = 0.05 ; t11 [ 3ULL ] = 0.05 ; t11 [ 4ULL ] = 1.0 ; t11
[ 5ULL ] = - 1.0 ; t12 [ 0ULL ] = - 0.05 ; t12 [ 1ULL ] = - 0.05 ; t12 [ 2ULL
] = 0.05 ; t12 [ 3ULL ] = 0.05 ; t12 [ 4ULL ] = 1.0 ; t12 [ 5ULL ] = - 1.0 ;
t15 [ 0ULL ] = - 0.05 ; t15 [ 1ULL ] = - 0.05 ; t15 [ 2ULL ] = - 0.05 ; t15 [
3ULL ] = - 0.05 ; t15 [ 4ULL ] = - 0.05 ; t15 [ 5ULL ] = - 0.05 ; t15 [ 6ULL
] = - 0.05 ; t15 [ 7ULL ] = - 0.05 ; t15 [ 8ULL ] = - 0.05 ; t15 [ 9ULL ] = -
0.05 ; t15 [ 10ULL ] = - 0.05 ; t16 [ 0ULL ] = - 0.05 ; t16 [ 1ULL ] = - 0.05
; t16 [ 2ULL ] = - 0.05 ; t16 [ 3ULL ] = - 0.05 ; t16 [ 4ULL ] = - 0.05 ; t16
[ 5ULL ] = - 0.05 ; t16 [ 6ULL ] = - 0.05 ; t16 [ 7ULL ] = - 0.05 ; t16 [
8ULL ] = - 0.05 ; t16 [ 9ULL ] = - 0.05 ; t16 [ 10ULL ] = - 0.05 ; t25 [ 0ULL
] = 1.0 ; t25 [ 1ULL ] = 1.0 ; t25 [ 2ULL ] = 1.0 ; t25 [ 3ULL ] = 1.0 ; t25
[ 4ULL ] = 1.0 ; t25 [ 5ULL ] = 1.0 ; t25 [ 6ULL ] = 1.0 ; t25 [ 7ULL ] = 1.0
; t25 [ 8ULL ] = 1.0 ; t25 [ 9ULL ] = 1.0 ; t25 [ 10ULL ] = 1.0 ; t25 [ 11ULL
] = 1.0 ; t25 [ 12ULL ] = 1.0 ; t0 [ 0ULL ] = - 0.00050950000000000008 ; t0 [
1ULL ] = 0.00050950000000000008 ; t0 [ 2ULL ] = 0.00050950000000000008 ; t0 [
3ULL ] = - 0.0010190000000000002 ; t0 [ 4ULL ] = 0.00050950000000000008 ; t0
[ 5ULL ] = - 1.0 ; t0 [ 6ULL ] = 0.00050950000000000008 ; t0 [ 7ULL ] = -
0.0010190000000000002 ; t0 [ 8ULL ] = 0.00050950000000000008 ; t0 [ 9ULL ] =
- 1.0 ; t0 [ 10ULL ] = 0.00050950000000000008 ; t0 [ 11ULL ] = -
0.0010190000000000002 ; t0 [ 12ULL ] = 0.00050950000000000008 ; t0 [ 13ULL ]
= - 1.0 ; t0 [ 14ULL ] = 0.00050950000000000008 ; t0 [ 15ULL ] = -
0.0010190000000000002 ; t0 [ 16ULL ] = 0.00050950000000000008 ; t0 [ 17ULL ]
= - 1.0 ; t0 [ 18ULL ] = 0.00050950000000000008 ; t0 [ 19ULL ] = -
0.0010190000000000002 ; t0 [ 20ULL ] = - 1.0 ; t0 [ 21ULL ] = - 1.0 ; t0 [
22ULL ] = - 0.0 ; t0 [ 23ULL ] = - 0.0 ; t0 [ 24ULL ] = - 0.05 ; t0 [ 25ULL ]
= - 0.05 ; t0 [ 26ULL ] = 1.0 ; for ( t57 = 0ULL ; t57 < 13ULL ; t57 ++ ) {
t0 [ t57 + 27ULL ] = t8 [ t57 ] ; } for ( t57 = 0ULL ; t57 < 13ULL ; t57 ++ )
{ t0 [ t57 + 40ULL ] = t9 [ t57 ] ; } for ( t57 = 0ULL ; t57 < 6ULL ; t57 ++
) { t0 [ t57 + 53ULL ] = t10 [ t57 ] ; } for ( t57 = 0ULL ; t57 < 6ULL ; t57
++ ) { t0 [ t57 + 59ULL ] = t11 [ t57 ] ; } for ( t57 = 0ULL ; t57 < 6ULL ;
t57 ++ ) { t0 [ t57 + 65ULL ] = t12 [ t57 ] ; } t0 [ 71ULL ] = 0.05 ; t0 [
72ULL ] = 0.05 ; t0 [ 73ULL ] = 0.05 ; t0 [ 74ULL ] = 0.05 ; for ( t57 = 0ULL
; t57 < 11ULL ; t57 ++ ) { t0 [ t57 + 75ULL ] = t15 [ t57 ] ; } for ( t57 =
0ULL ; t57 < 11ULL ; t57 ++ ) { t0 [ t57 + 86ULL ] = t16 [ t57 ] ; } t0 [
97ULL ] = 0.05 ; t0 [ 98ULL ] = 0.05 ; t0 [ 99ULL ] = 0.05 ; t0 [ 100ULL ] =
0.05 ; t0 [ 101ULL ] = 0.05 ; t0 [ 102ULL ] = 0.05 ; t0 [ 103ULL ] = 0.05 ;
t0 [ 104ULL ] = 0.05 ; t0 [ 105ULL ] = 0.05 ; t0 [ 106ULL ] = 0.05 ; t0 [
107ULL ] = 0.05 ; t0 [ 108ULL ] = 0.05 ; t0 [ 109ULL ] = 0.05 ; t0 [ 110ULL ]
= 0.05 ; t0 [ 111ULL ] = 0.05 ; t0 [ 112ULL ] = 0.05 ; for ( t57 = 0ULL ; t57
< 13ULL ; t57 ++ ) { t0 [ t57 + 113ULL ] = t25 [ t57 ] ; } t0 [ 126ULL ] =
1.0 ; t0 [ 127ULL ] = 1.0 ; t0 [ 128ULL ] = 1.0 ; t0 [ 129ULL ] = 1.0 ; t0 [
130ULL ] = 1.0 ; t0 [ 131ULL ] = 1.0 ; t0 [ 132ULL ] = 1.0 ; t0 [ 133ULL ] =
1.0 ; t0 [ 134ULL ] = 1.0 ; t0 [ 135ULL ] = 1.0 ; t0 [ 136ULL ] = 1.0 ; t0 [
137ULL ] = 0.0001835088797324934 ; t0 [ 138ULL ] = 1.0 ; t0 [ 139ULL ] = 1.0
; t0 [ 140ULL ] = 1.0 ; t0 [ 141ULL ] = 1.0 ; t0 [ 142ULL ] = 1.0 ; t0 [
143ULL ] = 1.0 ; t0 [ 144ULL ] = 1.0 ; t0 [ 145ULL ] = 1.0 ; t0 [ 146ULL ] =
1.0 ; t0 [ 147ULL ] = 1.0 ; t0 [ 148ULL ] = 1.0 ; t0 [ 149ULL ] =
0.0001835088797324934 ; t0 [ 150ULL ] = 1.0 ; t0 [ 151ULL ] = 1.0 ; t0 [
152ULL ] = 1.0 ; t0 [ 153ULL ] = 1.0 ; t0 [ 154ULL ] = 1.0 ; t0 [ 155ULL ] =
1.0 ; t0 [ 156ULL ] = 1.0 ; t0 [ 157ULL ] = 1.0 ; t0 [ 158ULL ] = 1.0 ; t0 [
159ULL ] = 1.0 ; t0 [ 160ULL ] = 1.0 ; t0 [ 161ULL ] = 0.0001835088797324934
; t0 [ 162ULL ] = 1.0 ; t0 [ 163ULL ] = 1.0 ; t0 [ 164ULL ] = 1.0 ; t0 [
165ULL ] = 1.0 ; t0 [ 166ULL ] = 1.0 ; t0 [ 167ULL ] = 1.0 ; t0 [ 168ULL ] =
1.0 ; t0 [ 169ULL ] = 1.0 ; t0 [ 170ULL ] = 1.0 ; t0 [ 171ULL ] = 1.0 ; t0 [
172ULL ] = 1.0 ; t0 [ 173ULL ] = 0.0001835088797324934 ; t0 [ 174ULL ] = 1.0
; t0 [ 175ULL ] = 1.0 ; t0 [ 176ULL ] = 1.0 ; t0 [ 177ULL ] = 1.0 ; t0 [
178ULL ] = 1.0 ; t0 [ 179ULL ] = 1.0 ; t0 [ 180ULL ] = 1.0 ; t0 [ 181ULL ] =
1.0 ; t0 [ 182ULL ] = 1.0 ; t0 [ 183ULL ] = 1.0 ; t0 [ 184ULL ] = 1.0 ; t0 [
185ULL ] = 0.0001835088797324934 ; t0 [ 186ULL ] = 1.0 ; t0 [ 187ULL ] = 1.0
; t0 [ 188ULL ] = 1.0 ; t0 [ 189ULL ] = 1.0 ; t0 [ 190ULL ] = 1.0 ; t0 [
191ULL ] = 1.0 ; t0 [ 192ULL ] = 1.0 ; t0 [ 193ULL ] = 1.0 ; t0 [ 194ULL ] =
1.0 ; t0 [ 195ULL ] = 1.0 ; t0 [ 196ULL ] = 1.0 ; t0 [ 197ULL ] =
0.0001835088797324934 ; t0 [ 198ULL ] = 1.0 ; t0 [ 199ULL ] = - 1.0 ; for ( b
= 0 ; b < 200 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void )
t118 ; return 0 ; }
