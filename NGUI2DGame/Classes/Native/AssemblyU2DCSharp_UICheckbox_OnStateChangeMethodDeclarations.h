#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICheckbox/OnStateChange
struct OnStateChange_t102;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UICheckbox/OnStateChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnStateChange__ctor_m239 (OnStateChange_t102 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICheckbox/OnStateChange::Invoke(System.Boolean)
extern "C" void OnStateChange_Invoke_m240 (OnStateChange_t102 * __this, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnStateChange_t102(Il2CppObject* delegate, bool ___state);
// System.IAsyncResult UICheckbox/OnStateChange::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * OnStateChange_BeginInvoke_m241 (OnStateChange_t102 * __this, bool ___state, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICheckbox/OnStateChange::EndInvoke(System.IAsyncResult)
extern "C" void OnStateChange_EndInvoke_m242 (OnStateChange_t102 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
