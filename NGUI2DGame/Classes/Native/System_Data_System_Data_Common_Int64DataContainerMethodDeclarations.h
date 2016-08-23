#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.Int64DataContainer
struct Int64DataContainer_t1006;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.Int64DataContainer::.ctor()
extern "C" void Int64DataContainer__ctor_m4365 (Int64DataContainer_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int64DataContainer::GetValue(System.Int32)
extern "C" Object_t * Int64DataContainer_GetValue_m4366 (Int64DataContainer_t1006 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::ZeroOut(System.Int32)
extern "C" void Int64DataContainer_ZeroOut_m4367 (Int64DataContainer_t1006 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::SetValue(System.Int32,System.Object)
extern "C" void Int64DataContainer_SetValue_m4368 (Int64DataContainer_t1006 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void Int64DataContainer_DoCopyValue_m4369 (Int64DataContainer_t1006 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t Int64DataContainer_DoCompareValues_m4370 (Int64DataContainer_t1006 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::Resize(System.Int32)
extern "C" void Int64DataContainer_Resize_m4371 (Int64DataContainer_t1006 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int64DataContainer::GetInt64(System.Int32)
extern "C" int64_t Int64DataContainer_GetInt64_m4372 (Int64DataContainer_t1006 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
