#pragma once

#include "il2cpp.h"

void App_Transporter__Initialize (const MethodInfo* method);
void App_Transporter__Reset (const MethodInfo* method);
bool App_Transporter__IsAvailable (const MethodInfo* method);
App_Transporter_Data_o* App_Transporter__Get (int32_t index, const MethodInfo* method);
int32_t App_Transporter__GetIndex (App_UnitItem_o* unitItem, const MethodInfo* method);
bool App_Transporter__CanAdd (const MethodInfo* method);
bool App_Transporter__TryGetLowestItemIndex (int32_t* lowestIndex, uint64_t* lowestWorth, const MethodInfo* method);
int32_t App_Transporter__GetEmptyIndex (const MethodInfo* method);
void App_Transporter__Discard (App_UnitItem_o* unitItem, const MethodInfo* method);
int32_t App_Transporter__Add (App_UnitItem_o* unitItem, const MethodInfo* method);
int32_t App_Transporter__Add (App_ItemData_o* itemData, const MethodInfo* method);
void App_Transporter__Sub (int32_t index, const MethodInfo* method);
void App_Transporter__Delete (int32_t index, const MethodInfo* method);
void App_Transporter__Clear (const MethodInfo* method);
int32_t App_Transporter__GetCount (const MethodInfo* method);
void App_Transporter__DeleteItem (App_ItemData_o* data, const MethodInfo* method);
int32_t App_Transporter__GetItemCount (App_ItemData_o* data, const MethodInfo* method);
int32_t App_Transporter__GetTypeItemCount (int32_t type, const MethodInfo* method);
void App_Transporter__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_Transporter__Deserialize (App_Stream_o* stream, const MethodInfo* method);
bool App_Transporter__IsRare (App_UnitItem_o* unitItem, const MethodInfo* method);
uint64_t App_Transporter__CalcWorth (App_UnitItem_o* unitItem, const MethodInfo* method);
void App_Transporter___ctor (App_Transporter_o* __this, const MethodInfo* method);
