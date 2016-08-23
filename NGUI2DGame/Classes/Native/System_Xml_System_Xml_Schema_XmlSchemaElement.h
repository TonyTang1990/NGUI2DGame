#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.Schema.XmlSchemaParticle
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaElement
struct  XmlSchemaElement_t1054  : public XmlSchemaParticle_t1105
{
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::block
	int32_t ___block_27;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::constraints
	XmlSchemaObjectCollection_t1141 * ___constraints_28;
	// System.String System.Xml.Schema.XmlSchemaElement::defaultValue
	String_t* ___defaultValue_29;
	// System.Object System.Xml.Schema.XmlSchemaElement::elementType
	Object_t * ___elementType_30;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::elementSchemaType
	XmlSchemaType_t1145 * ___elementSchemaType_31;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::final
	int32_t ___final_32;
	// System.String System.Xml.Schema.XmlSchemaElement::fixedValue
	String_t* ___fixedValue_33;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaElement::form
	int32_t ___form_34;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isAbstract
	bool ___isAbstract_35;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isNillable
	bool ___isNillable_36;
	// System.String System.Xml.Schema.XmlSchemaElement::name
	String_t* ___name_37;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::refName
	XmlQualifiedName_t985 * ___refName_38;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::schemaType
	XmlSchemaType_t1145 * ___schemaType_39;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::schemaTypeName
	XmlQualifiedName_t985 * ___schemaTypeName_40;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::substitutionGroup
	XmlQualifiedName_t985 * ___substitutionGroup_41;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaElement::schema
	XmlSchema_t1053 * ___schema_42;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::parentIsSchema
	bool ___parentIsSchema_43;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::qName
	XmlQualifiedName_t985 * ___qName_44;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::blockResolved
	int32_t ___blockResolved_45;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::finalResolved
	int32_t ___finalResolved_46;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::referencedElement
	XmlSchemaElement_t1054 * ___referencedElement_47;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::substitutingElements
	ArrayList_t913 * ___substitutingElements_48;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::substitutionGroupElement
	XmlSchemaElement_t1054 * ___substitutionGroupElement_49;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::actualIsAbstract
	bool ___actualIsAbstract_50;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::actualIsNillable
	bool ___actualIsNillable_51;
	// System.String System.Xml.Schema.XmlSchemaElement::validatedDefaultValue
	String_t* ___validatedDefaultValue_52;
	// System.String System.Xml.Schema.XmlSchemaElement::validatedFixedValue
	String_t* ___validatedFixedValue_53;
};
