#pragma once

#include "il2cpp.h"

System_String_o* App_HubAccessoryRoom__get_SceneName (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
System_String_o* App_HubAccessoryRoom__get_ReturnSceneName (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__SetUnit (App_Unit_o* baseUnit, App_AccessoryData_o* accessoryData, bool isDelayLoad, bool isAmiibo, const MethodInfo* method);
void App_HubAccessoryRoom__SetViewMode (int32_t position, const MethodInfo* method);
void App_HubAccessoryRoom___ctor (App_HubAccessoryRoom_o* __this, int32_t shop, const MethodInfo* method);
void App_HubAccessoryRoom__AdditiveScene (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__OpenTitle (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__Init (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__UnAdditiveScene (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__Exit (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__ExitOther (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__ExitAfter (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
bool App_HubAccessoryRoom__IsCharacterLoading (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__Main (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
App_HubAccessoryRoomCamera_o* App_HubAccessoryRoom__get_CameraPos (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__set_CameraPos (App_HubAccessoryRoom_o* __this, App_HubAccessoryRoomCamera_o* value, const MethodInfo* method);
void App_HubAccessoryRoom__SetUnitCore (App_HubAccessoryRoom_o* __this, App_Unit_o* unit, System_Nullable_AccessoryData_Kinds__o target, bool isDelayLoad, const MethodInfo* method);
void App_HubAccessoryRoom__LoadCharacter (App_HubAccessoryRoom_o* __this, Combat_CharacterAppearance_o* appearance, System_String_o* pid, const MethodInfo* method);
void App_HubAccessoryRoom__DestroyCurrentChar (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__SetViewModeCore (App_HubAccessoryRoom_o* __this, int32_t mode, const MethodInfo* method);
void App_HubAccessoryRoom__OnShutdown (App_HubAccessoryRoom_o* __this, const MethodInfo* method);
void App_HubAccessoryRoom__CreateBind (App_ProcInst_o* super, int32_t shop, const MethodInfo* method);
