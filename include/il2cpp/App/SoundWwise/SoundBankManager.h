#pragma once

#include "il2cpp.h"

void App_SoundWwise_SoundBankManager__Create (const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__LoadBank (System_String_o* name, const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__LoadBankAsync (System_String_o* name, const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__IsLoading (const MethodInfo* method);
void App_SoundWwise_SoundBankManager__UnloadBank (System_String_o* name, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__UnloadAllBanks (const MethodInfo* method);
void App_SoundWwise_SoundBankManager__Cleanup (const MethodInfo* method);
void App_SoundWwise_SoundBankManager__ReloadBankBySetLanguage (int32_t language, const MethodInfo* method);
int32_t App_SoundWwise_SoundBankManager__GetState (System_String_o* name, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__OnTick (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__OnDispose (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__LoadBankImpl (App_SoundWwise_SoundBankManager_o* __this, System_String_o* bankName, const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__LoadBankAsyncImpl (App_SoundWwise_SoundBankManager_o* __this, System_String_o* bankName, const MethodInfo* method);
bool App_SoundWwise_SoundBankManager__IsLoadingImpl (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__UnloadBankImpl (App_SoundWwise_SoundBankManager_o* __this, System_String_o* bankName, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__UnloadBankImpl (App_SoundWwise_SoundBankManager_o* __this, App_SoundWwise_SoundBankManager_BankHandle_o* handle, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__UnloadAllBanksImpl (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__CleanupImpl (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundBankManager__ReloadImpl (App_SoundWwise_SoundBankManager_o* __this, int32_t language, const MethodInfo* method);
int32_t App_SoundWwise_SoundBankManager__GetStateImpl (App_SoundWwise_SoundBankManager_o* __this, System_String_o* bankName, const MethodInfo* method);
void App_SoundWwise_SoundBankManager___ctor (App_SoundWwise_SoundBankManager_o* __this, const MethodInfo* method);
