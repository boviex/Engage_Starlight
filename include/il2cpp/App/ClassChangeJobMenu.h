#pragma once

#include "il2cpp.h"

App_ClassChangeJobMenu_o* App_ClassChangeJobMenu__Create (App_ProcInst_o* super, App_ClassChangeRoot_o* classChangeRoot, const MethodInfo* method);
void App_ClassChangeJobMenu___ctor (App_ClassChangeJobMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_ClassChangeRoot_o* root, const MethodInfo* method);
void App_ClassChangeJobMenu__AfterBuild (App_ClassChangeJobMenu_o* __this, const MethodInfo* method);
System_String_o* App_ClassChangeJobMenu__GetName (App_ClassChangeJobMenu_o* __this, const MethodInfo* method);
int32_t App_ClassChangeJobMenu__CustomCall (App_ClassChangeJobMenu_o* __this, const MethodInfo* method);
void App_ClassChangeJobMenu__SortMenuItem (App_ClassChangeJobMenu_o* __this, const MethodInfo* method);
void App_ClassChangeJobMenu__SetUnitInfoAll (App_ClassChangeJobMenu_o* __this, const MethodInfo* method);
void App_ClassChangeJobMenu__SetUnitInfoAll (App_ClassChangeJobMenu_o* __this, App_ClassChange_ChangeJobData_o* afterChangeJobData, const MethodInfo* method);
void App_ClassChangeJobMenu__SetUnitInfoAfter (App_ClassChangeJobMenu_o* __this, App_Unit_o* unitBefore, App_ClassChange_ChangeJobData_o* data, const MethodInfo* method);
void App_ClassChangeJobMenu__SetJobDetails (App_ClassChangeJobMenu_o* __this, App_ClassChange_ChangeJobData_o* data, const MethodInfo* method);
App_Unit_o* App_ClassChangeJobMenu__GetUnit (const MethodInfo* method);
void App_ClassChangeJobMenu___cctor (const MethodInfo* method);
