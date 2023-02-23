#pragma once

#include "il2cpp.h"

void App_LoadingLogo__Awake (App_LoadingLogo_o* __this, const MethodInfo* method);
void App_LoadingLogo__Start (App_LoadingLogo_o* __this, const MethodInfo* method);
void App_LoadingLogo__LateUpdate (App_LoadingLogo_o* __this, const MethodInfo* method);
App_TipsData_o* App_LoadingLogo__GetNextTipsData (App_TipsData_o* now, int32_t mode, const MethodInfo* method);
void App_LoadingLogo__SetText (App_LoadingLogo_o* __this, TMPro_TextMeshProUGUI_o* textMesh, System_String_o* text, const MethodInfo* method);
void App_LoadingLogo__SetTipsData (App_LoadingLogo_o* __this, App_TipsData_o* tipsData, const MethodInfo* method);
void App_LoadingLogo__Clear (App_LoadingLogo_o* __this, const MethodInfo* method);
void App_LoadingLogo__ShowImpl (App_LoadingLogo_o* __this, int32_t mode, const MethodInfo* method);
void App_LoadingLogo__ShowImpl (App_LoadingLogo_o* __this, App_Unit_o* heroUnit, App_Unit_o* eatUnit0, App_Unit_o* eatUnit1, const MethodInfo* method);
void App_LoadingLogo__ShowImpl (App_LoadingLogo_o* __this, App_TipsData_o* tipsData, App_Unit_o* heroUnit, App_Unit_o* eatUnit0, App_Unit_o* eatUnit1, const MethodInfo* method);
bool App_LoadingLogo__SetupUnitDot (App_LoadingLogo_o* __this, int32_t iconIndex, App_Unit_o* unit, const MethodInfo* method);
bool App_LoadingLogo__SetupUnitDot (App_LoadingLogo_o* __this, int32_t iconIndex, App_PersonData_o* person, bool isFemale, const MethodInfo* method);
void App_LoadingLogo__HideImpl (App_LoadingLogo_o* __this, const MethodInfo* method);
void App_LoadingLogo__Commit (App_LoadingLogo_o* __this, const MethodInfo* method);
void App_LoadingLogo__Show (int32_t mode, const MethodInfo* method);
void App_LoadingLogo__Show (App_TipsData_o* tipsData, const MethodInfo* method);
void App_LoadingLogo__Show (App_Unit_o* heroUnit, App_Unit_o* eatUnit0, App_Unit_o* eatUnit1, const MethodInfo* method);
void App_LoadingLogo__Hide (const MethodInfo* method);
void App_LoadingLogo___ctor (App_LoadingLogo_o* __this, const MethodInfo* method);
