#pragma once

#include "il2cpp.h"

void App_MapHistory_RewindCommandWriter__Prepare (App_MapHistory_RewindCommandWriter_o* __this, int32_t type, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitAndName (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnit (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteName (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WritePosition (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteStatus (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteStatus (App_MapHistory_RewindCommandWriter_o* __this, int64_t status, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteHp (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteHp (App_MapHistory_RewindCommandWriter_o* __this, int32_t hp, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteBaseCapability (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, int32_t index, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteBaseCapabilityAll (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteGrowCapabilityAll (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteLevelCapabilityAll (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitBaseCapabilityAll (App_MapHistory_RewindCommandWriter_o* __this, App_UnitBaseCapability_o* capability, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteEngageCount (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteEngageCount (App_MapHistory_RewindCommandWriter_o* __this, int32_t engageCount, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteEngageTurn (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteShowInSearchMap (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, int32_t moveX, int32_t moveZ, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteTurn (App_MapHistory_RewindCommandWriter_o* __this, int32_t turn, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteForce (App_MapHistory_RewindCommandWriter_o* __this, int32_t forceType, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteSkills (App_MapHistory_RewindCommandWriter_o* __this, App_SkillArray_o* skills, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitPhaseBeginKinds (App_MapHistory_RewindCommandWriter_o* __this, uint8_t kind, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitItem (App_MapHistory_RewindCommandWriter_o* __this, App_UnitItem_o* item, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitItemList (App_MapHistory_RewindCommandWriter_o* __this, App_UnitItemList_o* itemList, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteGodUnit (App_MapHistory_RewindCommandWriter_o* __this, App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteTransporterData (App_MapHistory_RewindCommandWriter_o* __this, App_Transporter_Data_o* data, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteOverlap (App_MapHistory_RewindCommandWriter_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteOverlap (App_Stream_o* stream, int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteUnitIconInfo (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__WriteLockTarget (App_MapHistory_RewindCommandWriter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__OverwriteByte (App_MapHistory_RewindCommandWriter_o* __this, int32_t pos, uint8_t val, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter__OverwriteUshort (App_MapHistory_RewindCommandWriter_o* __this, int32_t pos, uint16_t val, const MethodInfo* method);
void App_MapHistory_RewindCommandWriter___ctor (App_MapHistory_RewindCommandWriter_o* __this, const MethodInfo* method);
