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

// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t613421182;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataRelation
struct DataRelation_t790111712;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_DataRelation790111712.h"

// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::.ctor(System.Data.DataTable)
extern "C"  void DataTableRelationCollection__ctor_m4221685739 (DataTableRelationCollection_t613421182 * __this, DataTable_t3267612424 * ___dataTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataTableRelationCollection::GetDataSet()
extern "C"  DataSet_t3097402844 * DataTableRelationCollection_GetDataSet_m239054706 (DataTableRelationCollection_t613421182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.String)
extern "C"  DataRelation_t790111712 * DataTableRelationCollection_get_Item_m2632608048 (DataTableRelationCollection_t613421182 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.Int32)
extern "C"  DataRelation_t790111712 * DataTableRelationCollection_get_Item_m1504628617 (DataTableRelationCollection_t613421182 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataTableRelationCollection_AddCore_m2037615085 (DataTableRelationCollection_t613421182 * __this, DataRelation_t790111712 * ___relation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::get_List()
extern "C"  ArrayList_t4252133567 * DataTableRelationCollection_get_List_m3480677091 (DataTableRelationCollection_t613421182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
