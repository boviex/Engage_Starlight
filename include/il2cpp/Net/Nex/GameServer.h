#pragma once

#include "il2cpp.h"

void Net_Nex_GameServer__TryInitialize (const MethodInfo* method);
void Net_Nex_GameServer__TryCleanup (const MethodInfo* method);
int32_t Net_Nex_GameServer__LoginAsync (NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_GameServer__LogoutAsync (NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
nn_Result_o Net_Nex_GameServer__IsConnected (const MethodInfo* method);
uint64_t Net_Nex_GameServer__get_PrincipalId (const MethodInfo* method);
intptr_t Net_Nex_GameServer__get_NgsFacadePtr (const MethodInfo* method);
