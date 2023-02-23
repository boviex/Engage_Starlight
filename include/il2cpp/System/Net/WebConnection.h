#pragma once

#include "il2cpp.h"

System_Net_ServicePoint_o* System_Net_WebConnection__get_ServicePoint (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection___ctor (System_Net_WebConnection_o* __this, System_Net_ServicePoint_o* sPoint, const MethodInfo* method);
bool System_Net_WebConnection__CanReuse (System_Net_WebConnection_o* __this, const MethodInfo* method);
bool System_Net_WebConnection__CheckReusable (System_Net_WebConnection_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebConnection__Connect (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_bool__o* System_Net_WebConnection__CreateStream (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, bool reused, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_WebRequestStream__o* System_Net_WebConnection__InitConnection (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Net_WebException_o* System_Net_WebConnection__GetException (int32_t status, System_Exception_o* error, const MethodInfo* method);
bool System_Net_WebConnection__ReadLine (System_Byte_array* buffer, int32_t* start, int32_t max, System_String_o** output, const MethodInfo* method);
bool System_Net_WebConnection__CanReuseConnection (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, const MethodInfo* method);
bool System_Net_WebConnection__PrepareSharingNtlm (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, const MethodInfo* method);
void System_Net_WebConnection__Reset (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection__Close (System_Net_WebConnection_o* __this, bool reset, const MethodInfo* method);
void System_Net_WebConnection__CloseSocket (System_Net_WebConnection_o* __this, const MethodInfo* method);
bool System_Net_WebConnection__get_Closed (System_Net_WebConnection_o* __this, const MethodInfo* method);
System_DateTime_o System_Net_WebConnection__get_IdleSince (System_Net_WebConnection_o* __this, const MethodInfo* method);
bool System_Net_WebConnection__StartOperation (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* operation, bool reused, const MethodInfo* method);
bool System_Net_WebConnection__Continue (System_Net_WebConnection_o* __this, System_Net_WebOperation_o* next, const MethodInfo* method);
void System_Net_WebConnection__Dispose (System_Net_WebConnection_o* __this, bool disposing, const MethodInfo* method);
void System_Net_WebConnection__Dispose (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection__ResetNtlm (System_Net_WebConnection_o* __this, const MethodInfo* method);
bool System_Net_WebConnection__get_NtlmAuthenticated (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection__set_NtlmAuthenticated (System_Net_WebConnection_o* __this, bool value, const MethodInfo* method);
System_Net_NetworkCredential_o* System_Net_WebConnection__get_NtlmCredential (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection__set_NtlmCredential (System_Net_WebConnection_o* __this, System_Net_NetworkCredential_o* value, const MethodInfo* method);
bool System_Net_WebConnection__get_UnsafeAuthenticatedConnectionSharing (System_Net_WebConnection_o* __this, const MethodInfo* method);
void System_Net_WebConnection__set_UnsafeAuthenticatedConnectionSharing (System_Net_WebConnection_o* __this, bool value, const MethodInfo* method);
