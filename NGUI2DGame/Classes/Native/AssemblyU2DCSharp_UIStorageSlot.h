#pragma once
#include <stdint.h>
// UIItemStorage
struct UIItemStorage_t19;
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlot.h"
// UIStorageSlot
struct  UIStorageSlot_t20  : public UIItemSlot_t12
{
	// UIItemStorage UIStorageSlot::storage
	UIItemStorage_t19 * ___storage_11;
	// System.Int32 UIStorageSlot::slot
	int32_t ___slot_12;
};
