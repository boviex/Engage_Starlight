#pragma once

#include "il2cpp.h"

System_Net_Authorization_o* Mono_Http_NtlmClient__Authenticate (Mono_Http_NtlmClient_o* __this, System_String_o* challenge, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* Mono_Http_NtlmClient__PreAuthenticate (Mono_Http_NtlmClient_o* __this, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_String_o* Mono_Http_NtlmClient__get_AuthenticationType (Mono_Http_NtlmClient_o* __this, const MethodInfo* method);
void Mono_Http_NtlmClient___ctor (Mono_Http_NtlmClient_o* __this, const MethodInfo* method);
void Mono_Http_NtlmClient___cctor (const MethodInfo* method);
