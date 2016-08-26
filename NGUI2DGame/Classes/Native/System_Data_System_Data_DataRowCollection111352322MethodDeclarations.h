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

// System.Data.DataRowCollection
struct DataRowCollection_t111352322;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t3132270315;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataRowAction1701244498.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataViewRowState2419600614.h"
#include "System_System_ComponentModel_ListChangedEventArgs3132270315.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Data.DataRowCollection::.ctor(System.Data.DataTable)
extern "C"  void DataRowCollection__ctor_m3263022972 (DataRowCollection_t111352322 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
extern "C"  DataRow_t321465356 * DataRowCollection_get_Item_m3388503214 (DataRowCollection_t111352322 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
extern "C"  void DataRowCollection_Add_m1553569631 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::IndexOf(System.Data.DataRow)
extern "C"  int32_t DataRowCollection_IndexOf_m76095287 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_AddInternal_m3743157370 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataRowCollection_AddInternal_m3062819217 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
extern "C"  DataRow_t321465356 * DataRowCollection_Add_m406738482 (DataRowCollection_t111352322 * __this, ObjectU5BU5D_t3614634134* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object)
extern "C"  DataRow_t321465356 * DataRowCollection_Find_m117501962 (DataRowCollection_t111352322 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[])
extern "C"  DataRow_t321465356 * DataRowCollection_Find_m2843148006 (DataRowCollection_t111352322 * __this, ObjectU5BU5D_t3614634134* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[],System.Data.DataViewRowState)
extern "C"  DataRow_t321465356 * DataRowCollection_Find_m2894196553 (DataRowCollection_t111352322 * __this, ObjectU5BU5D_t3614634134* ___keys0, int32_t ___rowStateFilter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::InsertAt(System.Data.DataRow,System.Int32)
extern "C"  void DataRowCollection_InsertAt_m3710637541 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::RemoveInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_RemoveInternal_m709603263 (DataRowCollection_t111352322 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::OnListChanged(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void DataRowCollection_OnListChanged_m2222344596 (DataRowCollection_t111352322 * __this, Il2CppObject * ___sender0, ListChangedEventArgs_t3132270315 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C"  int32_t DataRowCollection_get_Count_m2443812197 (DataRowCollection_t111352322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Data.DataRow[],System.Int32)
extern "C"  void DataRowCollection_CopyTo_m2722040823 (DataRowCollection_t111352322 * __this, DataRowU5BU5D_t3318761029* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataRowCollection_CopyTo_m597131290 (DataRowCollection_t111352322 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.DataRowCollection::GetEnumerator()
extern "C"  Il2CppObject * DataRowCollection_GetEnumerator_m3089739725 (DataRowCollection_t111352322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
