#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t928;
// System.Object
struct Object_t;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1100;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ListChangedEventHandler__ctor_m12710 (ListChangedEventHandler_t928 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C" void ListChangedEventHandler_Invoke_m12711 (ListChangedEventHandler_t928 * __this, Object_t * ___sender, ListChangedEventArgs_t1100 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ListChangedEventHandler_t928(Il2CppObject* delegate, Object_t * ___sender, ListChangedEventArgs_t1100 * ___e);
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ListChangedEventHandler_BeginInvoke_m12712 (ListChangedEventHandler_t928 * __this, Object_t * ___sender, ListChangedEventArgs_t1100 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ListChangedEventHandler_EndInvoke_m12713 (ListChangedEventHandler_t928 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
