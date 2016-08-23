#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.Int32DataContainer
struct Int32DataContainer_t1002;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.Int32DataContainer::.ctor()
extern "C" void Int32DataContainer__ctor_m4349 (Int32DataContainer_t1002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int32DataContainer::GetValue(System.Int32)
extern "C" Object_t * Int32DataContainer_GetValue_m4350 (Int32DataContainer_t1002 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::ZeroOut(System.Int32)
extern "C" void Int32DataContainer_ZeroOut_m4351 (Int32DataContainer_t1002 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::SetValue(System.Int32,System.Object)
extern "C" void Int32DataContainer_SetValue_m4352 (Int32DataContainer_t1002 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void Int32DataContainer_DoCopyValue_m4353 (Int32DataContainer_t1002 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int32DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t Int32DataContainer_DoCompareValues_m4354 (Int32DataContainer_t1002 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::Resize(System.Int32)
extern "C" void Int32DataContainer_Resize_m4355 (Int32DataContainer_t1002 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int32DataContainer::GetInt64(System.Int32)
extern "C" int64_t Int32DataContainer_GetInt64_m4356 (Int32DataContainer_t1002 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
