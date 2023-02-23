#pragma once

#include "il2cpp.h"

bool Combat_CharacterJump__get_IsEnd (Combat_CharacterJump_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CharacterJump__ClampToBorder (UnityEngine_Vector3_o start, UnityEngine_Vector3_o goal, bool isBig, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CharacterJump__ClampToBorder (UnityEngine_Vector3_o start, UnityEngine_Vector3_o goal, float radius, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CharacterJump__ClampToBorder (UnityEngine_Vector3_o start, UnityEngine_Vector3_o goal, Combat_Character_o* chr, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CharacterJump__ClampToBorder (UnityEngine_Vector3_o start, UnityEngine_Vector3_o goal, float radius, UnityEngine_Vector3_o offset, const MethodInfo* method);
void Combat_CharacterJump__JumpTo (Combat_CharacterJump_o* __this, Combat_Character_o* chr, UnityEngine_Vector3_o goal, float pullOffset, float duration, bool isGrounding, const MethodInfo* method);
void Combat_CharacterJump__JumpTo (Combat_CharacterJump_o* __this, Combat_Character_o* chr, UnityEngine_Transform_o* target, float pullOffset, float duration, bool isGrounding, const MethodInfo* method);
void Combat_CharacterJump__Stop (Combat_CharacterJump_o* __this, const MethodInfo* method);
void Combat_CharacterJump__Update (Combat_CharacterJump_o* __this, float deltaTime, const MethodInfo* method);
void Combat_CharacterJump___ctor (Combat_CharacterJump_o* __this, const MethodInfo* method);
