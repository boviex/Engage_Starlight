#pragma once

#include "il2cpp.h"

int32_t System_Security_Cryptography_KeySizes__get_MinSize (System_Security_Cryptography_KeySizes_o* __this, const MethodInfo* method);
int32_t System_Security_Cryptography_KeySizes__get_MaxSize (System_Security_Cryptography_KeySizes_o* __this, const MethodInfo* method);
int32_t System_Security_Cryptography_KeySizes__get_SkipSize (System_Security_Cryptography_KeySizes_o* __this, const MethodInfo* method);
void System_Security_Cryptography_KeySizes___ctor (System_Security_Cryptography_KeySizes_o* __this, int32_t minSize, int32_t maxSize, int32_t skipSize, const MethodInfo* method);
bool System_Security_Cryptography_KeySizes__IsLegal (System_Security_Cryptography_KeySizes_o* __this, int32_t keySize, const MethodInfo* method);
bool System_Security_Cryptography_KeySizes__IsLegalKeySize (System_Security_Cryptography_KeySizes_array* legalKeys, int32_t size, const MethodInfo* method);
