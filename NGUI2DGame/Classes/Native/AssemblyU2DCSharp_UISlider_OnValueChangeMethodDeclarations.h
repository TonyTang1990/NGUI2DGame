#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISlider/OnValueChange
struct OnValueChange_t136;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UISlider/OnValueChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnValueChange__ctor_m405 (OnValueChange_t136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider/OnValueChange::Invoke(System.Single)
extern "C" void OnValueChange_Invoke_m406 (OnValueChange_t136 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnValueChange_t136(Il2CppObject* delegate, float ___val);
// System.IAsyncResult UISlider/OnValueChange::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValueChange_BeginInvoke_m407 (OnValueChange_t136 * __this, float ___val, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider/OnValueChange::EndInvoke(System.IAsyncResult)
extern "C" void OnValueChange_EndInvoke_m408 (OnValueChange_t136 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
