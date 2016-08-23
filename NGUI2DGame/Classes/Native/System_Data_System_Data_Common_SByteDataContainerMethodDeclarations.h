#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.SByteDataContainer
struct SByteDataContainer_t998;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.SByteDataContainer::.ctor()
extern "C" void SByteDataContainer__ctor_m4325 (SByteDataContainer_t998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SByteDataContainer::GetValue(System.Int32)
extern "C" Object_t * SByteDataContainer_GetValue_m4326 (SByteDataContainer_t998 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::ZeroOut(System.Int32)
extern "C" void SByteDataContainer_ZeroOut_m4327 (SByteDataContainer_t998 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::SetValue(System.Int32,System.Object)
extern "C" void SByteDataContainer_SetValue_m4328 (SByteDataContainer_t998 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void SByteDataContainer_DoCopyValue_m4329 (SByteDataContainer_t998 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t SByteDataContainer_DoCompareValues_m4330 (SByteDataContainer_t998 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::Resize(System.Int32)
extern "C" void SByteDataContainer_Resize_m4331 (SByteDataContainer_t998 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SByteDataContainer::GetInt64(System.Int32)
extern "C" int64_t SByteDataContainer_GetInt64_m4332 (SByteDataContainer_t998 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
