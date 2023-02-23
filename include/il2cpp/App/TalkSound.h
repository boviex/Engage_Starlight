#pragma once

#include "il2cpp.h"

System_String_o* App_TalkSound__GetPersonVoice (App_TalkSound_o* __this, const MethodInfo* method);
void App_TalkSound__Init (App_TalkSound_o* __this, System_String_o* mid, const MethodInfo* method);
bool App_TalkSound__TickBefore (App_TalkSound_o* __this, App_ProcInst_o* parentProc, const MethodInfo* method);
bool App_TalkSound__TickAfter (App_TalkSound_o* __this, App_ProcInst_o* parentProc, const MethodInfo* method);
void App_TalkSound__PostTalkStartSoundEvent (App_TalkSound_o* __this, const MethodInfo* method);
void App_TalkSound__PostTalkEndSoundEvent (App_TalkSound_o* __this, const MethodInfo* method);
System_String_array* App_TalkSound__GetArgs (App_TalkSound_o* __this, System_String_o* line, const MethodInfo* method);
int32_t App_TalkSound__GetSoundType (App_TalkSound_o* __this, System_String_array* args, const MethodInfo* method);
bool App_TalkSound__ExecLine (App_TalkSound_o* __this, System_String_o* line, App_ProcInst_o* parentProc, const MethodInfo* method);
System_String_o* App_TalkSound__GetLine (App_TalkSound_o* __this, System_String_o* str, System_String_o** line, const MethodInfo* method);
void App_TalkSound__TryPlayReservedVoice (App_TalkSound_o* __this, Combat_Character_o* character, const MethodInfo* method);
bool App_TalkSound__TryPlayReservedTalkVoice (App_TalkSound_o* __this, Combat_Character_o* character, const MethodInfo* method);
void App_TalkSound__TryPlayReservedPersonVoice (App_TalkSound_o* __this, Combat_Character_o* character, const MethodInfo* method);
void App_TalkSound__StopAllVoice (App_TalkSound_o* __this, const MethodInfo* method);
void App_TalkSound__OnDrawMonitor (App_TalkSound_o* __this, App_DebugMonitor_o* _monitor, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_TalkSound__MessFileNameToSoundBankName (System_String_o* messFileName, const MethodInfo* method);
System_String_o* App_TalkSound__GetRelianceSoundBankName (int32_t patchIndex, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_TalkSound__GetRelianceSoundBankNameAll (const MethodInfo* method);
System_String_o* App_TalkSound__GetGodRelianceSoundBankName (int32_t patchIndex, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_TalkSound__GetGodRelianceSoundBankNameAll (const MethodInfo* method);
System_String_o* App_TalkSound__GetHubCommonSoundBankName (int32_t patchIndex, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_TalkSound__GetHubCommonSoundBankNameAll (const MethodInfo* method);
System_String_o* App_TalkSound__MidToSoundEvent (System_String_o* mid, const MethodInfo* method);
int32_t App_TalkSound__GetInt (System_String_o* str, const MethodInfo* method);
float App_TalkSound__GetFloat (System_String_o* str, const MethodInfo* method);
int32_t App_TalkSound__GetFadeSpeedMsec (System_String_o* str, const MethodInfo* method);
int32_t App_TalkSound__GetForceType (System_String_o* str, const MethodInfo* method);
bool App_TalkSound__TryExecAction (App_TalkSound_o* __this, System_String_array* args, const MethodInfo* method);
void App_TalkSound___ctor (App_TalkSound_o* __this, const MethodInfo* method);
