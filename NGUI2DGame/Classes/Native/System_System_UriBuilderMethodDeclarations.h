#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriBuilder
struct UriBuilder_t2205;
// System.String
struct String_t;
// System.Uri
struct Uri_t558;
// System.Object
struct Object_t;

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C" void UriBuilder__ctor_m12628 (UriBuilder_t2205 * __this, Uri_t558 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C" void UriBuilder_set_Host_m12629 (UriBuilder_t2205 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C" Uri_t558 * UriBuilder_get_Uri_m12630 (UriBuilder_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" bool UriBuilder_Equals_m12631 (UriBuilder_t2205 * __this, Object_t * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" int32_t UriBuilder_GetHashCode_m12632 (UriBuilder_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C" String_t* UriBuilder_ToString_m12633 (UriBuilder_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
