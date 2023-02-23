#pragma once

#include "il2cpp.h"

void App_UnitRing__Build (App_UnitRing_o* __this, System_String_o* rnid, App_Unit_o* owner, int32_t stockCount, const MethodInfo* method);
System_String_o* App_UnitRing__GetName (App_UnitRing_o* __this, const MethodInfo* method);
System_String_o* App_UnitRing__GetFullName (App_UnitRing_o* __this, const MethodInfo* method);
System_String_o* App_UnitRing__GetDebugName (App_UnitRing_o* __this, const MethodInfo* method);
void App_UnitRing__ChangeOwner (App_UnitRing_o* __this, App_Unit_o* owner, const MethodInfo* method);
void App_UnitRing__SetStockCount (App_UnitRing_o* __this, int32_t stockCount, const MethodInfo* method);
void App_UnitRing__AddStockCount (App_UnitRing_o* __this, int32_t stockCount, const MethodInfo* method);
int32_t App_UnitRing__get_SortKey (App_UnitRing_o* __this, const MethodInfo* method);
bool App_UnitRing__IsSingleStockOnly (App_UnitRing_o* __this, const MethodInfo* method);
bool App_UnitRing__IsSingleStockOnly (App_RingData_o* data, App_Unit_o* owner, const MethodInfo* method);
App_RingData_o* App_UnitRing__get_Data (App_UnitRing_o* __this, const MethodInfo* method);
App_Unit_o* App_UnitRing__get_Owner (App_UnitRing_o* __this, const MethodInfo* method);
int32_t App_UnitRing__get_StockCount (App_UnitRing_o* __this, const MethodInfo* method);
System_String_o* App_UnitRing__get_Rnid (App_UnitRing_o* __this, const MethodInfo* method);
void App_UnitRing__OnSerialize (App_UnitRing_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitRing__OnDeserialize (App_UnitRing_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
bool App_UnitRing__IsValid (App_UnitRing_o* __this, const MethodInfo* method);
void App_UnitRing__Clear (App_UnitRing_o* __this, const MethodInfo* method);
void App_UnitRing___ctor (App_UnitRing_o* __this, const MethodInfo* method);
