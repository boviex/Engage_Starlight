#pragma once

#include "il2cpp.h"

void App_UnitRingPool___ctor (App_UnitRingPool_o* __this, const MethodInfo* method);
int32_t App_UnitRingPool__get_Version (App_UnitRingPool_o* __this, const MethodInfo* method);
App_UnitRing_o* App_UnitRingPool__TryGet (System_String_o* rnid, App_Unit_o* owner, const MethodInfo* method);
App_UnitRing_o* App_UnitRingPool__TryGet (App_RingData_o* data, App_Unit_o* owner, const MethodInfo* method);
int32_t App_UnitRingPool__GetAllStockCount (App_RingData_o* data, const MethodInfo* method);
int32_t App_UnitRingPool__GetStockCount (App_RingData_o* data, bool IsEquipped, const MethodInfo* method);
bool App_UnitRingPool__CanAdd (System_String_o* rnid, int32_t stockCount, const MethodInfo* method);
bool App_UnitRingPool__CanAdd (App_UnitRing_o* ring, int32_t stockCount, const MethodInfo* method);
App_UnitRing_o* App_UnitRingPool__Add (System_String_o* rnid, App_Unit_o* owner, int32_t stockCount, const MethodInfo* method);
void App_UnitRingPool__Add (App_UnitRing_o* ring, int32_t stockCount, const MethodInfo* method);
void App_UnitRingPool__Sub (System_String_o* rnid, App_Unit_o* unit, int32_t stockCount, const MethodInfo* method);
void App_UnitRingPool__Sub (App_UnitRing_o* ring, int32_t stockCount, const MethodInfo* method);
void App_UnitRingPool__SetOwner (System_String_o* rnid, App_Unit_o* owner, const MethodInfo* method);
void App_UnitRingPool__SetOwner (App_UnitRing_o* ring, App_Unit_o* owner, const MethodInfo* method);
void App_UnitRingPool__ClearOwner (System_String_o* rnid, App_Unit_o* owner, const MethodInfo* method);
void App_UnitRingPool__ClearOwner (App_UnitRing_o* ring, const MethodInfo* method);
App_UnitRing_o* App_UnitRingPool__Composite (App_UnitRing_o* baseRing, App_UnitRing_array* rings, const MethodInfo* method);
void App_UnitRingPool__Delete (System_String_o* rnid, App_Unit_o* owner, const MethodInfo* method);
void App_UnitRingPool__Delete (App_UnitRing_o* ring, const MethodInfo* method);
void App_UnitRingPool__DeleteFromPool (App_UnitRing_o* ring, const MethodInfo* method);
void App_UnitRingPool__DbgAddAllCommonRings (int32_t count, const MethodInfo* method);
