#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Data.Common.SByteDataContainer
struct SByteDataContainer_t3110262680;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t2398158623;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Void System.Data.Common.SByteDataContainer::.ctor()
extern "C"  void SByteDataContainer__ctor_m2889771144 (SByteDataContainer_t3110262680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SByteDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * SByteDataContainer_GetValue_m3510395305 (SByteDataContainer_t3110262680 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::ZeroOut(System.Int32)
extern "C"  void SByteDataContainer_ZeroOut_m3761299405 (SByteDataContainer_t3110262680 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void SByteDataContainer_SetValue_m2999903224 (SByteDataContainer_t3110262680 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void SByteDataContainer_DoCopyValue_m810606604 (SByteDataContainer_t3110262680 * __this, DataContainer_t2398158623 * ___from0, int32_t ___from_index1, int32_t ___to_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t SByteDataContainer_DoCompareValues_m1014524206 (SByteDataContainer_t3110262680 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::Resize(System.Int32)
extern "C"  void SByteDataContainer_Resize_m1023225727 (SByteDataContainer_t3110262680 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SByteDataContainer::GetInt64(System.Int32)
extern "C"  int64_t SByteDataContainer_GetInt64_m526736971 (SByteDataContainer_t3110262680 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
