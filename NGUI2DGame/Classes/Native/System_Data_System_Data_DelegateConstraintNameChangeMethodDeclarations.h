#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Data.DelegateConstraintNameChange::.ctor(System.Object,System.IntPtr)
extern "C" void DelegateConstraintNameChange__ctor_m4943 (DelegateConstraintNameChange_t1088 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::Invoke(System.Object,System.String)
extern "C" void DelegateConstraintNameChange_Invoke_m4944 (DelegateConstraintNameChange_t1088 * __this, Object_t * ___sender, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_DelegateConstraintNameChange_t1088(Il2CppObject* delegate, Object_t * ___sender, String_t* ___newName);
// System.IAsyncResult System.Data.DelegateConstraintNameChange::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * DelegateConstraintNameChange_BeginInvoke_m4945 (DelegateConstraintNameChange_t1088 * __this, Object_t * ___sender, String_t* ___newName, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::EndInvoke(System.IAsyncResult)
extern "C" void DelegateConstraintNameChange_EndInvoke_m4946 (DelegateConstraintNameChange_t1088 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
