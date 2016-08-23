#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XmlSchemaUri
struct XmlSchemaUri_t1687;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Mono.Xml.Schema.XmlSchemaUri::.ctor(System.String)
extern "C" void XmlSchemaUri__ctor_m8828 (XmlSchemaUri_t1687 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaUri::.ctor(System.String,System.Boolean)
extern "C" void XmlSchemaUri__ctor_m8829 (XmlSchemaUri_t1687 * __this, String_t* ___src, bool ___formal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaUri::HasValidScheme(System.String)
extern "C" bool XmlSchemaUri_HasValidScheme_m8830 (Object_t * __this /* static, unused */, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaUri::Equals(System.Object)
extern "C" bool XmlSchemaUri_Equals_m8831 (XmlSchemaUri_t1687 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaUri::GetHashCode()
extern "C" int32_t XmlSchemaUri_GetHashCode_m8832 (XmlSchemaUri_t1687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaUri::ToString()
extern "C" String_t* XmlSchemaUri_ToString_m8833 (XmlSchemaUri_t1687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaUri::op_Equality(Mono.Xml.Schema.XmlSchemaUri,Mono.Xml.Schema.XmlSchemaUri)
extern "C" bool XmlSchemaUri_op_Equality_m8834 (Object_t * __this /* static, unused */, XmlSchemaUri_t1687 * ___v1, XmlSchemaUri_t1687 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
