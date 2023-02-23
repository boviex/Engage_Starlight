#pragma once

#include "il2cpp.h"

void App_GameUserGlobalData___ctor (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__Reset (App_GameUserGlobalData_o* __this, const MethodInfo* method);
int32_t App_GameUserGlobalData__GetLastSaveDataType (App_GameUserGlobalData_o* __this, const MethodInfo* method);
int32_t App_GameUserGlobalData__GetLastSaveDataIndex (App_GameUserGlobalData_o* __this, const MethodInfo* method);
int32_t App_GameUserGlobalData__GetLastSaveDataIndex (App_GameUserGlobalData_o* __this, int32_t type, const MethodInfo* method);
void App_GameUserGlobalData__SetLastSaveDataInfo (App_GameUserGlobalData_o* __this, int32_t type, int32_t index, const MethodInfo* method);
bool App_GameUserGlobalData__IsLastSaveDataInfo (App_GameUserGlobalData_o* __this, int32_t type, int32_t index, const MethodInfo* method);
int32_t App_GameUserGlobalData__get_Version (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__OnSerialize (App_GameUserGlobalData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameUserGlobalData__OnDeserialize (App_GameUserGlobalData_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
int32_t App_GameUserGlobalData__get_LastSaveDataType (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__set_LastSaveDataType (App_GameUserGlobalData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_GameUserGlobalData__get_LastSaveDataIndex (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__set_LastSaveDataIndex (App_GameUserGlobalData_o* __this, int32_t value, const MethodInfo* method);
uint32_t App_GameUserGlobalData__get_IdentifierCount (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__set_IdentifierCount (App_GameUserGlobalData_o* __this, uint32_t value, const MethodInfo* method);
App_GameUserGlobalData_FlagsField_o* App_GameUserGlobalData__get_Flag (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__Completed (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__ClearCompleted (App_GameUserGlobalData_o* __this, const MethodInfo* method);
bool App_GameUserGlobalData__IsCompleted (App_GameUserGlobalData_o* __this, const MethodInfo* method);
void App_GameUserGlobalData__SetCompleted (App_GameUserGlobalData_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
void App_GameUserGlobalData__ClearCompleted (App_GameUserGlobalData_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
bool App_GameUserGlobalData__IsCompleted (App_GameUserGlobalData_o* __this, System_String_o* cid, const MethodInfo* method);
uint64_t App_GameUserGlobalData__CreateIdentifier (const MethodInfo* method);
