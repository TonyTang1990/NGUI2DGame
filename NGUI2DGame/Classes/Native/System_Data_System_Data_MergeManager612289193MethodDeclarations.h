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

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Data_System_Data_MissingSchemaAction1287182105.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m499027991 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___targetSet0, DataSet_t3097402844 * ___sourceSet1, bool ___preserveChanges2, int32_t ___missingSchemaAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataTable,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m3440184723 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___targetSet0, DataTable_t3267612424 * ___sourceTable1, bool ___preserveChanges2, int32_t ___missingSchemaAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::MergeRow(System.Data.DataTable,System.Data.DataRow,System.Boolean)
extern "C"  void MergeManager_MergeRow_m1748181855 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataRow_t321465356 * ___row1, bool ___preserveChanges2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchemaRelations(System.Data.DataSet,System.Data.DataSet,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchemaRelations_m441209209 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___targetSet0, DataSet_t3097402844 * ___sourceSet1, int32_t ___missingSchemaAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.MergeManager::ResolveColumns(System.Data.DataTable,System.Data.DataColumn[])
extern "C"  DataColumnU5BU5D_t1080903261* MergeManager_ResolveColumns_m4004078363 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataColumnU5BU5D_t1080903261* ___sourceColumns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataSet,System.Data.DataTable,System.Data.MissingSchemaAction,System.Data.DataTable&)
extern "C"  bool MergeManager_AdjustSchema_m2704332453 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___targetSet0, DataTable_t3267612424 * ___sourceTable1, int32_t ___missingSchemaAction2, DataTable_t3267612424 ** ___newTable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataTable,System.Data.DataTable,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchema_m3869236018 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataTable_t3267612424 * ___sourceTable1, int32_t ___missingSchemaAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustPrimaryKeys(System.Data.DataTable,System.Data.DataTable)
extern "C"  bool MergeManager_AdjustPrimaryKeys_m2184444691 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataTable_t3267612424 * ___sourceTable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::fillData(System.Data.DataTable,System.Data.DataTable,System.Boolean)
extern "C"  void MergeManager_fillData_m1366476870 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataTable_t3267612424 * ___sourceTable1, bool ___preserveChanges2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::checkColumnTypes(System.Data.DataTable,System.Data.DataTable)
extern "C"  void MergeManager_checkColumnTypes_m2507770685 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, DataTable_t3267612424 * ___sourceTable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::CompareColumnArrays(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool MergeManager_CompareColumnArrays_m884694385 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t1080903261* ___arr10, DataColumnU5BU5D_t1080903261* ___arr21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::RaiseMergeFailedEvent(System.Data.DataTable,System.String)
extern "C"  void MergeManager_RaiseMergeFailedEvent_m4180971582 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___targetTable0, String_t* ___errMsg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
