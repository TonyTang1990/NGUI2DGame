#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.SingleDataContainer
struct SingleDataContainer_t1009;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.SingleDataContainer::.ctor()
extern "C" void SingleDataContainer__ctor_m4381 (SingleDataContainer_t1009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SingleDataContainer::GetValue(System.Int32)
extern "C" Object_t * SingleDataContainer_GetValue_m4382 (SingleDataContainer_t1009 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::ZeroOut(System.Int32)
extern "C" void SingleDataContainer_ZeroOut_m4383 (SingleDataContainer_t1009 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::SetValue(System.Int32,System.Object)
extern "C" void SingleDataContainer_SetValue_m4384 (SingleDataContainer_t1009 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void SingleDataContainer_DoCopyValue_m4385 (SingleDataContainer_t1009 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SingleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t SingleDataContainer_DoCompareValues_m4386 (SingleDataContainer_t1009 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::Resize(System.Int32)
extern "C" void SingleDataContainer_Resize_m4387 (SingleDataContainer_t1009 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SingleDataContainer::GetInt64(System.Int32)
extern "C" int64_t SingleDataContainer_GetInt64_m4388 (SingleDataContainer_t1009 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
