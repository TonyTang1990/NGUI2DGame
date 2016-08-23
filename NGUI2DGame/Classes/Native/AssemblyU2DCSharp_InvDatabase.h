#pragma once
#include <stdint.h>
// InvDatabase[]
struct InvDatabaseU5BU5D_t26;
// System.Collections.Generic.List`1<InvBaseItem>
struct List_1_t27;
// UIAtlas
struct UIAtlas_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InvDatabase
struct  InvDatabase_t28  : public MonoBehaviour_t3
{
	// System.Int32 InvDatabase::databaseID
	int32_t ___databaseID_4;
	// System.Collections.Generic.List`1<InvBaseItem> InvDatabase::items
	List_1_t27 * ___items_5;
	// UIAtlas InvDatabase::iconAtlas
	UIAtlas_t10 * ___iconAtlas_6;
};
struct InvDatabase_t28_StaticFields{
	// InvDatabase[] InvDatabase::mList
	InvDatabaseU5BU5D_t26* ___mList_2;
	// System.Boolean InvDatabase::mIsDirty
	bool ___mIsDirty_3;
};
