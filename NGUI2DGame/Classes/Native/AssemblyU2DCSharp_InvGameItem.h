#pragma once
#include <stdint.h>
// InvBaseItem
struct InvBaseItem_t24;
// System.Object
#include "mscorlib_System_Object.h"
// InvGameItem/Quality
#include "AssemblyU2DCSharp_InvGameItem_Quality.h"
// InvGameItem
struct  InvGameItem_t16  : public Object_t
{
	// System.Int32 InvGameItem::mBaseItemID
	int32_t ___mBaseItemID_0;
	// InvGameItem/Quality InvGameItem::quality
	int32_t ___quality_1;
	// System.Int32 InvGameItem::itemLevel
	int32_t ___itemLevel_2;
	// InvBaseItem InvGameItem::mBaseItem
	InvBaseItem_t24 * ___mBaseItem_3;
};
