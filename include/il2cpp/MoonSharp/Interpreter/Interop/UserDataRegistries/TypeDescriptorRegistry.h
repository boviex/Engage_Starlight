#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__RegisterAssembly (System_Reflection_Assembly_o* _asm, bool includeExtensionTypes, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__IsTypeRegistered (System_Type_o* type, const MethodInfo* method);
void MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__UnregisterType (System_Type_o* t, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__get_DefaultAccessMode (const MethodInfo* method);
void MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__set_DefaultAccessMode (int32_t value, const MethodInfo* method);
MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__RegisterProxyType_Impl (MoonSharp_Interpreter_Interop_IProxyFactory_o* proxyFactory, int32_t accessMode, System_String_o* friendlyName, const MethodInfo* method);
MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__RegisterType_Impl (System_Type_o* type, int32_t accessMode, System_String_o* friendlyName, MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* descriptor, const MethodInfo* method);
MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__PerformRegistration (System_Type_o* type, MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* newDescriptor, MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* oldDescriptor, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__ResolveDefaultAccessModeForType (int32_t accessMode, System_Type_o* type, const MethodInfo* method);
MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__GetDescriptorForType (System_Type_o* type, bool searchInterfaces, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__FrameworkIsAssignableFrom (System_Type_o* type, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__IsTypeBlacklisted (System_Type_o* t, const MethodInfo* method);
System_Collections_Generic_IEnumerable_KeyValuePair_Type__IUserDataDescriptor___o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__get_RegisteredTypes (const MethodInfo* method);
System_Collections_Generic_IEnumerable_KeyValuePair_Type__IUserDataDescriptor___o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__get_RegisteredTypesHistory (const MethodInfo* method);
MoonSharp_Interpreter_Interop_RegistrationPolicies_IRegistrationPolicy_o* MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__get_RegistrationPolicy (const MethodInfo* method);
void MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry__set_RegistrationPolicy (MoonSharp_Interpreter_Interop_RegistrationPolicies_IRegistrationPolicy_o* value, const MethodInfo* method);
void MoonSharp_Interpreter_Interop_UserDataRegistries_TypeDescriptorRegistry___cctor (const MethodInfo* method);