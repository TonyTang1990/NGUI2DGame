#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2412;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.ResolveEventArgs
struct ResolveEventArgs_t2479;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m18871 (ResolveEventHandler_t2412 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1120 * ResolveEventHandler_Invoke_m18872 (ResolveEventHandler_t2412 * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1120 * pinvoke_delegate_wrapper_ResolveEventHandler_t2412(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2479 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m18873 (ResolveEventHandler_t2412 * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1120 * ResolveEventHandler_EndInvoke_m18874 (ResolveEventHandler_t2412 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
