#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor___ctor (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, MoonSharp_Interpreter_Interop_IProxyFactory_o* proxyFactory, MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* proxyDescriptor, System_String_o* friendlyName, const MethodInfo* method);
MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__get_InnerDescriptor (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__get_Name (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__set_Name (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, System_String_o* value, const MethodInfo* method);
System_Type_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__get_Type (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__Proxy (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, Il2CppObject* obj, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__Index (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, MoonSharp_Interpreter_Script_o* script, Il2CppObject* obj, MoonSharp_Interpreter_DynValue_o* index, bool isDirectIndexing, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__SetIndex (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, MoonSharp_Interpreter_Script_o* script, Il2CppObject* obj, MoonSharp_Interpreter_DynValue_o* index, MoonSharp_Interpreter_DynValue_o* value, bool isDirectIndexing, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__AsString (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, Il2CppObject* obj, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__MetaIndex (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, MoonSharp_Interpreter_Script_o* script, Il2CppObject* obj, System_String_o* metaname, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor__IsTypeCompatible (MoonSharp_Interpreter_Interop_ProxyUserDataDescriptor_o* __this, System_Type_o* type, Il2CppObject* obj, const MethodInfo* method);