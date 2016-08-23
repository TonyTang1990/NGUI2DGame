#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t937;
// System.Object
struct Object_t;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t911;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Data.DataColumnChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DataColumnChangeEventHandler__ctor_m4947 (DataColumnChangeEventHandler_t937 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::Invoke(System.Object,System.Data.DataColumnChangeEventArgs)
extern "C" void DataColumnChangeEventHandler_Invoke_m4948 (DataColumnChangeEventHandler_t937 * __this, Object_t * ___sender, DataColumnChangeEventArgs_t911 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataColumnChangeEventHandler_t937(Il2CppObject* delegate, Object_t * ___sender, DataColumnChangeEventArgs_t911 * ___e);
// System.IAsyncResult System.Data.DataColumnChangeEventHandler::BeginInvoke(System.Object,System.Data.DataColumnChangeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DataColumnChangeEventHandler_BeginInvoke_m4949 (DataColumnChangeEventHandler_t937 * __this, Object_t * ___sender, DataColumnChangeEventArgs_t911 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DataColumnChangeEventHandler_EndInvoke_m4950 (DataColumnChangeEventHandler_t937 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
