#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UnityEngine.Coroutine
struct Coroutine_t415;
struct Coroutine_t415_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m1244 (MonoBehaviour_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t415 * MonoBehaviour_StartCoroutine_m1381 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t415 * MonoBehaviour_StartCoroutine_Auto_m2552 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
