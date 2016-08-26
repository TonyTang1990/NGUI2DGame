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

// System.Data.Common.ObjectDataContainer
struct ObjectDataContainer_t2927680112;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t2398158623;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Void System.Data.Common.ObjectDataContainer::.ctor()
extern "C"  void ObjectDataContainer__ctor_m98229934 (ObjectDataContainer_t2927680112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ObjectDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * ObjectDataContainer_GetValue_m3002685949 (ObjectDataContainer_t2927680112 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::ZeroOut(System.Int32)
extern "C"  void ObjectDataContainer_ZeroOut_m2987835285 (ObjectDataContainer_t2927680112 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void ObjectDataContainer_SetValue_m1155065342 (ObjectDataContainer_t2927680112 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void ObjectDataContainer_DoCopyValue_m2169302338 (ObjectDataContainer_t2927680112 * __this, DataContainer_t2398158623 * ___from0, int32_t ___from_index1, int32_t ___to_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ObjectDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t ObjectDataContainer_DoCompareValues_m2080495328 (ObjectDataContainer_t2927680112 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::Resize(System.Int32)
extern "C"  void ObjectDataContainer_Resize_m3414832011 (ObjectDataContainer_t2927680112 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ObjectDataContainer::GetInt64(System.Int32)
extern "C"  int64_t ObjectDataContainer_GetInt64_m2165029051 (ObjectDataContainer_t2927680112 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
