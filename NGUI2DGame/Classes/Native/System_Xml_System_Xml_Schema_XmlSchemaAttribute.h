#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"
// System.Xml.Schema.XmlSchemaAttribute
struct  XmlSchemaAttribute_t1107  : public XmlSchemaAnnotated_t1108
{
	// System.Object System.Xml.Schema.XmlSchemaAttribute::attributeType
	Object_t * ___attributeType_16;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::attributeSchemaType
	XmlSchemaSimpleType_t1109 * ___attributeSchemaType_17;
	// System.String System.Xml.Schema.XmlSchemaAttribute::defaultValue
	String_t* ___defaultValue_18;
	// System.String System.Xml.Schema.XmlSchemaAttribute::fixedValue
	String_t* ___fixedValue_19;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedDefaultValue
	String_t* ___validatedDefaultValue_20;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedFixedValue
	String_t* ___validatedFixedValue_21;
	// System.Object System.Xml.Schema.XmlSchemaAttribute::validatedFixedTypedValue
	Object_t * ___validatedFixedTypedValue_22;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::form
	int32_t ___form_23;
	// System.String System.Xml.Schema.XmlSchemaAttribute::name
	String_t* ___name_24;
	// System.String System.Xml.Schema.XmlSchemaAttribute::targetNamespace
	String_t* ___targetNamespace_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::qualifiedName
	XmlQualifiedName_t985 * ___qualifiedName_26;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::refName
	XmlQualifiedName_t985 * ___refName_27;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::schemaType
	XmlSchemaSimpleType_t1109 * ___schemaType_28;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::schemaTypeName
	XmlQualifiedName_t985 * ___schemaTypeName_29;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::use
	int32_t ___use_30;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::validatedUse
	int32_t ___validatedUse_31;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::referencedAttribute
	XmlSchemaAttribute_t1107 * ___referencedAttribute_32;
};
