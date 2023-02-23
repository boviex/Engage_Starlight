#pragma once

#include "il2cpp.h"

System_Collections_Hashtable_o* System_Net_DigestClient__get_Cache (const MethodInfo* method);
void System_Net_DigestClient__CheckExpired (int32_t count, const MethodInfo* method);
System_Net_Authorization_o* System_Net_DigestClient__Authenticate (System_Net_DigestClient_o* __this, System_String_o* challenge, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* System_Net_DigestClient__PreAuthenticate (System_Net_DigestClient_o* __this, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_String_o* System_Net_DigestClient__get_AuthenticationType (System_Net_DigestClient_o* __this, const MethodInfo* method);
void System_Net_DigestClient___ctor (System_Net_DigestClient_o* __this, const MethodInfo* method);
void System_Net_DigestClient___cctor (const MethodInfo* method);
