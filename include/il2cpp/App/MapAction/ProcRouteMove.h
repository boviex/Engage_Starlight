#pragma once

#include "il2cpp.h"

void App_MapAction_ProcRouteMove___ctor (App_MapAction_ProcRouteMove_o* __this, App_UnitActor_o* actor, App_Dir_Type_array* routes, int32_t fromX, int32_t fromZ, int32_t moveFlag, const MethodInfo* method);
void App_MapAction_ProcRouteMove__OnCreate (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
void App_MapAction_ProcRouteMove__OnDispose (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
void App_MapAction_ProcRouteMove__OnTick (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
int32_t App_MapAction_ProcRouteMove__GetTimeScale (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
bool App_MapAction_ProcRouteMove__IsPass (App_MapAction_ProcRouteMove_o* __this, int32_t x, int32_t z, App_Dir_Type_array* routes, const MethodInfo* method);
bool App_MapAction_ProcRouteMove__IsStay (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
void App_MapAction_ProcRouteMove__InitRoute (App_MapAction_ProcRouteMove_o* __this, App_Dir_Type_array* routes, const MethodInfo* method);
void App_MapAction_ProcRouteMove__InitPosition (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
bool App_MapAction_ProcRouteMove__CalcPosition (App_MapAction_ProcRouteMove_o* __this, const MethodInfo* method);
int32_t App_MapAction_ProcRouteMove__MoveRoute (App_MapAction_ProcRouteMove_o* __this, float speed, const MethodInfo* method);
void App_MapAction_ProcRouteMove__Create (App_ProcInst_o* super, App_UnitActor_o* actor, App_Dir_Type_array* routes, int32_t fromX, int32_t fromZ, int32_t moveFlag, const MethodInfo* method);
