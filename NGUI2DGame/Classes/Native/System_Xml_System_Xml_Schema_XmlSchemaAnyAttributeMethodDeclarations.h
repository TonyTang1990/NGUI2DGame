#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1706;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t1524;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C" void XmlSchemaAnyAttribute__ctor_m9035 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_Namespace_m9036 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueAny_m9037 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueLocal_m9038 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueOther_m9039 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m9040 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C" StringCollection_t1524 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m9041 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m9042 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m9043 (XmlSchemaAnyAttribute_t1706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Compile_m9044 (XmlSchemaAnyAttribute_t1706 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Validate_m9045 (XmlSchemaAnyAttribute_t1706 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAnyAttribute_ValidateWildcardSubset_m9046 (XmlSchemaAnyAttribute_t1706 * __this, XmlSchemaAnyAttribute_t1706 * ___other, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m9047 (XmlSchemaAnyAttribute_t1706 * __this, String_t* ___ns, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAnyAttribute_t1706 * XmlSchemaAnyAttribute_Read_m9048 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
