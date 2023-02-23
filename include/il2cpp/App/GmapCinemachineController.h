#pragma once

#include "il2cpp.h"

void App_GmapCinemachineController___ctor (App_GmapCinemachineController_o* __this, UnityEngine_GameObject_o* carrier, const MethodInfo* method);
void App_GmapCinemachineController__SetPosition (App_GmapCinemachineController_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void App_GmapCinemachineController__SetGmapPath (App_GmapCinemachineController_o* __this, Cinemachine_CinemachinePathBase_o* path, float pos, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapCinemachineController__Move (App_GmapCinemachineController_o* __this, float speed, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapCinemachineController__Set (App_GmapCinemachineController_o* __this, float normalizedPos, const MethodInfo* method);
bool App_GmapCinemachineController__IsMoveFinished (App_GmapCinemachineController_o* __this, bool isForward, const MethodInfo* method);
int32_t App_GmapCinemachineController__GetFinishedType (App_GmapCinemachineController_o* __this, const MethodInfo* method);
void App_GmapCinemachineController__Enable (App_GmapCinemachineController_o* __this, const MethodInfo* method);
void App_GmapCinemachineController__Disable (App_GmapCinemachineController_o* __this, const MethodInfo* method);
float App_GmapCinemachineController__GetNormalizedPathPosition (App_GmapCinemachineController_o* __this, const MethodInfo* method);
float App_GmapCinemachineController__get_PathPosition (App_GmapCinemachineController_o* __this, const MethodInfo* method);
void App_GmapCinemachineController__set_PathPosition (App_GmapCinemachineController_o* __this, float value, const MethodInfo* method);
float App_GmapCinemachineController__get_PathLength (App_GmapCinemachineController_o* __this, const MethodInfo* method);
