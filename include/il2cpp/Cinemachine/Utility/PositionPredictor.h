#pragma once

#include "il2cpp.h"

float Cinemachine_Utility_PositionPredictor__get_Smoothing (Cinemachine_Utility_PositionPredictor_o* __this, const MethodInfo* method);
void Cinemachine_Utility_PositionPredictor__set_Smoothing (Cinemachine_Utility_PositionPredictor_o* __this, float value, const MethodInfo* method);
bool Cinemachine_Utility_PositionPredictor__IsEmpty (Cinemachine_Utility_PositionPredictor_o* __this, const MethodInfo* method);
void Cinemachine_Utility_PositionPredictor__ApplyTransformDelta (Cinemachine_Utility_PositionPredictor_o* __this, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_Utility_PositionPredictor__Reset (Cinemachine_Utility_PositionPredictor_o* __this, const MethodInfo* method);
void Cinemachine_Utility_PositionPredictor__AddPosition (Cinemachine_Utility_PositionPredictor_o* __this, UnityEngine_Vector3_o pos, float deltaTime, float lookaheadTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_PositionPredictor__PredictPositionDelta (Cinemachine_Utility_PositionPredictor_o* __this, float lookaheadTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_PositionPredictor__PredictPosition (Cinemachine_Utility_PositionPredictor_o* __this, float lookaheadTime, const MethodInfo* method);
void Cinemachine_Utility_PositionPredictor___ctor (Cinemachine_Utility_PositionPredictor_o* __this, const MethodInfo* method);
