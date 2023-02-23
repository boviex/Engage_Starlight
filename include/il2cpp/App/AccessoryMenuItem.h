#pragma once

#include "il2cpp.h"

App_AccessoryData_o* App_AccessoryMenuItem__get_m_AccessoryData (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__set_m_AccessoryData (App_AccessoryMenuItem_o* __this, App_AccessoryData_o* value, const MethodInfo* method);
int32_t App_AccessoryMenuItem__get_m_AccessoryKind (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__set_m_AccessoryKind (App_AccessoryMenuItem_o* __this, int32_t value, const MethodInfo* method);
bool App_AccessoryMenuItem__get_m_Decided (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__set_m_Decided (App_AccessoryMenuItem_o* __this, bool value, const MethodInfo* method);
int32_t App_AccessoryMenuItem__get_m_Female (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__set_m_Female (App_AccessoryMenuItem_o* __this, int32_t value, const MethodInfo* method);
void App_AccessoryMenuItem___ctor (App_AccessoryMenuItem_o* __this, App_AccessoryData_o* accessoryData, int32_t accessoryKind, bool decided, bool alwaysActive, int32_t female, App_AccessoryMenuItem_SelectEventHandler_o* selectEventHandler, App_AccessoryMenuItem_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* App_AccessoryMenuItem__GetName (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
int32_t App_AccessoryMenuItem__BuildAttribute (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__OnBuild (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__OnBuildMenuItemContent (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__SetData (App_AccessoryMenuItem_o* __this, App_AccessoryData_o* accessoryData, int32_t accessoryKind, int32_t female, const MethodInfo* method);
void App_AccessoryMenuItem__SetInitialColor (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
UnityEngine_RectTransform_o* App_AccessoryMenuItem__GetRectTransform (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__SetDecide (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__UnsetDecide (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__OnSelect (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
void App_AccessoryMenuItem__OnCursorMoveEnd (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
int32_t App_AccessoryMenuItem__ACall (App_AccessoryMenuItem_o* __this, const MethodInfo* method);
