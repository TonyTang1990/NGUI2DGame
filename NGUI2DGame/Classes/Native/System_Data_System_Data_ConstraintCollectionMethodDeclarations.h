#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.Constraint
struct Constraint_t900;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Object
struct Object_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;

// System.Void System.Data.ConstraintCollection::.ctor(System.Data.DataTable)
extern "C" void ConstraintCollection__ctor_m3665 (ConstraintCollection_t899 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ConstraintCollection::get_Table()
extern "C" DataTable_t296 * ConstraintCollection_get_Table_m3666 (ConstraintCollection_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.String)
extern "C" Constraint_t900 * ConstraintCollection_get_Item_m3667 (ConstraintCollection_t899 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.Int32)
extern "C" Constraint_t900 * ConstraintCollection_get_Item_m3668 (ConstraintCollection_t899 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::_handleBeforeConstraintNameChange(System.Object,System.String)
extern "C" void ConstraintCollection__handleBeforeConstraintNameChange_m3669 (ConstraintCollection_t899 * __this, Object_t * ___sender, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::_isDuplicateConstraintName(System.String,System.Data.Constraint)
extern "C" bool ConstraintCollection__isDuplicateConstraintName_m3670 (ConstraintCollection_t899 * __this, String_t* ___constraintName, Constraint_t900 * ___excludeFromComparison, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ConstraintCollection::_createNewConstraintName()
extern "C" String_t* ConstraintCollection__createNewConstraintName_m3671 (ConstraintCollection_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Add(System.Data.Constraint)
extern "C" void ConstraintCollection_Add_m3672 (ConstraintCollection_t899 * __this, Constraint_t900 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn,System.Boolean)
extern "C" Constraint_t900 * ConstraintCollection_Add_m3673 (ConstraintCollection_t899 * __this, String_t* ___name, DataColumn_t858 * ___column, bool ___primaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" Constraint_t900 * ConstraintCollection_Add_m3674 (ConstraintCollection_t899 * __this, String_t* ___name, DataColumnU5BU5D_t920* ___primaryKeyColumns, DataColumnU5BU5D_t920* ___foreignKeyColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::Contains(System.String)
extern "C" bool ConstraintCollection_Contains_m3675 (ConstraintCollection_t899 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.Data.Constraint)
extern "C" int32_t ConstraintCollection_IndexOf_m3676 (ConstraintCollection_t899 * __this, Constraint_t900 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.String)
extern "C" int32_t ConstraintCollection_IndexOf_m3677 (ConstraintCollection_t899 * __this, String_t* ___constraintName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Remove(System.Data.Constraint)
extern "C" void ConstraintCollection_Remove_m3678 (ConstraintCollection_t899 * __this, Constraint_t900 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.ConstraintCollection::get_List()
extern "C" ArrayList_t913 * ConstraintCollection_get_List_m3679 (ConstraintCollection_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void ConstraintCollection_OnCollectionChanged_m3680 (ConstraintCollection_t899 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
