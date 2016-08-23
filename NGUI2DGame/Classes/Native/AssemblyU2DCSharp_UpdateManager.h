#pragma once
#include <stdint.h>
// UpdateManager
struct UpdateManager_t74;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t76;
// BetterList`1<UpdateManager/DestroyEntry>
struct BetterList_1_t77;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UpdateManager
struct  UpdateManager_t74  : public MonoBehaviour_t3
{
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnUpdate
	List_1_t76 * ___mOnUpdate_3;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnLate
	List_1_t76 * ___mOnLate_4;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnCoro
	List_1_t76 * ___mOnCoro_5;
	// BetterList`1<UpdateManager/DestroyEntry> UpdateManager::mDest
	BetterList_1_t77 * ___mDest_6;
	// System.Single UpdateManager::mTime
	float ___mTime_7;
};
struct UpdateManager_t74_StaticFields{
	// UpdateManager UpdateManager::mInst
	UpdateManager_t74 * ___mInst_2;
};
