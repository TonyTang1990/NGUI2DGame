#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t1707;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1706;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;

// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::.ctor()
extern "C" void XmlSchemaAttributeGroup__ctor_m9067 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttributeGroup::get_Name()
extern "C" String_t* XmlSchemaAttributeGroup_get_Name_m9068 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::get_Attributes()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchemaAttributeGroup_get_Attributes_m9069 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::get_AttributeUses()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchemaAttributeGroup_get_AttributeUses_m9070 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttributeUse()
extern "C" XmlSchemaAnyAttribute_t1706 * XmlSchemaAttributeGroup_get_AnyAttributeUse_m9071 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t1706 * XmlSchemaAttributeGroup_get_AnyAttribute_m9072 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaAttributeGroup_set_AnyAttribute_m9073 (XmlSchemaAttributeGroup_t1707 * __this, XmlSchemaAnyAttribute_t1706 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::get_QualifiedName()
extern "C" XmlQualifiedName_t985 * XmlSchemaAttributeGroup_get_QualifiedName_m9074 (XmlSchemaAttributeGroup_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAttributeGroup_SetParent_m9075 (XmlSchemaAttributeGroup_t1707 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroup_Compile_m9076 (XmlSchemaAttributeGroup_t1707 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroup_Validate_m9077 (XmlSchemaAttributeGroup_t1707 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAttributeGroup_t1707 * XmlSchemaAttributeGroup_Read_m9078 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
