#pragma once

#include "il2cpp.h"

bool Net_Nex__IsEnable (const MethodInfo* method);
void Net_Nex__TryInitialize (const MethodInfo* method);
void Net_Nex__TryCleanup (const MethodInfo* method);
int32_t Net_Nex__InitializeNexAsync (NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
void Net_Nex__CleanupNex (const MethodInfo* method);
bool Net_Nex__IsInitializedNex (const MethodInfo* method);
bool Net_Nex__IsNetworkConnected (const MethodInfo* method);
int32_t Net_Nex__GetAsyncCallCount (const MethodInfo* method);
bool Net_Nex__IsRunningAutoLogout (const MethodInfo* method);
void Net_Nex__KeepAliveOn (const MethodInfo* method);
void Net_Nex__KeepAliveOff (const MethodInfo* method);
