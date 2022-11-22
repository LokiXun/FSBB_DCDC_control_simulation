#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_mode.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_mode ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t60 , NeDsMethodOutput * t61 ) { PmIntVector out ;
real_T X [ 116 ] ; real_T t1 [ 1 ] ; real_T t10 [ 1 ] ; real_T t11 [ 1 ] ;
real_T t12 [ 1 ] ; real_T t2 [ 1 ] ; real_T t3 [ 1 ] ; real_T t4 [ 1 ] ;
real_T t5 [ 1 ] ; real_T t6 [ 1 ] ; real_T t7 [ 1 ] ; real_T t8 [ 1 ] ;
real_T t9 [ 1 ] ; real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T
U_idx_11 ; real_T U_idx_12 ; real_T U_idx_13 ; real_T U_idx_14 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_9 ;
real_T t58 ; real_T t59 ; size_t t33 ; size_t t34 ; int32_T b ; U_idx_0 = t60
-> mU . mX [ 0 ] ; U_idx_1 = t60 -> mU . mX [ 1 ] ; U_idx_2 = t60 -> mU . mX
[ 2 ] ; U_idx_3 = t60 -> mU . mX [ 3 ] ; U_idx_4 = t60 -> mU . mX [ 4 ] ;
U_idx_5 = t60 -> mU . mX [ 5 ] ; U_idx_9 = t60 -> mU . mX [ 9 ] ; U_idx_10 =
t60 -> mU . mX [ 10 ] ; U_idx_11 = t60 -> mU . mX [ 11 ] ; U_idx_12 = t60 ->
mU . mX [ 12 ] ; U_idx_13 = t60 -> mU . mX [ 13 ] ; U_idx_14 = t60 -> mU . mX
[ 14 ] ; for ( b = 0 ; b < 116 ; b ++ ) { X [ b ] = t60 -> mX . mX [ b ] ; }
out = t61 -> mMODE ; t1 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t1 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t1 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t2 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t2 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t2 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t3 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t3 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t3 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t4 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t4 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t4 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t5 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t5 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t5 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t6 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t6 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t6 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t7 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t7 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t7 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t8 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t8 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t8 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t9 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t9 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t9 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t10 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t10 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t10 [ t34 > 0ULL ? 0ULL : t34 ] =
t59 > t58 ? t58 : t59 ; } t11 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ;
t33 < 30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t11 [ t34 > 0ULL ? 0ULL :
t34 ] ; t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ;
t11 [ t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t12 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t12 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t12 [ t34 > 0ULL ? 0ULL : t34 ] =
t59 > t58 ? t58 : t59 ; } out . mX [ 0 ] = ( int32_T ) ( t1 [ 0ULL ] >= X [
45ULL ] ) ; out . mX [ 1 ] = ( int32_T ) ( X [ 51ULL ] * X [ 54ULL ] <= 1.116
) ; out . mX [ 2 ] = ( int32_T ) ( t2 [ 0ULL ] >= X [ 100ULL ] ) ; out . mX [
3 ] = ( int32_T ) ( X [ 106ULL ] * X [ 109ULL ] <= 1.116 ) ; out . mX [ 4 ] =
( int32_T ) ( X [ 32ULL ] > 0.6 ) ; out . mX [ 5 ] = ( int32_T ) ( X [ 34ULL
] > 0.6 ) ; out . mX [ 6 ] = ( int32_T ) ( X [ 36ULL ] > 0.6 ) ; out . mX [ 7
] = ( int32_T ) ( X [ 38ULL ] > 0.6 ) ; out . mX [ 8 ] = ( int32_T ) ( X [
40ULL ] > 0.6 ) ; out . mX [ 9 ] = ( int32_T ) ( X [ 42ULL ] > 0.6 ) ; out .
mX [ 10 ] = ( int32_T ) ( U_idx_2 > 0.0 ) ; out . mX [ 11 ] = ( int32_T ) (
U_idx_0 > 0.0 ) ; out . mX [ 12 ] = ( int32_T ) ( t3 [ 0ULL ] >= X [ 56ULL ]
) ; out . mX [ 13 ] = ( int32_T ) ( U_idx_3 > 0.0 ) ; out . mX [ 14 ] = (
int32_T ) ( U_idx_1 > 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( U_idx_4 > 0.0 )
; out . mX [ 16 ] = ( int32_T ) ( U_idx_5 > 0.0 ) ; out . mX [ 17 ] = (
int32_T ) ( X [ 49ULL ] * X [ 52ULL ] <= 7.0814589673861568E-8 ) ; out . mX [
18 ] = ( int32_T ) ( t4 [ 0ULL ] >= X [ 50ULL ] * X [ 53ULL ] ) ; out . mX [
19 ] = ( int32_T ) ( X [ 60ULL ] * X [ 63ULL ] <= 7.0814589673861568E-8 ) ;
out . mX [ 20 ] = ( int32_T ) ( t5 [ 0ULL ] >= X [ 61ULL ] * X [ 64ULL ] ) ;
out . mX [ 21 ] = ( int32_T ) ( X [ 71ULL ] * X [ 74ULL ] <=
7.0814589673861568E-8 ) ; out . mX [ 22 ] = ( int32_T ) ( t6 [ 0ULL ] >= X [
72ULL ] * X [ 75ULL ] ) ; out . mX [ 23 ] = ( int32_T ) ( X [ 62ULL ] * X [
65ULL ] <= 1.116 ) ; out . mX [ 24 ] = ( int32_T ) ( X [ 82ULL ] * X [ 85ULL
] <= 7.0814589673861568E-8 ) ; out . mX [ 25 ] = ( int32_T ) ( t7 [ 0ULL ] >=
X [ 83ULL ] * X [ 86ULL ] ) ; out . mX [ 26 ] = ( int32_T ) ( X [ 93ULL ] * X
[ 96ULL ] <= 7.0814589673861568E-8 ) ; out . mX [ 27 ] = ( int32_T ) ( t8 [
0ULL ] >= X [ 94ULL ] * X [ 97ULL ] ) ; out . mX [ 28 ] = ( int32_T ) ( X [
104ULL ] * X [ 107ULL ] <= 7.0814589673861568E-8 ) ; out . mX [ 29 ] = (
int32_T ) ( t9 [ 0ULL ] >= X [ 105ULL ] * X [ 108ULL ] ) ; out . mX [ 30 ] =
( int32_T ) ( U_idx_10 > 0.0 ) ; out . mX [ 31 ] = ( int32_T ) ( U_idx_13 >
0.0 ) ; out . mX [ 32 ] = ( int32_T ) ( U_idx_14 > 0.9 ) ; out . mX [ 33 ] =
( int32_T ) ( U_idx_11 > 0.9 ) ; out . mX [ 34 ] = ( int32_T ) ( t10 [ 0ULL ]
>= X [ 67ULL ] ) ; out . mX [ 35 ] = ( int32_T ) ( U_idx_9 > 0.9 ) ; out . mX
[ 36 ] = ( int32_T ) ( U_idx_12 > 0.9 ) ; out . mX [ 37 ] = ( int32_T ) ( X [
52ULL ] > 0.0 ) ; out . mX [ 38 ] = ( int32_T ) ( X [ 51ULL ] > 0.0 ) ; out .
mX [ 39 ] = ( int32_T ) ( X [ 49ULL ] > 0.0 ) ; out . mX [ 40 ] = ( int32_T )
( X [ 45ULL ] >= 0.0 ) ; out . mX [ 41 ] = ( int32_T ) ( X [ 54ULL ] > 0.0 )
; out . mX [ 42 ] = ( int32_T ) ( X [ 50ULL ] > 0.0 ) ; out . mX [ 43 ] = (
int32_T ) ( X [ 53ULL ] > 0.0 ) ; out . mX [ 44 ] = ( int32_T ) ( X [ 55ULL ]
> 0.0 ) ; out . mX [ 45 ] = ( int32_T ) ( X [ 73ULL ] * X [ 76ULL ] <= 1.116
) ; out . mX [ 46 ] = ( int32_T ) ( X [ 63ULL ] > 0.0 ) ; out . mX [ 47 ] = (
int32_T ) ( X [ 62ULL ] > 0.0 ) ; out . mX [ 48 ] = ( int32_T ) ( X [ 60ULL ]
> 0.0 ) ; out . mX [ 49 ] = ( int32_T ) ( X [ 56ULL ] >= 0.0 ) ; out . mX [
50 ] = ( int32_T ) ( X [ 65ULL ] > 0.0 ) ; out . mX [ 51 ] = ( int32_T ) ( X
[ 61ULL ] > 0.0 ) ; out . mX [ 52 ] = ( int32_T ) ( X [ 64ULL ] > 0.0 ) ; out
. mX [ 53 ] = ( int32_T ) ( X [ 66ULL ] > 0.0 ) ; out . mX [ 54 ] = ( int32_T
) ( X [ 74ULL ] > 0.0 ) ; out . mX [ 55 ] = ( int32_T ) ( X [ 73ULL ] > 0.0 )
; out . mX [ 56 ] = ( int32_T ) ( t11 [ 0ULL ] >= X [ 78ULL ] ) ; out . mX [
57 ] = ( int32_T ) ( X [ 71ULL ] > 0.0 ) ; out . mX [ 58 ] = ( int32_T ) ( X
[ 67ULL ] >= 0.0 ) ; out . mX [ 59 ] = ( int32_T ) ( X [ 76ULL ] > 0.0 ) ;
out . mX [ 60 ] = ( int32_T ) ( X [ 72ULL ] > 0.0 ) ; out . mX [ 61 ] = (
int32_T ) ( X [ 75ULL ] > 0.0 ) ; out . mX [ 62 ] = ( int32_T ) ( X [ 77ULL ]
> 0.0 ) ; out . mX [ 63 ] = ( int32_T ) ( X [ 85ULL ] > 0.0 ) ; out . mX [ 64
] = ( int32_T ) ( X [ 84ULL ] > 0.0 ) ; out . mX [ 65 ] = ( int32_T ) ( X [
82ULL ] > 0.0 ) ; out . mX [ 66 ] = ( int32_T ) ( X [ 78ULL ] >= 0.0 ) ; out
. mX [ 67 ] = ( int32_T ) ( X [ 84ULL ] * X [ 87ULL ] <= 1.116 ) ; out . mX [
68 ] = ( int32_T ) ( X [ 87ULL ] > 0.0 ) ; out . mX [ 69 ] = ( int32_T ) ( X
[ 83ULL ] > 0.0 ) ; out . mX [ 70 ] = ( int32_T ) ( X [ 86ULL ] > 0.0 ) ; out
. mX [ 71 ] = ( int32_T ) ( X [ 88ULL ] > 0.0 ) ; out . mX [ 72 ] = ( int32_T
) ( X [ 96ULL ] > 0.0 ) ; out . mX [ 73 ] = ( int32_T ) ( X [ 95ULL ] > 0.0 )
; out . mX [ 74 ] = ( int32_T ) ( X [ 93ULL ] > 0.0 ) ; out . mX [ 75 ] = (
int32_T ) ( X [ 89ULL ] >= 0.0 ) ; out . mX [ 76 ] = ( int32_T ) ( X [ 98ULL
] > 0.0 ) ; out . mX [ 77 ] = ( int32_T ) ( X [ 94ULL ] > 0.0 ) ; out . mX [
78 ] = ( int32_T ) ( t12 [ 0ULL ] >= X [ 89ULL ] ) ; out . mX [ 79 ] = (
int32_T ) ( X [ 97ULL ] > 0.0 ) ; out . mX [ 80 ] = ( int32_T ) ( X [ 99ULL ]
> 0.0 ) ; out . mX [ 81 ] = ( int32_T ) ( X [ 107ULL ] > 0.0 ) ; out . mX [
82 ] = ( int32_T ) ( X [ 106ULL ] > 0.0 ) ; out . mX [ 83 ] = ( int32_T ) ( X
[ 104ULL ] > 0.0 ) ; out . mX [ 84 ] = ( int32_T ) ( X [ 100ULL ] >= 0.0 ) ;
out . mX [ 85 ] = ( int32_T ) ( X [ 109ULL ] > 0.0 ) ; out . mX [ 86 ] = (
int32_T ) ( X [ 105ULL ] > 0.0 ) ; out . mX [ 87 ] = ( int32_T ) ( X [ 108ULL
] > 0.0 ) ; out . mX [ 88 ] = ( int32_T ) ( X [ 110ULL ] > 0.0 ) ; out . mX [
89 ] = ( int32_T ) ( X [ 95ULL ] * X [ 98ULL ] <= 1.116 ) ; ( void ) LC ; (
void ) t61 ; return 0 ; }
