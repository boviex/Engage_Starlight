#pragma once

#include "il2cpp.h"

void App_EventSequence__OnCreate (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__OnDispose (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__OnShutdown (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__TryBindUI (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__TryUnbindUI (App_EventSequence_o* __this, const MethodInfo* method);
App_EventSequence_Coroutine_o* App_EventSequence__GetCurrent (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__Tick (App_EventSequence_o* __this, const MethodInfo* method);
void App_EventSequence__YieldCoroutine (App_EventSequence_o* __this, const MethodInfo* method);
App_EventSequence_o* App_EventSequence__AddCoroutine (App_EventSequence_o* __this, MoonSharp_Interpreter_DynValue_o* func, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
App_EventSequence_o* App_EventSequence__JumpCoroutine (App_EventSequence_o* __this, MoonSharp_Interpreter_DynValue_o* func, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
System_String_o* App_EventSequence__GetDebugLog (App_EventSequence_o* __this, const MethodInfo* method);
System_Collections_Generic_List_EventSequence_Coroutine__o* App_EventSequence__GetCoroutines (const MethodInfo* method);
int32_t App_EventSequence__GetStackCount (const MethodInfo* method);
System_String_o* App_EventSequence__GetStackFunction (const MethodInfo* method);
int32_t App_EventSequence__GetCurrentAddress (const MethodInfo* method);
void App_EventSequence__DummyCall (App_ProcInst_o* p, const MethodInfo* method);
bool App_EventSequence__TryCreateBind (App_ProcInst_o* super, MoonSharp_Interpreter_DynValue_o* func, App_ProcVoidFunction_o* preCall, App_ProcVoidFunction_o* postCall, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
void App_EventSequence__TryCreateBind (App_ProcInst_o* super, App_MapInspector_o* inspector, const MethodInfo* method);
bool App_EventSequence__IsBindingUI (const MethodInfo* method);
bool App_EventSequence__TryCreateBind (App_ProcInst_o* super, System_String_o* name, const MethodInfo* method);
bool App_EventSequence__Turn (App_ProcInst_o* super, int32_t turn, int32_t force, const MethodInfo* method);
bool App_EventSequence__TurnAfter (App_ProcInst_o* super, int32_t turn, int32_t force, const MethodInfo* method);
bool App_EventSequence__TurnEnd (App_ProcInst_o* super, int32_t turn, int32_t force, const MethodInfo* method);
bool App_EventSequence__Area (App_ProcInst_o* super, App_Unit_o* unit, int32_t x, int32_t z, int32_t force, const MethodInfo* method);
bool App_EventSequence__Die (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__ReviveBefore (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__ReviveAfter (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__Fixed (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__Talk (App_ProcInst_o* super, App_Unit_o* from, App_Unit_o* to, const MethodInfo* method);
bool App_EventSequence__HelpSpot (App_ProcInst_o* super, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_EventSequence__BattleBefore (App_ProcInst_o* super, App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
bool App_EventSequence__BattleTalk (App_ProcInst_o* super, App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
bool App_EventSequence__BattleAfter (App_ProcInst_o* super, App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
bool App_EventSequence__Pickup (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__UnitCommandPrepare (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__UnitCommandInterrupt (App_ProcInst_o* super, App_Unit_o* unit, System_String_o* command, const MethodInfo* method);
bool App_EventSequence__EngageBefore (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__EngageAfter (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__TargetSelect (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_EventSequence__Poke (App_ProcInst_o* super, int32_t kind, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_EventSequence__Poke (App_ProcInst_o* super, App_PokeInspector_o* inspector, const MethodInfo* method);
void App_EventSequence__Startup (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__Cleanup (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__Main (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__Opening (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__Ending (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__GameOver (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__MapDispos (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__MapOpening (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence__MapEnding (App_ProcInst_o* super, const MethodInfo* method);
void App_EventSequence___ctor (App_EventSequence_o* __this, const MethodInfo* method);