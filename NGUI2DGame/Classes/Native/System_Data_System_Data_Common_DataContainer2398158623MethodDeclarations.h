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

// System.Data.Common.DataContainer
struct DataContainer_t2398158623;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Data.DataColumn
struct DataColumn_t2152532948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_Common_DataContainer2398158623.h"

// System.Void System.Data.Common.DataContainer::.ctor()
extern "C"  void DataContainer__ctor_m2437572949 (DataContainer_t2398158623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::get_Item(System.Int32)
extern "C"  Il2CppObject * DataContainer_get_Item_m712224113 (DataContainer_t2398158623 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Item(System.Int32,System.Object)
extern "C"  void DataContainer_set_Item_m2373940904 (DataContainer_t2398158623 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::get_Capacity()
extern "C"  int32_t DataContainer_get_Capacity_m1165549648 (DataContainer_t2398158623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Capacity(System.Int32)
extern "C"  void DataContainer_set_Capacity_m3284678301 (DataContainer_t2398158623 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.Common.DataContainer::get_Type()
extern "C"  Type_t * DataContainer_get_Type_m1388246718 (DataContainer_t2398158623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.Common.DataContainer::get_Column()
extern "C"  DataColumn_t2152532948 * DataContainer_get_Column_m2827071114 (DataContainer_t2398158623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.Common.DataContainer::Create(System.Type,System.Data.DataColumn)
extern "C"  DataContainer_t2398158623 * DataContainer_Create_m1790851011 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, DataColumn_t2152532948 * ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetExplicitValue(System.Object)
extern "C"  Il2CppObject * DataContainer_GetExplicitValue_m1452706537 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetContainerData(System.Object)
extern "C"  Il2CppObject * DataContainer_GetContainerData_m2274948411 (DataContainer_t2398158623 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataContainer::IsNull(System.Int32)
extern "C"  bool DataContainer_IsNull_m4245866473 (DataContainer_t2398158623 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::FillValues(System.Int32)
extern "C"  void DataContainer_FillValues_m642549863 (DataContainer_t2398158623 * __this, int32_t ___fromIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Int32,System.Int32)
extern "C"  void DataContainer_CopyValue_m3069949039 (DataContainer_t2398158623 * __this, int32_t ___from_index0, int32_t ___to_index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void DataContainer_CopyValue_m2515523462 (DataContainer_t2398158623 * __this, DataContainer_t2398158623 * ___from0, int32_t ___from_index1, int32_t ___to_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::CompareValues(System.Int32,System.Int32)
extern "C"  int32_t DataContainer_CompareValues_m2906624992 (DataContainer_t2398158623 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
