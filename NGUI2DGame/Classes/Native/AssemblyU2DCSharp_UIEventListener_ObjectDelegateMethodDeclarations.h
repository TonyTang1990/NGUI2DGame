#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/ObjectDelegate
struct ObjectDelegate_t181;
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

// System.Void UIEventListener/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ObjectDelegate__ctor_m641 (ObjectDelegate_t181 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void ObjectDelegate_Invoke_m642 (ObjectDelegate_t181 * __this, GameObject_t17 * ___go, GameObject_t17 * ___draggedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectDelegate_t181(Il2CppObject* delegate, GameObject_t17 * ___go, GameObject_t17 * ___draggedObject);
// System.IAsyncResult UIEventListener/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * ObjectDelegate_BeginInvoke_m643 (ObjectDelegate_t181 * __this, GameObject_t17 * ___go, GameObject_t17 * ___draggedObject, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ObjectDelegate_EndInvoke_m644 (ObjectDelegate_t181 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
