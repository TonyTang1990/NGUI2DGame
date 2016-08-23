#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t2427;
// System.Object
struct Object_t;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t2428;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ConsoleCancelEventHandler__ctor_m18864 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C" void ConsoleCancelEventHandler_Invoke_m18865 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t2427(Il2CppObject* delegate, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e);
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ConsoleCancelEventHandler_BeginInvoke_m18866 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ConsoleCancelEventHandler_EndInvoke_m18867 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
