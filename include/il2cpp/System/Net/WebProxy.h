#pragma once

#include "il2cpp.h"

void System_Net_WebProxy___ctor (System_Net_WebProxy_o* __this, const MethodInfo* method);
void System_Net_WebProxy___ctor (System_Net_WebProxy_o* __this, System_Uri_o* Address, bool BypassOnLocal, System_String_array* BypassList, System_Net_ICredentials_o* Credentials, const MethodInfo* method);
System_Net_ICredentials_o* System_Net_WebProxy__get_Credentials (System_Net_WebProxy_o* __this, const MethodInfo* method);
bool System_Net_WebProxy__get_UseDefaultCredentials (System_Net_WebProxy_o* __this, const MethodInfo* method);
void System_Net_WebProxy__set_UseDefaultCredentials (System_Net_WebProxy_o* __this, bool value, const MethodInfo* method);
System_Uri_o* System_Net_WebProxy__GetProxy (System_Net_WebProxy_o* __this, System_Uri_o* destination, const MethodInfo* method);
void System_Net_WebProxy__UpdateRegExList (System_Net_WebProxy_o* __this, bool canThrow, const MethodInfo* method);
bool System_Net_WebProxy__IsMatchInBypassList (System_Net_WebProxy_o* __this, System_Uri_o* input, const MethodInfo* method);
bool System_Net_WebProxy__IsLocal (System_Net_WebProxy_o* __this, System_Uri_o* host, const MethodInfo* method);
bool System_Net_WebProxy__IsLocalInProxyHash (System_Net_WebProxy_o* __this, System_Uri_o* host, const MethodInfo* method);
bool System_Net_WebProxy__IsBypassed (System_Net_WebProxy_o* __this, System_Uri_o* host, const MethodInfo* method);
bool System_Net_WebProxy__IsBypassedManual (System_Net_WebProxy_o* __this, System_Uri_o* host, const MethodInfo* method);
void System_Net_WebProxy___ctor (System_Net_WebProxy_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebProxy__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_WebProxy_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebProxy__GetObjectData (System_Net_WebProxy_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
System_Net_AutoWebProxyScriptEngine_o* System_Net_WebProxy__get_ScriptEngine (System_Net_WebProxy_o* __this, const MethodInfo* method);
System_Net_IWebProxy_o* System_Net_WebProxy__CreateDefaultProxy (const MethodInfo* method);
void System_Net_WebProxy___ctor (System_Net_WebProxy_o* __this, bool enableAutoproxy, const MethodInfo* method);
void System_Net_WebProxy__UnsafeUpdateFromRegistry (System_Net_WebProxy_o* __this, const MethodInfo* method);
bool System_Net_WebProxy__GetProxyAuto (System_Net_WebProxy_o* __this, System_Uri_o* destination, System_Uri_o** proxyUri, const MethodInfo* method);
bool System_Net_WebProxy__IsBypassedAuto (System_Net_WebProxy_o* __this, System_Uri_o* destination, bool* isBypassed, const MethodInfo* method);
bool System_Net_WebProxy__AreAllBypassed (System_Collections_Generic_IEnumerable_string__o* proxies, bool checkFirstOnly, const MethodInfo* method);
System_Uri_o* System_Net_WebProxy__ProxyUri (System_String_o* proxyName, const MethodInfo* method);
