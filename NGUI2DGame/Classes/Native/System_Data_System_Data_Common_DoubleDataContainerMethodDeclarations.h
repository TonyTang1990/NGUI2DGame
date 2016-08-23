#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DoubleDataContainer
struct DoubleDataContainer_t1011;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.DoubleDataContainer::.ctor()
extern "C" void DoubleDataContainer__ctor_m4389 (DoubleDataContainer_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DoubleDataContainer::GetValue(System.Int32)
extern "C" Object_t * DoubleDataContainer_GetValue_m4390 (DoubleDataContainer_t1011 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::ZeroOut(System.Int32)
extern "C" void DoubleDataContainer_ZeroOut_m4391 (DoubleDataContainer_t1011 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::SetValue(System.Int32,System.Object)
extern "C" void DoubleDataContainer_SetValue_m4392 (DoubleDataContainer_t1011 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void DoubleDataContainer_DoCopyValue_m4393 (DoubleDataContainer_t1011 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DoubleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t DoubleDataContainer_DoCompareValues_m4394 (DoubleDataContainer_t1011 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::Resize(System.Int32)
extern "C" void DoubleDataContainer_Resize_m4395 (DoubleDataContainer_t1011 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.DoubleDataContainer::GetInt64(System.Int32)
extern "C" int64_t DoubleDataContainer_GetInt64_m4396 (DoubleDataContainer_t1011 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
