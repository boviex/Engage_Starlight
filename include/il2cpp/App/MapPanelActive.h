#pragma once

#include "il2cpp.h"

int32_t App_MapPanelActive__get_SubMeshCount (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__Awake (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__Start (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__Update (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Material_array* App_MapPanelActive__GetSourceMaterials (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__UpdatePanelAlpha (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__UpdateAlwaysPanelAlpha (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__UpdateOrderPanelAlpha (App_MapPanelActive_o* __this, const MethodInfo* method);
int32_t App_MapPanelActive__GetMode (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__SetMode (App_MapPanelActive_o* __this, int32_t mode, bool isForceUpdate, App_SkillData_o* commandSkill, const MethodInfo* method);
void App_MapPanelActive__UpdateMode (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__UpdateVertex (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__SetUnit (App_MapPanelActive_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapPanelActive__set_IsUpdate (App_MapPanelActive_o* __this, bool value, const MethodInfo* method);
bool App_MapPanelActive__CanTarget (App_MapPanelActive_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapPanelActive__CanAttack (App_MapPanelActive_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapPanelActive__CanUseRod (App_MapPanelActive_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
void App_MapPanelActive__EachTargetCell (App_MapPanelActive_o* __this, int32_t x, int32_t z, int32_t minRange, int32_t maxRange, App_MapPanelActive_TargetFunc_o* func, const MethodInfo* method);
void App_MapPanelActive__AddCell (App_MapPanelActive_o* __this, System_Collections_Generic_List_RangeData_Offset__o* ranges, int32_t x, int32_t z, UnityEngine_Color_o color, int32_t type, const MethodInfo* method);
void App_MapPanelActive__SetVertex (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__SetMesh (App_MapPanelActive_o* __this, App_MapDeployMoveImage_o* image, int32_t index, const MethodInfo* method);
void App_MapPanelActive__SetMesh (App_MapPanelActive_o* __this, App_MapImageCoreBit_o* image, int32_t index, UnityEngine_Color_o color, int32_t display, bool isIgnoreMoveImage, const MethodInfo* method);
bool App_MapPanelActive__CanSetMesh (App_MapPanelActive_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapPanelActive__CanDrawMoveImage (App_MapPanelActive_o* __this, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapPanelActive__get_Mind (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__set_Mind (App_MapPanelActive_o* __this, int32_t value, const MethodInfo* method);
void App_MapPanelActive__set_Flag (App_MapPanelActive_o* __this, App_MapPanelActive_FlagField_o* value, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_HealColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_ActionColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_DragonVeinColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_AttackRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_HealRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_SupportRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_InterferenceRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_WarpRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_DanceRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_ActionRangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__set_DisplayColor (App_MapPanelActive_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
UnityEngine_Color_o App_MapPanelActive__get_RangeColor (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive__set_RangeColor (App_MapPanelActive_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
void App_MapPanelActive___ctor (App_MapPanelActive_o* __this, const MethodInfo* method);
void App_MapPanelActive___cctor (const MethodInfo* method);
