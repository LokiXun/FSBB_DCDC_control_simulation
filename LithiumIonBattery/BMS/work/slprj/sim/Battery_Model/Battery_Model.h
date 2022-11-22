#ifndef RTW_HEADER_Battery_Model_h_
#define RTW_HEADER_Battery_Model_h_
#ifndef Battery_Model_COMMON_INCLUDES_
#define Battery_Model_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw_rtp.h"
#include "Battery_Model_981c414b_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "Battery_Model_types.h"
#include <stddef.h>
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { real_T dv [ 266 ] ; real_T dv1 [ 266 ] ; real_T dv2 [ 60 ] ;
real_T dv3 [ 60 ] ; real_T n4vbl2omow_mbvzarwird [ 21 ] ; real_T dv4 [ 12 ] ;
int_T iv [ 17 ] ; int_T iv1 [ 17 ] ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_cl54gopm0x ; NeModelParameters
modelParameters_kkiq3xxxve ; int_T iv2 [ 16 ] ; int_T iv3 [ 16 ] ;
NeParameterBundle expl_temp ; real_T nkj3nfmesp ; real_T evsuvmvdph [ 4 ] ;
real_T bycdgm2b5q [ 4 ] ; real_T a4ikhz2rde [ 4 ] ; real_T janazfsisr [ 4 ] ;
real_T jxg1rbnmyk [ 4 ] ; real_T fnshc4pduu [ 4 ] ; real_T n3kwhcu2ca [ 4 ] ;
real_T ck24frof4p [ 4 ] ; real_T lctbheb0ty [ 4 ] ; real_T fyl53t10jg [ 4 ] ;
real_T bnfdo52ds4 [ 4 ] ; real_T k4njwvujhy [ 4 ] ; real_T bl2sg0xfpe [ 4 ] ;
real_T e5vchxewri [ 4 ] ; real_T ffyzmzidyw [ 4 ] ; real_T mggvigvyox ;
real_T c5kogv1bua [ 206 ] ; real_T time ; real_T time_cxarnvbvui ; real_T
time_bhxxfovxdy ; real_T time_pbm3vprmfu ; real_T time_cv5hdgrwft ; real_T
time_fqdqrf4qbc ; real_T eumehc3vyz_g2mlkqadfk ; real_T ptdwd4uimg_g1smspu5ke
; real_T dn2fpyj2wk_merlcviukg ; real_T eumehc3vyz_tmp ; real_T d ; int8_T
nhzeu2bwoo_nz4o0shxby [ 6 ] ; int32_T isHit ; int32_T isHit_ppxrqq0gsf ;
int32_T isHit_llw0u2ae0v ; int32_T i ; int32_T i_jwzvbuczlb ; int8_T
jqv4tarecs ; int8_T kzxjuuk2dp ; int8_T gtuiaplsoh_dhmrxtyqop ; boolean_T
gpdjxrntit ; boolean_T acqp1riqr1_guugdwf2m3 ; boolean_T b ; boolean_T val ;
} osmg53lo42o ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { real_T d34b0okjqr [ 2 ] ; real_T lmwx10n042 [ 2 ] ; real_T
majp2d0t15 [ 2 ] ; real_T ewmuhywexp [ 2 ] ; real_T fpepwecug3 [ 2 ] ; real_T
azahjn1ojt [ 2 ] ; real_T fjaxxupdb1 [ 2 ] ; real_T ct4y0w43hs [ 2 ] ; real_T
i0erlbo3qq [ 2 ] ; real_T cv1b00ffxo [ 2 ] ; real_T fiwfx5yw42 [ 2 ] ; real_T
n1lc3tk3ng [ 2 ] ; real_T ln1b0eqlbz [ 2 ] ; real_T nzuavay5j2 [ 2 ] ; real_T
gi2satt5z1 [ 2 ] ; real_T bdrdfiqnt5 [ 116 ] ; real_T lnkatngh1g ; real_T
lc4xd53jqy ; struct { void * AQHandles ; } nuq4v43qhy ; void * l5sy50b5zn ;
void * kpitnwer40 ; void * mkd2spih2s ; void * pfdzwnuhop ; void * ixgbyeweng
; void * p0ewb0p2rv ; void * ninhxr4fck ; void * cit41hblo0 ; void *
ojxbbeygjk ; void * fneuxht5zz ; void * enzhvtdcpt ; void * iu1sepdskg ; void
* oee5glwfmi ; void * ldtzzmx1mf ; void * eqtdl3gxl0 ; void * np2gql3d2g ;
struct { void * AQHandles ; } hswcqf3moi ; struct { void * AQHandles ; }
oyzx0samzr ; struct { void * AQHandles ; } a52tnzhwod ; int_T oqfoisfonm [ 90
] ; int_T mile0wblyv ; int_T a3hvylotsc ; boolean_T op1wlzvy2t ; boolean_T
fpaxggsz2m ; boolean_T fjpvnssfnv ; boolean_T hbt31irajz ; } lvqzg0r2xcl ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
struct nqwmswlblnu_ { real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 [ 24741 ] ; real_T P_9 ; real_T P_10 [
24741 ] ; real_T P_11 ; real_T P_12 ; real_T P_13 ; int8_T P_14 ; int8_T P_15
; } ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
struct ak0flpomfp { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 16 ] ; int32_T * vardimsAddress [
16 ] ; RTWLoggingFcnPtr loggingPtrs [ 16 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; } ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { cmwtushrfh rtm ; } noywn55fqul ;
#endif
extern struct_Cy8NVN8uTaBKVtp81w17x rtP__Battery2f2Battery_1Pack_1RC_sldd_ ;
extern real_T rtP__TempInit2f2DD_Battery_sldd_ ; extern void hyhvfhhfpt (
void ) ; extern void co2jgaw45l ( void ) ; extern void efpnu0fedq ( void ) ;
extern void ekhh3qmd23 ( void ) ; extern void Battery_Model ( const SRE *
p0kzyezpty , const real32_T * mkdg2nw0t2 , const real32_T * mcpby2uc00 ,
const real32_T * blng4244sk , const boolean_T * ezezhr3fbo , const boolean_T
* p4c5irnvaj , const boolean_T * mkzqeq05cf , const boolean_T * fyhoidy225 ,
const boolean_T * nnlfxu3kr3 , const boolean_T * g3mwi3or3q , const boolean_T
mlddsh1g4n [ 6 ] , real32_T crjpt4umym [ 6 ] , real32_T * gr210t4cxd ,
real32_T * i5e1kzsjlx , real32_T * klcxmdsfug , real32_T * ayk4ytbpya ,
real32_T atbdgyptbn [ 6 ] ) ; extern void Battery_ModelTID2 ( void ) ; extern
void g2a0amkjsr ( void ) ; extern void civyaaklvw ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Battery_Model_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Battery_Model_GetDWork ( )
; extern void mr_Battery_Model_SetDWork ( const mxArray * ssDW ) ; extern
void mr_Battery_Model_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Battery_Model_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Battery_Model_GetCAPIStaticMap ( void ) ;
void mr_Battery_Model_CreateInitRestoreData ( ) ; void
mr_Battery_Model_CopyFromInitRestoreData ( ) ; void
mr_Battery_Model_DestroyInitRestoreData ( ) ;
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
extern noywn55fqul noywn55fqu ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
extern osmg53lo42o cumyr1omp00 ; extern lvqzg0r2xcl mhghcysq2pf ;
#endif
#endif
