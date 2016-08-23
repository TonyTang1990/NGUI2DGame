#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2426;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Console/InternalCancelHandler::.ctor(System.Object,System.IntPtr)
extern "C" void InternalCancelHandler__ctor_m14559 (InternalCancelHandler_t2426 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::Invoke()
extern "C" void InternalCancelHandler_Invoke_m14560 (InternalCancelHandler_t2426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InternalCancelHandler_t2426(Il2CppObject* delegate);
// System.IAsyncResult System.Console/InternalCancelHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InternalCancelHandler_BeginInvoke_m14561 (InternalCancelHandler_t2426 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::EndInvoke(System.IAsyncResult)
extern "C" void InternalCancelHandler_EndInvoke_m14562 (InternalCancelHandler_t2426 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
