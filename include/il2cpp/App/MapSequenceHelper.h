#pragma once

#include "il2cpp.h"

bool App_MapSequenceHelper__GetCursorTurnFirst (int32_t force, int32_t* x, int32_t* z, const MethodInfo* method);
bool App_MapSequenceHelper__GetCursorTurnHero (int32_t force, int32_t* x, int32_t* z, const MethodInfo* method);
void App_MapSequenceHelper__WaitCamera (App_ProcInst_o* super, const MethodInfo* method);
void App_MapSequenceHelper__MoveCamera (App_ProcInst_o* super, int32_t x, int32_t z, const MethodInfo* method);
void App_MapSequenceHelper__MoveCamera (App_ProcInst_o* super, float x, float z, const MethodInfo* method);
void App_MapSequenceHelper__WaitCameraLoosely (App_ProcInst_o* super, const MethodInfo* method);
void App_MapSequenceHelper__MoveCameraLoosely (App_ProcInst_o* super, int32_t x, int32_t y, const MethodInfo* method);
bool App_MapSequenceHelper__TryMoveCameraLoosely (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
bool App_MapSequenceHelper__CheckPhaseEnd (const MethodInfo* method);
bool App_MapSequenceHelper__CheckRemovable (App_Unit_o* unit, const MethodInfo* method);
bool App_MapSequenceHelper__CheckRemovableDetail (App_Unit_o* unit, const MethodInfo* method);
void App_MapSequenceHelper__SetRemovable (App_Unit_o* unit, const MethodInfo* method);
bool App_MapSequenceHelper__CheckRemagicable (App_Unit_o* unit, const MethodInfo* method);
void App_MapSequenceHelper__SetRemagicable (App_Unit_o* unit, const MethodInfo* method);
bool App_MapSequenceHelper__CheckRerewarp (App_Unit_o* unit, const MethodInfo* method);
void App_MapSequenceHelper__SetRerewarp (App_Unit_o* unit, const MethodInfo* method);
int32_t App_MapSequenceHelper__GetRouteCost (const MethodInfo* method);
bool App_MapSequenceHelper__IsInsideScreen (App_Unit_o* unit, const MethodInfo* method);
void App_MapSequenceHelper__EngageAttackTelop (App_ProcInst_o* super, const MethodInfo* method);
bool App_MapSequenceHelper__TryGetEngageAttackPair (App_GodData_o** main, App_GodData_o** link, const MethodInfo* method);
void App_MapSequenceHelper___ctor (App_MapSequenceHelper_o* __this, const MethodInfo* method);
void App_MapSequenceHelper___cctor (const MethodInfo* method);
