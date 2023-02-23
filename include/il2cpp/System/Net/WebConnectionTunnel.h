#pragma once

#include "il2cpp.h"

System_Net_HttpWebRequest_o* System_Net_WebConnectionTunnel__get_Request (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_WebConnectionTunnel__get_ConnectUri (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel___ctor (System_Net_WebConnectionTunnel_o* __this, System_Net_HttpWebRequest_o* request, System_Uri_o* connectUri, const MethodInfo* method);
bool System_Net_WebConnectionTunnel__get_Success (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_Success (System_Net_WebConnectionTunnel_o* __this, bool value, const MethodInfo* method);
bool System_Net_WebConnectionTunnel__get_CloseConnection (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_CloseConnection (System_Net_WebConnectionTunnel_o* __this, bool value, const MethodInfo* method);
int32_t System_Net_WebConnectionTunnel__get_StatusCode (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_StatusCode (System_Net_WebConnectionTunnel_o* __this, int32_t value, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_StatusDescription (System_Net_WebConnectionTunnel_o* __this, System_String_o* value, const MethodInfo* method);
System_String_array* System_Net_WebConnectionTunnel__get_Challenge (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_Challenge (System_Net_WebConnectionTunnel_o* __this, System_String_array* value, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_WebConnectionTunnel__get_Headers (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_Headers (System_Net_WebConnectionTunnel_o* __this, System_Net_WebHeaderCollection_o* value, const MethodInfo* method);
System_Version_o* System_Net_WebConnectionTunnel__get_ProxyVersion (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_ProxyVersion (System_Net_WebConnectionTunnel_o* __this, System_Version_o* value, const MethodInfo* method);
System_Byte_array* System_Net_WebConnectionTunnel__get_Data (System_Net_WebConnectionTunnel_o* __this, const MethodInfo* method);
void System_Net_WebConnectionTunnel__set_Data (System_Net_WebConnectionTunnel_o* __this, System_Byte_array* value, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebConnectionTunnel__Initialize (System_Net_WebConnectionTunnel_o* __this, System_IO_Stream_o* stream, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_ValueTuple_WebHeaderCollection__byte____int___o* System_Net_WebConnectionTunnel__ReadHeaders (System_Net_WebConnectionTunnel_o* __this, System_IO_Stream_o* stream, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebConnectionTunnel__FlushContents (System_Net_WebConnectionTunnel_o* __this, System_IO_Stream_o* stream, int32_t contentLength, const MethodInfo* method);
