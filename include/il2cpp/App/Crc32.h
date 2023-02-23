#pragma once

#include "il2cpp.h"

void App_Crc32__Initialize (const MethodInfo* method);
uint32_t App_Crc32__Calculate (System_Byte_array* buf, const MethodInfo* method);
uint32_t App_Crc32__Calculate (System_Byte_array* buf, int32_t len, const MethodInfo* method);
uint32_t App_Crc32__UpdateCrc (uint32_t crc, System_Byte_array* buf, int32_t len, const MethodInfo* method);
