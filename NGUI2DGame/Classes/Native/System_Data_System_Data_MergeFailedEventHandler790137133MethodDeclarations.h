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

// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t790137133;
// System.Object
struct Il2CppObject;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t1148725902;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Data_System_Data_MergeFailedEventArgs1148725902.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Data.MergeFailedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MergeFailedEventHandler__ctor_m2524219970 (MergeFailedEventHandler_t790137133 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::Invoke(System.Object,System.Data.MergeFailedEventArgs)
extern "C"  void MergeFailedEventHandler_Invoke_m4220971897 (MergeFailedEventHandler_t790137133 * __this, Il2CppObject * ___sender0, MergeFailedEventArgs_t1148725902 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Data.MergeFailedEventHandler::BeginInvoke(System.Object,System.Data.MergeFailedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MergeFailedEventHandler_BeginInvoke_m4155933602 (MergeFailedEventHandler_t790137133 * __this, Il2CppObject * ___sender0, MergeFailedEventArgs_t1148725902 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MergeFailedEventHandler_EndInvoke_m965450364 (MergeFailedEventHandler_t790137133 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
