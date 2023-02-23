#pragma once

#include "il2cpp.h"

System_Net_Authorization_o* System_Net_BasicClient__Authenticate (System_Net_BasicClient_o* __this, System_String_o* challenge, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Byte_array* System_Net_BasicClient__GetBytes (System_String_o* str, const MethodInfo* method);
System_Net_Authorization_o* System_Net_BasicClient__InternalAuthenticate (System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* System_Net_BasicClient__PreAuthenticate (System_Net_BasicClient_o* __this, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_String_o* System_Net_BasicClient__get_AuthenticationType (System_Net_BasicClient_o* __this, const MethodInfo* method);
void System_Net_BasicClient___ctor (System_Net_BasicClient_o* __this, const MethodInfo* method);
