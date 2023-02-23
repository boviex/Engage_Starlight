#pragma once

#include "il2cpp.h"

void System_Net_DigestSession___cctor (const MethodInfo* method);
void System_Net_DigestSession___ctor (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_Algorithm (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_Realm (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_Nonce (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_Opaque (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_QOP (System_Net_DigestSession_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestSession__get_CNonce (System_Net_DigestSession_o* __this, const MethodInfo* method);
bool System_Net_DigestSession__Parse (System_Net_DigestSession_o* __this, System_String_o* challenge, const MethodInfo* method);
System_String_o* System_Net_DigestSession__HashToHexString (System_Net_DigestSession_o* __this, System_String_o* toBeHashed, const MethodInfo* method);
System_String_o* System_Net_DigestSession__HA1 (System_Net_DigestSession_o* __this, System_String_o* username, System_String_o* password, const MethodInfo* method);
System_String_o* System_Net_DigestSession__HA2 (System_Net_DigestSession_o* __this, System_Net_HttpWebRequest_o* webRequest, const MethodInfo* method);
System_String_o* System_Net_DigestSession__Response (System_Net_DigestSession_o* __this, System_String_o* username, System_String_o* password, System_Net_HttpWebRequest_o* webRequest, const MethodInfo* method);
System_Net_Authorization_o* System_Net_DigestSession__Authenticate (System_Net_DigestSession_o* __this, System_Net_WebRequest_o* webRequest, System_Net_ICredentials_o* credentials, const MethodInfo* method);
System_DateTime_o System_Net_DigestSession__get_LastUse (System_Net_DigestSession_o* __this, const MethodInfo* method);
