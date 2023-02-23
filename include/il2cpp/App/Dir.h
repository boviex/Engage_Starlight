#pragma once

#include "il2cpp.h"

uint8_t App_Dir__GetDir (int32_t sx, int32_t sz, int32_t tx, int32_t tz, const MethodInfo* method);
uint8_t App_Dir__GetReverse (uint8_t dir, const MethodInfo* method);
int32_t App_Dir__GetX (uint8_t dir, const MethodInfo* method);
int32_t App_Dir__GetZ (uint8_t dir, const MethodInfo* method);
bool App_Dir__IsTerminate (uint8_t dir, const MethodInfo* method);
int32_t App_Dir__GetAngle (uint8_t dir, const MethodInfo* method);
uint8_t App_Dir__GetRotateL90 (uint8_t dir, const MethodInfo* method);
uint8_t App_Dir__GetRotateR90 (uint8_t dir, const MethodInfo* method);
void App_Dir___ctor (App_Dir_o* __this, const MethodInfo* method);
