#pragma once

#include "il2cpp.h"

System_String_o* App_SoundSystem_LipSyncDataFile__GetLipSyncFilePath (System_String_o* fileName, int32_t patchIndex, const MethodInfo* method);
System_String_o* App_SoundSystem_LipSyncDataFile__GetLipSyncFileRelativePath (System_String_o* fileName, const MethodInfo* method);
void App_SoundSystem_LipSyncDataFile___ctor (App_SoundSystem_LipSyncDataFile_o* __this, const MethodInfo* method);
int32_t App_SoundSystem_LipSyncDataFile__GetLipSyncDataCount (App_SoundSystem_LipSyncDataFile_o* __this, const MethodInfo* method);
App_SoundSystem_LipSyncData_o* App_SoundSystem_LipSyncDataFile__GetLipSyncData (App_SoundSystem_LipSyncDataFile_o* __this, int32_t index, const MethodInfo* method);
void App_SoundSystem_LipSyncDataFile__LoadAsync (App_SoundSystem_LipSyncDataFile_o* __this, System_String_o* fileName, const MethodInfo* method);
bool App_SoundSystem_LipSyncDataFile__ExpandFileData (App_SoundSystem_LipSyncDataFile_o* __this, const MethodInfo* method);
void App_SoundSystem_LipSyncDataFile__Unload (App_SoundSystem_LipSyncDataFile_o* __this, const MethodInfo* method);
