#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.ByteDataContainer
struct ByteDataContainer_t996;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.ByteDataContainer::.ctor()
extern "C" void ByteDataContainer__ctor_m4317 (ByteDataContainer_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ByteDataContainer::GetValue(System.Int32)
extern "C" Object_t * ByteDataContainer_GetValue_m4318 (ByteDataContainer_t996 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::ZeroOut(System.Int32)
extern "C" void ByteDataContainer_ZeroOut_m4319 (ByteDataContainer_t996 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::SetValue(System.Int32,System.Object)
extern "C" void ByteDataContainer_SetValue_m4320 (ByteDataContainer_t996 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void ByteDataContainer_DoCopyValue_m4321 (ByteDataContainer_t996 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t ByteDataContainer_DoCompareValues_m4322 (ByteDataContainer_t996 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::Resize(System.Int32)
extern "C" void ByteDataContainer_Resize_m4323 (ByteDataContainer_t996 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ByteDataContainer::GetInt64(System.Int32)
extern "C" int64_t ByteDataContainer_GetInt64_m4324 (ByteDataContainer_t996 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
