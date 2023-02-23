#pragma once

#include "il2cpp.h"

void App_MapDispos_ActualData___ctor (App_MapDispos_ActualData_o* __this, App_DisposData_o* data, App_DisposData_o* positionData, const MethodInfo* method);
bool App_MapDispos_ActualData__Calc (App_MapDispos_ActualData_o* __this, int32_t disposFlag, const MethodInfo* method);
void App_MapDispos_ActualData__UnitMove (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t x, int32_t z, int64_t moveFlag, const MethodInfo* method);
App_DisposData_o* App_MapDispos_ActualData__get_Data (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DataDisposX (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DataDisposZ (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_CalcResult (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_UnitIndex (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_CalcAppearX (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_CalcAppearZ (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_CalcDisposX (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_CalcDisposZ (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DisposDir (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
bool App_MapDispos_ActualData__CalcDisposXZ (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t* disposX, int32_t* disposZ, const MethodInfo* method);
bool App_MapDispos_ActualData__CalcApperXZ (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t disposX, int32_t disposZ, int32_t* appearX, int32_t* appearZ, const MethodInfo* method);
bool App_MapDispos_ActualData__IsForced (App_MapDispos_ActualData_o* __this, int32_t flag, const MethodInfo* method);
bool App_MapDispos_ActualData__IsEnable (App_MapDispos_ActualData_o* __this, int32_t flag, const MethodInfo* method);
bool App_MapDispos_ActualData__IsCreate (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
App_Unit_o* App_MapDispos_ActualData__GetUnit (App_MapDispos_ActualData_o* __this, int32_t disposFlag, const MethodInfo* method);
App_TerrainData_o* App_MapDispos_ActualData__GetTerrain (App_MapDispos_ActualData_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapDispos_ActualData__IsOutOfPlayArea (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapDispos_ActualData__IsUnitExist (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapDispos_ActualData__IsTerrainImmobile (App_MapDispos_ActualData_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapDispos_ActualData__IsTerrainImmobile (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_MapDispos_ActualData__UnitAIMoveLimitForBigUnit (App_MapDispos_ActualData_o* __this, App_Unit_o* unit, int64_t moveFlag, const MethodInfo* method);
App_PersonData_o* App_MapDispos_ActualData__get_DataPerson (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DataForceType (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DataAppearX (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
int32_t App_MapDispos_ActualData__get_DataAppearZ (App_MapDispos_ActualData_o* __this, const MethodInfo* method);
