#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataTableCollection
struct DataTableCollection_t348;
// System.Data.DataTable
struct DataTable_t296;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataSet
struct DataSet_t346;
// System.Data.DataTable[]
struct DataTableU5BU5D_t859;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;

// System.Void System.Data.DataTableCollection::.ctor(System.Data.DataSet)
extern "C" void DataTableCollection__ctor_m4077 (DataTableCollection_t348 * __this, DataSet_t346 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.Int32)
extern "C" DataTable_t296 * DataTableCollection_get_Item_m1824 (DataTableCollection_t348 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.String)
extern "C" DataTable_t296 * DataTableCollection_get_Item_m4078 (DataTableCollection_t348 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTableCollection::get_List()
extern "C" ArrayList_t913 * DataTableCollection_get_List_m4079 (DataTableCollection_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Add(System.Data.DataTable)
extern "C" void DataTableCollection_Add_m3580 (DataTableCollection_t348 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::AddRange(System.Data.DataTable[])
extern "C" void DataTableCollection_AddRange_m3537 (DataTableCollection_t348 * __this, DataTableU5BU5D_t859* ___tables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Clear()
extern "C" void DataTableCollection_Clear_m3535 (DataTableCollection_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::Contains(System.String)
extern "C" bool DataTableCollection_Contains_m4080 (DataTableCollection_t348 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.Data.DataTable)
extern "C" int32_t DataTableCollection_IndexOf_m4081 (DataTableCollection_t348 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Remove(System.Data.DataTable)
extern "C" void DataTableCollection_Remove_m4082 (DataTableCollection_t348 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataTableCollection_OnCollectionChanging_m4083 (DataTableCollection_t348 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataTableCollection_OnCollectionChanged_m4084 (DataTableCollection_t348 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean,System.Int32)
extern "C" int32_t DataTableCollection_IndexOf_m4085 (DataTableCollection_t348 * __this, String_t* ___name, bool ___error, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::NameTable(System.Data.DataTable)
extern "C" void DataTableCollection_NameTable_m4086 (DataTableCollection_t348 * __this, DataTable_t296 * ___Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::CanRemove(System.Data.DataTable,System.Boolean)
extern "C" bool DataTableCollection_CanRemove_m4087 (DataTableCollection_t348 * __this, DataTable_t296 * ___table, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::RaiseForeignKeyReferenceException(System.String,System.String)
extern "C" void DataTableCollection_RaiseForeignKeyReferenceException_m4088 (DataTableCollection_t348 * __this, String_t* ___table, String_t* ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String)
extern "C" int32_t DataTableCollection_IndexOf_m4089 (DataTableCollection_t348 * __this, String_t* ___tableName, String_t* ___tableNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String,System.Boolean)
extern "C" int32_t DataTableCollection_IndexOf_m4090 (DataTableCollection_t348 * __this, String_t* ___name, String_t* ___ns, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean)
extern "C" int32_t DataTableCollection_IndexOf_m4091 (DataTableCollection_t348 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Schema(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataTableCollection_BinarySerialize_Schema_m4092 (DataTableCollection_t348 * __this, SerializationInfo_t669 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Data(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataTableCollection_BinarySerialize_Data_m4093 (DataTableCollection_t348 * __this, SerializationInfo_t669 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
