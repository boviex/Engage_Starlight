#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_PosListData___get_GetDataID (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData____ctor (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_PosListData__o* __this, int32_t idx, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_PosListData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_PosListData___SendReliableData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_PosListData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_PosListData__o* __this, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_PosListData___SendUnReliableData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_PosListData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_PosListData__o* __this, int32_t transportType, const MethodInfo* method_info);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_PosListData___CreateReliableData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_PosListData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData___WriteSendData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo* method_info);
System_Byte_array* Dpr_NetworkUtils_ANetData_PosListData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_PosListData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData___ReceivePacket (Dpr_NetworkUtils_ANetData_PosListData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData___ReadRecieveData (Dpr_NetworkUtils_ANetData_PosListData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
Dpr_NetworkUtils_PosListData_o Dpr_NetworkUtils_ANetData_PosListData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_PosListData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_PosListData____cctor (const MethodInfo* method_info);