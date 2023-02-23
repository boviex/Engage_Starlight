#pragma once

#include "il2cpp.h"

void App_PlayReportEvent__Start (System_String_o* eventId, nn_account_Uid_o uid, const MethodInfo* method);
void App_PlayReportEvent__End (const MethodInfo* method);
void App_PlayReportEvent__Add_object_ (System_String_o* key, int64_t val, const MethodInfo_29C0080* method);
void App_PlayReportEvent__Add (System_String_o* key, uint64_t val, const MethodInfo* method);
void App_PlayReportEvent__Add (System_String_o* key, float val, const MethodInfo* method);
void App_PlayReportEvent__Add (System_String_o* key, double val, const MethodInfo* method);
void App_PlayReportEvent__Add (System_String_o* key, System_String_o* val, const MethodInfo* method);
void App_PlayReportEvent__Add (System_String_o* key, bool val, const MethodInfo* method);
void App_PlayReportEvent__Add (System_String_o* key, System_Byte_array* val, const MethodInfo* method);
void App_PlayReportEvent__AddStruct (System_String_o* key, const MethodInfo* method);
void App_PlayReportEvent__PrepareAddReport (const MethodInfo* method);
void App_PlayReportEvent__PlayReportWarning (nn_Result_o result, System_String_o* id, const MethodInfo* method);
System_Byte_array* App_PlayReportEvent__ToBytes_object_ (Il2CppObject* data, const MethodInfo_29C0250* method);
Il2CppObject* App_PlayReportEvent__FromBytes_object_ (System_Byte_array* bytes, const MethodInfo_29C0110* method);
void App_PlayReportEvent___ctor (App_PlayReportEvent_o* __this, const MethodInfo* method);
void App_PlayReportEvent___cctor (const MethodInfo* method);
