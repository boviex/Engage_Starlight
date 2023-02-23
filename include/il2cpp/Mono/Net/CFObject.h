#pragma once

#include "il2cpp.h"

intptr_t Mono_Net_CFObject__dlopen (System_String_o* path, int32_t mode, const MethodInfo* method);
intptr_t Mono_Net_CFObject__dlsym (intptr_t handle, System_String_o* symbol, const MethodInfo* method);
void Mono_Net_CFObject__dlclose (intptr_t handle, const MethodInfo* method);
intptr_t Mono_Net_CFObject__GetIndirect (intptr_t handle, System_String_o* symbol, const MethodInfo* method);
intptr_t Mono_Net_CFObject__GetCFObjectHandle (intptr_t handle, System_String_o* symbol, const MethodInfo* method);
void Mono_Net_CFObject___ctor (Mono_Net_CFObject_o* __this, intptr_t handle, bool own, const MethodInfo* method);
void Mono_Net_CFObject__Finalize (Mono_Net_CFObject_o* __this, const MethodInfo* method);
intptr_t Mono_Net_CFObject__get_Handle (Mono_Net_CFObject_o* __this, const MethodInfo* method);
void Mono_Net_CFObject__set_Handle (Mono_Net_CFObject_o* __this, intptr_t value, const MethodInfo* method);
intptr_t Mono_Net_CFObject__CFRetain (intptr_t handle, const MethodInfo* method);
void Mono_Net_CFObject__Retain (Mono_Net_CFObject_o* __this, const MethodInfo* method);
void Mono_Net_CFObject__CFRelease (intptr_t handle, const MethodInfo* method);
void Mono_Net_CFObject__Release (Mono_Net_CFObject_o* __this, const MethodInfo* method);
void Mono_Net_CFObject__Dispose (Mono_Net_CFObject_o* __this, bool disposing, const MethodInfo* method);
void Mono_Net_CFObject__Dispose (Mono_Net_CFObject_o* __this, const MethodInfo* method);
