#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t938;
// System.Object
struct Object_t;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t927;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Data.DataRowChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DataRowChangeEventHandler__ctor_m4951 (DataRowChangeEventHandler_t938 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::Invoke(System.Object,System.Data.DataRowChangeEventArgs)
extern "C" void DataRowChangeEventHandler_Invoke_m4952 (DataRowChangeEventHandler_t938 * __this, Object_t * ___sender, DataRowChangeEventArgs_t927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataRowChangeEventHandler_t938(Il2CppObject* delegate, Object_t * ___sender, DataRowChangeEventArgs_t927 * ___e);
// System.IAsyncResult System.Data.DataRowChangeEventHandler::BeginInvoke(System.Object,System.Data.DataRowChangeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DataRowChangeEventHandler_BeginInvoke_m4953 (DataRowChangeEventHandler_t938 * __this, Object_t * ___sender, DataRowChangeEventArgs_t927 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DataRowChangeEventHandler_EndInvoke_m4954 (DataRowChangeEventHandler_t938 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
