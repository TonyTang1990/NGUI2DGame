#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.UInt32DataContainer
struct UInt32DataContainer_t1004;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.UInt32DataContainer::.ctor()
extern "C" void UInt32DataContainer__ctor_m4357 (UInt32DataContainer_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt32DataContainer::GetValue(System.Int32)
extern "C" Object_t * UInt32DataContainer_GetValue_m4358 (UInt32DataContainer_t1004 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::ZeroOut(System.Int32)
extern "C" void UInt32DataContainer_ZeroOut_m4359 (UInt32DataContainer_t1004 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::SetValue(System.Int32,System.Object)
extern "C" void UInt32DataContainer_SetValue_m4360 (UInt32DataContainer_t1004 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void UInt32DataContainer_DoCopyValue_m4361 (UInt32DataContainer_t1004 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt32DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t UInt32DataContainer_DoCompareValues_m4362 (UInt32DataContainer_t1004 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::Resize(System.Int32)
extern "C" void UInt32DataContainer_Resize_m4363 (UInt32DataContainer_t1004 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt32DataContainer::GetInt64(System.Int32)
extern "C" int64_t UInt32DataContainer_GetInt64_m4364 (UInt32DataContainer_t1004 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
