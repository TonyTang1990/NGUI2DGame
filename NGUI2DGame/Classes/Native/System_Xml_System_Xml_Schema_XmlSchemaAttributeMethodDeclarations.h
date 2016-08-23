#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaAttribute::.ctor()
extern "C" void XmlSchemaAttribute__ctor_m5176 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAttribute::get_ParentIsSchema()
extern "C" bool XmlSchemaAttribute_get_ParentIsSchema_m9052 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_DefaultValue()
extern "C" String_t* XmlSchemaAttribute_get_DefaultValue_m5231 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_FixedValue()
extern "C" String_t* XmlSchemaAttribute_get_FixedValue_m5232 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::get_Form()
extern "C" int32_t XmlSchemaAttribute_get_Form_m9053 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_Name()
extern "C" String_t* XmlSchemaAttribute_get_Name_m9054 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::set_Name(System.String)
extern "C" void XmlSchemaAttribute_set_Name_m5177 (XmlSchemaAttribute_t1107 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_RefName()
extern "C" XmlQualifiedName_t985 * XmlSchemaAttribute_get_RefName_m5233 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_SchemaTypeName()
extern "C" XmlQualifiedName_t985 * XmlSchemaAttribute_get_SchemaTypeName_m9055 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::set_SchemaTypeName(System.Xml.XmlQualifiedName)
extern "C" void XmlSchemaAttribute_set_SchemaTypeName_m5178 (XmlSchemaAttribute_t1107 * __this, XmlQualifiedName_t985 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::get_SchemaType()
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaAttribute_get_SchemaType_m9056 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_Use()
extern "C" int32_t XmlSchemaAttribute_get_Use_m5208 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_QualifiedName()
extern "C" XmlQualifiedName_t985 * XmlSchemaAttribute_get_QualifiedName_m5207 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaAttribute::get_AttributeType()
extern "C" Object_t * XmlSchemaAttribute_get_AttributeType_m9057 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::get_AttributeSchemaType()
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaAttribute_get_AttributeSchemaType_m5181 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedDefaultValue()
extern "C" String_t* XmlSchemaAttribute_get_ValidatedDefaultValue_m9058 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedFixedValue()
extern "C" String_t* XmlSchemaAttribute_get_ValidatedFixedValue_m9059 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaAttribute::get_ValidatedFixedTypedValue()
extern "C" Object_t * XmlSchemaAttribute_get_ValidatedFixedTypedValue_m9060 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_ValidatedUse()
extern "C" int32_t XmlSchemaAttribute_get_ValidatedUse_m9061 (XmlSchemaAttribute_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAttribute_SetParent_m9062 (XmlSchemaAttribute_t1107 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttribute_Compile_m9063 (XmlSchemaAttribute_t1107 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::CompileCommon(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" void XmlSchemaAttribute_CompileCommon_m9064 (XmlSchemaAttribute_t1107 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___refIsNotPresent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttribute_Validate_m9065 (XmlSchemaAttribute_t1107 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAttribute_t1107 * XmlSchemaAttribute_Read_m9066 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
