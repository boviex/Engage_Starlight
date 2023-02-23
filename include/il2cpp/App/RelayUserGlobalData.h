#pragma once

#include "il2cpp.h"

void App_RelayUserGlobalData___ctor (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__Clear (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__ClearForGame (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__CleanupUnused (App_RelayUserGlobalData_o* __this, App_ProcInst_o* super, const MethodInfo* method);
void App_RelayUserGlobalData__UpdateData (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__DeleteData (App_RelayUserGlobalData_o* __this, uint64_t identifier, const MethodInfo* method);
void App_RelayUserGlobalData__AddTicketCount (App_RelayUserGlobalData_o* __this, int32_t count, const MethodInfo* method);
void App_RelayUserGlobalData__SubTicketCount (App_RelayUserGlobalData_o* __this, int32_t count, const MethodInfo* method);
uint32_t App_RelayUserGlobalData__GetTicketCount (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__SetTicketLastTime (App_RelayUserGlobalData_o* __this, int64_t unixTime, const MethodInfo* method);
int64_t App_RelayUserGlobalData__GetTicketLastTime (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
int64_t App_RelayUserGlobalData__GetTicketCurrentTime (const MethodInfo* method);
uint32_t App_RelayUserGlobalData__get_DailyTicketCount (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__set_DailyTicketCount (App_RelayUserGlobalData_o* __this, uint32_t value, const MethodInfo* method);
int32_t App_RelayUserGlobalData__get_Version (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__OnSerialize (App_RelayUserGlobalData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_RelayUserGlobalData__OnDeserialize (App_RelayUserGlobalData_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_RelayUserGlobalData__SerializeUncommitted (App_RelayUserGlobalData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_RelayUserGlobalData__DeserializeUncommitted (App_RelayUserGlobalData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_RelayUserGlobalData__ClearUncommitted (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
void App_RelayUserGlobalData__DbgDump (App_RelayUserGlobalData_o* __this, App_ProcInst_o* super, const MethodInfo* method);
void App_RelayUserGlobalData__DbgAddSubTicketCountTest (App_RelayUserGlobalData_o* __this, const MethodInfo* method);
