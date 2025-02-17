#pragma once

#include "il2cpp.h"

void UnityEngine_Timeline_SignalReceiver__OnNotify (UnityEngine_Timeline_SignalReceiver_o* __this, UnityEngine_Playables_Playable_o origin, UnityEngine_Playables_INotification_o* notification, Il2CppObject* context, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__AddReaction (UnityEngine_Timeline_SignalReceiver_o* __this, UnityEngine_Timeline_SignalAsset_o* asset, UnityEngine_Events_UnityEvent_o* reaction, const MethodInfo* method);
int32_t UnityEngine_Timeline_SignalReceiver__AddEmptyReaction (UnityEngine_Timeline_SignalReceiver_o* __this, UnityEngine_Events_UnityEvent_o* reaction, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__Remove (UnityEngine_Timeline_SignalReceiver_o* __this, UnityEngine_Timeline_SignalAsset_o* asset, const MethodInfo* method);
System_Collections_Generic_IEnumerable_SignalAsset__o* UnityEngine_Timeline_SignalReceiver__GetRegisteredSignals (UnityEngine_Timeline_SignalReceiver_o* __this, const MethodInfo* method);
UnityEngine_Events_UnityEvent_o* UnityEngine_Timeline_SignalReceiver__GetReaction (UnityEngine_Timeline_SignalReceiver_o* __this, UnityEngine_Timeline_SignalAsset_o* key, const MethodInfo* method);
int32_t UnityEngine_Timeline_SignalReceiver__Count (UnityEngine_Timeline_SignalReceiver_o* __this, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__ChangeSignalAtIndex (UnityEngine_Timeline_SignalReceiver_o* __this, int32_t idx, UnityEngine_Timeline_SignalAsset_o* newKey, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__RemoveAtIndex (UnityEngine_Timeline_SignalReceiver_o* __this, int32_t idx, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__ChangeReactionAtIndex (UnityEngine_Timeline_SignalReceiver_o* __this, int32_t idx, UnityEngine_Events_UnityEvent_o* reaction, const MethodInfo* method);
UnityEngine_Events_UnityEvent_o* UnityEngine_Timeline_SignalReceiver__GetReactionAtIndex (UnityEngine_Timeline_SignalReceiver_o* __this, int32_t idx, const MethodInfo* method);
UnityEngine_Timeline_SignalAsset_o* UnityEngine_Timeline_SignalReceiver__GetSignalAssetAtIndex (UnityEngine_Timeline_SignalReceiver_o* __this, int32_t idx, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver__OnEnable (UnityEngine_Timeline_SignalReceiver_o* __this, const MethodInfo* method);
void UnityEngine_Timeline_SignalReceiver___ctor (UnityEngine_Timeline_SignalReceiver_o* __this, const MethodInfo* method);
