#pragma once

#include "il2cpp.h"

void WindManager__Start (WindManager_o* __this, const MethodInfo* method);
void WindManager__Update (WindManager_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o WindManager__Calculate (WindManager_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
UnityEngine_Vector3_o WindManager__GetWind (UnityEngine_Vector3_o pos, const MethodInfo* method);
WindActor_o* WindManager__CreateActor (WindManager_o* __this, const MethodInfo* method);
WindSampler_o* WindManager__CreateSampler (WindManager_o* __this, const MethodInfo* method);
WindActor_o* WindManager__TryCreateActor (const MethodInfo* method);
void WindManager__OnValidate (WindManager_o* __this, const MethodInfo* method);
void WindManager__Attach (WindActor_o* actor, const MethodInfo* method);
void WindManager__Detach (WindActor_o* actor, const MethodInfo* method);
void WindManager___ctor (WindManager_o* __this, const MethodInfo* method);
