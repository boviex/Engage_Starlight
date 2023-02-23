#pragma once

#include "il2cpp.h"

void Cinemachine_CinemachineStoryboard__PostPipelineStageCallback (Cinemachine_CinemachineStoryboard_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, int32_t stage, Cinemachine_CameraState_o* state, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__ConnectToVcam (Cinemachine_CinemachineStoryboard_o* __this, bool connect, const MethodInfo* method);
System_String_o* Cinemachine_CinemachineStoryboard__get_CanvasName (Cinemachine_CinemachineStoryboard_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__CameraUpdatedCallback (Cinemachine_CinemachineStoryboard_o* __this, Cinemachine_CinemachineBrain_o* brain, const MethodInfo* method);
Cinemachine_CinemachineStoryboard_CanvasInfo_o* Cinemachine_CinemachineStoryboard__LocateMyCanvas (Cinemachine_CinemachineStoryboard_o* __this, Cinemachine_CinemachineBrain_o* parent, bool createIfNotFound, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__CreateCanvas (Cinemachine_CinemachineStoryboard_o* __this, Cinemachine_CinemachineStoryboard_CanvasInfo_o* ci, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__DestroyCanvas (Cinemachine_CinemachineStoryboard_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__PlaceImage (Cinemachine_CinemachineStoryboard_o* __this, Cinemachine_CinemachineStoryboard_CanvasInfo_o* ci, float alpha, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__StaticBlendingHandler (Cinemachine_CinemachineBrain_o* brain, const MethodInfo* method);
void Cinemachine_CinemachineStoryboard__InitializeModule (const MethodInfo* method);
void Cinemachine_CinemachineStoryboard___ctor (Cinemachine_CinemachineStoryboard_o* __this, const MethodInfo* method);
