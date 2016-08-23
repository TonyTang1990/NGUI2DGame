#pragma once
#include <stdint.h>
// UITable/OnReposition
struct OnReposition_t143;
// UIPanel
struct UIPanel_t110;
// UIDraggablePanel
struct UIDraggablePanel_t100;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t144;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UITable/Direction
#include "AssemblyU2DCSharp_UITable_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UITable
struct  UITable_t145  : public MonoBehaviour_t3
{
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t55  ___padding_4;
	// System.Boolean UITable::sorted
	bool ___sorted_5;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_6;
	// System.Boolean UITable::repositionNow
	bool ___repositionNow_7;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_8;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t143 * ___onReposition_9;
	// UIPanel UITable::mPanel
	UIPanel_t110 * ___mPanel_10;
	// UIDraggablePanel UITable::mDrag
	UIDraggablePanel_t100 * ___mDrag_11;
	// System.Boolean UITable::mStarted
	bool ___mStarted_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::mChildren
	List_1_t144 * ___mChildren_13;
};
