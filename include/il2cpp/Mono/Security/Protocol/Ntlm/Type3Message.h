#pragma once

#include "il2cpp.h"

void Mono_Security_Protocol_Ntlm_Type3Message___ctor (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, Mono_Security_Protocol_Ntlm_Type2Message_o* type2, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_Type3Message__Finalize (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_Type3Message__set_Domain (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_String_o* value, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_Type3Message__set_Password (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_String_o* value, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_Type3Message__set_Username (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_String_o* value, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_Type3Message__Decode (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_Byte_array* message, const MethodInfo* method);
System_String_o* Mono_Security_Protocol_Ntlm_Type3Message__DecodeString (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_Byte_array* buffer, int32_t offset, int32_t len, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_Type3Message__EncodeString (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, System_String_o* text, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_Type3Message__GetBytes (Mono_Security_Protocol_Ntlm_Type3Message_o* __this, const MethodInfo* method);
