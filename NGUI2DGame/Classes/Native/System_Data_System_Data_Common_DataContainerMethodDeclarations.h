#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DataContainer
struct DataContainer_t909;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void System.Data.Common.DataContainer::.ctor()
extern "C" void DataContainer__ctor_m4286 (DataContainer_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetValue(System.Int32)
// System.Int64 System.Data.Common.DataContainer::GetInt64(System.Int32)
// System.Void System.Data.Common.DataContainer::ZeroOut(System.Int32)
// System.Void System.Data.Common.DataContainer::SetValue(System.Int32,System.Object)
// System.Void System.Data.Common.DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
// System.Int32 System.Data.Common.DataContainer::DoCompareValues(System.Int32,System.Int32)
// System.Void System.Data.Common.DataContainer::Resize(System.Int32)
// System.Object System.Data.Common.DataContainer::get_Item(System.Int32)
extern "C" Object_t * DataContainer_get_Item_m4287 (DataContainer_t909 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Item(System.Int32,System.Object)
extern "C" void DataContainer_set_Item_m4288 (DataContainer_t909 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::get_Capacity()
extern "C" int32_t DataContainer_get_Capacity_m4289 (DataContainer_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Capacity(System.Int32)
extern "C" void DataContainer_set_Capacity_m4290 (DataContainer_t909 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.Common.DataContainer::get_Type()
extern "C" Type_t * DataContainer_get_Type_m4291 (DataContainer_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.Common.DataContainer::get_Column()
extern "C" DataColumn_t858 * DataContainer_get_Column_m4292 (DataContainer_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.Common.DataContainer::Create(System.Type,System.Data.DataColumn)
extern "C" DataContainer_t909 * DataContainer_Create_m4293 (Object_t * __this /* static, unused */, Type_t * ___type, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetExplicitValue(System.Object)
extern "C" Object_t * DataContainer_GetExplicitValue_m4294 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetContainerData(System.Object)
extern "C" Object_t * DataContainer_GetContainerData_m4295 (DataContainer_t909 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataContainer::IsNull(System.Int32)
extern "C" bool DataContainer_IsNull_m4296 (DataContainer_t909 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::FillValues(System.Int32)
extern "C" void DataContainer_FillValues_m4297 (DataContainer_t909 * __this, int32_t ___fromIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Int32,System.Int32)
extern "C" void DataContainer_CopyValue_m4298 (DataContainer_t909 * __this, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C" void DataContainer_CopyValue_m4299 (DataContainer_t909 * __this, DataContainer_t909 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::CompareValues(System.Int32,System.Int32)
extern "C" int32_t DataContainer_CompareValues_m4300 (DataContainer_t909 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
