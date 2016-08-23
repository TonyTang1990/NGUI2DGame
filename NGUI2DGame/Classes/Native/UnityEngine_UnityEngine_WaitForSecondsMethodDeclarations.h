#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t354;
struct WaitForSeconds_t354_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1836 (WaitForSeconds_t354 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t354_marshal(const WaitForSeconds_t354& unmarshaled, WaitForSeconds_t354_marshaled& marshaled);
void WaitForSeconds_t354_marshal_back(const WaitForSeconds_t354_marshaled& marshaled, WaitForSeconds_t354& unmarshaled);
void WaitForSeconds_t354_marshal_cleanup(WaitForSeconds_t354_marshaled& marshaled);
