#pragma once

#include "il2cpp.h"

App_MapEnum_AreaEnumerator_o App_MapEnum__GetFull (const MethodInfo* method);
App_MapEnum_AreaEnumerator_o App_MapEnum__GetPlayArea (const MethodInfo* method);
App_MapEnum_AreaEnumerator_o App_MapEnum__GetArea (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo* method);
App_MapEnum_RangeEnumerator_o App_MapEnum__GetRange (int32_t x, int32_t z, int32_t range, const MethodInfo* method);
App_MapEnum_RangeEnumerator_o App_MapEnum__GetRange (int32_t x, int32_t z, int32_t _near_, int32_t _far_, const MethodInfo* method);
App_MapEnum_RangeEnumerator_o App_MapEnum__GetAround (int32_t x, int32_t z, const MethodInfo* method);
App_MapEnum_MoveEnumerator_o App_MapEnum__GetMove (const MethodInfo* method);
App_MapEnum_CellEnumerator_o App_MapEnum__GetCell (App_Unit_o* unit, const MethodInfo* method);
App_MapEnum_CellEnumerator_o App_MapEnum__GetCell (App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapEnum___ctor (App_MapEnum_o* __this, const MethodInfo* method);
