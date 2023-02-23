#pragma once

#include "il2cpp.h"

void App_MapFadeManager__OnEnable (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__OnDisable (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__SetupFadeObject (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__ClearFadeObject (App_MapFadeManager_o* __this, const MethodInfo* method);
float App_MapFadeManager__GetRadiusScale (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__ClearTransparent (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__UpdateTransparentPoint (App_MapFadeManager_o* __this, UnityEngine_Vector3_o pos, float radius, bool isCharacter, float alpha, const MethodInfo* method);
void App_MapFadeManager__UpdateTransparentBetween (App_MapFadeManager_o* __this, UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float radius, bool isCharacter, float alpha, const MethodInfo* method);
void App_MapFadeManager__UpdateTransparentImpl (App_MapFadeManager_o* __this, bool isCharacter, float alpha, int32_t count, const MethodInfo* method);
bool App_MapFadeManager__IsCutChange (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapFadeManager__UpdateFadeSpeed (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__UpdateTransparent (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__UpdateDestruction (App_MapFadeManager_o* __this, UnityEngine_Vector3_o pos, float radius, const MethodInfo* method);
void App_MapFadeManager__UpdateDestruction (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__ClearDestruction (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__UpdateFaderObject (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__LateUpdate (App_MapFadeManager_o* __this, const MethodInfo* method);
void App_MapFadeManager__Entry (App_CharacterCollision_o* collision, const MethodInfo* method);
void App_MapFadeManager__Remove (App_CharacterCollision_o* collision, const MethodInfo* method);
void App_MapFadeManager___ctor (App_MapFadeManager_o* __this, const MethodInfo* method);
