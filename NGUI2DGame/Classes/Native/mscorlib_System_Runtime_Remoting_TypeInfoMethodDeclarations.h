﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.TypeInfo
struct TypeInfo_t2698;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m17097 (TypeInfo_t2698 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m17098 (TypeInfo_t2698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
