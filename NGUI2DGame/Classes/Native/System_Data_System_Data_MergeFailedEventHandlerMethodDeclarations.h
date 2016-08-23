#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t932;
// System.Object
struct Object_t;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t950;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Data.MergeFailedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MergeFailedEventHandler__ctor_m4959 (MergeFailedEventHandler_t932 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::Invoke(System.Object,System.Data.MergeFailedEventArgs)
extern "C" void MergeFailedEventHandler_Invoke_m4960 (MergeFailedEventHandler_t932 * __this, Object_t * ___sender, MergeFailedEventArgs_t950 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MergeFailedEventHandler_t932(Il2CppObject* delegate, Object_t * ___sender, MergeFailedEventArgs_t950 * ___e);
// System.IAsyncResult System.Data.MergeFailedEventHandler::BeginInvoke(System.Object,System.Data.MergeFailedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * MergeFailedEventHandler_BeginInvoke_m4961 (MergeFailedEventHandler_t932 * __this, Object_t * ___sender, MergeFailedEventArgs_t950 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MergeFailedEventHandler_EndInvoke_m4962 (MergeFailedEventHandler_t932 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
