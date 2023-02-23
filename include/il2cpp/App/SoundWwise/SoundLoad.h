#pragma once

#include "il2cpp.h"

void App_SoundWwise_SoundLoad__Load (App_SoundWwise_SoundLoad_o* __this, System_String_o* name, const MethodInfo* method);
void App_SoundWwise_SoundLoad__LoadAsync (App_SoundWwise_SoundLoad_o* __this, System_String_o* name, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__IsLoading (App_SoundWwise_SoundLoad_o* __this, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__IsLoading (App_SoundWwise_SoundLoad_o* __this, System_String_o* name, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__IsLoaded (App_SoundWwise_SoundLoad_o* __this, System_String_o* name, const MethodInfo* method);
void App_SoundWwise_SoundLoad__Unload (App_SoundWwise_SoundLoad_o* __this, System_String_o* name, const MethodInfo* method);
void App_SoundWwise_SoundLoad__UnloadAll (App_SoundWwise_SoundLoad_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundLoad__ReloadBySetLanguage (App_SoundWwise_SoundLoad_o* __this, int32_t language, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareEvent (App_SoundWwise_SoundLoad_o* __this, System_String_o* eventName, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareEvent (App_SoundWwise_SoundLoad_o* __this, System_String_array* eventNameArray, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareEventAsync (App_SoundWwise_SoundLoad_o* __this, System_String_o* eventName, App_SoundSystem_ResultSoundLoad_o** resultSoundLoad, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareEventAsync (App_SoundWwise_SoundLoad_o* __this, System_String_array* eventNameArray, App_SoundSystem_ResultSoundLoad_o** resultSoundLoad, const MethodInfo* method);
void App_SoundWwise_SoundLoad__UnprepareEvent (App_SoundWwise_SoundLoad_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_SoundWwise_SoundLoad__UnprepareEvent (App_SoundWwise_SoundLoad_o* __this, System_String_array* eventNameArray, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareSwitch (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_o* switchName, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareSwitch (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_array* switchNameArray, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareSwitchAsync (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_o* switchName, App_SoundSystem_ResultSoundLoad_o** resultSoundLoad, const MethodInfo* method);
bool App_SoundWwise_SoundLoad__PrepareSwitchAsync (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_array* switchNameArray, App_SoundSystem_ResultSoundLoad_o** resultSoundLoad, const MethodInfo* method);
void App_SoundWwise_SoundLoad__UnprepareSwitch (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_o* switchName, const MethodInfo* method);
void App_SoundWwise_SoundLoad__UnprepareSwitch (App_SoundWwise_SoundLoad_o* __this, System_String_o* switchGroupName, System_String_array* switchNameArray, const MethodInfo* method);
void App_SoundWwise_SoundLoad__ClearPrepare (App_SoundWwise_SoundLoad_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundLoad___ctor (App_SoundWwise_SoundLoad_o* __this, const MethodInfo* method);
