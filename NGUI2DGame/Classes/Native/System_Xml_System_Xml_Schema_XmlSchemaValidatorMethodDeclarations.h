#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaValidator
struct XmlSchemaValidator_t1489;
// System.Object
struct Object_t;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1469;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Uri
struct Uri_t558;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t1505;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t1488;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.Schema.XmlValueGetter
struct XmlValueGetter_t1490;
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_t1491;
// System.Exception
struct Exception_t306;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t1757;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1503;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1110;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// System.Xml.Schema.XmlSchemaValidator/Transition
#include "System_Xml_System_Xml_Schema_XmlSchemaValidator_Transition.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchemaValidator::.ctor(System.Xml.XmlNameTable,System.Xml.Schema.XmlSchemaSet,System.Xml.IXmlNamespaceResolver,System.Xml.Schema.XmlSchemaValidationFlags)
extern "C" void XmlSchemaValidator__ctor_m9579 (XmlSchemaValidator_t1489 * __this, XmlNameTable_t1543 * ___nameTable, XmlSchemaSet_t1102 * ___schemas, Object_t * ___nsResolver, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::.cctor()
extern "C" void XmlSchemaValidator__cctor_m9580 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaValidator_add_ValidationEventHandler_m9581 (XmlSchemaValidator_t1489 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaValidator_remove_ValidationEventHandler_m9582 (XmlSchemaValidator_t1489 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::set_ValidationEventSender(System.Object)
extern "C" void XmlSchemaValidator_set_ValidationEventSender_m9583 (XmlSchemaValidator_t1489 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::set_LineInfoProvider(System.Xml.IXmlLineInfo)
extern "C" void XmlSchemaValidator_set_LineInfoProvider_m9584 (XmlSchemaValidator_t1489 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlSchemaValidator_set_XmlResolver_m9585 (XmlSchemaValidator_t1489 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.Schema.XmlSchemaValidator::get_SourceUri()
extern "C" Uri_t558 * XmlSchemaValidator_get_SourceUri_m9586 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::set_SourceUri(System.Uri)
extern "C" void XmlSchemaValidator_set_SourceUri_m9587 (XmlSchemaValidator_t1489 * __this, Uri_t558 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaValidator::get_BaseUri()
extern "C" String_t* XmlSchemaValidator_get_BaseUri_m9588 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext System.Xml.Schema.XmlSchemaValidator::get_Context()
extern "C" XsdValidationContext_t1505 * XmlSchemaValidator_get_Context_m9589 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaValidator::get_IgnoreWarnings()
extern "C" bool XmlSchemaValidator_get_IgnoreWarnings_m9590 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaValidator::get_IgnoreIdentity()
extern "C" bool XmlSchemaValidator_get_IgnoreIdentity_m9591 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::GetExpectedAttributes()
extern "C" XmlSchemaAttributeU5BU5D_t1488* XmlSchemaValidator_GetExpectedAttributes_m9592 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::GetUnspecifiedDefaultAttributes(System.Collections.ArrayList)
extern "C" void XmlSchemaValidator_GetUnspecifiedDefaultAttributes_m9593 (XmlSchemaValidator_t1489 * __this, ArrayList_t913 * ___defaultAttributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::Initialize()
extern "C" void XmlSchemaValidator_Initialize_m9594 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::EndValidation()
extern "C" void XmlSchemaValidator_EndValidation_m9595 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateAttribute(System.String,System.String,System.Xml.Schema.XmlValueGetter,System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_ValidateAttribute_m9596 (XmlSchemaValidator_t1489 * __this, String_t* ___localName, String_t* ___ns, XmlValueGetter_t1490 * ___attributeValue, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateElement(System.String,System.String,System.Xml.Schema.XmlSchemaInfo,System.String,System.String,System.String,System.String)
extern "C" void XmlSchemaValidator_ValidateElement_m9597 (XmlSchemaValidator_t1489 * __this, String_t* ___localName, String_t* ___ns, XmlSchemaInfo_t1491 * ___info, String_t* ___xsiType, String_t* ___xsiNil, String_t* ___schemaLocation, String_t* ___noNsSchemaLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateEndElement(System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_ValidateEndElement_m9598 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateEndElement(System.Xml.Schema.XmlSchemaInfo,System.Object)
extern "C" Object_t * XmlSchemaValidator_ValidateEndElement_m9599 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, Object_t * ___var, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateEndOfAttributes(System.Xml.Schema.XmlSchemaInfo)
extern "C" void XmlSchemaValidator_ValidateEndOfAttributes_m9600 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateText(System.Xml.Schema.XmlValueGetter)
extern "C" void XmlSchemaValidator_ValidateText_m9601 (XmlSchemaValidator_t1489 * __this, XmlValueGetter_t1490 * ___getter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateWhitespace(System.Xml.Schema.XmlValueGetter)
extern "C" void XmlSchemaValidator_ValidateWhitespace_m9602 (XmlSchemaValidator_t1489 * __this, XmlValueGetter_t1490 * ___getter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleError(System.String)
extern "C" void XmlSchemaValidator_HandleError_m9603 (XmlSchemaValidator_t1489 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleError(System.String,System.Exception)
extern "C" void XmlSchemaValidator_HandleError_m9604 (XmlSchemaValidator_t1489 * __this, String_t* ___message, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleError(System.String,System.Exception,System.Boolean)
extern "C" void XmlSchemaValidator_HandleError_m9605 (XmlSchemaValidator_t1489 * __this, String_t* ___message, Exception_t306 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C" void XmlSchemaValidator_HandleError_m9606 (XmlSchemaValidator_t1489 * __this, XmlSchemaValidationException_t1757 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C" void XmlSchemaValidator_HandleError_m9607 (XmlSchemaValidator_t1489 * __this, XmlSchemaValidationException_t1757 * ___exception, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::CheckState(System.Xml.Schema.XmlSchemaValidator/Transition)
extern "C" void XmlSchemaValidator_CheckState_m9608 (XmlSchemaValidator_t1489 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaValidator::FindElement(System.String,System.String)
extern "C" XmlSchemaElement_t1054 * XmlSchemaValidator_FindElement_m9609 (XmlSchemaValidator_t1489 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaValidator::FindType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t1145 * XmlSchemaValidator_FindType_m9610 (XmlSchemaValidator_t1489 * __this, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateStartElementParticle(System.String,System.String)
extern "C" void XmlSchemaValidator_ValidateStartElementParticle_m9611 (XmlSchemaValidator_t1489 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessOpenStartElementSchemaValidity(System.String,System.String)
extern "C" void XmlSchemaValidator_AssessOpenStartElementSchemaValidity_m9612 (XmlSchemaValidator_t1489 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessCloseStartElementSchemaValidity(System.Xml.Schema.XmlSchemaInfo)
extern "C" void XmlSchemaValidator_AssessCloseStartElementSchemaValidity_m9613 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessElementLocallyValidElement()
extern "C" void XmlSchemaValidator_AssessElementLocallyValidElement_m9614 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessCloseStartElementLocallyValidType(System.Xml.Schema.XmlSchemaInfo)
extern "C" void XmlSchemaValidator_AssessCloseStartElementLocallyValidType_m9615 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessCloseStartElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType,System.Xml.Schema.XmlSchemaInfo)
extern "C" void XmlSchemaValidator_AssessCloseStartElementLocallyValidComplexType_m9616 (XmlSchemaValidator_t1489 * __this, XmlSchemaComplexType_t1052 * ___cType, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::AssessAttributeElementLocallyValidType(System.String,System.String,System.Xml.Schema.XmlValueGetter,System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_AssessAttributeElementLocallyValidType_m9617 (XmlSchemaValidator_t1489 * __this, String_t* ___localName, String_t* ___ns, XmlValueGetter_t1490 * ___getter, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaInfo,System.Xml.Schema.XmlValueGetter)
extern "C" Object_t * XmlSchemaValidator_AssessAttributeLocallyValid_m9618 (XmlSchemaValidator_t1489 * __this, XmlSchemaAttribute_t1107 * ___attr, XmlSchemaInfo_t1491 * ___info, XmlValueGetter_t1490 * ___getter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XmlSchemaValidator_AssessAttributeLocallyValidUse_m9619 (XmlSchemaValidator_t1489 * __this, XmlSchemaAttribute_t1107 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::AssessEndElementSchemaValidity(System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_AssessEndElementSchemaValidity_m9620 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateEndElementParticle()
extern "C" void XmlSchemaValidator_ValidateEndElementParticle_m9621 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateCharacters(System.Xml.Schema.XmlValueGetter)
extern "C" void XmlSchemaValidator_ValidateCharacters_m9622 (XmlSchemaValidator_t1489 * __this, XmlValueGetter_t1490 * ___getter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateEndSimpleContent(System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_ValidateEndSimpleContent_m9623 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::ValidateEndSimpleContentCore(System.Xml.Schema.XmlSchemaInfo)
extern "C" Object_t * XmlSchemaValidator_ValidateEndSimpleContentCore_m9624 (XmlSchemaValidator_t1489 * __this, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" Object_t * XmlSchemaValidator_AssessStringValid_m9625 (XmlSchemaValidator_t1489 * __this, XmlSchemaSimpleType_t1109 * ___st, XmlSchemaDatatype_t1051 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C" void XmlSchemaValidator_ValidateRestrictedSimpleTypeValue_m9626 (XmlSchemaValidator_t1489 * __this, XmlSchemaSimpleType_t1109 * ___st, XmlSchemaDatatype_t1051 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable System.Xml.Schema.XmlSchemaValidator::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" XsdKeyTable_t1503 * XmlSchemaValidator_CreateNewKeyTable_m9627 (XmlSchemaValidator_t1489 * __this, XmlSchemaIdentityConstraint_t1110 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateKeySelectors()
extern "C" void XmlSchemaValidator_ValidateKeySelectors_m9628 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateKeyFieldsAttribute(System.Xml.Schema.XmlSchemaAttribute,System.Object)
extern "C" void XmlSchemaValidator_ValidateKeyFieldsAttribute_m9629 (XmlSchemaValidator_t1489 * __this, XmlSchemaAttribute_t1107 * ___attr, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateKeyFields(System.Boolean,System.Boolean,System.Object,System.String,System.String,System.Object)
extern "C" void XmlSchemaValidator_ValidateKeyFields_m9630 (XmlSchemaValidator_t1489 * __this, bool ___isAttr, bool ___isNil, Object_t * ___schemaType, String_t* ___attrName, String_t* ___attrNs, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateEndElementKeyConstraints()
extern "C" void XmlSchemaValidator_ValidateEndElementKeyConstraints_m9631 (XmlSchemaValidator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateEndKeyConstraint(Mono.Xml.Schema.XsdKeyTable)
extern "C" void XmlSchemaValidator_ValidateEndKeyConstraint_m9632 (XmlSchemaValidator_t1489 * __this, XsdKeyTable_t1503 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" void XmlSchemaValidator_ValidateSimpleContentIdentity_m9633 (XmlSchemaValidator_t1489 * __this, XmlSchemaDatatype_t1051 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaValidator::GetXsiType(System.String)
extern "C" Object_t * XmlSchemaValidator_GetXsiType_m9634 (XmlSchemaValidator_t1489 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleXsiType(System.String)
extern "C" void XmlSchemaValidator_HandleXsiType_m9635 (XmlSchemaValidator_t1489 * __this, String_t* ___typename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XmlSchemaValidator_AssessLocalTypeDerivationOK_m9636 (XmlSchemaValidator_t1489 * __this, Object_t * ___xsiType, Object_t * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleXsiNil(System.String,System.Xml.Schema.XmlSchemaInfo)
extern "C" void XmlSchemaValidator_HandleXsiNil_m9637 (XmlSchemaValidator_t1489 * __this, String_t* ___value, XmlSchemaInfo_t1491 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaValidator::ReadExternalSchema(System.String)
extern "C" XmlSchema_t1053 * XmlSchemaValidator_ReadExternalSchema_m9638 (XmlSchemaValidator_t1489 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleSchemaLocation(System.String)
extern "C" void XmlSchemaValidator_HandleSchemaLocation_m9639 (XmlSchemaValidator_t1489 * __this, String_t* ___schemaLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidator::HandleNoNSSchemaLocation(System.String)
extern "C" void XmlSchemaValidator_HandleNoNSSchemaLocation_m9640 (XmlSchemaValidator_t1489 * __this, String_t* ___noNsSchemaLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
