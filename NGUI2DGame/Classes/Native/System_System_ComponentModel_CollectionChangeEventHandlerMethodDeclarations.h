#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Object
struct Object_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CollectionChangeEventHandler__ctor_m5260 (CollectionChangeEventHandler_t901 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C" void CollectionChangeEventHandler_Invoke_m12707 (CollectionChangeEventHandler_t901 * __this, Object_t * ___sender, CollectionChangeEventArgs_t1097 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CollectionChangeEventHandler_t901(Il2CppObject* delegate, Object_t * ___sender, CollectionChangeEventArgs_t1097 * ___e);
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * CollectionChangeEventHandler_BeginInvoke_m12708 (CollectionChangeEventHandler_t901 * __this, Object_t * ___sender, CollectionChangeEventArgs_t1097 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void CollectionChangeEventHandler_EndInvoke_m12709 (CollectionChangeEventHandler_t901 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
