#pragma once

#include "il2cpp.h"

void App_RenderManager__PushRenderScale (System_String_o* name, const MethodInfo* method);
void App_RenderManager__PushRenderScale (float scale, const MethodInfo* method);
void App_RenderManager__PushRenderScale (System_String_o* name, System_String_o* nameOnGpuSave, const MethodInfo* method);
void App_RenderManager__PushRenderScale (float scale, float scaleOnGpuSave, const MethodInfo* method);
void App_RenderManager__PopRenderScale (const MethodInfo* method);
void App_RenderManager__PushLodBias (float lodBias, const MethodInfo* method);
void App_RenderManager__PushLodBias (float lodBias, float lodBiasOnGpuSaved, const MethodInfo* method);
void App_RenderManager__PopLodBias (const MethodInfo* method);
void App_RenderManager__PushCrossFadeAnimationDuration (float duration, const MethodInfo* method);
void App_RenderManager__PopCrossFadeAnimationDuration (const MethodInfo* method);
void App_RenderManager__PushCustomBlur (System_String_o* name, const MethodInfo* method);
void App_RenderManager__PushCustomBlur (int32_t blur, const MethodInfo* method);
void App_RenderManager__PopCustomBlur (const MethodInfo* method);
void App_RenderManager__PushColorRate (System_String_o* name, const MethodInfo* method);
void App_RenderManager__PushColorRate (float rate, const MethodInfo* method);
void App_RenderManager__PopColorRate (const MethodInfo* method);
void App_RenderManager__Reset (const MethodInfo* method);
void App_RenderManager__UpdateGpuPerformanceMode (const MethodInfo* method);
float App_RenderManager__GetFloat (System_String_o* name, float def, const MethodInfo* method);
int32_t App_RenderManager__GetInt (System_String_o* name, int32_t def, const MethodInfo* method);
UnityEngine_Color_o App_RenderManager__GetStackPeek_Color_ (System_Collections_Generic_Stack_T__o* stack, UnityEngine_Color_o def, const MethodInfo_20587B0* method);
int32_t App_RenderManager__GetStackPeek_int_ (System_Collections_Generic_Stack_T__o* stack, int32_t def, const MethodInfo_2058840* method);
Il2CppObject* App_RenderManager__GetStackPeek_object_ (System_Collections_Generic_Stack_T__o* stack, Il2CppObject* def, const MethodInfo_20588B0* method);
float App_RenderManager__GetStackPeek_float_ (System_Collections_Generic_Stack_T__o* stack, float def, const MethodInfo_2058920* method);
void App_RenderManager__CommitScale (const MethodInfo* method);
void App_RenderManager__CommitLodBias (const MethodInfo* method);
void App_RenderManager__CommitBlur (const MethodInfo* method);
void App_RenderManager__CommitColor (const MethodInfo* method);
void App_RenderManager__CommitColorRate (const MethodInfo* method);
void App_RenderManager__CommitCrossFadeAnimationDuration (const MethodInfo* method);
void App_RenderManager___ctor (App_RenderManager_o* __this, const MethodInfo* method);
void App_RenderManager___cctor (const MethodInfo* method);
