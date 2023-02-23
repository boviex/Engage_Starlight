#pragma once

#include "il2cpp.h"

bool App_BattleMath___IsProbability100 (int32_t ratio, const MethodInfo* method);
bool App_BattleMath___IsProbabilityHit (int32_t ratio, const MethodInfo* method);
bool App_BattleMath___IsProbabilityTrue (int32_t ratio, const MethodInfo* method);
bool App_BattleMath___IsProbabilityFalse (int32_t ratio, const MethodInfo* method);
void App_BattleMath__SetSimulation (bool enable, const MethodInfo* method);
bool App_BattleMath__RandomCheck100 (int32_t percent, const MethodInfo* method);
void App_BattleMath__PushRandomSeed (const MethodInfo* method);
void App_BattleMath__PopRandomSeed (const MethodInfo* method);
void App_BattleMath__PushSimulation (const MethodInfo* method);
void App_BattleMath__PopSimulation (const MethodInfo* method);
bool App_BattleMath__RandomCheckHit (int32_t ratio, const MethodInfo* method);
int32_t App_BattleMath__GetHitRatio10000 (int32_t ratio, const MethodInfo* method);
float App_BattleMath__GetHitRealRatio (int32_t ratio, const MethodInfo* method);
int32_t App_BattleMath__GetRandom (int32_t num, const MethodInfo* method);
int32_t App_BattleMath__GetRandom (int32_t min, int32_t max, const MethodInfo* method);
void App_BattleMath___ctor (App_BattleMath_o* __this, const MethodInfo* method);
void App_BattleMath___cctor (const MethodInfo* method);
