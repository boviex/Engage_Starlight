#pragma once

#include "il2cpp.h"

void App_Proc__Initialize (const MethodInfo* method);
void App_Proc__Exec (int32_t type, const MethodInfo* method);
void App_Proc__Sweep (const MethodInfo* method);
App_ProcInst_o* App_Proc__FindByName (System_String_o* name, const MethodInfo* method);
void App_Proc__KillByName (System_String_o* name, const MethodInfo* method);
void App_Proc__KillByBind (App_ProcInst_o* super, const MethodInfo* method);
Combat_ClassChangeSequence_o* App_Proc__FindByClass_ClassChangeSequence_ (const MethodInfo_2054430* method);
Combat_CombatSubspaceBack_o* App_Proc__FindByClass_CombatSubspaceBack_ (const MethodInfo_2054430* method);
Combat_EngageSequence_o* App_Proc__FindByClass_EngageSequence_ (const MethodInfo_2054430* method);
App_JobIntroSequence_o* App_Proc__FindByClass_JobIntroSequence_ (const MethodInfo_2054430* method);
App_LaterTalkSequence_o* App_Proc__FindByClass_LaterTalkSequence_ (const MethodInfo_2054430* method);
App_MyRoomMovieMenu_o* App_Proc__FindByClass_MyRoomMovieMenu_ (const MethodInfo_2054430* method);
Il2CppObject* App_Proc__FindByClass_object_ (const MethodInfo_2054430* method);
App_RewindMenu_o* App_Proc__FindByClass_RewindMenu_ (const MethodInfo_2054430* method);
Chara_UnitInfoSequence_o* App_Proc__FindByClass_UnitInfoSequence_ (const MethodInfo_2054430* method);
App_Talk3D_TalkCharacterManager_ProcFadeInCharacter_o* App_Proc__FindByClass_TalkCharacterManager_ProcFadeInCharacter_ (const MethodInfo_2054430* method);
App_Talk3D_TalkCharacterManager_ProcFadeOutCharacter_o* App_Proc__FindByClass_TalkCharacterManager_ProcFadeOutCharacter_ (const MethodInfo_2054430* method);
void App_Proc__KillByClass_ConsoleManager_ (const MethodInfo_2054640* method);
void App_Proc__KillByClass_object_ (const MethodInfo_2054640* method);
bool App_Proc__CallbackByClass_object_ (App_Proc_ProcCallback_T__o* callback, const MethodInfo_20540C0* method);
App_ProcInst_o* App_Proc__GetRoot (int32_t type, const MethodInfo* method);
App_ProcInst_o* App_Proc__GetRootHi (const MethodInfo* method);
App_ProcInst_o* App_Proc__GetRootDef (const MethodInfo* method);
App_ProcInst_o* App_Proc__GetRootLow (const MethodInfo* method);
App_ProcDesc_o* App_Proc__End (const MethodInfo* method);
App_ProcDesc_o* App_Proc__Halt (const MethodInfo* method);
App_ProcDesc_o* App_Proc__Jump (int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Jump (System_String_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Label (int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Label (System_String_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Jump (System_ValueType_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Label (System_ValueType_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Push (int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Push (System_ValueType_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Pop (const MethodInfo* method);
App_ProcDesc_o* App_Proc__Yield (const MethodInfo* method);
App_ProcDesc_o* App_Proc__Call (App_ProcVoidFunction_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Call (App_ProcVoidMethod_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Call (System_Action_ProcInst__string__o* function, System_String_o* arg, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Call (System_Action_string__o* function, System_String_o* arg, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Call_Int32Enum_ (System_Action_ProcInst__T__o* function, int32_t arg, const MethodInfo_2053FD0* method);
App_ProcDesc_o* App_Proc__Call_float_ (System_Action_ProcInst__T__o* function, float arg, const MethodInfo_2054040* method);
App_ProcDesc_o* App_Proc__Call_SaveDataMenuSequence_Mode_ (System_Action_ProcInst__T__o* function, int32_t arg, const MethodInfo_2053FD0* method);
App_ProcDesc_o* App_Proc__Call_bool_ (System_Action_T__o* function, bool arg, const MethodInfo_2053E80* method);
App_ProcDesc_o* App_Proc__Call_int_ (System_Action_T__o* function, int32_t arg, const MethodInfo_2053EF0* method);
App_ProcDesc_o* App_Proc__Call_Int32Enum_ (System_Action_T__o* function, int32_t arg, const MethodInfo_2053F60* method);
App_ProcDesc_o* App_Proc__Call_GameSound_FadeSpeedType_ (System_Action_T__o* function, int32_t arg, const MethodInfo_2053F60* method);
App_ProcDesc_o* App_Proc__Call_Versus_CheckDataType_ (System_Action_T__o* function, int32_t arg, const MethodInfo_2053F60* method);
App_ProcDesc_o* App_Proc__Tick (App_ProcVoidFunction_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Tick (App_ProcVoidMethod_o* method, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Tick (App_ProcEnumMethod_o* method, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitTime (float second, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitWhileTrue (App_ProcBoolFunction_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitWhileFalse (App_ProcBoolFunction_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitWhileTrue (App_ProcBoolMethod_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitWhileFalse (App_ProcBoolMethod_o* function, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpTrue (App_ProcBoolFunction_o* function, int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpTrue (App_ProcBoolFunction_o* function, System_String_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpFalse (App_ProcBoolFunction_o* function, int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpFalse (App_ProcBoolFunction_o* function, System_String_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpTrue (App_ProcBoolMethod_o* function, int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpFalse (App_ProcBoolMethod_o* function, int32_t label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpTrue (App_ProcBoolMethod_o* method, System_ValueType_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__JumpFalse (App_ProcBoolMethod_o* method, System_ValueType_o* label, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Persistent (App_ProcVoidMethod_o* method, const MethodInfo* method);
App_ProcDesc_o* App_Proc__PersistentNull (const MethodInfo* method);
App_ProcDesc_o* App_Proc__Sound (System_String_o* eventName, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Log (System_String_o* log, const MethodInfo* method);
App_ProcDesc_o* App_Proc__Vsync (int32_t mode, const MethodInfo* method);
App_ProcDesc_o* App_Proc__WaitIsLoading (const MethodInfo* method);
Il2CppObject* App_Proc__CreateNoDesc_object_ (App_ProcInst_o* super, const MethodInfo_20543F0* method);
Il2CppObject* App_Proc__CreateBindNoDesc_object_ (App_ProcInst_o* super, const MethodInfo_20543B0* method);
App_Talk3D_TalkBind_o* App_Proc__CreateBindNoDesc_TalkBind_ (App_ProcInst_o* super, const MethodInfo_20543B0* method);
App_TalkSound_WaitSE_o* App_Proc__CreateBindNoDesc_TalkSound_WaitSE_ (App_ProcInst_o* super, const MethodInfo_20543B0* method);
System_String_o* App_Proc__GetDebugLog (App_ProcInst_o* inst, const MethodInfo* method);
void App_Proc___ctor (App_Proc_o* __this, const MethodInfo* method);
void App_Proc___cctor (const MethodInfo* method);
