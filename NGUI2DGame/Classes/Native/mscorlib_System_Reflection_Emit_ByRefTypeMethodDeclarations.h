#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ByRefType
struct ByRefType_t2629;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Reflection.Emit.ByRefType::.ctor(System.Type)
extern "C" void ByRefType__ctor_m16644 (ByRefType_t2629 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ByRefType::IsByRefImpl()
extern "C" bool ByRefType_IsByRefImpl_m16645 (ByRefType_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::get_BaseType()
extern "C" Type_t * ByRefType_get_BaseType_m16646 (ByRefType_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ByRefType::FormatName(System.String)
extern "C" String_t* ByRefType_FormatName_m16647 (ByRefType_t2629 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::MakeByRefType()
extern "C" Type_t * ByRefType_MakeByRefType_m16648 (ByRefType_t2629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
