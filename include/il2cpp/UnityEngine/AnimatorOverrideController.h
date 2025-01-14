#pragma once

#include "il2cpp.h"

void UnityEngine_AnimatorOverrideController___ctor (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController___ctor (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_RuntimeAnimatorController_o* controller, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__Internal_Create (UnityEngine_AnimatorOverrideController_o* self, UnityEngine_RuntimeAnimatorController_o* controller, const MethodInfo* method);
UnityEngine_RuntimeAnimatorController_o* UnityEngine_AnimatorOverrideController__get_runtimeAnimatorController (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__set_runtimeAnimatorController (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_RuntimeAnimatorController_o* value, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__get_Item (UnityEngine_AnimatorOverrideController_o* __this, System_String_o* name, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__set_Item (UnityEngine_AnimatorOverrideController_o* __this, System_String_o* name, UnityEngine_AnimationClip_o* value, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__Internal_GetClipByName (UnityEngine_AnimatorOverrideController_o* __this, System_String_o* name, bool returnEffectiveClip, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__Internal_SetClipByName (UnityEngine_AnimatorOverrideController_o* __this, System_String_o* name, UnityEngine_AnimationClip_o* clip, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__get_Item (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClip_o* clip, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__set_Item (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClip_o* clip, UnityEngine_AnimationClip_o* value, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__GetClip (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClip_o* originalClip, bool returnEffectiveClip, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__SetClip (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClip_o* originalClip, UnityEngine_AnimationClip_o* overrideClip, bool notify, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__SendNotification (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__GetOriginalClip (UnityEngine_AnimatorOverrideController_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_AnimationClip_o* UnityEngine_AnimatorOverrideController__GetOverrideClip (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClip_o* originalClip, const MethodInfo* method);
int32_t UnityEngine_AnimatorOverrideController__get_overridesCount (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__GetOverrides (UnityEngine_AnimatorOverrideController_o* __this, System_Collections_Generic_List_KeyValuePair_AnimationClip__AnimationClip___o* overrides, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__ApplyOverrides (UnityEngine_AnimatorOverrideController_o* __this, System_Collections_Generic_IList_KeyValuePair_AnimationClip__AnimationClip___o* overrides, const MethodInfo* method);
UnityEngine_AnimationClipPair_array* UnityEngine_AnimatorOverrideController__get_clips (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__set_clips (UnityEngine_AnimatorOverrideController_o* __this, UnityEngine_AnimationClipPair_array* value, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__PerformOverrideClipListCleanup (UnityEngine_AnimatorOverrideController_o* __this, const MethodInfo* method);
void UnityEngine_AnimatorOverrideController__OnInvalidateOverrideController (UnityEngine_AnimatorOverrideController_o* controller, const MethodInfo* method);
