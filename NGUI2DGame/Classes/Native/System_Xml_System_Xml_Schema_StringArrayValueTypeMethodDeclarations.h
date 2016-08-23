#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.StringArrayValueType
struct StringArrayValueType_t1702;
struct StringArrayValueType_t1702_marshaled;
// System.String[]
struct StringU5BU5D_t258;
// System.Object
struct Object_t;
// System.Xml.Schema.StringArrayValueType
#include "System_Xml_System_Xml_Schema_StringArrayValueType.h"

// System.Void System.Xml.Schema.StringArrayValueType::.ctor(System.String[])
extern "C" void StringArrayValueType__ctor_m8929 (StringArrayValueType_t1702 * __this, StringU5BU5D_t258* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.StringArrayValueType::get_Value()
extern "C" StringU5BU5D_t258* StringArrayValueType_get_Value_m8930 (StringArrayValueType_t1702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::Equals(System.Object)
extern "C" bool StringArrayValueType_Equals_m8931 (StringArrayValueType_t1702 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringArrayValueType::GetHashCode()
extern "C" int32_t StringArrayValueType_GetHashCode_m8932 (StringArrayValueType_t1702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::op_Equality(System.Xml.Schema.StringArrayValueType,System.Xml.Schema.StringArrayValueType)
extern "C" bool StringArrayValueType_op_Equality_m8933 (Object_t * __this /* static, unused */, StringArrayValueType_t1702  ___v1, StringArrayValueType_t1702  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void StringArrayValueType_t1702_marshal(const StringArrayValueType_t1702& unmarshaled, StringArrayValueType_t1702_marshaled& marshaled);
void StringArrayValueType_t1702_marshal_back(const StringArrayValueType_t1702_marshaled& marshaled, StringArrayValueType_t1702& unmarshaled);
void StringArrayValueType_t1702_marshal_cleanup(StringArrayValueType_t1702_marshaled& marshaled);
