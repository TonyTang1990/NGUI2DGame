#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.Int16DataContainer
struct Int16DataContainer_t999;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.Int16DataContainer::.ctor()
extern "C" void Int16DataContainer__ctor_m4333 (Int16DataContainer_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int16DataContainer::GetValue(System.Int32)
extern "C" Object_t * Int16DataContainer_GetValue_m4334 (Int16DataContainer_t999 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::ZeroOut(System.Int32)
extern "C" void Int16DataContainer_ZeroOut_m4335 (Int16DataContainer_t999 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::SetValue(System.Int32,System.Object)
extern "C" void Int16DataContainer_SetValue_m4336 (Int16DataContainer_t999 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void Int16DataContainer_DoCopyValue_m4337 (Int16DataContainer_t999 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int16DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t Int16DataContainer_DoCompareValues_m4338 (Int16DataContainer_t999 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::Resize(System.Int32)
extern "C" void Int16DataContainer_Resize_m4339 (Int16DataContainer_t999 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int16DataContainer::GetInt64(System.Int32)
extern "C" int64_t Int16DataContainer_GetInt64_m4340 (Int16DataContainer_t999 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
