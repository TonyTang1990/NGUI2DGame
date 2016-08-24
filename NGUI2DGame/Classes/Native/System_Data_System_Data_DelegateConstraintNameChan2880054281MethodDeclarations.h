#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t2880054281;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Data.DelegateConstraintNameChange::.ctor(System.Object,System.IntPtr)
extern "C"  void DelegateConstraintNameChange__ctor_m3549884940 (DelegateConstraintNameChange_t2880054281 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::Invoke(System.Object,System.String)
extern "C"  void DelegateConstraintNameChange_Invoke_m961807794 (DelegateConstraintNameChange_t2880054281 * __this, Il2CppObject * ___sender0, String_t* ___newName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Data.DelegateConstraintNameChange::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DelegateConstraintNameChange_BeginInvoke_m2432433805 (DelegateConstraintNameChange_t2880054281 * __this, Il2CppObject * ___sender0, String_t* ___newName1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::EndInvoke(System.IAsyncResult)
extern "C"  void DelegateConstraintNameChange_EndInvoke_m3296676274 (DelegateConstraintNameChange_t2880054281 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
