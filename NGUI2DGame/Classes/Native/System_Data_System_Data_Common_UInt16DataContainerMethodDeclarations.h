#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.UInt16DataContainer
struct UInt16DataContainer_t1001;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.UInt16DataContainer::.ctor()
extern "C" void UInt16DataContainer__ctor_m4341 (UInt16DataContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt16DataContainer::GetValue(System.Int32)
extern "C" Object_t * UInt16DataContainer_GetValue_m4342 (UInt16DataContainer_t1001 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::ZeroOut(System.Int32)
extern "C" void UInt16DataContainer_ZeroOut_m4343 (UInt16DataContainer_t1001 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::SetValue(System.Int32,System.Object)
extern "C" void UInt16DataContainer_SetValue_m4344 (UInt16DataContainer_t1001 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void UInt16DataContainer_DoCopyValue_m4345 (UInt16DataContainer_t1001 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt16DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t UInt16DataContainer_DoCompareValues_m4346 (UInt16DataContainer_t1001 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::Resize(System.Int32)
extern "C" void UInt16DataContainer_Resize_m4347 (UInt16DataContainer_t1001 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt16DataContainer::GetInt64(System.Int32)
extern "C" int64_t UInt16DataContainer_GetInt64_m4348 (UInt16DataContainer_t1001 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
