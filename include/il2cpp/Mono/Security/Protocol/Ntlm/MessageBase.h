#pragma once

#include "il2cpp.h"

void Mono_Security_Protocol_Ntlm_MessageBase___ctor (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, int32_t messageType, const MethodInfo* method);
int32_t Mono_Security_Protocol_Ntlm_MessageBase__get_Flags (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_MessageBase__set_Flags (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, int32_t value, const MethodInfo* method);
int32_t Mono_Security_Protocol_Ntlm_MessageBase__get_Type (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_MessageBase__PrepareMessage (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, int32_t messageSize, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_MessageBase__Decode (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, System_Byte_array* message, const MethodInfo* method);
bool Mono_Security_Protocol_Ntlm_MessageBase__CheckHeader (Mono_Security_Protocol_Ntlm_MessageBase_o* __this, System_Byte_array* message, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_MessageBase___cctor (const MethodInfo* method);
