#pragma once

#include "il2cpp.h"

void App_SoundSystem_ResultSoundLoad___ctor (App_SoundSystem_ResultSoundLoad_o* __this, const MethodInfo* method);
void App_SoundSystem_ResultSoundLoad__SetStatus (App_SoundSystem_ResultSoundLoad_o* __this, int32_t status, const MethodInfo* method);
bool App_SoundSystem_ResultSoundLoad__IsLoading (App_SoundSystem_ResultSoundLoad_o* __this, const MethodInfo* method);
bool App_SoundSystem_ResultSoundLoad__IsLoadSuccess (App_SoundSystem_ResultSoundLoad_o* __this, const MethodInfo* method);
bool App_SoundSystem_ResultSoundLoad__IsLoadFault (App_SoundSystem_ResultSoundLoad_o* __this, const MethodInfo* method);
void App_SoundSystem_ResultSoundLoad__LoadAsyncCallback (uint32_t bankID, intptr_t pInMemoryBankPtr, int32_t loadResult, Il2CppObject* cookie, const MethodInfo* method);
