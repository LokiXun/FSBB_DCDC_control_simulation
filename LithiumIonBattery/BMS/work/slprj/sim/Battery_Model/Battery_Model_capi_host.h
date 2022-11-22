#ifndef RTW_HEADER_Battery_Model_cap_host_h__
#define RTW_HEADER_Battery_Model_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Battery_Model_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Battery_Model_host_InitializeDataMapInfo (
Battery_Model_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
