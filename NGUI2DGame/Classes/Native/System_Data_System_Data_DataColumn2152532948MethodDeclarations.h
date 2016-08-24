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

// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;
// System.Object
struct Il2CppObject;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.Common.DataContainer
struct DataContainer_t2398158623;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1689446432;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.Data.DataRelation
struct DataRelation_t790111712;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Data_System_Data_MappingType2630770062.h"
#include "System_System_ComponentModel_PropertyChangedEventH3042952059.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataSetDateTime574421329.h"
#include "System_Data_System_Data_PropertyCollection2281048903.h"
#include "System_System_ComponentModel_PropertyChangedEventA1689446432.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataColumn2152532948.h"

// System.Void System.Data.DataColumn::.ctor()
extern "C"  void DataColumn__ctor_m3751878003 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String)
extern "C"  void DataColumn__ctor_m1771351285 (DataColumn_t2152532948 * __this, String_t* ___columnName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type)
extern "C"  void DataColumn__ctor_m2729528876 (DataColumn_t2152532948 * __this, String_t* ___columnName0, Type_t * ___dataType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type,System.String,System.Data.MappingType)
extern "C"  void DataColumn__ctor_m2575771713 (DataColumn_t2152532948 * __this, String_t* ___columnName0, Type_t * ___dataType1, String_t* ___expr2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.cctor()
extern "C"  void DataColumn__cctor_m1501917382 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void DataColumn_add_PropertyChanged_m2061025282 (DataColumn_t2152532948 * __this, PropertyChangedEventHandler_t3042952059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void DataColumn_remove_PropertyChanged_m3660068623 (DataColumn_t2152532948 * __this, PropertyChangedEventHandler_t3042952059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_Item(System.Int32)
extern "C"  Il2CppObject * DataColumn_get_Item_m3623526703 (DataColumn_t2152532948 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Item(System.Int32,System.Object)
extern "C"  void DataColumn_set_Item_m1742561254 (DataColumn_t2152532948 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSetDateTime System.Data.DataColumn::get_DateTimeMode()
extern "C"  int32_t DataColumn_get_DateTimeMode_m3069522481 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DateTimeMode(System.Data.DataSetDateTime)
extern "C"  void DataColumn_set_DateTimeMode_m3052359176 (DataColumn_t2152532948 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AllowDBNull()
extern "C"  bool DataColumn_get_AllowDBNull_m1067676566 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AllowDBNull(System.Boolean)
extern "C"  void DataColumn_set_AllowDBNull_m1737402001 (DataColumn_t2152532948 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AutoIncrement()
extern "C"  bool DataColumn_get_AutoIncrement_m3833969300 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrement(System.Boolean)
extern "C"  void DataColumn_set_AutoIncrement_m2003976823 (DataColumn_t2152532948 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementSeed()
extern "C"  int64_t DataColumn_get_AutoIncrementSeed_m1254844382 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementSeed(System.Int64)
extern "C"  void DataColumn_set_AutoIncrementSeed_m1091870493 (DataColumn_t2152532948 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementStep()
extern "C"  int64_t DataColumn_get_AutoIncrementStep_m1477008727 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementStep(System.Int64)
extern "C"  void DataColumn_set_AutoIncrementStep_m3492870626 (DataColumn_t2152532948 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::UpdateAutoIncrementValue(System.Int64)
extern "C"  void DataColumn_UpdateAutoIncrementValue_m3065989789 (DataColumn_t2152532948 * __this, int64_t ___value640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::AutoIncrementValue()
extern "C"  int64_t DataColumn_AutoIncrementValue_m908307903 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Int32)
extern "C"  void DataColumn_SetDefaultValue_m4158936932 (DataColumn_t2152532948 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Caption()
extern "C"  String_t* DataColumn_get_Caption_m2213670869 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Caption(System.String)
extern "C"  void DataColumn_set_Caption_m1409877300 (DataColumn_t2152532948 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.MappingType System.Data.DataColumn::get_ColumnMapping()
extern "C"  int32_t DataColumn_get_ColumnMapping_m2980107806 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnMapping(System.Data.MappingType)
extern "C"  void DataColumn_set_ColumnMapping_m4004568049 (DataColumn_t2152532948 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_ColumnName()
extern "C"  String_t* DataColumn_get_ColumnName_m952398578 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnName(System.String)
extern "C"  void DataColumn_set_ColumnName_m701739609 (DataColumn_t2152532948 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumn::get_DataType()
extern "C"  Type_t * DataColumn_get_DataType_m3342791580 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DataType(System.Type)
extern "C"  void DataColumn_set_DataType_m24341761 (DataColumn_t2152532948 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_DefaultValue()
extern "C"  Il2CppObject * DataColumn_get_DefaultValue_m772983475 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DefaultValue(System.Object)
extern "C"  void DataColumn_set_DefaultValue_m436256492 (DataColumn_t2152532948 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Object,System.Boolean)
extern "C"  void DataColumn_SetDefaultValue_m656605090 (DataColumn_t2152532948 * __this, Il2CppObject * ___value0, bool ___forcedTypeCheck1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Expression()
extern "C"  String_t* DataColumn_get_Expression_m3280851589 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Expression(System.String)
extern "C"  void DataColumn_set_Expression_m1653779258 (DataColumn_t2152532948 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::get_CompiledExpression()
extern "C"  Il2CppObject * DataColumn_get_CompiledExpression_m3289754719 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataColumn::get_ExtendedProperties()
extern "C"  PropertyCollection_t2281048903 * DataColumn_get_ExtendedProperties_m2863778683 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ExtendedProperties(System.Data.PropertyCollection)
extern "C"  void DataColumn_set_ExtendedProperties_m1981267870 (DataColumn_t2152532948 * __this, PropertyCollection_t2281048903 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_MaxLength()
extern "C"  int32_t DataColumn_get_MaxLength_m4115457834 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_MaxLength(System.Int32)
extern "C"  void DataColumn_set_MaxLength_m3105083811 (DataColumn_t2152532948 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Namespace()
extern "C"  String_t* DataColumn_get_Namespace_m964427252 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Namespace(System.String)
extern "C"  void DataColumn_set_Namespace_m2618811579 (DataColumn_t2152532948 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_Ordinal()
extern "C"  int32_t DataColumn_get_Ordinal_m3724250171 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Ordinal(System.Int32)
extern "C"  void DataColumn_set_Ordinal_m1666798644 (DataColumn_t2152532948 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Prefix()
extern "C"  String_t* DataColumn_get_Prefix_m1612966875 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Prefix(System.String)
extern "C"  void DataColumn_set_Prefix_m3006675664 (DataColumn_t2152532948 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_ReadOnly()
extern "C"  bool DataColumn_get_ReadOnly_m3048767704 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ReadOnly(System.Boolean)
extern "C"  void DataColumn_set_ReadOnly_m3128604627 (DataColumn_t2152532948 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataColumn::get_Table()
extern "C"  DataTable_t3267612424 * DataColumn_get_Table_m377652168 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_Unique()
extern "C"  bool DataColumn_get_Unique_m4230128849 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Unique(System.Boolean)
extern "C"  void DataColumn_set_Unique_m2474399912 (DataColumn_t2152532948 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.DataColumn::get_DataContainer()
extern "C"  DataContainer_t2398158623 * DataColumn_get_DataContainer_m4018913775 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::CanAutoIncrement(System.Type)
extern "C"  bool DataColumn_CanAutoIncrement_m1538926434 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumn::Clone()
extern "C"  DataColumn_t2152532948 * DataColumn_Clone_m3488253418 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetUnique()
extern "C"  void DataColumn_SetUnique_m3300301152 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::OnPropertyChanging(System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void DataColumn_OnPropertyChanging_m1927317009 (DataColumn_t2152532948 * __this, PropertyChangedEventArgs_t1689446432 * ___pcevent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::RaisePropertyChanging(System.String)
extern "C"  void DataColumn_RaisePropertyChanging_m2073112097 (DataColumn_t2152532948 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::ToString()
extern "C"  String_t* DataColumn_ToString_m2242717246 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetTable(System.Data.DataTable)
extern "C"  void DataColumn_SetTable_m3048184474 (DataColumn_t2152532948 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::AreColumnSetsTheSame(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool DataColumn_AreColumnSetsTheSame_m2172391409 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t1080903261* ___columnSet0, DataColumnU5BU5D_t1080903261* ___compareSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::CompareValues(System.Int32,System.Int32)
extern "C"  int32_t DataColumn_CompareValues_m647186070 (DataColumn_t2152532948 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetParentRelation()
extern "C"  DataRelation_t790111712 * DataColumn_GetParentRelation_m3573922375 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetChildRelation()
extern "C"  DataRelation_t790111712 * DataColumn_GetChildRelation_m2075821317 (DataColumn_t2152532948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::DataTypeMatches(System.Data.DataColumn)
extern "C"  bool DataColumn_DataTypeMatches_m2673505213 (DataColumn_t2152532948 * __this, DataColumn_t2152532948 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::GetDefaultValueForType(System.Type)
extern "C"  Il2CppObject * DataColumn_GetDefaultValueForType_m4271564950 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
