#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Net_Data_ServerVersions___ctor (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Net_Data_ServerVersions__Initialize (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Net_Data_ServerVersions__SetServerVersion (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, int32_t clientID, Dpr_Battle_Logic_Net_Data_ServerVersionData_o* data, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Net_Data_ServerVersions__GetRecievedBits (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Net_Data_ServerVersions__DetermineServerVersion (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Net_Data_ServerVersions__RemoveByStationIndex (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, int32_t stationIndex, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Net_Data_ServerVersions__ExistsByStationIndex (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, int32_t stationIndex, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Net_Data_ServerVersions__MaxVersion (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Net_Data_ServerVersions__GetServerClientID (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Net_Data_ServerVersions__SetServerClientID (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, uint8_t clientId, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Net_Data_ServerVersions__IsDeterminedServer (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Net_Data_ServerVersions__GetStationIndex (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, int32_t clientID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Net_Data_ServerVersions__GetClientID (Dpr_Battle_Logic_Net_Data_ServerVersions_o* __this, int32_t stationIndex, const MethodInfo* method_info);