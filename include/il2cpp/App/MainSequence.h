#pragma once

#include "il2cpp.h"

void App_MainSequence__JumpToLabel (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__JumpToLabelNoGCCollect (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__JumpToLabelImpl (App_MainSequence_o* __this, bool isGCCollect, const MethodInfo* method);
App_ProcInst_o* App_MainSequence__GetCurrent (App_ProcInst_o* super, const MethodInfo* method);
App_ProcInst_o* App_MainSequence__GetCurrent (const MethodInfo* method);
void App_MainSequence__SetJumpSeq (int32_t label, const MethodInfo* method);
void App_MainSequence__Initialize (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__PostInitialize (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__LoadPublic (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__LoadResource (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__PostLoadResource (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__BeginSilentVolume (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__EndSilentVolume (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__OnPersistent (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__BranchStart (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__BranchChapterStart (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__TryJumpToKizuna (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__TryJumpToContinueMap (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__TryJumpToHub (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__TryJumpToGmap (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__TryJumpToNextChapter (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__HubToSavePosition (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__GameReset (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__AutoSave (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SetSaveDataLoadTarget (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataLoad (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataLoadResult (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataRelease (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataNormalize (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataBranchFirst (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataBranchSecond (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataLoadFailed (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__SaveDataVersionFailed (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__DataLoadFailed (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__DeleteTemporary (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__GameSoundReset (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__DumpMemory (App_MainSequence_o* __this, int32_t label, const MethodInfo* method);
void App_MainSequence__DumpMemory (App_MainSequence_o* __this, System_String_o* name, const MethodInfo* method);
void App_MainSequence__LoadLogo (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__ShowLogo (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__ShowIcon (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence__Create (const MethodInfo* method);
bool App_MainSequence__IsInitialized (const MethodInfo* method);
void App_MainSequence___ctor (App_MainSequence_o* __this, const MethodInfo* method);
void App_MainSequence___cctor (const MethodInfo* method);
