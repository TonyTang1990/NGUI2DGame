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

// System.Data.ConstraintCollection
struct ConstraintCollection_t4088681537;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.Constraint
struct Constraint_t3084057805;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1734749345;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_Constraint3084057805.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_System_ComponentModel_CollectionChangeEvent1734749345.h"

// System.Void System.Data.ConstraintCollection::.ctor(System.Data.DataTable)
extern "C"  void ConstraintCollection__ctor_m597255821 (ConstraintCollection_t4088681537 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ConstraintCollection::get_Table()
extern "C"  DataTable_t3267612424 * ConstraintCollection_get_Table_m3795809877 (ConstraintCollection_t4088681537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.String)
extern "C"  Constraint_t3084057805 * ConstraintCollection_get_Item_m1145782211 (ConstraintCollection_t4088681537 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.Int32)
extern "C"  Constraint_t3084057805 * ConstraintCollection_get_Item_m4239412686 (ConstraintCollection_t4088681537 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::_handleBeforeConstraintNameChange(System.Object,System.String)
extern "C"  void ConstraintCollection__handleBeforeConstraintNameChange_m209356552 (ConstraintCollection_t4088681537 * __this, Il2CppObject * ___sender0, String_t* ___newName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::_isDuplicateConstraintName(System.String,System.Data.Constraint)
extern "C"  bool ConstraintCollection__isDuplicateConstraintName_m2087169418 (ConstraintCollection_t4088681537 * __this, String_t* ___constraintName0, Constraint_t3084057805 * ___excludeFromComparison1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ConstraintCollection::_createNewConstraintName()
extern "C"  String_t* ConstraintCollection__createNewConstraintName_m2387405498 (ConstraintCollection_t4088681537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Add(System.Data.Constraint)
extern "C"  void ConstraintCollection_Add_m1209811871 (ConstraintCollection_t4088681537 * __this, Constraint_t3084057805 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  Constraint_t3084057805 * ConstraintCollection_Add_m2197982450 (ConstraintCollection_t4088681537 * __this, String_t* ___name0, DataColumn_t2152532948 * ___column1, bool ___primaryKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  Constraint_t3084057805 * ConstraintCollection_Add_m4276756206 (ConstraintCollection_t4088681537 * __this, String_t* ___name0, DataColumnU5BU5D_t1080903261* ___primaryKeyColumns1, DataColumnU5BU5D_t1080903261* ___foreignKeyColumns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::Contains(System.String)
extern "C"  bool ConstraintCollection_Contains_m1705668595 (ConstraintCollection_t4088681537 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.Data.Constraint)
extern "C"  int32_t ConstraintCollection_IndexOf_m2575637551 (ConstraintCollection_t4088681537 * __this, Constraint_t3084057805 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.String)
extern "C"  int32_t ConstraintCollection_IndexOf_m1370861737 (ConstraintCollection_t4088681537 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Remove(System.Data.Constraint)
extern "C"  void ConstraintCollection_Remove_m3016494888 (ConstraintCollection_t4088681537 * __this, Constraint_t3084057805 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.ConstraintCollection::get_List()
extern "C"  ArrayList_t4252133567 * ConstraintCollection_get_List_m700560481 (ConstraintCollection_t4088681537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ConstraintCollection_OnCollectionChanged_m3030515721 (ConstraintCollection_t4088681537 * __this, CollectionChangeEventArgs_t1734749345 * ___ccevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
