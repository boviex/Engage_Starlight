#pragma once

#include "il2cpp.h"

App_ChallengeDifficultyManager_o* App_ChallengeDifficultyManager__Create (App_ProcInst_o* super, App_ChallengeMapSelectRoot_o* root, App_ChallengeData_o* challengeData, App_ChallengeDifficultyManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_ChallengeDifficultyManager___ctor (App_ChallengeDifficultyManager_o* __this, App_ProcInst_o* super, App_ChallengeMapSelectRoot_o* root, App_ChallengeData_o* challengeData, App_ChallengeDifficultyManager_ReturnEventHandler_o* returnEventHandler, const MethodInfo* method);
void App_ChallengeDifficultyManager__OnDecide (App_ChallengeDifficultyManager_o* __this, int32_t difficulty, const MethodInfo* method);
void App_ChallengeDifficultyManager__OnDecideYes (App_ChallengeDifficultyManager_o* __this, const MethodInfo* method);
void App_ChallengeDifficultyManager__OnRequestClose (App_ChallengeDifficultyManager_o* __this, int32_t difficulty, const MethodInfo* method);
