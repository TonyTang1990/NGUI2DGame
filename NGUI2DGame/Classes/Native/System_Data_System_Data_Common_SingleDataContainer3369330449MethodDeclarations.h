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

// System.Data.Common.SingleDataContainer
struct SingleDataContainer_t3369330449;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t2398158623;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Void System.Data.Common.SingleDataContainer::.ctor()
extern "C"  void SingleDataContainer__ctor_m3990898615 (SingleDataContainer_t3369330449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SingleDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * SingleDataContainer_GetValue_m4177433430 (SingleDataContainer_t3369330449 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::ZeroOut(System.Int32)
extern "C"  void SingleDataContainer_ZeroOut_m679085142 (SingleDataContainer_t3369330449 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void SingleDataContainer_SetValue_m144749293 (SingleDataContainer_t3369330449 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void SingleDataContainer_DoCopyValue_m3046809183 (SingleDataContainer_t3369330449 * __this, DataContainer_t2398158623 * ___from0, int32_t ___from_index1, int32_t ___to_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SingleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t SingleDataContainer_DoCompareValues_m2151572969 (SingleDataContainer_t3369330449 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::Resize(System.Int32)
extern "C"  void SingleDataContainer_Resize_m711109808 (SingleDataContainer_t3369330449 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SingleDataContainer::GetInt64(System.Int32)
extern "C"  int64_t SingleDataContainer_GetInt64_m1969453578 (SingleDataContainer_t3369330449 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
