#pragma once

#include "il2cpp.h"

void System_Net_ServicePoint___ctor (System_Net_ServicePoint_o* __this, System_Uri_o* uri, int32_t connectionLimit, int32_t maxIdleTime, const MethodInfo* method);
System_Net_ServicePointScheduler_o* System_Net_ServicePoint__get_Scheduler (System_Net_ServicePoint_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_ServicePoint__get_Address (System_Net_ServicePoint_o* __this, const MethodInfo* method);
int32_t System_Net_ServicePoint__get_ConnectionLimit (System_Net_ServicePoint_o* __this, const MethodInfo* method);
System_Version_o* System_Net_ServicePoint__get_ProtocolVersion (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__set_Expect100Continue (System_Net_ServicePoint_o* __this, bool value, const MethodInfo* method);
bool System_Net_ServicePoint__get_UseNagleAlgorithm (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__set_UseNagleAlgorithm (System_Net_ServicePoint_o* __this, bool value, const MethodInfo* method);
bool System_Net_ServicePoint__get_SendContinue (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__set_SendContinue (System_Net_ServicePoint_o* __this, bool value, const MethodInfo* method);
void System_Net_ServicePoint__SetTcpKeepAlive (System_Net_ServicePoint_o* __this, bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval, const MethodInfo* method);
void System_Net_ServicePoint__KeepAliveSetup (System_Net_ServicePoint_o* __this, System_Net_Sockets_Socket_o* socket, const MethodInfo* method);
void System_Net_ServicePoint__PutBytes (System_Byte_array* bytes, uint32_t v, int32_t offset, const MethodInfo* method);
bool System_Net_ServicePoint__get_UsesProxy (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__set_UsesProxy (System_Net_ServicePoint_o* __this, bool value, const MethodInfo* method);
bool System_Net_ServicePoint__get_UseConnect (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__set_UseConnect (System_Net_ServicePoint_o* __this, bool value, const MethodInfo* method);
bool System_Net_ServicePoint__get_HasTimedOut (System_Net_ServicePoint_o* __this, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_ServicePoint__get_HostEntry (System_Net_ServicePoint_o* __this, const MethodInfo* method);
void System_Net_ServicePoint__SetVersion (System_Net_ServicePoint_o* __this, System_Version_o* version, const MethodInfo* method);
void System_Net_ServicePoint__SendRequest (System_Net_ServicePoint_o* __this, System_Net_WebOperation_o* operation, System_String_o* groupName, const MethodInfo* method);
void System_Net_ServicePoint__UpdateServerCertificate (System_Net_ServicePoint_o* __this, System_Security_Cryptography_X509Certificates_X509Certificate_o* certificate, const MethodInfo* method);
void System_Net_ServicePoint__UpdateClientCertificate (System_Net_ServicePoint_o* __this, System_Security_Cryptography_X509Certificates_X509Certificate_o* certificate, const MethodInfo* method);
bool System_Net_ServicePoint__CallEndPointDelegate (System_Net_ServicePoint_o* __this, System_Net_Sockets_Socket_o* sock, System_Net_IPEndPoint_o* remote, const MethodInfo* method);
