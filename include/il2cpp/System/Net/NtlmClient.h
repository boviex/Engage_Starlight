#pragma once

#include "il2cpp.h"

void System_Net_NtlmClient___ctor (System_Net_NtlmClient_o* __this, const MethodInfo* method);
System_Net_Authorization_o* System_Net_NtlmClient__Authenticate (System_Net_NtlmClient_o* __this, System_String_o* challenge, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* System_Net_NtlmClient__PreAuthenticate (System_Net_NtlmClient_o* __this, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_String_o* System_Net_NtlmClient__get_AuthenticationType (System_Net_NtlmClient_o* __this, const MethodInfo* method);
