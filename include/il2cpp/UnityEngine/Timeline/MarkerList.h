#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_IMarker__o* UnityEngine_Timeline_MarkerList__get_markers (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList___ctor (UnityEngine_Timeline_MarkerList_o __this, int32_t capacity, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList__Add (UnityEngine_Timeline_MarkerList_o __this, UnityEngine_ScriptableObject_o* item, const MethodInfo* method);
bool UnityEngine_Timeline_MarkerList__Remove (UnityEngine_Timeline_MarkerList_o __this, UnityEngine_Timeline_IMarker_o* item, const MethodInfo* method);
bool UnityEngine_Timeline_MarkerList__Remove (UnityEngine_Timeline_MarkerList_o __this, UnityEngine_ScriptableObject_o* item, UnityEngine_Timeline_TimelineAsset_o* timelineAsset, UnityEngine_Playables_PlayableAsset_o* thingToDirty, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList__Clear (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
System_Collections_Generic_IEnumerable_IMarker__o* UnityEngine_Timeline_MarkerList__GetMarkers (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
int32_t UnityEngine_Timeline_MarkerList__get_Count (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
UnityEngine_Timeline_IMarker_o* UnityEngine_Timeline_MarkerList__get_Item (UnityEngine_Timeline_MarkerList_o __this, int32_t idx, const MethodInfo* method);
System_Collections_Generic_List_ScriptableObject__o* UnityEngine_Timeline_MarkerList__GetRawMarkerList (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
UnityEngine_Timeline_IMarker_o* UnityEngine_Timeline_MarkerList__CreateMarker (UnityEngine_Timeline_MarkerList_o __this, System_Type_o* type, double time, UnityEngine_Timeline_TrackAsset_o* owner, const MethodInfo* method);
bool UnityEngine_Timeline_MarkerList__HasNotifications (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
void UnityEngine_Timeline_MarkerList__BuildCache (UnityEngine_Timeline_MarkerList_o __this, const MethodInfo* method);
