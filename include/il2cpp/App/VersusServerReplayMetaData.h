#pragma once

#include "il2cpp.h"

void App_VersusServerReplayMetaData___ctor (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
void App_VersusServerReplayMetaData__Clear (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
void App_VersusServerReplayMetaData__SetBinary (App_VersusServerReplayMetaData_o* __this, System_Byte_array* bin, const MethodInfo* method);
void App_VersusServerReplayMetaData__SetBinary (App_VersusServerReplayMetaData_o* __this, System_Collections_Generic_List_byte__o* bin, const MethodInfo* method);
void App_VersusServerReplayMetaData__SetMapResult (App_VersusServerReplayMetaData_o* __this, int32_t result, const MethodInfo* method);
void App_VersusServerReplayMetaData__TrySetMapEndTime (App_VersusServerReplayMetaData_o* __this, int64_t unixTime, const MethodInfo* method);
void App_VersusServerReplayMetaData__SetOffensePlayer (App_VersusServerReplayMetaData_o* __this, uint64_t principalId, System_String_o* offensePlayerName, const MethodInfo* method);
void App_VersusServerReplayMetaData__Disable (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
void App_VersusServerReplayMetaData__Dump (App_VersusServerReplayMetaData_o* __this, System_String_o* opt, const MethodInfo* method);
void App_VersusServerReplayMetaData__Serialize (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
bool App_VersusServerReplayMetaData__Deserialize (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
System_Byte_array* App_VersusServerReplayMetaData__get_Buffer (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
int32_t App_VersusServerReplayMetaData__get_Size (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
uint64_t App_VersusServerReplayMetaData__get_DataId (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
void App_VersusServerReplayMetaData__set_DataId (App_VersusServerReplayMetaData_o* __this, uint64_t value, const MethodInfo* method);
bool App_VersusServerReplayMetaData__get_IsEmpty (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
uint64_t App_VersusServerReplayMetaData__get_OffensePrincipalId (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
System_String_o* App_VersusServerReplayMetaData__get_OffensePlayerName (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
int64_t App_VersusServerReplayMetaData__get_MapEndUnixTime (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
System_String_o* App_VersusServerReplayMetaData__get_MapEndUnixTimeStr (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
int32_t App_VersusServerReplayMetaData__get_Result (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
int32_t App_VersusServerReplayMetaData__get_ResultForDefense (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
bool App_VersusServerReplayMetaData__get_IsEnable (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
bool App_VersusServerReplayMetaData__get_IsClearReliance (App_VersusServerReplayMetaData_o* __this, const MethodInfo* method);
App_VersusServerReplayMetaData_o* App_VersusServerReplayMetaData__TryGetPlayableMetaData (System_Collections_Generic_List_VersusServerReplayMetaData__o* metaDataList, const MethodInfo* method);
App_VersusServerReplayMetaData_o* App_VersusServerReplayMetaData__GetUploadTargetMetaData (System_Collections_Generic_List_VersusServerReplayMetaData__o* metaDataList, const MethodInfo* method);
