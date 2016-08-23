#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvEquipment
struct InvEquipment_t4;
// InvGameItem[]
struct InvGameItemU5BU5D_t29;
// InvGameItem
struct InvGameItem_t16;
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"

// System.Void InvEquipment::.ctor()
extern "C" void InvEquipment__ctor_m42 (InvEquipment_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem[] InvEquipment::get_equippedItems()
extern "C" InvGameItemU5BU5D_t29* InvEquipment_get_equippedItems_m43 (InvEquipment_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
extern "C" InvGameItem_t16 * InvEquipment_Replace_m44 (InvEquipment_t4 * __this, int32_t ___slot, InvGameItem_t16 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Equip(InvGameItem)
extern "C" InvGameItem_t16 * InvEquipment_Equip_m45 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvGameItem)
extern "C" InvGameItem_t16 * InvEquipment_Unequip_m46 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
extern "C" InvGameItem_t16 * InvEquipment_Unequip_m47 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
extern "C" bool InvEquipment_HasEquipped_m48 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
extern "C" bool InvEquipment_HasEquipped_m49 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
extern "C" InvGameItem_t16 * InvEquipment_GetItem_m50 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
