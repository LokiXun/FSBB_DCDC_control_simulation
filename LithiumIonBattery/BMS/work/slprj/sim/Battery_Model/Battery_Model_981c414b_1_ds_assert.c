#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_assert.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_assert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t134 , NeDsMethodOutput * t135 ) { PmIntVector
out ; real_T X [ 116 ] ; real_T t1 [ 1 ] ; real_T t2 [ 1 ] ; real_T t3 [ 1 ]
; real_T t4 [ 1 ] ; real_T t5 [ 1 ] ; real_T t6 [ 1 ] ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel12 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel17 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel22 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel26 ; real_T
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel31 ; real_T t133
; real_T t20 ; real_T t21 ; real_T t22 ; real_T t23 ; real_T t29 ; real_T t34
; real_T t48 ; size_t t15 ; size_t t18 ; int32_T t0 [ 204 ] ; int32_T
M_idx_37 ; int32_T M_idx_38 ; int32_T M_idx_39 ; int32_T M_idx_40 ; int32_T
M_idx_41 ; int32_T M_idx_42 ; int32_T M_idx_43 ; int32_T M_idx_44 ; int32_T
M_idx_46 ; int32_T M_idx_47 ; int32_T M_idx_48 ; int32_T M_idx_49 ; int32_T
M_idx_50 ; int32_T M_idx_51 ; int32_T M_idx_52 ; int32_T M_idx_53 ; int32_T
M_idx_54 ; int32_T M_idx_55 ; int32_T M_idx_57 ; int32_T M_idx_58 ; int32_T
M_idx_59 ; int32_T M_idx_60 ; int32_T M_idx_61 ; int32_T M_idx_62 ; int32_T
M_idx_63 ; int32_T M_idx_64 ; int32_T M_idx_65 ; int32_T M_idx_66 ; int32_T
M_idx_68 ; int32_T M_idx_69 ; int32_T M_idx_70 ; int32_T M_idx_71 ; int32_T
M_idx_72 ; int32_T M_idx_73 ; int32_T M_idx_74 ; int32_T M_idx_75 ; int32_T
M_idx_76 ; int32_T M_idx_77 ; int32_T M_idx_79 ; int32_T M_idx_80 ; int32_T
M_idx_81 ; int32_T M_idx_82 ; int32_T M_idx_83 ; int32_T M_idx_84 ; int32_T
M_idx_85 ; int32_T M_idx_86 ; int32_T M_idx_87 ; int32_T M_idx_88 ; int32_T b
; M_idx_37 = t134 -> mM . mX [ 37 ] ; M_idx_38 = t134 -> mM . mX [ 38 ] ;
M_idx_39 = t134 -> mM . mX [ 39 ] ; M_idx_40 = t134 -> mM . mX [ 40 ] ;
M_idx_41 = t134 -> mM . mX [ 41 ] ; M_idx_42 = t134 -> mM . mX [ 42 ] ;
M_idx_43 = t134 -> mM . mX [ 43 ] ; M_idx_44 = t134 -> mM . mX [ 44 ] ;
M_idx_46 = t134 -> mM . mX [ 46 ] ; M_idx_47 = t134 -> mM . mX [ 47 ] ;
M_idx_48 = t134 -> mM . mX [ 48 ] ; M_idx_49 = t134 -> mM . mX [ 49 ] ;
M_idx_50 = t134 -> mM . mX [ 50 ] ; M_idx_51 = t134 -> mM . mX [ 51 ] ;
M_idx_52 = t134 -> mM . mX [ 52 ] ; M_idx_53 = t134 -> mM . mX [ 53 ] ;
M_idx_54 = t134 -> mM . mX [ 54 ] ; M_idx_55 = t134 -> mM . mX [ 55 ] ;
M_idx_57 = t134 -> mM . mX [ 57 ] ; M_idx_58 = t134 -> mM . mX [ 58 ] ;
M_idx_59 = t134 -> mM . mX [ 59 ] ; M_idx_60 = t134 -> mM . mX [ 60 ] ;
M_idx_61 = t134 -> mM . mX [ 61 ] ; M_idx_62 = t134 -> mM . mX [ 62 ] ;
M_idx_63 = t134 -> mM . mX [ 63 ] ; M_idx_64 = t134 -> mM . mX [ 64 ] ;
M_idx_65 = t134 -> mM . mX [ 65 ] ; M_idx_66 = t134 -> mM . mX [ 66 ] ;
M_idx_68 = t134 -> mM . mX [ 68 ] ; M_idx_69 = t134 -> mM . mX [ 69 ] ;
M_idx_70 = t134 -> mM . mX [ 70 ] ; M_idx_71 = t134 -> mM . mX [ 71 ] ;
M_idx_72 = t134 -> mM . mX [ 72 ] ; M_idx_73 = t134 -> mM . mX [ 73 ] ;
M_idx_74 = t134 -> mM . mX [ 74 ] ; M_idx_75 = t134 -> mM . mX [ 75 ] ;
M_idx_76 = t134 -> mM . mX [ 76 ] ; M_idx_77 = t134 -> mM . mX [ 77 ] ;
M_idx_79 = t134 -> mM . mX [ 79 ] ; M_idx_80 = t134 -> mM . mX [ 80 ] ;
M_idx_81 = t134 -> mM . mX [ 81 ] ; M_idx_82 = t134 -> mM . mX [ 82 ] ;
M_idx_83 = t134 -> mM . mX [ 83 ] ; M_idx_84 = t134 -> mM . mX [ 84 ] ;
M_idx_85 = t134 -> mM . mX [ 85 ] ; M_idx_86 = t134 -> mM . mX [ 86 ] ;
M_idx_87 = t134 -> mM . mX [ 87 ] ; M_idx_88 = t134 -> mM . mX [ 88 ] ; for (
b = 0 ; b < 116 ; b ++ ) { X [ b ] = t134 -> mX . mX [ b ] ; } out = t135 ->
mASSERT ; t133 = X [ 51ULL ] * X [ 54ULL ] ; t48 = t133 > 1.116 ? t133 :
1.116 ; t133 = - X [ 31ULL ] + X [ 30ULL ] ; t20 = X [ 62ULL ] * X [ 65ULL ]
; Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel12 = t20 >
1.116 ? t20 : 1.116 ; t20 = - X [ 30ULL ] + X [ 29ULL ] ; t21 = X [ 73ULL ] *
X [ 76ULL ] ; Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel17
= t21 > 1.116 ? t21 : 1.116 ; t21 = - X [ 29ULL ] + X [ 28ULL ] ; t22 = X [
84ULL ] * X [ 87ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel22 = t22 > 1.116
? t22 : 1.116 ; t22 = - X [ 28ULL ] + X [ 27ULL ] ; t23 = X [ 95ULL ] * X [
98ULL ] ; Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel26 =
t23 > 1.116 ? t23 : 1.116 ; t23 = - X [ 27ULL ] + X [ 26ULL ] ; t29 = X [
106ULL ] * X [ 109ULL ] ;
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel31 = t29 > 1.116
? t29 : 1.116 ; t1 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 <
30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t29 = t1 [ t18 > 0ULL ? 0ULL : t18 ] ;
t34 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t1 [
t18 > 0ULL ? 0ULL : t18 ] = t29 > t34 ? t34 : t29 ; } t2 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 /
30ULL ; t29 = t2 [ t18 > 0ULL ? 0ULL : t18 ] ; t34 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t2 [ t18 > 0ULL ? 0ULL : t18 ] = t29 >
t34 ? t34 : t29 ; } t3 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 <
30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t29 = t3 [ t18 > 0ULL ? 0ULL : t18 ] ;
t34 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t3 [
t18 > 0ULL ? 0ULL : t18 ] = t29 > t34 ? t34 : t29 ; } t4 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 /
30ULL ; t29 = t4 [ t18 > 0ULL ? 0ULL : t18 ] ; t34 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t4 [ t18 > 0ULL ? 0ULL : t18 ] = t29 >
t34 ? t34 : t29 ; } t5 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 <
30ULL ; t15 ++ ) { t18 = t15 / 30ULL ; t29 = t5 [ t18 > 0ULL ? 0ULL : t18 ] ;
t34 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t5 [
t18 > 0ULL ? 0ULL : t18 ] = t29 > t34 ? t34 : t29 ; } t6 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 30ULL ; t15 ++ ) { t18 = t15 /
30ULL ; t29 = t6 [ t18 > 0ULL ? 0ULL : t18 ] ; t34 = ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 [ t15 ] * 1.0E-5 ; t6 [ t18 > 0ULL ? 0ULL : t18 ] = t29 >
t34 ? t34 : t29 ; } t0 [ 0ULL ] = ( int32_T ) ( X [ 47ULL ] >= 0.0 ) ; t0 [
1ULL ] = ( int32_T ) ( X [ 47ULL ] <= 1.0 ) ; t0 [ 2ULL ] = ( int32_T ) ( X [
31ULL ] >= 0.0 ) ; t0 [ 3ULL ] = ( int32_T ) ( X [ 31ULL ] <= pmf_get_inf ( )
) ; t0 [ 4ULL ] = ( int32_T ) ( M_idx_37 != 0 ) ; t0 [ 5ULL ] = ( int32_T ) (
M_idx_38 != 0 ) ; t0 [ 6ULL ] = ( int32_T ) ( M_idx_39 != 0 ) ; t0 [ 7ULL ] =
( int32_T ) ( M_idx_40 != 0 ) ; t0 [ 8ULL ] = ( int32_T ) ( M_idx_41 != 0 ) ;
t0 [ 9ULL ] = ( int32_T ) ( M_idx_42 != 0 ) ; t0 [ 10ULL ] = ( int32_T ) (
M_idx_43 != 0 ) ; t0 [ 11ULL ] = ( int32_T ) ( M_idx_44 != 0 ) ; t0 [ 12ULL ]
= ( int32_T ) ( X [ 58ULL ] >= 0.0 ) ; t0 [ 13ULL ] = ( int32_T ) ( X [ 58ULL
] <= 1.0 ) ; t0 [ 14ULL ] = ( int32_T ) ( t133 >= 0.0 ) ; t0 [ 15ULL ] = (
int32_T ) ( t133 <= pmf_get_inf ( ) ) ; t0 [ 16ULL ] = ( int32_T ) ( M_idx_46
!= 0 ) ; t0 [ 17ULL ] = ( int32_T ) ( M_idx_47 != 0 ) ; t0 [ 18ULL ] = (
int32_T ) ( M_idx_48 != 0 ) ; t0 [ 19ULL ] = ( int32_T ) ( M_idx_49 != 0 ) ;
t0 [ 20ULL ] = ( int32_T ) ( M_idx_50 != 0 ) ; t0 [ 21ULL ] = ( int32_T ) (
M_idx_51 != 0 ) ; t0 [ 22ULL ] = ( int32_T ) ( M_idx_52 != 0 ) ; t0 [ 23ULL ]
= ( int32_T ) ( M_idx_53 != 0 ) ; t0 [ 24ULL ] = ( int32_T ) ( X [ 69ULL ] >=
0.0 ) ; t0 [ 25ULL ] = ( int32_T ) ( X [ 69ULL ] <= 1.0 ) ; t0 [ 26ULL ] = (
int32_T ) ( t20 >= 0.0 ) ; t0 [ 27ULL ] = ( int32_T ) ( t20 <= pmf_get_inf (
) ) ; t0 [ 28ULL ] = ( int32_T ) ( M_idx_54 != 0 ) ; t0 [ 29ULL ] = ( int32_T
) ( M_idx_55 != 0 ) ; t0 [ 30ULL ] = ( int32_T ) ( M_idx_57 != 0 ) ; t0 [
31ULL ] = ( int32_T ) ( M_idx_58 != 0 ) ; t0 [ 32ULL ] = ( int32_T ) (
M_idx_59 != 0 ) ; t0 [ 33ULL ] = ( int32_T ) ( M_idx_60 != 0 ) ; t0 [ 34ULL ]
= ( int32_T ) ( M_idx_61 != 0 ) ; t0 [ 35ULL ] = ( int32_T ) ( M_idx_62 != 0
) ; t0 [ 36ULL ] = ( int32_T ) ( X [ 80ULL ] >= 0.0 ) ; t0 [ 37ULL ] = (
int32_T ) ( X [ 80ULL ] <= 1.0 ) ; t0 [ 38ULL ] = ( int32_T ) ( t21 >= 0.0 )
; t0 [ 39ULL ] = ( int32_T ) ( t21 <= pmf_get_inf ( ) ) ; t0 [ 40ULL ] = (
int32_T ) ( M_idx_63 != 0 ) ; t0 [ 41ULL ] = ( int32_T ) ( M_idx_64 != 0 ) ;
t0 [ 42ULL ] = ( int32_T ) ( M_idx_65 != 0 ) ; t0 [ 43ULL ] = ( int32_T ) (
M_idx_66 != 0 ) ; t0 [ 44ULL ] = ( int32_T ) ( M_idx_68 != 0 ) ; t0 [ 45ULL ]
= ( int32_T ) ( M_idx_69 != 0 ) ; t0 [ 46ULL ] = ( int32_T ) ( M_idx_70 != 0
) ; t0 [ 47ULL ] = ( int32_T ) ( M_idx_71 != 0 ) ; t0 [ 48ULL ] = ( int32_T )
( X [ 91ULL ] >= 0.0 ) ; t0 [ 49ULL ] = ( int32_T ) ( X [ 91ULL ] <= 1.0 ) ;
t0 [ 50ULL ] = ( int32_T ) ( t22 >= 0.0 ) ; t0 [ 51ULL ] = ( int32_T ) ( t22
<= pmf_get_inf ( ) ) ; t0 [ 52ULL ] = ( int32_T ) ( M_idx_72 != 0 ) ; t0 [
53ULL ] = ( int32_T ) ( M_idx_73 != 0 ) ; t0 [ 54ULL ] = ( int32_T ) (
M_idx_74 != 0 ) ; t0 [ 55ULL ] = ( int32_T ) ( M_idx_75 != 0 ) ; t0 [ 56ULL ]
= ( int32_T ) ( M_idx_76 != 0 ) ; t0 [ 57ULL ] = ( int32_T ) ( M_idx_77 != 0
) ; t0 [ 58ULL ] = ( int32_T ) ( M_idx_79 != 0 ) ; t0 [ 59ULL ] = ( int32_T )
( M_idx_80 != 0 ) ; t0 [ 60ULL ] = ( int32_T ) ( X [ 102ULL ] >= 0.0 ) ; t0 [
61ULL ] = ( int32_T ) ( X [ 102ULL ] <= 1.0 ) ; t0 [ 62ULL ] = ( int32_T ) (
t23 >= 0.0 ) ; t0 [ 63ULL ] = ( int32_T ) ( t23 <= pmf_get_inf ( ) ) ; t0 [
64ULL ] = ( int32_T ) ( M_idx_81 != 0 ) ; t0 [ 65ULL ] = ( int32_T ) (
M_idx_82 != 0 ) ; t0 [ 66ULL ] = ( int32_T ) ( M_idx_83 != 0 ) ; t0 [ 67ULL ]
= ( int32_T ) ( M_idx_84 != 0 ) ; t0 [ 68ULL ] = ( int32_T ) ( M_idx_85 != 0
) ; t0 [ 69ULL ] = ( int32_T ) ( M_idx_86 != 0 ) ; t0 [ 70ULL ] = ( int32_T )
( M_idx_87 != 0 ) ; t0 [ 71ULL ] = ( int32_T ) ( M_idx_88 != 0 ) ; t0 [ 72ULL
] = 1 ; t0 [ 73ULL ] = 1 ; t0 [ 74ULL ] = 1 ; t0 [ 75ULL ] = 1 ; t0 [ 76ULL ]
= 1 ; t0 [ 77ULL ] = 1 ; t0 [ 78ULL ] = 1 ; t0 [ 79ULL ] = 1 ; t0 [ 80ULL ] =
1 ; t0 [ 81ULL ] = 1 ; t0 [ 82ULL ] = 1 ; t0 [ 83ULL ] = 1 ; t0 [ 84ULL ] = 1
; t0 [ 85ULL ] = 1 ; t0 [ 86ULL ] = 1 ; t0 [ 87ULL ] = 1 ; t0 [ 88ULL ] = 1 ;
t0 [ 89ULL ] = 1 ; t0 [ 90ULL ] = 1 ; t0 [ 91ULL ] = 1 ; t0 [ 92ULL ] = 1 ;
t0 [ 93ULL ] = 1 ; t0 [ 94ULL ] = 1 ; t0 [ 95ULL ] = 1 ; t0 [ 96ULL ] = (
int32_T ) ( t48 != 0.0 ) ; t0 [ 97ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel12 != 0.0 ) ; t0
[ 98ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel17 != 0.0 ) ; t0
[ 99ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel22 != 0.0 ) ; t0
[ 100ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel26 != 0.0 ) ; t0
[ 101ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel31 != 0.0 ) ; t0
[ 102ULL ] = 1 ; t0 [ 103ULL ] = 1 ; t0 [ 104ULL ] = 1 ; t0 [ 105ULL ] = 1 ;
t0 [ 106ULL ] = 1 ; t0 [ 107ULL ] = 1 ; t0 [ 108ULL ] = 1 ; t0 [ 109ULL ] = 1
; t0 [ 110ULL ] = 1 ; t0 [ 111ULL ] = 1 ; t0 [ 112ULL ] = 1 ; t0 [ 113ULL ] =
1 ; t0 [ 114ULL ] = 1 ; t0 [ 115ULL ] = 1 ; t0 [ 116ULL ] = 1 ; t0 [ 117ULL ]
= 1 ; t0 [ 118ULL ] = 1 ; t0 [ 119ULL ] = 1 ; t0 [ 120ULL ] = ( int32_T ) (
t48 != 0.0 ) ; t0 [ 121ULL ] = ( int32_T ) ( ( ( X [ 3ULL ] + 1.0E-6 ) /
100.0 == ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 3ULL ] + 1.0E-6
) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 122ULL ] = ( int32_T ) ( ( ! ( ( X
[ 3ULL ] + 1.0E-6 ) / 100.0 == ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! (
fabs ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [
3ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 123ULL ] = ( int32_T ) ( ( ( X [
3ULL ] + 1.0E-6 ) / 100.0 == ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( (
X [ 3ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 124ULL ] = (
int32_T ) ( ( ! ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 == ( X [ 3ULL ] + 1.0E-6 )
/ 100.0 ) ) || ( ! ( fabs ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf
( ) ) ) || ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 = X [ 50ULL ]
* X [ 53ULL ] ; t0 [ 125ULL ] = ( int32_T ) ( ( t133 > t1 [ 0ULL ] ? t133 :
t1 [ 0ULL ] ) != 0.0 ) ; t0 [ 126ULL ] = ( int32_T ) ( ( ( X [ 3ULL ] +
1.0E-6 ) / 100.0 == ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 3ULL
] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 127ULL ] = ( int32_T ) (
( ! ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 == ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) )
|| ( ! ( fabs ( ( X [ 3ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || (
( X [ 3ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 128ULL ] = 1 ; t0 [ 129ULL
] = 1 ; t0 [ 130ULL ] = 1 ; t0 [ 131ULL ] = 1 ; t0 [ 132ULL ] = 1 ; t0 [
133ULL ] = 1 ; t0 [ 134ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel12 != 0.0 ) ; t0
[ 135ULL ] = ( int32_T ) ( ( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 == ( X [ 7ULL ]
+ 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) ; t0 [ 136ULL ] = ( int32_T ) ( ( ! ( ( X [ 7ULL ] +
1.0E-6 ) / 100.0 == ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X [
7ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 7ULL ] + 1.0E-6
) / 100.0 >= 0.0 ) ) ; t0 [ 137ULL ] = ( int32_T ) ( ( ( X [ 7ULL ] + 1.0E-6
) / 100.0 == ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 7ULL ] +
1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 138ULL ] = ( int32_T ) ( ( !
( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 == ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) ) || (
! ( fabs ( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X
[ 7ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 = X [ 61ULL ] * X [ 64ULL ] ;
t0 [ 139ULL ] = ( int32_T ) ( ( t133 > t2 [ 0ULL ] ? t133 : t2 [ 0ULL ] ) !=
0.0 ) ; t0 [ 140ULL ] = ( int32_T ) ( ( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 == (
X [ 7ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 7ULL ] + 1.0E-6 ) / 100.0 )
!= pmf_get_inf ( ) ) ) ; t0 [ 141ULL ] = ( int32_T ) ( ( ! ( ( X [ 7ULL ] +
1.0E-6 ) / 100.0 == ( X [ 7ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X [
7ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 7ULL ] + 1.0E-6
) / 100.0 >= 0.0 ) ) ; t0 [ 142ULL ] = 1 ; t0 [ 143ULL ] = 1 ; t0 [ 144ULL ]
= 1 ; t0 [ 145ULL ] = 1 ; t0 [ 146ULL ] = 1 ; t0 [ 147ULL ] = 1 ; t0 [ 148ULL
] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel17 != 0.0 ) ; t0
[ 149ULL ] = ( int32_T ) ( ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 == ( X [ 11ULL
] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) ; t0 [ 150ULL ] = ( int32_T ) ( ( ! ( ( X [ 11ULL ] +
1.0E-6 ) / 100.0 == ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X
[ 11ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 11ULL ] +
1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 151ULL ] = ( int32_T ) ( ( ( X [ 11ULL ] +
1.0E-6 ) / 100.0 == ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [
11ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 152ULL ] = (
int32_T ) ( ( ! ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 == ( X [ 11ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 =
X [ 72ULL ] * X [ 75ULL ] ; t0 [ 153ULL ] = ( int32_T ) ( ( t133 > t3 [ 0ULL
] ? t133 : t3 [ 0ULL ] ) != 0.0 ) ; t0 [ 154ULL ] = ( int32_T ) ( ( ( X [
11ULL ] + 1.0E-6 ) / 100.0 == ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs (
( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 155ULL ] = (
int32_T ) ( ( ! ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 == ( X [ 11ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 11ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [
156ULL ] = 1 ; t0 [ 157ULL ] = 1 ; t0 [ 158ULL ] = 1 ; t0 [ 159ULL ] = 1 ; t0
[ 160ULL ] = 1 ; t0 [ 161ULL ] = 1 ; t0 [ 162ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel22 != 0.0 ) ; t0
[ 163ULL ] = ( int32_T ) ( ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 == ( X [ 15ULL
] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) ; t0 [ 164ULL ] = ( int32_T ) ( ( ! ( ( X [ 15ULL ] +
1.0E-6 ) / 100.0 == ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X
[ 15ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 15ULL ] +
1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 165ULL ] = ( int32_T ) ( ( ( X [ 15ULL ] +
1.0E-6 ) / 100.0 == ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [
15ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 166ULL ] = (
int32_T ) ( ( ! ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 == ( X [ 15ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 =
X [ 83ULL ] * X [ 86ULL ] ; t0 [ 167ULL ] = ( int32_T ) ( ( t133 > t4 [ 0ULL
] ? t133 : t4 [ 0ULL ] ) != 0.0 ) ; t0 [ 168ULL ] = ( int32_T ) ( ( ( X [
15ULL ] + 1.0E-6 ) / 100.0 == ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs (
( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 169ULL ] = (
int32_T ) ( ( ! ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 == ( X [ 15ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 15ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [
170ULL ] = 1 ; t0 [ 171ULL ] = 1 ; t0 [ 172ULL ] = 1 ; t0 [ 173ULL ] = 1 ; t0
[ 174ULL ] = 1 ; t0 [ 175ULL ] = 1 ; t0 [ 176ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel26 != 0.0 ) ; t0
[ 177ULL ] = ( int32_T ) ( ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 == ( X [ 19ULL
] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) ; t0 [ 178ULL ] = ( int32_T ) ( ( ! ( ( X [ 19ULL ] +
1.0E-6 ) / 100.0 == ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X
[ 19ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 19ULL ] +
1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 179ULL ] = ( int32_T ) ( ( ( X [ 19ULL ] +
1.0E-6 ) / 100.0 == ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [
19ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 180ULL ] = (
int32_T ) ( ( ! ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 == ( X [ 19ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 =
X [ 94ULL ] * X [ 97ULL ] ; t0 [ 181ULL ] = ( int32_T ) ( ( t133 > t5 [ 0ULL
] ? t133 : t5 [ 0ULL ] ) != 0.0 ) ; t0 [ 182ULL ] = ( int32_T ) ( ( ( X [
19ULL ] + 1.0E-6 ) / 100.0 == ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs (
( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 183ULL ] = (
int32_T ) ( ( ! ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 == ( X [ 19ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 19ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [
184ULL ] = 1 ; t0 [ 185ULL ] = 1 ; t0 [ 186ULL ] = 1 ; t0 [ 187ULL ] = 1 ; t0
[ 188ULL ] = 1 ; t0 [ 189ULL ] = 1 ; t0 [ 190ULL ] = ( int32_T ) (
Battery_Pack_Battery_Pack_1Module_Cell_Module_1TC_Battery_Cel31 != 0.0 ) ; t0
[ 191ULL ] = ( int32_T ) ( ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 == ( X [ 22ULL
] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) ; t0 [ 192ULL ] = ( int32_T ) ( ( ! ( ( X [ 22ULL ] +
1.0E-6 ) / 100.0 == ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X
[ 22ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( X [ 22ULL ] +
1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [ 193ULL ] = ( int32_T ) ( ( ( X [ 22ULL ] +
1.0E-6 ) / 100.0 == ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( X [
22ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 194ULL ] = (
int32_T ) ( ( ! ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 == ( X [ 22ULL ] + 1.0E-6
) / 100.0 ) ) || ( ! ( fabs ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t133 =
X [ 105ULL ] * X [ 108ULL ] ; t0 [ 195ULL ] = ( int32_T ) ( ( t133 > t6 [
0ULL ] ? t133 : t6 [ 0ULL ] ) != 0.0 ) ; t0 [ 196ULL ] = ( int32_T ) ( ( ( X
[ 22ULL ] + 1.0E-6 ) / 100.0 == ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) && ( fabs
( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; t0 [ 197ULL ] =
( int32_T ) ( ( ! ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 == ( X [ 22ULL ] +
1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 ) !=
pmf_get_inf ( ) ) ) || ( ( X [ 22ULL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; t0 [
198ULL ] = 1 ; t0 [ 199ULL ] = 1 ; t0 [ 200ULL ] = 1 ; t0 [ 201ULL ] = 1 ; t0
[ 202ULL ] = 1 ; t0 [ 203ULL ] = 1 ; for ( b = 0 ; b < 204 ; b ++ ) { out .
mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t135 ; return 0 ; }
