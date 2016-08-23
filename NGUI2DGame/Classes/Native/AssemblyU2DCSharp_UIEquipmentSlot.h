#pragma once
#include <stdint.h>
// InvEquipment
struct InvEquipment_t4;
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlot.h"
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// UIEquipmentSlot
struct  UIEquipmentSlot_t11  : public UIItemSlot_t12
{
	// InvEquipment UIEquipmentSlot::equipment
	InvEquipment_t4 * ___equipment_11;
	// InvBaseItem/Slot UIEquipmentSlot::slot
	int32_t ___slot_12;
};
