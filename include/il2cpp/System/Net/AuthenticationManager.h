#pragma once

#include "il2cpp.h"

void System_Net_AuthenticationManager__EnsureModules (const MethodInfo* method);
System_Net_Authorization_o* System_Net_AuthenticationManager__Authenticate (System_String_o* challenge, System_Net_WebRequest_o* request, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* System_Net_AuthenticationManager__DoAuthenticate (System_String_o* challenge, System_Net_WebRequest_o* request, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_Net_Authorization_o* System_Net_AuthenticationManager__PreAuthenticate (System_Net_WebRequest_o* request, System_Net_ICredentials_o* credentials, const MethodInfo* method);
void System_Net_AuthenticationManager___cctor (const MethodInfo* method);
