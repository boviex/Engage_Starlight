#pragma once

#include "il2cpp.h"

void AkAuxSendArray___ctor (AkAuxSendArray_o* __this, const MethodInfo* method);
AkAuxSendValue_o* AkAuxSendArray__get_Item (AkAuxSendArray_o* __this, int32_t index, const MethodInfo* method);
bool AkAuxSendArray__get_isFull (AkAuxSendArray_o* __this, const MethodInfo* method);
void AkAuxSendArray__Dispose (AkAuxSendArray_o* __this, const MethodInfo* method);
void AkAuxSendArray__Finalize (AkAuxSendArray_o* __this, const MethodInfo* method);
void AkAuxSendArray__Reset (AkAuxSendArray_o* __this, const MethodInfo* method);
bool AkAuxSendArray__Add (AkAuxSendArray_o* __this, UnityEngine_GameObject_o* in_listenerGameObj, uint32_t in_AuxBusID, float in_fValue, const MethodInfo* method);
bool AkAuxSendArray__Add (AkAuxSendArray_o* __this, uint32_t in_AuxBusID, float in_fValue, const MethodInfo* method);
bool AkAuxSendArray__Contains (AkAuxSendArray_o* __this, UnityEngine_GameObject_o* in_listenerGameObj, uint32_t in_AuxBusID, const MethodInfo* method);
bool AkAuxSendArray__Contains (AkAuxSendArray_o* __this, uint32_t in_AuxBusID, const MethodInfo* method);
int32_t AkAuxSendArray__SetValues (AkAuxSendArray_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
int32_t AkAuxSendArray__GetValues (AkAuxSendArray_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
intptr_t AkAuxSendArray__GetBuffer (AkAuxSendArray_o* __this, const MethodInfo* method);
int32_t AkAuxSendArray__Count (AkAuxSendArray_o* __this, const MethodInfo* method);
intptr_t AkAuxSendArray__GetObjectPtr (AkAuxSendArray_o* __this, int32_t index, const MethodInfo* method);
