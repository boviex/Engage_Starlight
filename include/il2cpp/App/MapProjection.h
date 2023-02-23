#pragma once

#include "il2cpp.h"

bool App_MapProjection__IsUsable (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection__OnEnable (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection__OnDisable (App_MapProjection_o* __this, const MethodInfo* method);
int32_t App_MapProjection__GetSightFilter (App_MapProjection_o* __this, const MethodInfo* method);
int32_t App_MapProjection__GetSightSize (App_MapProjection_o* __this, const MethodInfo* method);
int32_t App_MapProjection__GetSightScale (App_MapProjection_o* __this, const MethodInfo* method);
int32_t App_MapProjection__GetSightShift (App_MapProjection_o* __this, const MethodInfo* method);
bool App_MapProjection__IsChangedSightTexture (App_MapProjection_o* __this, const MethodInfo* method);
UnityEngine_Texture2D_o* App_MapProjection__TryCreateSightTexture (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection__ClearSightTexture (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection__TryDeleteSightTexture (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection__UpdateSightTexture (App_MapProjection_o* __this, App_MapImageSight_o* image, int32_t w, int32_t h, const MethodInfo* method);
void App_MapProjection__Commit (App_MapProjection_o* __this, UnityEngine_Texture_o* texture, float scale, float alpha, float offsetX, float offsetY, float speedX, float speedY, const MethodInfo* method);
void App_MapProjection__Commit (App_MapProjection_o* __this, int32_t mode, const MethodInfo* method);
void App_MapProjection__Commit (App_MapProjection_o* __this, const MethodInfo* method);
void App_MapProjection___ctor (App_MapProjection_o* __this, const MethodInfo* method);
