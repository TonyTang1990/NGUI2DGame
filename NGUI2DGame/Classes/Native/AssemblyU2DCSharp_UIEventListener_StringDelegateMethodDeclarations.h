#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/StringDelegate
struct StringDelegate_t180;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIEventListener/StringDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void StringDelegate__ctor_m637 (StringDelegate_t180 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::Invoke(UnityEngine.GameObject,System.String)
extern "C" void StringDelegate_Invoke_m638 (StringDelegate_t180 * __this, GameObject_t17 * ___go, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_StringDelegate_t180(Il2CppObject* delegate, GameObject_t17 * ___go, String_t* ___text);
// System.IAsyncResult UIEventListener/StringDelegate::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * StringDelegate_BeginInvoke_m639 (StringDelegate_t180 * __this, GameObject_t17 * ___go, String_t* ___text, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::EndInvoke(System.IAsyncResult)
extern "C" void StringDelegate_EndInvoke_m640 (StringDelegate_t180 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
