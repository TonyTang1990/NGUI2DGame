#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t939;
// System.Object
struct Object_t;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t940;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Data.DataTableNewRowEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DataTableNewRowEventHandler__ctor_m4955 (DataTableNewRowEventHandler_t939 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::Invoke(System.Object,System.Data.DataTableNewRowEventArgs)
extern "C" void DataTableNewRowEventHandler_Invoke_m4956 (DataTableNewRowEventHandler_t939 * __this, Object_t * ___sender, DataTableNewRowEventArgs_t940 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataTableNewRowEventHandler_t939(Il2CppObject* delegate, Object_t * ___sender, DataTableNewRowEventArgs_t940 * ___e);
// System.IAsyncResult System.Data.DataTableNewRowEventHandler::BeginInvoke(System.Object,System.Data.DataTableNewRowEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DataTableNewRowEventHandler_BeginInvoke_m4957 (DataTableNewRowEventHandler_t939 * __this, Object_t * ___sender, DataTableNewRowEventArgs_t940 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DataTableNewRowEventHandler_EndInvoke_m4958 (DataTableNewRowEventHandler_t939 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
