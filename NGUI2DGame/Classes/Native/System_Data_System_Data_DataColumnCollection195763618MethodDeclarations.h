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

// System.Data.DataColumnCollection
struct DataColumnCollection_t195763618;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Type
struct Type_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1734749345;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1689446432;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_System_ComponentModel_CollectionChangeEventH790626706.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_CollectionChangeEvent1734749345.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_PropertyChangedEventA1689446432.h"

// System.Void System.Data.DataColumnCollection::.ctor(System.Data.DataTable)
extern "C"  void DataColumnCollection__ctor_m2622663562 (DataColumnCollection_t195763618 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::.cctor()
extern "C"  void DataColumnCollection__cctor_m3752498938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_add_CollectionChanged_m729410076 (DataColumnCollection_t195763618 * __this, CollectionChangeEventHandler_t790626706 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_remove_CollectionChanged_m2226670081 (DataColumnCollection_t195763618 * __this, CollectionChangeEventHandler_t790626706 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.Int32)
extern "C"  DataColumn_t2152532948 * DataColumnCollection_get_Item_m330535932 (DataColumnCollection_t195763618 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.String)
extern "C"  DataColumn_t2152532948 * DataColumnCollection_get_Item_m1114833311 (DataColumnCollection_t195763618 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_List()
extern "C"  ArrayList_t4252133567 * DataColumnCollection_get_List_m664376552 (DataColumnCollection_t195763618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_AutoIncrmentColumns()
extern "C"  ArrayList_t4252133567 * DataColumnCollection_get_AutoIncrmentColumns_m1047380742 (DataColumnCollection_t195763618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add()
extern "C"  DataColumn_t2152532948 * DataColumnCollection_Add_m122413616 (DataColumnCollection_t195763618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::RegisterName(System.String,System.Data.DataColumn)
extern "C"  void DataColumnCollection_RegisterName_m2614167456 (DataColumnCollection_t195763618 * __this, String_t* ___name0, DataColumn_t2152532948 * ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UnregisterName(System.String)
extern "C"  void DataColumnCollection_UnregisterName_m4114106500 (DataColumnCollection_t195763618 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::GetNextDefaultColumnName()
extern "C"  String_t* DataColumnCollection_GetNextDefaultColumnName_m3738337955 (DataColumnCollection_t195763618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::MakeName(System.Int32)
extern "C"  String_t* DataColumnCollection_MakeName_m1936782642 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::Add(System.Data.DataColumn)
extern "C"  void DataColumnCollection_Add_m1535510655 (DataColumnCollection_t195763618 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String,System.Type)
extern "C"  DataColumn_t2152532948 * DataColumnCollection_Add_m403734665 (DataColumnCollection_t195763618 * __this, String_t* ___columnName0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumnCollection::Contains(System.String)
extern "C"  bool DataColumnCollection_Contains_m91325880 (DataColumnCollection_t195763618 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.Data.DataColumn)
extern "C"  int32_t DataColumnCollection_IndexOf_m3998212239 (DataColumnCollection_t195763618 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String)
extern "C"  int32_t DataColumnCollection_IndexOf_m2960511136 (DataColumnCollection_t195763618 * __this, String_t* ___columnName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionChanged_m2298669684 (DataColumnCollection_t195763618 * __this, CollectionChangeEventArgs_t1734749345 * ___ccevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UpdateAutoIncrement(System.Data.DataColumn,System.Boolean)
extern "C"  void DataColumnCollection_UpdateAutoIncrement_m1903451048 (DataColumnCollection_t195763618 * __this, DataColumn_t2152532948 * ___col0, bool ___isAutoIncrement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataColumnCollection_IndexOf_m407761505 (DataColumnCollection_t195763618 * __this, String_t* ___name0, bool ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionMetaDataChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionMetaDataChanged_m1230521015 (DataColumnCollection_t195763618 * __this, CollectionChangeEventArgs_t1734749345 * ___ccevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::ColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void DataColumnCollection_ColumnPropertyChanged_m376032347 (DataColumnCollection_t195763618 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t1689446432 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
