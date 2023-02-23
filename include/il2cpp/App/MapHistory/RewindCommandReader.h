#pragma once

#include "il2cpp.h"

void App_MapHistory_RewindCommandReader___ctor (App_MapHistory_RewindCommandReader_o* __this, System_Byte_array* commandStreamBuffer, const MethodInfo* method);
App_Unit_o* App_MapHistory_RewindCommandReader__ReadUnit (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadUnitByIndex (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__SkipUnit (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
System_String_o* App_MapHistory_RewindCommandReader__ReadName (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadNameByIndex (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__SkipName (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadPosition (App_MapHistory_RewindCommandReader_o* __this, int32_t* x, int32_t* z, const MethodInfo* method);
int64_t App_MapHistory_RewindCommandReader__ReadStatus (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadHp (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int8_t App_MapHistory_RewindCommandReader__ReadBaseCapability (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadBaseCapabilityAll (App_MapHistory_RewindCommandReader_o* __this, App_UnitBaseCapability_o* capability, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadGrowCapabilityAll (App_MapHistory_RewindCommandReader_o* __this, App_Capability_o* capability, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadLevelCapabilityAll (App_MapHistory_RewindCommandReader_o* __this, App_UnitBaseCapability_o* capability, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadUnitBaseCapabilityAll (App_MapHistory_RewindCommandReader_o* __this, App_UnitBaseCapability_o* capability, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadEngageCount (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadEngageTurn (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
bool App_MapHistory_RewindCommandReader__ReadShowInSearchMap (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadTurn (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindCommandReader__ReadForce (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadSkills (App_MapHistory_RewindCommandReader_o* __this, App_SkillArray_o* skills, const MethodInfo* method);
uint8_t App_MapHistory_RewindCommandReader__ReadUnitPhaseBeginKinds (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadUnitItem (App_MapHistory_RewindCommandReader_o* __this, App_UnitItem_o* item, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadUnitItemList (App_MapHistory_RewindCommandReader_o* __this, App_UnitItemList_o* itemList, const MethodInfo* method);
App_GodUnit_o* App_MapHistory_RewindCommandReader__ReadGodUnit (App_MapHistory_RewindCommandReader_o* __this, bool includeReserved, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadTransporterData (App_MapHistory_RewindCommandReader_o* __this, App_Transporter_Data_o* data, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadOverlap (App_MapHistory_RewindCommandReader_o* __this, App_MapHistory_Rewind_OverlapData_o* overlapData, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadOverlap (App_Stream_o* stream, bool* hasData, int32_t* x, int32_t* z, int32_t* hp, int32_t* life, int32_t* turn, int32_t* phase, System_String_o** tid, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadOverlap (App_Stream_o* stream, App_MapHistory_Rewind_OverlapData_o* overlapData, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__ReadUnitIconInfo (App_MapHistory_RewindCommandReader_o* __this, System_String_o** pid, System_String_o** jid, int32_t* itemKind, bool* isFemale, bool* isEngage, System_String_o** gid, const MethodInfo* method);
void App_MapHistory_RewindCommandReader__SkipUnitIconInfo (App_MapHistory_RewindCommandReader_o* __this, const MethodInfo* method);
bool App_MapHistory_RewindCommandReader__ReadLockTarget (App_MapHistory_RewindCommandReader_o* __this, int32_t* targetX, int32_t* targetZ, const MethodInfo* method);
