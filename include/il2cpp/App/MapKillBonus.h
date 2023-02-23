#pragma once

#include "il2cpp.h"

void App_MapKillBonus__OnCreate (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__OnDispose (App_MapKillBonus_o* __this, const MethodInfo* method);
bool App_MapKillBonus__IsEnable (const MethodInfo* method);
bool App_MapKillBonus__IsEnableChapter (App_ChapterData_o* chapter, const MethodInfo* method);
bool App_MapKillBonus__Download (App_MapKillBonus_o* __this, App_ProcInst_o* super, const MethodInfo* method);
bool App_MapKillBonus__Upload (App_MapKillBonus_o* __this, App_ProcInst_o* super, const MethodInfo* method);
void App_MapKillBonus__Setup (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__TryGain (App_MapKillBonus_o* __this, App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
int32_t App_MapKillBonus__GetKind (App_MapKillBonus_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapKillBonus__CopyKindImageTo (App_MapKillBonus_o* __this, App_MapKillBonus_KindImage_o* kindImage, const MethodInfo* method);
void App_MapKillBonus__TryCreateEffect (App_MapKillBonus_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapKillBonus__TryCreateEffect (App_MapKillBonus_o* __this, int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
void App_MapKillBonus__TryDeleteEffect (App_MapKillBonus_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapKillBonus__TryDeleteEffect (App_MapKillBonus_o* __this, int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
void App_MapKillBonus__AddCount (App_MapKillBonus_o* __this, App_Unit_o* deadUnit, const MethodInfo* method);
void App_MapKillBonus__AddCount (App_MapKillBonus_o* __this, int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
App_MapKillBonus_CountImage_o* App_MapKillBonus__GetCountImage (App_MapKillBonus_o* __this, int32_t kind, const MethodInfo* method);
void App_MapKillBonus__ClearNetSucceeded (App_MapKillBonus_o* __this, const MethodInfo* method);
int32_t App_MapKillBonus__GetBonusIndex (App_MapKillBonus_o* __this, int32_t kind, const MethodInfo* method);
void App_MapKillBonus__RewindBonus (App_MapKillBonus_o* __this, int32_t x, int32_t z, int32_t kind, int32_t bonusIndex, const MethodInfo* method);
void App_MapKillBonus__RewindCount (App_MapKillBonus_o* __this, int32_t x, int32_t z, int32_t kind, int32_t count, const MethodInfo* method);
bool App_MapKillBonus__get_IsNetSucceeded (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__DecideCells (App_MapKillBonus_o* __this, int32_t mapMaxKillBonusCount, int32_t mapMaxKilledBonusCount, const MethodInfo* method);
void App_MapKillBonus__DecideCells (App_MapKillBonus_o* __this, System_Int32_array* netData, int32_t netKind, int32_t kind, int32_t mapMaxBonusCount, const MethodInfo* method);
void App_MapKillBonus__DecideKillBonus (App_MapKillBonus_o* __this, int32_t mapMaxBonusCount, const MethodInfo* method);
void App_MapKillBonus__DecideKilledBonus (App_MapKillBonus_o* __this, int32_t mapMaxBonusCount, const MethodInfo* method);
App_StructDataArrayList_KillBonusData__o* App_MapKillBonus__GetKillBonusData (App_MapKillBonus_o* __this, const MethodInfo* method);
App_StructDataArrayList_KilledBonusData__o* App_MapKillBonus__GetKilledBonusData (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__Clear (App_MapKillBonus_o* __this, const MethodInfo* method);
int32_t App_MapKillBonus__GetRandomValue (int32_t num, const MethodInfo* method);
int32_t App_MapKillBonus__get_Version (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__OnSerialize (App_MapKillBonus_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapKillBonus__OnDeserialize (App_MapKillBonus_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapKillBonus__DbgDump (App_MapKillBonus_o* __this, const MethodInfo* method);
void App_MapKillBonus__DbgDumpKindImage (App_MapKillBonus_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void App_MapKillBonus__DbgDumpKillBonus (App_MapKillBonus_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void App_MapKillBonus__DbgDumpKilledBonus (App_MapKillBonus_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void App_MapKillBonus___ctor (App_MapKillBonus_o* __this, const MethodInfo* method);
