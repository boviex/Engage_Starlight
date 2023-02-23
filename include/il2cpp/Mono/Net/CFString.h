#pragma once

#include "il2cpp.h"

void Mono_Net_CFString___ctor (Mono_Net_CFString_o* __this, intptr_t handle, bool own, const MethodInfo* method);
intptr_t Mono_Net_CFString__CFStringCreateWithCharacters (intptr_t alloc, intptr_t chars, intptr_t length, const MethodInfo* method);
Mono_Net_CFString_o* Mono_Net_CFString__Create (System_String_o* value, const MethodInfo* method);
intptr_t Mono_Net_CFString__CFStringGetLength (intptr_t handle, const MethodInfo* method);
intptr_t Mono_Net_CFString__CFStringGetCharactersPtr (intptr_t handle, const MethodInfo* method);
intptr_t Mono_Net_CFString__CFStringGetCharacters (intptr_t handle, Mono_Net_CFRange_o range, intptr_t buffer, const MethodInfo* method);
System_String_o* Mono_Net_CFString__AsString (intptr_t handle, const MethodInfo* method);
System_String_o* Mono_Net_CFString__ToString (Mono_Net_CFString_o* __this, const MethodInfo* method);
