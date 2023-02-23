#pragma once

#include "il2cpp.h"

void App_MapDispos__Load (System_String_o* fileName, const MethodInfo* method);
void App_MapDispos__Unload (const MethodInfo* method);
void App_MapDispos__CreateFirst (const MethodInfo* method);
void App_MapDispos__CreateFirstEncount (const MethodInfo* method);
System_String_o* App_MapDispos__GetEncountPlayeGroup (int32_t playerIndex, const MethodInfo* method);
System_String_o* App_MapDispos__GetEncountMobGroup (int32_t playerIndex, int32_t mobIndex, const MethodInfo* method);
System_String_o* App_MapDispos__GetEncountTerrainGroup (int32_t playerIndex, const MethodInfo* method);
int32_t App_MapDispos__GetEncountPlayerCount (const MethodInfo* method);
int32_t App_MapDispos__GetEncountMobCount (int32_t playerIndex, const MethodInfo* method);
int32_t App_MapDispos__GetFakeIndex (int32_t index, System_String_o* key, int32_t count, const MethodInfo* method);
void App_MapDispos__CreateFirstChallenge (const MethodInfo* method);
void App_MapDispos__CreateFirstDlcGod (const MethodInfo* method);
void App_MapDispos__CreateFirstVersusCasual (const MethodInfo* method);
void App_MapDispos__CreateFirstVersusRanked (const MethodInfo* method);
void App_MapDispos__CreateFirstVersusMock (const MethodInfo* method);
void App_MapDispos__CreateVersusOpponentTeam (App_MapEditData_o* editData, const MethodInfo* method);
void App_MapDispos__CreateVersusPlayerTeam (App_MapEditData_o* editData, const MethodInfo* method);
void App_MapDispos__CreateFirstEdit (const MethodInfo* method);
void App_MapDispos__CreateVersusEditTeam (App_MapEditData_o* editData, const MethodInfo* method);
void App_MapDispos__ResetSortiePositionForEdit (System_Collections_Generic_Stack_MapDispos_Pos__o** posStack, const MethodInfo* method);
void App_MapDispos__CreateProcess (App_ProcInst_o* super, System_String_o* group, int32_t disposFlag, System_String_o* positionGroup, const MethodInfo* method);
bool App_MapDispos__IsWaitProcess (const MethodInfo* method);
System_String_o* App_MapDispos__GetDebugHeader (const MethodInfo* method);
void App_MapDispos__CreatePlayerTeam (System_String_o* group, const MethodInfo* method);
void App_MapDispos__TryCreateDisposTeam (System_String_o* group, const MethodInfo* method);
void App_MapDispos__CreateDisposTeam (System_String_o* group, System_String_o* positionGroup, const MethodInfo* method);
void App_MapDispos__CreateEncountDisposTeam (System_String_o* group, const MethodInfo* method);
void App_MapDispos__CreateChallengeDisposTeam (System_String_o* group, App_Random_o* random, const MethodInfo* method);
void App_MapDispos__CreateDlcGodDisposTeam (System_String_o* group, System_String_o* positionGroup, const MethodInfo* method);
App_Unit_o* App_MapDispos__CreateUnit (App_DisposData_o* data, const MethodInfo* method);
void App_MapDispos__CreateEncountTerrain (int32_t playerIndex, const MethodInfo* method);
bool App_MapDispos__TryCreateTerrain (System_String_o* group, const MethodInfo* method);
float App_MapDispos__GetForceAngle (App_Unit_o* unit, int32_t dir, const MethodInfo* method);
float App_MapDispos__GetForceAngle (int32_t force, int32_t dir, const MethodInfo* method);
void App_MapDispos__SetupUnit (App_Unit_o* unit, int32_t x, int32_t z, int32_t forceType, int32_t dir, const MethodInfo* method);
int32_t App_MapDispos__GetSortieLimit (const MethodInfo* method);
void App_MapDispos___ctor (App_MapDispos_o* __this, const MethodInfo* method);
