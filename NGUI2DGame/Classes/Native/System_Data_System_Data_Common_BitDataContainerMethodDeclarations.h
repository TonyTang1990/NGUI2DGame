#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.BitDataContainer
struct BitDataContainer_t994;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.BitDataContainer::.ctor()
extern "C" void BitDataContainer__ctor_m4301 (BitDataContainer_t994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.BitDataContainer::GetValue(System.Int32)
extern "C" Object_t * BitDataContainer_GetValue_m4302 (BitDataContainer_t994 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::ZeroOut(System.Int32)
extern "C" void BitDataContainer_ZeroOut_m4303 (BitDataContainer_t994 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::SetValue(System.Int32,System.Object)
extern "C" void BitDataContainer_SetValue_m4304 (BitDataContainer_t994 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void BitDataContainer_DoCopyValue_m4305 (BitDataContainer_t994 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.BitDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t BitDataContainer_DoCompareValues_m4306 (BitDataContainer_t994 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::Resize(System.Int32)
extern "C" void BitDataContainer_Resize_m4307 (BitDataContainer_t994 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.BitDataContainer::GetInt64(System.Int32)
extern "C" int64_t BitDataContainer_GetInt64_m4308 (BitDataContainer_t994 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
