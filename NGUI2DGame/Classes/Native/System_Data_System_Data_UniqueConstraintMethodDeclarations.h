#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataColumn
struct DataColumn_t858;
// System.String
struct String_t;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn)
extern "C" void UniqueConstraint__ctor_m4180 (UniqueConstraint_t918 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn[],System.Boolean)
extern "C" void UniqueConstraint__ctor_m4181 (UniqueConstraint_t918 * __this, DataColumnU5BU5D_t920* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn,System.Boolean)
extern "C" void UniqueConstraint__ctor_m4182 (UniqueConstraint_t918 * __this, String_t* ___name, DataColumn_t858 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn[],System.Boolean)
extern "C" void UniqueConstraint__ctor_m4183 (UniqueConstraint_t918 * __this, String_t* ___name, DataColumnU5BU5D_t920* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn,System.Boolean)
extern "C" void UniqueConstraint__uniqueConstraint_m4184 (UniqueConstraint_t918 * __this, String_t* ___name, DataColumn_t858 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn[],System.Boolean)
extern "C" void UniqueConstraint__uniqueConstraint_m4185 (UniqueConstraint_t918 * __this, String_t* ___name, DataColumnU5BU5D_t920* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[])
extern "C" void UniqueConstraint__validateColumns_m4186 (UniqueConstraint_t918 * __this, DataColumnU5BU5D_t920* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataTable&)
extern "C" void UniqueConstraint__validateColumns_m4187 (UniqueConstraint_t918 * __this, DataColumnU5BU5D_t920* ___columns, DataTable_t296 ** ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumn(System.Data.DataColumn)
extern "C" void UniqueConstraint__validateColumn_m4188 (UniqueConstraint_t918 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetAsPrimaryKey(System.Data.ConstraintCollection,System.Data.UniqueConstraint)
extern "C" void UniqueConstraint_SetAsPrimaryKey_m4189 (Object_t * __this /* static, unused */, ConstraintCollection_t899 * ___collection, UniqueConstraint_t918 * ___newPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetPrimaryKeyConstraint(System.Data.ConstraintCollection)
extern "C" UniqueConstraint_t918 * UniqueConstraint_GetPrimaryKeyConstraint_m4190 (Object_t * __this /* static, unused */, ConstraintCollection_t899 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetUniqueConstraintForColumnSet(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C" UniqueConstraint_t918 * UniqueConstraint_GetUniqueConstraintForColumnSet_m4191 (Object_t * __this /* static, unused */, ConstraintCollection_t899 * ___collection, DataColumnU5BU5D_t920* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::get_ChildConstraint()
extern "C" ForeignKeyConstraint_t919 * UniqueConstraint_get_ChildConstraint_m4192 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::set_ChildConstraint(System.Data.ForeignKeyConstraint)
extern "C" void UniqueConstraint_set_ChildConstraint_m4193 (UniqueConstraint_t918 * __this, ForeignKeyConstraint_t919 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns()
extern "C" DataColumnU5BU5D_t920* UniqueConstraint_get_Columns_m4194 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::get_IsPrimaryKey()
extern "C" bool UniqueConstraint_get_IsPrimaryKey_m4195 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.UniqueConstraint::get_Table()
extern "C" DataTable_t296 * UniqueConstraint_get_Table_m4196 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetIsPrimaryKey(System.Boolean)
extern "C" void UniqueConstraint_SetIsPrimaryKey_m4197 (UniqueConstraint_t918 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::Equals(System.Object)
extern "C" bool UniqueConstraint_Equals_m4198 (UniqueConstraint_t918 * __this, Object_t * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.UniqueConstraint::GetHashCode()
extern "C" int32_t UniqueConstraint_GetHashCode_m4199 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C" void UniqueConstraint_AddToConstraintCollectionSetup_m4200 (UniqueConstraint_t918 * __this, ConstraintCollection_t899 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C" void UniqueConstraint_RemoveFromConstraintCollectionCleanup_m4201 (UniqueConstraint_t918 * __this, ConstraintCollection_t899 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsConstraintViolated()
extern "C" bool UniqueConstraint_IsConstraintViolated_m4202 (UniqueConstraint_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AssertConstraint(System.Data.DataRow)
extern "C" void UniqueConstraint_AssertConstraint_m4203 (UniqueConstraint_t918 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsColumnContained(System.Data.DataColumn)
extern "C" bool UniqueConstraint_IsColumnContained_m4204 (UniqueConstraint_t918 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C" bool UniqueConstraint_CanRemoveFromCollection_m4205 (UniqueConstraint_t918 * __this, ConstraintCollection_t899 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.UniqueConstraint::GetErrorMessage(System.Data.DataRow)
extern "C" String_t* UniqueConstraint_GetErrorMessage_m4206 (UniqueConstraint_t918 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
