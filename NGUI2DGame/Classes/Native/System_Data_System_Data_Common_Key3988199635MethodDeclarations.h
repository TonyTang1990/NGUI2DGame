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

// System.Data.Common.Key
struct Key_t3988199635;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t2343897312;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn
struct DataColumn_t2152532948;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataViewRowState2419600614.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataRowState3751910455.h"
#include "System_Data_System_Data_DataRowVersion3411859714.h"
#include "System_Data_System_Data_DataColumn2152532948.h"

// System.Void System.Data.Common.Key::.ctor(System.Data.DataTable,System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Key__ctor_m993330817 (Key_t3988199635 * __this, DataTable_t3267612424 * ___table0, DataColumnU5BU5D_t1080903261* ___columns1, ListSortDirectionU5BU5D_t2343897312* ___sort2, int32_t ___rowState3, Il2CppObject * ___filter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.Common.Key::get_Columns()
extern "C"  DataColumnU5BU5D_t1080903261* Key_get_Columns_m2808036611 (Key_t3988199635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.Key::get_Table()
extern "C"  DataTable_t3267612424 * Key_get_Table_m1842898482 (Key_t3988199635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::get_Sort()
extern "C"  ListSortDirectionU5BU5D_t2343897312* Key_get_Sort_m2135013787 (Key_t3988199635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataViewRowState System.Data.Common.Key::get_RowStateFilter()
extern "C"  int32_t Key_get_RowStateFilter_m3808423223 (Key_t3988199635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::get_HasFilter()
extern "C"  bool Key_get_HasFilter_m1487929872 (Key_t3988199635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::CompareRecords(System.Int32,System.Int32)
extern "C"  int32_t Key_CompareRecords_m2278326242 (Key_t3988199635 * __this, int32_t ___first0, int32_t ___second1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow)
extern "C"  int32_t Key_GetRecord_m701324471 (Key_t3988199635 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::CanContain(System.Int32)
extern "C"  bool Key_CanContain_m292787242 (Key_t3988199635 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::ContainsVersion(System.Data.DataRowState,System.Data.DataRowVersion)
extern "C"  bool Key_ContainsVersion_m1321044337 (Key_t3988199635 * __this, int32_t ___state0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow,System.Data.DataViewRowState)
extern "C"  int32_t Key_GetRecord_m3888829768 (Il2CppObject * __this /* static, unused */, DataRow_t321465356 * ___row0, int32_t ___rowStateFilter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::Equals(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  bool Key_Equals_m43596357 (Key_t3988199635 * __this, DataColumnU5BU5D_t1080903261* ___columns0, ListSortDirectionU5BU5D_t2343897312* ___sort1, int32_t ___rowState2, Il2CppObject * ___filter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::DependsOn(System.Data.DataColumn)
extern "C"  bool Key_DependsOn_m2934106502 (Key_t3988199635 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
