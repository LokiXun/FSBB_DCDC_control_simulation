#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_zc.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t60 , NeDsMethodOutput * t61 ) { PmRealVector out ;
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
out = t61 -> mZC ; t1 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t1 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t1 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t2 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t2 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t2 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t3 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t3 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t3 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t4 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t4 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t4 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t5 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t5 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t5 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t6 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t6 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t6 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t7 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t7 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t7 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t8 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t8 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t8 [ t34 > 0ULL ? 0ULL : t34 ] = t59 >
t58 ? t58 : t59 ; } t9 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 <
30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t9 [ t34 > 0ULL ? 0ULL : t34 ] ;
t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ; t9 [
t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t10 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t10 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t10 [ t34 > 0ULL ? 0ULL : t34 ] =
t59 > t58 ? t58 : t59 ; } t11 [ 0ULL ] = pmf_get_inf ( ) ; for ( t33 = 0ULL ;
t33 < 30ULL ; t33 ++ ) { t34 = t33 / 30ULL ; t59 = t11 [ t34 > 0ULL ? 0ULL :
t34 ] ; t58 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t33 ] * 1.0E-5 ;
t11 [ t34 > 0ULL ? 0ULL : t34 ] = t59 > t58 ? t58 : t59 ; } t12 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t33 = 0ULL ; t33 < 30ULL ; t33 ++ ) { t34 = t33 /
30ULL ; t59 = t12 [ t34 > 0ULL ? 0ULL : t34 ] ; t58 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 [ t33 ] * 1.0E-5 ; t12 [ t34 > 0ULL ? 0ULL : t34 ] =
t59 > t58 ? t58 : t59 ; } out . mX [ 0 ] = t1 [ 0ULL ] - X [ 45ULL ] ; out .
mX [ 1 ] = 7.0814589673861568E-8 - X [ 49ULL ] * X [ 52ULL ] ; out . mX [ 2 ]
= 1.116 - X [ 51ULL ] * X [ 54ULL ] ; out . mX [ 3 ] = X [ 52ULL ] ; out . mX
[ 4 ] = X [ 51ULL ] ; out . mX [ 5 ] = X [ 49ULL ] ; out . mX [ 6 ] = X [
45ULL ] ; out . mX [ 7 ] = X [ 54ULL ] ; out . mX [ 8 ] = X [ 50ULL ] ; out .
mX [ 9 ] = X [ 53ULL ] ; out . mX [ 10 ] = X [ 55ULL ] ; out . mX [ 11 ] = t2
[ 0ULL ] - X [ 50ULL ] * X [ 53ULL ] ; out . mX [ 12 ] = t3 [ 0ULL ] - X [
56ULL ] ; out . mX [ 13 ] = 7.0814589673861568E-8 - X [ 60ULL ] * X [ 63ULL ]
; out . mX [ 14 ] = 1.116 - X [ 62ULL ] * X [ 65ULL ] ; out . mX [ 15 ] = X [
63ULL ] ; out . mX [ 16 ] = X [ 62ULL ] ; out . mX [ 17 ] = X [ 60ULL ] ; out
. mX [ 18 ] = X [ 56ULL ] ; out . mX [ 19 ] = X [ 65ULL ] ; out . mX [ 20 ] =
X [ 61ULL ] ; out . mX [ 21 ] = X [ 64ULL ] ; out . mX [ 22 ] = X [ 66ULL ] ;
out . mX [ 23 ] = t4 [ 0ULL ] - X [ 61ULL ] * X [ 64ULL ] ; out . mX [ 24 ] =
t5 [ 0ULL ] - X [ 67ULL ] ; out . mX [ 25 ] = 7.0814589673861568E-8 - X [
71ULL ] * X [ 74ULL ] ; out . mX [ 26 ] = 1.116 - X [ 73ULL ] * X [ 76ULL ] ;
out . mX [ 27 ] = X [ 74ULL ] ; out . mX [ 28 ] = X [ 73ULL ] ; out . mX [ 29
] = X [ 71ULL ] ; out . mX [ 30 ] = X [ 67ULL ] ; out . mX [ 31 ] = X [ 76ULL
] ; out . mX [ 32 ] = X [ 72ULL ] ; out . mX [ 33 ] = X [ 75ULL ] ; out . mX
[ 34 ] = X [ 77ULL ] ; out . mX [ 35 ] = t6 [ 0ULL ] - X [ 72ULL ] * X [
75ULL ] ; out . mX [ 36 ] = t7 [ 0ULL ] - X [ 78ULL ] ; out . mX [ 37 ] =
7.0814589673861568E-8 - X [ 82ULL ] * X [ 85ULL ] ; out . mX [ 38 ] = 1.116 -
X [ 84ULL ] * X [ 87ULL ] ; out . mX [ 39 ] = X [ 85ULL ] ; out . mX [ 40 ] =
X [ 84ULL ] ; out . mX [ 41 ] = X [ 82ULL ] ; out . mX [ 42 ] = X [ 78ULL ] ;
out . mX [ 43 ] = X [ 87ULL ] ; out . mX [ 44 ] = X [ 83ULL ] ; out . mX [ 45
] = X [ 86ULL ] ; out . mX [ 46 ] = X [ 88ULL ] ; out . mX [ 47 ] = t8 [ 0ULL
] - X [ 83ULL ] * X [ 86ULL ] ; out . mX [ 48 ] = t9 [ 0ULL ] - X [ 89ULL ] ;
out . mX [ 49 ] = 7.0814589673861568E-8 - X [ 93ULL ] * X [ 96ULL ] ; out .
mX [ 50 ] = 1.116 - X [ 95ULL ] * X [ 98ULL ] ; out . mX [ 51 ] = X [ 96ULL ]
; out . mX [ 52 ] = X [ 95ULL ] ; out . mX [ 53 ] = X [ 93ULL ] ; out . mX [
54 ] = X [ 89ULL ] ; out . mX [ 55 ] = X [ 98ULL ] ; out . mX [ 56 ] = X [
94ULL ] ; out . mX [ 57 ] = X [ 97ULL ] ; out . mX [ 58 ] = X [ 99ULL ] ; out
. mX [ 59 ] = t10 [ 0ULL ] - X [ 94ULL ] * X [ 97ULL ] ; out . mX [ 60 ] =
t11 [ 0ULL ] - X [ 100ULL ] ; out . mX [ 61 ] = 7.0814589673861568E-8 - X [
104ULL ] * X [ 107ULL ] ; out . mX [ 62 ] = 1.116 - X [ 106ULL ] * X [ 109ULL
] ; out . mX [ 63 ] = X [ 107ULL ] ; out . mX [ 64 ] = X [ 106ULL ] ; out .
mX [ 65 ] = X [ 104ULL ] ; out . mX [ 66 ] = X [ 100ULL ] ; out . mX [ 67 ] =
X [ 109ULL ] ; out . mX [ 68 ] = X [ 105ULL ] ; out . mX [ 69 ] = X [ 108ULL
] ; out . mX [ 70 ] = X [ 110ULL ] ; out . mX [ 71 ] = t12 [ 0ULL ] - X [
105ULL ] * X [ 108ULL ] ; out . mX [ 72 ] = X [ 32ULL ] - 0.6 ; out . mX [ 73
] = X [ 34ULL ] - 0.6 ; out . mX [ 74 ] = X [ 36ULL ] - 0.6 ; out . mX [ 75 ]
= X [ 38ULL ] - 0.6 ; out . mX [ 76 ] = X [ 40ULL ] - 0.6 ; out . mX [ 77 ] =
X [ 42ULL ] - 0.6 ; out . mX [ 78 ] = U_idx_2 ; out . mX [ 79 ] = U_idx_0 ;
out . mX [ 80 ] = U_idx_3 ; out . mX [ 81 ] = U_idx_1 ; out . mX [ 82 ] =
U_idx_4 ; out . mX [ 83 ] = U_idx_5 ; out . mX [ 84 ] = U_idx_10 ; out . mX [
85 ] = U_idx_13 ; out . mX [ 86 ] = U_idx_14 - 0.9 ; out . mX [ 87 ] =
U_idx_11 - 0.9 ; out . mX [ 88 ] = U_idx_9 - 0.9 ; out . mX [ 89 ] = U_idx_12
- 0.9 ; ( void ) LC ; ( void ) t61 ; return 0 ; }
