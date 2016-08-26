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

// System.Data.DataTableCollection
struct DataTableCollection_t787171642;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.DataTable[]
struct DataTableU5BU5D_t2488609753;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1734749345;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_System_ComponentModel_CollectionChangeEvent1734749345.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"

// System.Void System.Data.DataTableCollection::.ctor(System.Data.DataSet)
extern "C"  void DataTableCollection__ctor_m734414828 (DataTableCollection_t787171642 * __this, DataSet_t3097402844 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.Int32)
extern "C"  DataTable_t3267612424 * DataTableCollection_get_Item_m2471458958 (DataTableCollection_t787171642 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.String)
extern "C"  DataTable_t3267612424 * DataTableCollection_get_Item_m289186499 (DataTableCollection_t787171642 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTableCollection::get_List()
extern "C"  ArrayList_t4252133567 * DataTableCollection_get_List_m4293673682 (DataTableCollection_t787171642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Add(System.Data.DataTable)
extern "C"  void DataTableCollection_Add_m4090285999 (DataTableCollection_t787171642 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::AddRange(System.Data.DataTable[])
extern "C"  void DataTableCollection_AddRange_m3780338292 (DataTableCollection_t787171642 * __this, DataTableU5BU5D_t2488609753* ___tables0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Clear()
extern "C"  void DataTableCollection_Clear_m1708746352 (DataTableCollection_t787171642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::Contains(System.String)
extern "C"  bool DataTableCollection_Contains_m2078594162 (DataTableCollection_t787171642 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.Data.DataTable)
extern "C"  int32_t DataTableCollection_IndexOf_m43736903 (DataTableCollection_t787171642 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Remove(System.Data.DataTable)
extern "C"  void DataTableCollection_Remove_m877862904 (DataTableCollection_t787171642 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataTableCollection_OnCollectionChanging_m3893963659 (DataTableCollection_t787171642 * __this, CollectionChangeEventArgs_t1734749345 * ___ccevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataTableCollection_OnCollectionChanged_m1784350006 (DataTableCollection_t787171642 * __this, CollectionChangeEventArgs_t1734749345 * ___ccevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean,System.Int32)
extern "C"  int32_t DataTableCollection_IndexOf_m268346388 (DataTableCollection_t787171642 * __this, String_t* ___name0, bool ___error1, int32_t ___start2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::NameTable(System.Data.DataTable)
extern "C"  void DataTableCollection_NameTable_m2527682299 (DataTableCollection_t787171642 * __this, DataTable_t3267612424 * ___Table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::CanRemove(System.Data.DataTable,System.Boolean)
extern "C"  bool DataTableCollection_CanRemove_m853508295 (DataTableCollection_t787171642 * __this, DataTable_t3267612424 * ___table0, bool ___throwException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::RaiseForeignKeyReferenceException(System.String,System.String)
extern "C"  void DataTableCollection_RaiseForeignKeyReferenceException_m2001828526 (DataTableCollection_t787171642 * __this, String_t* ___table0, String_t* ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String)
extern "C"  int32_t DataTableCollection_IndexOf_m1247682082 (DataTableCollection_t787171642 * __this, String_t* ___tableName0, String_t* ___tableNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String,System.Boolean)
extern "C"  int32_t DataTableCollection_IndexOf_m2135986675 (DataTableCollection_t787171642 * __this, String_t* ___name0, String_t* ___ns1, bool ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataTableCollection_IndexOf_m4122228785 (DataTableCollection_t787171642 * __this, String_t* ___name0, bool ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Schema(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTableCollection_BinarySerialize_Schema_m2870039451 (DataTableCollection_t787171642 * __this, SerializationInfo_t228987430 * ___si0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Data(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTableCollection_BinarySerialize_Data_m3389559082 (DataTableCollection_t787171642 * __this, SerializationInfo_t228987430 * ___si0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
