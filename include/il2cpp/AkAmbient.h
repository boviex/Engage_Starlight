#pragma once

#include "il2cpp.h"

void AkAmbient__OnEnable (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient__Start (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient__OnDisable (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient__HandleEvent (AkAmbient_o* __this, UnityEngine_GameObject_o* in_gameObject, const MethodInfo* method);
void AkAmbient__OnDrawGizmosSelected (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient__Update (AkAmbient_o* __this, const MethodInfo* method);
bool AkAmbient__CalcLenearPoints (AkAmbient_o* __this, UnityEngine_Vector3_o inputPos, int32_t* emitterPosCount, UnityEngine_Vector3_array** outputPosArray, UnityEngine_Vector3_array** outputFowardArray, UnityEngine_Vector3_array** outputUpArray, const MethodInfo* method);
AkPositionArray_o* AkAmbient__BuildMultiDirectionArray (AkAmbient_o* __this, AkMultiPosEvent_o* eventPosList, const MethodInfo* method);
AkPositionArray_o* AkAmbient__BuildAkPositionArray (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient___ctor (AkAmbient_o* __this, const MethodInfo* method);
void AkAmbient___cctor (const MethodInfo* method);
