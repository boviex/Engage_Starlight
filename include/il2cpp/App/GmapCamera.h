#pragma once

#include "il2cpp.h"

float App_GmapCamera__get_ZoomDistance (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__set_ZoomDistance (App_GmapCamera_o* __this, float value, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapCamera__get_Position (App_GmapCamera_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapCamera__get_CameraPosition (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__set_IsCameraTracking (App_GmapCamera_o* __this, bool value, const MethodInfo* method);
bool App_GmapCamera__get_IsCameraTracking (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__Start (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__Update (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__Tick (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__UpdateKey (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__Commit (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__Instant (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera__ActiveCamera (App_GmapCamera_o* __this, const MethodInfo* method);
int32_t App_GmapCamera__GetCameraDistanceMode (App_GmapCamera_o* __this, const MethodInfo* method);
int32_t App_GmapCamera__GetBackMode (App_GmapCamera_o* __this, int32_t mode, const MethodInfo* method);
int32_t App_GmapCamera__GetZoomMode (App_GmapCamera_o* __this, int32_t mode, const MethodInfo* method);
int32_t App_GmapCamera__GetNextMode (App_GmapCamera_o* __this, int32_t mode, float dir, const MethodInfo* method);
float App_GmapCamera__GetParamTime (System_String_o* name, const MethodInfo* method);
UnityEngine_Rect_o App_GmapCamera__GetMoveableRect (const MethodInfo* method);
bool App_GmapCamera__IsMovableArea (UnityEngine_Vector3_o position, App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o** outAreaFlag, App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* ignoreFlag, const MethodInfo* method);
App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* App_GmapCamera__GetDisableDir (UnityEngine_Vector3_o position, App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* ignoreFlag, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapCamera__SetPosition (App_GmapCamera_o* __this, UnityEngine_Vector3_o position, bool isFreeCamera, const MethodInfo* method);
void App_GmapCamera__Zoom (App_GmapCamera_o* __this, float value, const MethodInfo* method);
void App_GmapCamera__SetZoomParam (App_GmapCamera_o* __this, int32_t index, const MethodInfo* method);
void App_GmapCamera__SetZoomDistance (App_GmapCamera_o* __this, float distance, const MethodInfo* method);
void App_GmapCamera__SetLookOver (App_GmapCamera_o* __this, UnityEngine_Vector3_o lookOverCameraPosition, const MethodInfo* method);
void App_GmapCamera__CancelLookOver (App_GmapCamera_o* __this, UnityEngine_Vector3_o returnPosition, const MethodInfo* method);
bool App_GmapCamera__CheckScroll (App_GmapCamera_o* __this, const MethodInfo* method);
bool App_GmapCamera__CheckScrollStrictly (App_GmapCamera_o* __this, const MethodInfo* method);
void App_GmapCamera___ctor (App_GmapCamera_o* __this, const MethodInfo* method);
