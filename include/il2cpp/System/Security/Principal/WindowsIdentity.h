#pragma once

#include "il2cpp.h"

void System_Security_Principal_WindowsIdentity___ctor (System_Security_Principal_WindowsIdentity_o* __this, intptr_t userToken, System_String_o* type, int32_t acctType, bool isAuthenticated, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity___ctor (System_Security_Principal_WindowsIdentity_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity__Dispose (System_Security_Principal_WindowsIdentity_o* __this, const MethodInfo* method);
System_Security_Principal_WindowsIdentity_o* System_Security_Principal_WindowsIdentity__GetCurrent (const MethodInfo* method);
System_Security_Principal_WindowsImpersonationContext_o* System_Security_Principal_WindowsIdentity__Impersonate (System_Security_Principal_WindowsIdentity_o* __this, const MethodInfo* method);
System_String_o* System_Security_Principal_WindowsIdentity__get_AuthenticationType (System_Security_Principal_WindowsIdentity_o* __this, const MethodInfo* method);
System_String_o* System_Security_Principal_WindowsIdentity__get_Name (System_Security_Principal_WindowsIdentity_o* __this, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity__System_Runtime_Serialization_IDeserializationCallback_OnDeserialization (System_Security_Principal_WindowsIdentity_o* __this, Il2CppObject* sender, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity__System_Runtime_Serialization_ISerializable_GetObjectData (System_Security_Principal_WindowsIdentity_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity__SetToken (System_Security_Principal_WindowsIdentity_o* __this, intptr_t token, const MethodInfo* method);
intptr_t System_Security_Principal_WindowsIdentity__GetCurrentToken (const MethodInfo* method);
System_String_o* System_Security_Principal_WindowsIdentity__GetTokenName (intptr_t token, const MethodInfo* method);
void System_Security_Principal_WindowsIdentity___cctor (const MethodInfo* method);
