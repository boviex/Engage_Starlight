#pragma once

#include "il2cpp.h"

void System_Net_DigestHeaderParser___ctor (System_Net_DigestHeaderParser_o* __this, System_String_o* header, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__get_Realm (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__get_Opaque (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__get_Nonce (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__get_Algorithm (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__get_QOP (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
bool System_Net_DigestHeaderParser__Parse (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
void System_Net_DigestHeaderParser__SkipWhitespace (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
System_String_o* System_Net_DigestHeaderParser__GetKey (System_Net_DigestHeaderParser_o* __this, const MethodInfo* method);
bool System_Net_DigestHeaderParser__GetKeywordAndValue (System_Net_DigestHeaderParser_o* __this, System_String_o** key, System_String_o** value, const MethodInfo* method);
void System_Net_DigestHeaderParser___cctor (const MethodInfo* method);
