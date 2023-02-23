#pragma once

#include "il2cpp.h"

bool App_MapEditChecker__Check (bool isOpponent, const MethodInfo* method);
int32_t App_MapEditChecker__get_SizeX (const MethodInfo* method);
int32_t App_MapEditChecker__get_SizeZ (const MethodInfo* method);
int32_t App_MapEditChecker__GetUnitCount (const MethodInfo* method);
int32_t App_MapEditChecker__GetOpponentCount (const MethodInfo* method);
bool App_MapEditChecker__CanMove (int32_t x, int32_t z, bool breakableIsTrue, const MethodInfo* method);
bool App_MapEditChecker__CanMoveBreakable (int32_t x, int32_t z, const MethodInfo* method);
App_TerrainData_o* App_MapEditChecker__GetTerrain (int32_t x, int32_t z, const MethodInfo* method);
bool App_MapEditChecker__ExistsUnit (int32_t x, int32_t z, const MethodInfo* method);
bool App_MapEditChecker__CheckMyMap (const MethodInfo* method);
bool App_MapEditChecker__CheckOpponentMap (const MethodInfo* method);
int32_t App_MapEditChecker__CheckRecursive (App_MapPos_o pos, App_MapEditChecker_CheckRange_o range, System_Collections_Generic_HashSet_MapPos__o* reachSet, int32_t totalCount, const MethodInfo* method);
void App_MapEditChecker___ctor (App_MapEditChecker_o* __this, const MethodInfo* method);
