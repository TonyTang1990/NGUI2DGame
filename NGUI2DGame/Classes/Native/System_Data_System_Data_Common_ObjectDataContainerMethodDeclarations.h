#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.ObjectDataContainer
struct ObjectDataContainer_t1012;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.ObjectDataContainer::.ctor()
extern "C" void ObjectDataContainer__ctor_m4397 (ObjectDataContainer_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ObjectDataContainer::GetValue(System.Int32)
extern "C" Object_t * ObjectDataContainer_GetValue_m4398 (ObjectDataContainer_t1012 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::ZeroOut(System.Int32)
extern "C" void ObjectDataContainer_ZeroOut_m4399 (ObjectDataContainer_t1012 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::SetValue(System.Int32,System.Object)
extern "C" void ObjectDataContainer_SetValue_m4400 (ObjectDataContainer_t1012 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void ObjectDataContainer_DoCopyValue_m4401 (ObjectDataContainer_t1012 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ObjectDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t ObjectDataContainer_DoCompareValues_m4402 (ObjectDataContainer_t1012 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::Resize(System.Int32)
extern "C" void ObjectDataContainer_Resize_m4403 (ObjectDataContainer_t1012 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ObjectDataContainer::GetInt64(System.Int32)
extern "C" int64_t ObjectDataContainer_GetInt64_m4404 (ObjectDataContainer_t1012 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
