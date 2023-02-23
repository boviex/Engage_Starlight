#pragma once

#include "il2cpp.h"

App_RingData_o* App_RingMenuItem__get_m_RingData (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_RingData (App_RingMenuItem_o* __this, App_RingData_o* value, const MethodInfo* method);
bool App_RingMenuItem__get_m_IsEquipped (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_IsEquipped (App_RingMenuItem_o* __this, bool value, const MethodInfo* method);
int32_t App_RingMenuItem__get_m_Count (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_Count (App_RingMenuItem_o* __this, int32_t value, const MethodInfo* method);
int32_t App_RingMenuItem__get_m_NeededCountToNext (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_NeededCountToNext (App_RingMenuItem_o* __this, int32_t value, const MethodInfo* method);
int32_t App_RingMenuItem__get_m_NeededPieceOfBondsToNext (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_NeededPieceOfBondsToNext (App_RingMenuItem_o* __this, int32_t value, const MethodInfo* method);
bool App_RingMenuItem__get_m_IsEnoughCount (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_IsEnoughCount (App_RingMenuItem_o* __this, bool value, const MethodInfo* method);
bool App_RingMenuItem__get_m_IsEnoughPieceOfBond (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__set_m_IsEnoughPieceOfBond (App_RingMenuItem_o* __this, bool value, const MethodInfo* method);
bool App_RingMenuItem__IsEmpty (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem___ctor (App_RingMenuItem_o* __this, App_RingData_o* ringData, bool isEquipped, int32_t count, App_RingMenuItem_SelectEventHandler_o* selectEventHandler, App_RingMenuItem_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* App_RingMenuItem__GetName (App_RingMenuItem_o* __this, const MethodInfo* method);
int32_t App_RingMenuItem__BuildAttribute (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__OnBuild (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__OnBuildMenuItemContent (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__SetInitialColor (App_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingMenuItem__OnSelect (App_RingMenuItem_o* __this, const MethodInfo* method);
int32_t App_RingMenuItem__ACall (App_RingMenuItem_o* __this, const MethodInfo* method);
