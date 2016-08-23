#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvDatabase
struct InvDatabase_t28;
// InvDatabase[]
struct InvDatabaseU5BU5D_t26;
// InvBaseItem
struct InvBaseItem_t24;
// System.String
struct String_t;

// System.Void InvDatabase::.ctor()
extern "C" void InvDatabase__ctor_m32 (InvDatabase_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::.cctor()
extern "C" void InvDatabase__cctor_m33 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase[] InvDatabase::get_list()
extern "C" InvDatabaseU5BU5D_t26* InvDatabase_get_list_m34 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnEnable()
extern "C" void InvDatabase_OnEnable_m35 (InvDatabase_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnDisable()
extern "C" void InvDatabase_OnDisable_m36 (InvDatabase_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::GetItem(System.Int32)
extern "C" InvBaseItem_t24 * InvDatabase_GetItem_m37 (InvDatabase_t28 * __this, int32_t ___id16, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase InvDatabase::GetDatabase(System.Int32)
extern "C" InvDatabase_t28 * InvDatabase_GetDatabase_m38 (Object_t * __this /* static, unused */, int32_t ___dbID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByID(System.Int32)
extern "C" InvBaseItem_t24 * InvDatabase_FindByID_m39 (Object_t * __this /* static, unused */, int32_t ___id32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByName(System.String)
extern "C" InvBaseItem_t24 * InvDatabase_FindByName_m40 (Object_t * __this /* static, unused */, String_t* ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
extern "C" int32_t InvDatabase_FindItemID_m41 (Object_t * __this /* static, unused */, InvBaseItem_t24 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
