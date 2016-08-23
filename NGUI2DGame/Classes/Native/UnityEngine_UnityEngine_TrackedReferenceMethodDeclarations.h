#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t513;
struct TrackedReference_t513_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m3120 (TrackedReference_t513 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3121 (TrackedReference_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m3122 (Object_t * __this /* static, unused */, TrackedReference_t513 * ___x, TrackedReference_t513 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t513_marshal(const TrackedReference_t513& unmarshaled, TrackedReference_t513_marshaled& marshaled);
void TrackedReference_t513_marshal_back(const TrackedReference_t513_marshaled& marshaled, TrackedReference_t513& unmarshaled);
void TrackedReference_t513_marshal_cleanup(TrackedReference_t513_marshaled& marshaled);
