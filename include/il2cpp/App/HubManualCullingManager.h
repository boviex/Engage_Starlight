#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_HubManualCulling__o* App_HubManualCullingManager__get_StayCullings (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__set_StayCullings (App_HubManualCullingManager_o* __this, System_Collections_Generic_List_HubManualCulling__o* value, const MethodInfo* method);
App_HubManualCulling_o* App_HubManualCullingManager__get_ActiveManualCulling (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__set_ActiveManualCulling (App_HubManualCullingManager_o* __this, App_HubManualCulling_o* value, const MethodInfo* method);
void App_HubManualCullingManager__Start (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__Enter (App_HubManualCullingManager_o* __this, App_HubManualCulling_o* cull, const MethodInfo* method);
void App_HubManualCullingManager__Leave (App_HubManualCullingManager_o* __this, App_HubManualCulling_o* cull, const MethodInfo* method);
void App_HubManualCullingManager__Clear (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__UpdateVisibility (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__UpdateVisibility (App_HubManualCullingManager_o* __this, App_HubManualCulling_o* nextManualCulling, const MethodInfo* method);
void App_HubManualCullingManager__EnableCulling (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__DisableCulling (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager__Push (App_HubManualCullingManager_o* __this, System_String_o* cullingName, const MethodInfo* method);
void App_HubManualCullingManager__Push (App_HubManualCullingManager_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_HubManualCullingManager__Push (App_HubManualCullingManager_o* __this, App_HubManualCulling_o* culling, const MethodInfo* method);
void App_HubManualCullingManager__Pop (App_HubManualCullingManager_o* __this, const MethodInfo* method);
void App_HubManualCullingManager___ctor (App_HubManualCullingManager_o* __this, const MethodInfo* method);
