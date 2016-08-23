#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t1634;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t558;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" void XmlUrlResolver__ctor_m8427 (XmlUrlResolver_t1634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C" Object_t * XmlUrlResolver_GetEntity_m8428 (XmlUrlResolver_t1634 * __this, Uri_t558 * ___absoluteUri, String_t* ___role, Type_t * ___ofObjectToReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t558 * XmlUrlResolver_ResolveUri_m8429 (XmlUrlResolver_t1634 * __this, Uri_t558 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" String_t* XmlUrlResolver_UnescapeRelativeUriBody_m8430 (XmlUrlResolver_t1634 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
