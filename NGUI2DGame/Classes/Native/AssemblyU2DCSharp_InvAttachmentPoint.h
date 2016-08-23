#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// InvAttachmentPoint
struct  InvAttachmentPoint_t21  : public MonoBehaviour_t3
{
	// InvBaseItem/Slot InvAttachmentPoint::slot
	int32_t ___slot_2;
	// UnityEngine.GameObject InvAttachmentPoint::mPrefab
	GameObject_t17 * ___mPrefab_3;
	// UnityEngine.GameObject InvAttachmentPoint::mChild
	GameObject_t17 * ___mChild_4;
};
