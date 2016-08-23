#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DragDropItem
struct  DragDropItem_t44  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject DragDropItem::prefab
	GameObject_t17 * ___prefab_2;
	// UnityEngine.Transform DragDropItem::mTrans
	Transform_t8 * ___mTrans_3;
	// System.Boolean DragDropItem::mIsDragging
	bool ___mIsDragging_4;
	// System.Boolean DragDropItem::mSticky
	bool ___mSticky_5;
	// UnityEngine.Transform DragDropItem::mParent
	Transform_t8 * ___mParent_6;
};
