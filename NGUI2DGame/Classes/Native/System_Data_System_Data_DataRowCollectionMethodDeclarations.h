#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRowCollection
struct DataRowCollection_t349;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataTable
struct DataTable_t296;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Object
struct Object_t;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1100;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Data.DataRowAction
#include "System_Data_System_Data_DataRowAction.h"
// System.Data.DataViewRowState
#include "System_Data_System_Data_DataViewRowState.h"

// System.Void System.Data.DataRowCollection::.ctor(System.Data.DataTable)
extern "C" void DataRowCollection__ctor_m3899 (DataRowCollection_t349 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
extern "C" DataRow_t352 * DataRowCollection_get_Item_m1828 (DataRowCollection_t349 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
extern "C" void DataRowCollection_Add_m3900 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::IndexOf(System.Data.DataRow)
extern "C" int32_t DataRowCollection_IndexOf_m3901 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow)
extern "C" void DataRowCollection_AddInternal_m3902 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow,System.Data.DataRowAction)
extern "C" void DataRowCollection_AddInternal_m3903 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
extern "C" DataRow_t352 * DataRowCollection_Add_m3579 (DataRowCollection_t349 * __this, ObjectU5BU5D_t300* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object)
extern "C" DataRow_t352 * DataRowCollection_Find_m3904 (DataRowCollection_t349 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[])
extern "C" DataRow_t352 * DataRowCollection_Find_m3905 (DataRowCollection_t349 * __this, ObjectU5BU5D_t300* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[],System.Data.DataViewRowState)
extern "C" DataRow_t352 * DataRowCollection_Find_m3906 (DataRowCollection_t349 * __this, ObjectU5BU5D_t300* ___keys, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::InsertAt(System.Data.DataRow,System.Int32)
extern "C" void DataRowCollection_InsertAt_m3907 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::RemoveInternal(System.Data.DataRow)
extern "C" void DataRowCollection_RemoveInternal_m3908 (DataRowCollection_t349 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::OnListChanged(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C" void DataRowCollection_OnListChanged_m3909 (DataRowCollection_t349 * __this, Object_t * ___sender, ListChangedEventArgs_t1100 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C" int32_t DataRowCollection_get_Count_m3910 (DataRowCollection_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Data.DataRow[],System.Int32)
extern "C" void DataRowCollection_CopyTo_m3911 (DataRowCollection_t349 * __this, DataRowU5BU5D_t883* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Array,System.Int32)
extern "C" void DataRowCollection_CopyTo_m3912 (DataRowCollection_t349 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.DataRowCollection::GetEnumerator()
extern "C" Object_t * DataRowCollection_GetEnumerator_m3913 (DataRowCollection_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
