#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_ClassChange_ChangeJobData__o* App_ClassChange__GetSelectJobList (App_JobData_o* jobData, const MethodInfo* method);
System_Collections_Generic_List_ClassChange_ChangeJobData__o* App_ClassChange__GetJobListAll (const MethodInfo* method);
System_Collections_Generic_List_JobData__o* App_ClassChange__GetJobList (App_Unit_o* unit, App_ItemData_o* item, const MethodInfo* method);
System_Collections_Generic_List_JobData__o* App_ClassChange__GetJobListByMaster (App_Unit_o* unit, const MethodInfo* method);
System_Collections_Generic_List_JobData__o* App_ClassChange__GetJobListByChange (App_Unit_o* unit, const MethodInfo* method);
void App_ClassChange__AddToListForMaster (System_Collections_Generic_List_JobData__o* jobList, App_Unit_o* unit, System_Collections_Generic_List_JobData__o* highJobs, const MethodInfo* method);
void App_ClassChange__AddToListForChange (System_Collections_Generic_List_JobData__o* jobList, App_Unit_o* unit, const MethodInfo* method);
void App_ClassChange__AddToList (System_Collections_Generic_List_JobData__o* jobList, App_Unit_o* unit, App_JobData_o* job, bool includeCurrentJob, bool ignoreAptitudeCheck, const MethodInfo* method);
System_Collections_Generic_List_JobData__o* App_ClassChange__GetRelationalJobs (App_JobData_o* job, const MethodInfo* method);
bool App_ClassChange__IsExists (System_Collections_Generic_List_JobData__o* jobList, App_JobData_o* targetJob, const MethodInfo* method);
void App_ClassChange___ctor (App_ClassChange_o* __this, const MethodInfo* method);
