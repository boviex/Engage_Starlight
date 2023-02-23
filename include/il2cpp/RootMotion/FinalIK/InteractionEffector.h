#pragma once

#include "il2cpp.h"

int32_t RootMotion_FinalIK_InteractionEffector__get_effectorType (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__set_effectorType (RootMotion_FinalIK_InteractionEffector_o* __this, int32_t value, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__get_isPaused (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__set_isPaused (RootMotion_FinalIK_InteractionEffector_o* __this, bool value, const MethodInfo* method);
RootMotion_FinalIK_InteractionObject_o* RootMotion_FinalIK_InteractionEffector__get_interactionObject (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__set_interactionObject (RootMotion_FinalIK_InteractionEffector_o* __this, RootMotion_FinalIK_InteractionObject_o* value, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__get_inInteraction (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector___ctor (RootMotion_FinalIK_InteractionEffector_o* __this, int32_t effectorType, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__Initiate (RootMotion_FinalIK_InteractionEffector_o* __this, RootMotion_FinalIK_InteractionSystem_o* interactionSystem, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__StoreDefaults (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__ResetToDefaults (RootMotion_FinalIK_InteractionEffector_o* __this, float speed, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__Pause (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__Resume (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__Start (RootMotion_FinalIK_InteractionEffector_o* __this, RootMotion_FinalIK_InteractionObject_o* interactionObject, System_String_o* tag, float fadeInTime, bool _interrupt, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__Update (RootMotion_FinalIK_InteractionEffector_o* __this, UnityEngine_Transform_o* root, float speed, const MethodInfo* method);
float RootMotion_FinalIK_InteractionEffector__get_progress (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__TriggerUntriggeredEvents (RootMotion_FinalIK_InteractionEffector_o* __this, bool checkTime, bool* pickUp, bool* pause, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__PickUp (RootMotion_FinalIK_InteractionEffector_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
bool RootMotion_FinalIK_InteractionEffector__Stop (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_InteractionEffector__OnPostFBBIK (RootMotion_FinalIK_InteractionEffector_o* __this, const MethodInfo* method);
