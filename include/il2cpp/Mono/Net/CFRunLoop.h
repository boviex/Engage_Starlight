#pragma once

#include "il2cpp.h"

void Mono_Net_CFRunLoop__CFRunLoopAddSource (intptr_t rl, intptr_t source, intptr_t mode, const MethodInfo* method);
void Mono_Net_CFRunLoop__CFRunLoopRemoveSource (intptr_t rl, intptr_t source, intptr_t mode, const MethodInfo* method);
int32_t Mono_Net_CFRunLoop__CFRunLoopRunInMode (intptr_t mode, double seconds, bool returnAfterSourceHandled, const MethodInfo* method);
intptr_t Mono_Net_CFRunLoop__CFRunLoopGetCurrent (const MethodInfo* method);
void Mono_Net_CFRunLoop__CFRunLoopStop (intptr_t rl, const MethodInfo* method);
void Mono_Net_CFRunLoop___ctor (Mono_Net_CFRunLoop_o* __this, intptr_t handle, bool own, const MethodInfo* method);
Mono_Net_CFRunLoop_o* Mono_Net_CFRunLoop__get_CurrentRunLoop (const MethodInfo* method);
void Mono_Net_CFRunLoop__AddSource (Mono_Net_CFRunLoop_o* __this, intptr_t source, Mono_Net_CFString_o* mode, const MethodInfo* method);
void Mono_Net_CFRunLoop__RemoveSource (Mono_Net_CFRunLoop_o* __this, intptr_t source, Mono_Net_CFString_o* mode, const MethodInfo* method);
int32_t Mono_Net_CFRunLoop__RunInMode (Mono_Net_CFRunLoop_o* __this, Mono_Net_CFString_o* mode, double seconds, bool returnAfterSourceHandled, const MethodInfo* method);
void Mono_Net_CFRunLoop__Stop (Mono_Net_CFRunLoop_o* __this, const MethodInfo* method);
