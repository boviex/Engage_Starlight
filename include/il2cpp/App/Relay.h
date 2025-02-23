#pragma once

#include "il2cpp.h"

bool App_Relay__IsValid (const MethodInfo* method);
void App_Relay__OnCreate (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DisposPlayerCounts (App_Relay_o* __this, App_ProcInst_o* super, const MethodInfo* method);
bool App_Relay__CanSelectNew (App_Relay_o* __this, System_String_o* cid, const MethodInfo* method);
bool App_Relay__CanSelectTakeOver (App_Relay_o* __this, App_RelayServerMetaData_o* metaData, uint64_t principalId, int64_t currentUnixTime, int32_t* result, const MethodInfo* method);
void App_Relay__InitializeForNew (App_Relay_o* __this, System_String_o* cid, const MethodInfo* method);
void App_Relay__InitializeForTakeOver (App_Relay_o* __this, App_RelayServerMetaData_o* metaData, const MethodInfo* method);
void App_Relay__InitializeForReplay (App_Relay_o* __this, App_RelayServerMetaData_o* metaData, bool reinitMeta, const MethodInfo* method);
int32_t App_Relay__TryReinitializeForReplay (App_Relay_o* __this, App_RelayServerMetaData_o* newMetaData, const MethodInfo* method);
void App_Relay__SetPlayingDone (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DeleteGodLink (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__InitializeForSortie (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__SetupForSortie (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__GetSortieCount (App_Relay_o* __this, int32_t* maxTotalCount, int32_t* reqPlayerCount, const MethodInfo* method);
void App_Relay__GetSortieCount (App_Relay_o* __this, int32_t mode, System_String_o* cid, System_Collections_Generic_List_string__o* pids, int32_t* maxTotalCount, int32_t* reqPlayerCount, int32_t* playerCount, int32_t* playerNoSortieCount, const MethodInfo* method);
void App_Relay__GetSortieCountFromData (App_Relay_o* __this, int32_t mode, System_String_o* cid, int32_t* maxTotalCount, int32_t* reqPlayerCount, const MethodInfo* method);
void App_Relay__GetPlayerUnitCount (App_Relay_o* __this, int32_t mode, System_Collections_Generic_List_string__o* pids, int32_t* unitCount, int32_t* noSortieUnitCount, const MethodInfo* method);
void App_Relay__DecideToBattle (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__MapBegin (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__MapEnd (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__Complete (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__GameOver (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__AddEnteredBattle (App_Relay_o* __this, App_RelayUserData_EnteredBattle_o* newBattle, const MethodInfo* method);
App_RelayUserData_EnteredBattle_o* App_Relay__GetEnteredBattle (App_Relay_o* __this, uint64_t dataId, const MethodInfo* method);
void App_Relay__ClearCurrentBattle (App_Relay_o* __this, const MethodInfo* method);
System_String_o* App_Relay__GetPlayerName (App_Relay_o* __this, int32_t playerIndex, const MethodInfo* method);
System_String_o* App_Relay__GetLastPlayerName (App_Relay_o* __this, const MethodInfo* method);
System_String_o* App_Relay__GetReplayPlayerName (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__NextReplayPlayer (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__SetReplayPlayerForSkip (App_Relay_o* __this, int32_t playerIndex, const MethodInfo* method);
void App_Relay__DbgFakeAwardee (App_Relay_o* __this, const MethodInfo* method);
bool App_Relay__IsMyUnit (App_Unit_o* unit, const MethodInfo* method);
bool App_Relay__IsOthersUnit (App_Unit_o* unit, const MethodInfo* method);
bool App_Relay__IsNoCountUnit (App_Unit_o* unit, const MethodInfo* method);
System_String_o* App_Relay__GetNickname (const MethodInfo* method);
App_RelayServerMetaData_o* App_Relay__get_MetaData (App_Relay_o* __this, const MethodInfo* method);
App_RelayServerData_o* App_Relay__get_Data (App_Relay_o* __this, const MethodInfo* method);
App_RelayServerMetaData_o* App_Relay__get_SelectedMetaData (App_Relay_o* __this, const MethodInfo* method);
App_RelayBackupData_o* App_Relay__get_BackupDataForReplay (App_Relay_o* __this, const MethodInfo* method);
App_RelayBackupData_o* App_Relay__get_BackupDataForAll (App_Relay_o* __this, const MethodInfo* method);
App_Relay_FlagsField_o* App_Relay__get_Flag (App_Relay_o* __this, const MethodInfo* method);
bool App_Relay__get_IsNew (App_Relay_o* __this, const MethodInfo* method);
bool App_Relay__get_IsTakeOver (App_Relay_o* __this, const MethodInfo* method);
bool App_Relay__get_IsReplay (App_Relay_o* __this, const MethodInfo* method);
int32_t App_Relay__get_MaxTurn (App_Relay_o* __this, const MethodInfo* method);
int32_t App_Relay__get_LimitTurn (App_Relay_o* __this, const MethodInfo* method);
App_RelaySortie_o* App_Relay__get_Sortie (App_Relay_o* __this, const MethodInfo* method);
System_Collections_Generic_List_Unit__o* App_Relay__get_AppearanceUnits (App_Relay_o* __this, const MethodInfo* method);
System_Collections_Generic_List_Unit__o* App_Relay__get_LeavingUnits (App_Relay_o* __this, const MethodInfo* method);
int32_t App_Relay__get_CurrentPlayerIndex (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__set_CurrentPlayerIndex (App_Relay_o* __this, int32_t value, const MethodInfo* method);
App_RelayUserData_EnteredBattle_o* App_Relay__get_CurrentBattle (App_Relay_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_Relay__get_PoolUnits (App_Relay_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_Relay__get_PoolGods (App_Relay_o* __this, const MethodInfo* method);
int32_t App_Relay__ConvertToKinds (int32_t country, const MethodInfo* method);
void App_Relay__DeleteUnneededUnits (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DeleteUnneededGodUnitsAndBonds (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DeleteUnneededRings (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__ChooseAwardee (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__Clear (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__SaveTempPoolUnit (App_Relay_o* __this, const MethodInfo* method);
int32_t App_Relay__GetMaxTurnFromRelayData (System_String_o* cid, const MethodInfo* method);
int32_t App_Relay__GetPlayTurnFromRelayData (System_String_o* cid, bool isNew, const MethodInfo* method);
void App_Relay__DbgLogBegin (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DbgLogEnd (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DbgLogAppendLine (App_Relay_o* __this, System_String_o* str, const MethodInfo* method);
void App_Relay__DbgLogBeginImpl (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DbgLogEndImpl (App_Relay_o* __this, const MethodInfo* method);
void App_Relay__DbgLogAppendLineImpl (App_Relay_o* __this, System_String_o* str, const MethodInfo* method);
void App_Relay___ctor (App_Relay_o* __this, const MethodInfo* method);
void App_Relay___DecideToBattle_b__43_0 (App_Relay_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_Relay___MapEnd_b__45_0 (App_Relay_o* __this, App_Unit_o* unit, const MethodInfo* method);
