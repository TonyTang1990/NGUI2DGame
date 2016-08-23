#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.UInt64DataContainer
struct UInt64DataContainer_t1008;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.UInt64DataContainer::.ctor()
extern "C" void UInt64DataContainer__ctor_m4373 (UInt64DataContainer_t1008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt64DataContainer::GetValue(System.Int32)
extern "C" Object_t * UInt64DataContainer_GetValue_m4374 (UInt64DataContainer_t1008 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::ZeroOut(System.Int32)
extern "C" void UInt64DataContainer_ZeroOut_m4375 (UInt64DataContainer_t1008 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::SetValue(System.Int32,System.Object)
extern "C" void UInt64DataContainer_SetValue_m4376 (UInt64DataContainer_t1008 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void UInt64DataContainer_DoCopyValue_m4377 (UInt64DataContainer_t1008 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t UInt64DataContainer_DoCompareValues_m4378 (UInt64DataContainer_t1008 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::Resize(System.Int32)
extern "C" void UInt64DataContainer_Resize_m4379 (UInt64DataContainer_t1008 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt64DataContainer::GetInt64(System.Int32)
extern "C" int64_t UInt64DataContainer_GetInt64_m4380 (UInt64DataContainer_t1008 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
