#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.CharDataContainer
struct CharDataContainer_t995;
// System.Object
struct Object_t;
// System.Data.Common.DataContainer
struct DataContainer_t909;

// System.Void System.Data.Common.CharDataContainer::.ctor()
extern "C" void CharDataContainer__ctor_m4309 (CharDataContainer_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.CharDataContainer::GetValue(System.Int32)
extern "C" Object_t * CharDataContainer_GetValue_m4310 (CharDataContainer_t995 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::ZeroOut(System.Int32)
extern "C" void CharDataContainer_ZeroOut_m4311 (CharDataContainer_t995 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::SetValue(System.Int32,System.Object)
extern "C" void CharDataContainer_SetValue_m4312 (CharDataContainer_t995 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void CharDataContainer_DoCopyValue_m4313 (CharDataContainer_t995 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.CharDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C" int32_t CharDataContainer_DoCompareValues_m4314 (CharDataContainer_t995 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::Resize(System.Int32)
extern "C" void CharDataContainer_Resize_m4315 (CharDataContainer_t995 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.CharDataContainer::GetInt64(System.Int32)
extern "C" int64_t CharDataContainer_GetInt64_m4316 (CharDataContainer_t995 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
