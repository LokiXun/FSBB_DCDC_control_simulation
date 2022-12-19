#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Battery_Model_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 21
#endif
#ifndef SS_INT64
#define SS_INT64 22
#endif
#else
#include "builtin_typeid_types.h"
#include "Battery_Model.h"
#include "Battery_Model_capi.h"
#include "Battery_Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
1 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 7
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 8 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 9
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
11 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 12 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
13 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 14 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , {
15 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"Discrete" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL )
, ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 14 , 9 , 10 , 11 , 12 , 13 , 0 , 1 , 2 , 3 , 4
, 5 , 6 , 7 , 8 , 15 } ;
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & mhghcysq2pf . gi2satt5z1 [ 0 ] ) ; dataAddr [
1 ] = ( void * ) ( & mhghcysq2pf . cv1b00ffxo [ 0 ] ) ; dataAddr [ 2 ] = (
void * ) ( & mhghcysq2pf . fiwfx5yw42 [ 0 ] ) ; dataAddr [ 3 ] = ( void * ) (
& mhghcysq2pf . n1lc3tk3ng [ 0 ] ) ; dataAddr [ 4 ] = ( void * ) ( &
mhghcysq2pf . ln1b0eqlbz [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) ( &
mhghcysq2pf . nzuavay5j2 [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( &
mhghcysq2pf . d34b0okjqr [ 0 ] ) ; dataAddr [ 7 ] = ( void * ) ( &
mhghcysq2pf . lmwx10n042 [ 0 ] ) ; dataAddr [ 8 ] = ( void * ) ( &
mhghcysq2pf . majp2d0t15 [ 0 ] ) ; dataAddr [ 9 ] = ( void * ) ( &
mhghcysq2pf . ewmuhywexp [ 0 ] ) ; dataAddr [ 10 ] = ( void * ) ( &
mhghcysq2pf . fpepwecug3 [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( &
mhghcysq2pf . azahjn1ojt [ 0 ] ) ; dataAddr [ 12 ] = ( void * ) ( &
mhghcysq2pf . fjaxxupdb1 [ 0 ] ) ; dataAddr [ 13 ] = ( void * ) ( &
mhghcysq2pf . ct4y0w43hs [ 0 ] ) ; dataAddr [ 14 ] = ( void * ) ( &
mhghcysq2pf . i0erlbo3qq [ 0 ] ) ; dataAddr [ 15 ] = ( void * ) ( &
mhghcysq2pf . bdrdfiqnt5 [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 2 , 1 , 116 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1
] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T )
0 } } ; static int_T rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 16 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3552042856U , 1518331909U , 2338801728U , 1218303971U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Battery_Model_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeSystemRan ( cmwtushrfh * const djmxej3cna
, sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( djmxej3cna ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ]
= ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = el50fl4kem [ 0 ]
; systemTid [ 2 ] = el50fl4kem [ 0 ] ; systemTid [ 3 ] = el50fl4kem [ 0 ] ;
systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1
] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Battery_Model_InitializeDataMapInfo ( cmwtushrfh * const djmxej3cna ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( djmxej3cna ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( djmxej3cna -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( djmxej3cna -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; Battery_Model_InitializeDataAddr (
djmxej3cna -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
djmxej3cna -> DataMapInfo . mmi , djmxej3cna -> DataMapInfo . dataAddress ) ;
Battery_Model_InitializeVarDimsAddr ( djmxej3cna -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( djmxej3cna -> DataMapInfo .
mmi , djmxej3cna -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
djmxej3cna -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
djmxej3cna -> DataMapInfo . mmi , ( NULL ) ) ;
Battery_Model_InitializeLoggingFunctions ( djmxej3cna -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( djmxej3cna -> DataMapInfo . mmi ,
djmxej3cna -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
djmxej3cna -> DataMapInfo . mmi , & djmxej3cna -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( djmxej3cna -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( djmxej3cna -> DataMapInfo .
mmi , 0 ) ; Battery_Model_InitializeSystemRan ( djmxej3cna , djmxej3cna ->
DataMapInfo . systemRan , djmxej3cna -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( djmxej3cna -> DataMapInfo . mmi ,
djmxej3cna -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( djmxej3cna
-> DataMapInfo . mmi , djmxej3cna -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( djmxej3cna -> DataMapInfo . mmi , & el50fl4kem [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Battery_Model_host_InitializeDataMapInfo (
Battery_Model_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
