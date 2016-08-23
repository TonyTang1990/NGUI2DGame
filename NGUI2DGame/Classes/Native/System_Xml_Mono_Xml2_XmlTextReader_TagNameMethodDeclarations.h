#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/TagName
struct TagName_t1625;
struct TagName_t1625_marshaled;
// System.String
struct String_t;

// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
extern "C" void TagName__ctor_m8267 (TagName_t1625 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TagName_t1625_marshal(const TagName_t1625& unmarshaled, TagName_t1625_marshaled& marshaled);
void TagName_t1625_marshal_back(const TagName_t1625_marshaled& marshaled, TagName_t1625& unmarshaled);
void TagName_t1625_marshal_cleanup(TagName_t1625_marshaled& marshaled);
