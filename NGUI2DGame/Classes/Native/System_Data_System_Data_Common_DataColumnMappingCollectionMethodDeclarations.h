#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t991;
// System.Object
struct Object_t;
// System.Data.Common.DataColumnMapping
struct DataColumnMapping_t992;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t1104;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Data.Common.DataColumnMappingCollection::.ctor()
extern "C" void DataColumnMappingCollection__ctor_m4262 (DataColumnMappingCollection_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * DataColumnMappingCollection_System_Collections_ICollection_get_SyncRoot_m4263 (DataColumnMappingCollection_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * DataColumnMappingCollection_System_Collections_IList_get_Item_m4264 (DataColumnMappingCollection_t991 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void DataColumnMappingCollection_System_Collections_IList_set_Item_m4265 (DataColumnMappingCollection_t991 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::get_Count()
extern "C" int32_t DataColumnMappingCollection_get_Count_m4266 (DataColumnMappingCollection_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::get_Item(System.Int32)
extern "C" DataColumnMapping_t992 * DataColumnMappingCollection_get_Item_m4267 (DataColumnMappingCollection_t991 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::set_Item(System.Int32,System.Data.Common.DataColumnMapping)
extern "C" void DataColumnMappingCollection_set_Item_m4268 (DataColumnMappingCollection_t991 * __this, int32_t ___index, DataColumnMapping_t992 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::Add(System.Object)
extern "C" int32_t DataColumnMappingCollection_Add_m4269 (DataColumnMappingCollection_t991 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::Add(System.String,System.String)
extern "C" DataColumnMapping_t992 * DataColumnMappingCollection_Add_m4270 (DataColumnMappingCollection_t991 * __this, String_t* ___sourceColumn, String_t* ___dataSetColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::AddRange(System.Data.Common.DataColumnMapping[])
extern "C" void DataColumnMappingCollection_AddRange_m4271 (DataColumnMappingCollection_t991 * __this, DataColumnMappingU5BU5D_t1104* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Clear()
extern "C" void DataColumnMappingCollection_Clear_m4272 (DataColumnMappingCollection_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::Contains(System.Object)
extern "C" bool DataColumnMappingCollection_Contains_m4273 (DataColumnMappingCollection_t991 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Array,System.Int32)
extern "C" void DataColumnMappingCollection_CopyTo_m4274 (DataColumnMappingCollection_t991 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Data.Common.DataColumnMapping[],System.Int32)
extern "C" void DataColumnMappingCollection_CopyTo_m4275 (DataColumnMappingCollection_t991 * __this, DataColumnMappingU5BU5D_t1104* ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.Common.DataColumnMappingCollection::GetEnumerator()
extern "C" Object_t * DataColumnMappingCollection_GetEnumerator_m4276 (DataColumnMappingCollection_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::IndexOf(System.Object)
extern "C" int32_t DataColumnMappingCollection_IndexOf_m4277 (DataColumnMappingCollection_t991 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Insert(System.Int32,System.Object)
extern "C" void DataColumnMappingCollection_Insert_m4278 (DataColumnMappingCollection_t991 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Remove(System.Object)
extern "C" void DataColumnMappingCollection_Remove_m4279 (DataColumnMappingCollection_t991 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::RemoveAt(System.Int32)
extern "C" void DataColumnMappingCollection_RemoveAt_m4280 (DataColumnMappingCollection_t991 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
