#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t1152;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t1153;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t1752;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t1724;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t1731;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t1155;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t1736;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1500;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C" void XmlSchemaSimpleTypeRestriction__ctor_m9526 (XmlSchemaSimpleTypeRestriction_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C" void XmlSchemaSimpleTypeRestriction__cctor_m9527 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C" XmlQualifiedName_t985 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m9528 (XmlSchemaSimpleTypeRestriction_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaSimpleTypeRestriction_get_BaseType_m9529 (XmlSchemaSimpleTypeRestriction_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchemaSimpleTypeRestriction_get_Facets_m5215 (XmlSchemaSimpleTypeRestriction_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeRestriction_SetParent_m9530 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Compile_m9531 (XmlSchemaSimpleTypeRestriction_t1152 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C" bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m9532 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaFacet_t1153 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Validate_m9533 (XmlSchemaSimpleTypeRestriction_t1152 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSimpleTypeRestriction_ValidateActualType_m9534 (XmlSchemaSimpleTypeRestriction_t1152 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_GetActualType_m9535 (XmlSchemaSimpleTypeRestriction_t1152 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m9536 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaTotalDigitsFacet_t1752 * ___totf, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m9537 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaFractionDigitsFacet_t1724 * ___fracf, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m9538 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaFacet_t1153 * ___facet, Object_t ** ___baseFacet, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m9539 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaLengthFacet_t1731 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m9540 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaMaxLengthFacet_t1155 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m9541 (XmlSchemaSimpleTypeRestriction_t1152 * __this, XmlSchemaMinLengthFacet_t1736 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C" XsdAnySimpleType_t1500 * XmlSchemaSimpleTypeRestriction_getDatatype_m9542 (XmlSchemaSimpleTypeRestriction_t1152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m9543 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m9544 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m9545 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m9546 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m9547 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m9548 (XmlSchemaSimpleTypeRestriction_t1152 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeRestriction_t1152 * XmlSchemaSimpleTypeRestriction_Read_m9549 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
