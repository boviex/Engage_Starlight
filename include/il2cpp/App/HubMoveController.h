#pragma once

#include "il2cpp.h"

bool App_HubMoveController__get_IsPause (App_HubMoveController_o* __this, const MethodInfo* method);
void App_HubMoveController__set_IsPause (App_HubMoveController_o* __this, bool value, const MethodInfo* method);
void App_HubMoveController___ctor (App_HubMoveController_o* __this, App_HubUnitController_o* unit, App_StructDataArrayList_HubMoveData__o* moveData, const MethodInfo* method);
void App_HubMoveController__Update (App_HubMoveController_o* __this, const MethodInfo* method);
void App_HubMoveController__Pause (App_HubMoveController_o* __this, bool force, const MethodInfo* method);
void App_HubMoveController__Resume (App_HubMoveController_o* __this, const MethodInfo* method);
App_HubMoveState_o* App_HubMoveController__SelectState (App_HubMoveController_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_HubMoveController__TryGetPosition (App_HubMoveController_o* __this, System_String_o* locatorName, const MethodInfo* method);
App_HubMoveState_o* App_HubMoveController__GetState (App_HubMoveController_o* __this, App_HubMoveData_o* data, const MethodInfo* method);
void App_HubMoveController__OnDrawGizmos (App_HubMoveController_o* __this, const MethodInfo* method);
