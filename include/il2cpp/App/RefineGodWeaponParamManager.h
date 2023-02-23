#pragma once

#include "il2cpp.h"

App_RefineGodWeaponParamManager_o* App_RefineGodWeaponParamManager__Create (App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* godUnit, App_ItemData_o* godWeapon, App_RefineGodWeaponParamManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
App_RefineGodWeaponParamManager_o* App_RefineGodWeaponParamManager__CreateForReset (App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* godUnit, App_ItemData_o* godWeapon, App_RefineGodWeaponParamManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineGodWeaponParamManager___ctor (App_RefineGodWeaponParamManager_o* __this, App_ProcInst_o* super, App_RefineGodWeaponRoot_o* root, App_GodUnit_o* godUnit, App_ItemData_o* godWeapon, bool refineOrReset, App_RefineGodWeaponParamManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnSelect (App_RefineGodWeaponParamManager_o* __this, App_GodUnit_o* godUnit, App_ItemData_o* itemData, int32_t kind, bool refineOrReset, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnDecide (App_RefineGodWeaponParamManager_o* __this, App_GodWeaponRefineData_o* refineData, int32_t refineKind, int32_t currentLevel, System_String_o* sid, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnYesNoDialogYes (App_RefineGodWeaponParamManager_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnOkResult (App_RefineGodWeaponParamManager_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnDecideToReset (App_RefineGodWeaponParamManager_o* __this, App_GodWeaponRefineData_o* refineData, int32_t refineKind, int32_t currentLevel, System_String_o* sid, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnResetYesNoDialogYes (App_RefineGodWeaponParamManager_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnOkResultToReset (App_RefineGodWeaponParamManager_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamManager__RefineGodWeapon_Do (App_RefineGodWeaponParamManager_o* __this, App_GodUnit_o* godUnit, App_ItemData_o* godWeapon, int32_t refineKind, int32_t nextLevel, System_String_o* sid, const MethodInfo* method);
void App_RefineGodWeaponParamManager__RefineGodWeapon_Reset (App_RefineGodWeaponParamManager_o* __this, App_GodUnit_o* godUnit, int32_t kind, App_ItemData_o* godWeapon, const MethodInfo* method);
void App_RefineGodWeaponParamManager__OnRequestClose (App_RefineGodWeaponParamManager_o* __this, const MethodInfo* method);
bool App_RefineGodWeaponParamManager__TestToHasRejectiveSkill (App_RefineGodWeaponParamManager_o* __this, App_ItemData_o* godWeaponData, const MethodInfo* method);
