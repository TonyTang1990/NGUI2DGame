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

// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t2361045790;
// System.Object
struct Il2CppObject;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t743281225;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs743281225.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Data.DataTableNewRowEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataTableNewRowEventHandler__ctor_m741975185 (DataTableNewRowEventHandler_t2361045790 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::Invoke(System.Object,System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTableNewRowEventHandler_Invoke_m579015769 (DataTableNewRowEventHandler_t2361045790 * __this, Il2CppObject * ___sender0, DataTableNewRowEventArgs_t743281225 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Data.DataTableNewRowEventHandler::BeginInvoke(System.Object,System.Data.DataTableNewRowEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataTableNewRowEventHandler_BeginInvoke_m3784520496 (DataTableNewRowEventHandler_t2361045790 * __this, Il2CppObject * ___sender0, DataTableNewRowEventArgs_t743281225 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataTableNewRowEventHandler_EndInvoke_m821019831 (DataTableNewRowEventHandler_t2361045790 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
