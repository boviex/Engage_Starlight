#pragma once

#include "il2cpp.h"

int32_t App_MascotAccChangeMenu__get_CurrentPartsType (App_MascotAccChangeMenu_o* __this, const MethodInfo* method);
void App_MascotAccChangeMenu__set_CurrentPartsType (App_MascotAccChangeMenu_o* __this, int32_t value, const MethodInfo* method);
void App_MascotAccChangeMenu___ctor (App_MascotAccChangeMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, const MethodInfo* method);
void App_MascotAccChangeMenu__CreateBind (App_ProcInst_o* super, int32_t type, const MethodInfo* method);
System_String_o* App_MascotAccChangeMenu__GetName (App_MascotAccChangeMenu_o* __this, const MethodInfo* method);
void App_MascotAccChangeMenu__OnClose (App_MascotAccChangeMenu_o* __this, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_MascotAccChangeMenu__CreateMenuList (int32_t type, const MethodInfo* method);
bool App_MascotAccChangeMenu__ChangePartsType (App_MascotAccChangeMenu_o* __this, int32_t directional, bool isTrigger, const MethodInfo* method);
void App_MascotAccChangeMenu__UpdatePartsType (App_MascotAccChangeMenu_o* __this, const MethodInfo* method);
void App_MascotAccChangeMenu__UpdateEquipAcc (App_MascotAccChangeMenu_o* __this, App_MascotAccChangeMenuItem_o* item, const MethodInfo* method);
void App_MascotAccChangeMenu__RebuildMenu (App_MascotAccChangeMenu_o* __this, int32_t type, const MethodInfo* method);
void App_MascotAccChangeMenu__KeyLeft (App_MascotAccChangeMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_MascotAccChangeMenu__KeyRight (App_MascotAccChangeMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_MascotAccChangeMenu__SetHelpText (App_MascotAccChangeMenu_o* __this, App_MascotAccData_o* mascotData, App_AccessoryData_o* accData, const MethodInfo* method);
