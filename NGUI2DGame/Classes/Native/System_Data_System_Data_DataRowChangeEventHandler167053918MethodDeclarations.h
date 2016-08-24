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

// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t167053918;
// System.Object
struct Il2CppObject;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t949966087;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Data_System_Data_DataRowChangeEventArgs949966087.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Data.DataRowChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataRowChangeEventHandler__ctor_m2537844913 (DataRowChangeEventHandler_t167053918 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::Invoke(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void DataRowChangeEventHandler_Invoke_m181381497 (DataRowChangeEventHandler_t167053918 * __this, Il2CppObject * ___sender0, DataRowChangeEventArgs_t949966087 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Data.DataRowChangeEventHandler::BeginInvoke(System.Object,System.Data.DataRowChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataRowChangeEventHandler_BeginInvoke_m2955927784 (DataRowChangeEventHandler_t167053918 * __this, Il2CppObject * ___sender0, DataRowChangeEventArgs_t949966087 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataRowChangeEventHandler_EndInvoke_m897109711 (DataRowChangeEventHandler_t167053918 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
