#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t182;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t17;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeDelegate__ctor_m645 (KeyCodeDelegate_t182 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C" void KeyCodeDelegate_Invoke_m646 (KeyCodeDelegate_t182 * __this, GameObject_t17 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t182(Il2CppObject* delegate, GameObject_t17 * ___go, int32_t ___key);
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeDelegate_BeginInvoke_m647 (KeyCodeDelegate_t182 * __this, GameObject_t17 * ___go, int32_t ___key, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeDelegate_EndInvoke_m648 (KeyCodeDelegate_t182 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
