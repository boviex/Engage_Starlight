#pragma once

#include "il2cpp.h"

void App_RingSelectConfirmDialog__CreateBindGod (App_ProcInst_o* super, App_Unit_o* unit, App_GodUnit_o* nextGod, const MethodInfo* method);
void App_RingSelectConfirmDialog__CreateBindRing (App_ProcInst_o* super, App_Unit_o* unit, App_UnitRing_o* nextRing, const MethodInfo* method);
void App_RingSelectConfirmDialog__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, App_GodUnit_o* nextGod, App_UnitRing_o* nextRing, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateSetTitle (App_GodUnit_o* nextGod, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateSetTitle (App_UnitRing_o* nextRing, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateSetTitle (System_String_o* nextName, System_String_o* oldEquipUnitName, bool isArmlet, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateChangeTitle (App_Unit_o* unit, App_GodUnit_o* nextGod, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateChangeTitle (App_Unit_o* unit, App_UnitRing_o* nextRing, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateChangeTitle (System_String_o* removeName, System_String_o* nextName, System_String_o* oldEquipUnitName, bool isRemoveArmlet, bool isNextArmlet, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateRemoveTitle (App_GodUnit_o* removeGod, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateRemoveTitle (App_UnitRing_o* removeRing, const MethodInfo* method);
System_String_o* App_RingSelectConfirmDialog__CreateRemoveTitle (System_String_o* removeName, bool isArmlet, const MethodInfo* method);
void App_RingSelectConfirmDialog___ctor (App_RingSelectConfirmDialog_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, const MethodInfo* method);
void App_RingSelectConfirmDialog___cctor (const MethodInfo* method);
