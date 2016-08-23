#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInput/OnSubmit
struct OnSubmit_t236;
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

// System.Void UIInput/OnSubmit::.ctor(System.Object,System.IntPtr)
extern "C" void OnSubmit__ctor_m923 (OnSubmit_t236 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput/OnSubmit::Invoke(System.String)
extern "C" void OnSubmit_Invoke_m924 (OnSubmit_t236 * __this, String_t* ___inputString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_OnSubmit_t236(Il2CppObject* delegate, String_t* ___inputString);
// System.IAsyncResult UIInput/OnSubmit::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * OnSubmit_BeginInvoke_m925 (OnSubmit_t236 * __this, String_t* ___inputString, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput/OnSubmit::EndInvoke(System.IAsyncResult)
extern "C" void OnSubmit_EndInvoke_m926 (OnSubmit_t236 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
