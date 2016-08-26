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

// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t3436675734;
// System.Object
struct Il2CppObject;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t3787575251;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs3787575251.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Data.DataColumnChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataColumnChangeEventHandler__ctor_m3141598837 (DataColumnChangeEventHandler_t3436675734 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::Invoke(System.Object,System.Data.DataColumnChangeEventArgs)
extern "C"  void DataColumnChangeEventHandler_Invoke_m1208602481 (DataColumnChangeEventHandler_t3436675734 * __this, Il2CppObject * ___sender0, DataColumnChangeEventArgs_t3787575251 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Data.DataColumnChangeEventHandler::BeginInvoke(System.Object,System.Data.DataColumnChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataColumnChangeEventHandler_BeginInvoke_m2540610056 (DataColumnChangeEventHandler_t3436675734 * __this, Il2CppObject * ___sender0, DataColumnChangeEventArgs_t3787575251 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataColumnChangeEventHandler_EndInvoke_m1100381443 (DataColumnChangeEventHandler_t3436675734 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
