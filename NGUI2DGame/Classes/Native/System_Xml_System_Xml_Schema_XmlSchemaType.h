#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaType
struct  XmlSchemaType_t1145  : public XmlSchemaAnnotated_t1108
{
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final_16;
	// System.Boolean System.Xml.Schema.XmlSchemaType::isMixed
	bool ___isMixed_17;
	// System.String System.Xml.Schema.XmlSchemaType::name
	String_t* ___name_18;
	// System.Boolean System.Xml.Schema.XmlSchemaType::recursed
	bool ___recursed_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::BaseSchemaTypeName
	XmlQualifiedName_t985 * ___BaseSchemaTypeName_20;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::BaseXmlSchemaTypeInternal
	XmlSchemaType_t1145 * ___BaseXmlSchemaTypeInternal_21;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::DatatypeInternal
	XmlSchemaDatatype_t1051 * ___DatatypeInternal_22;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::resolvedDerivedBy
	int32_t ___resolvedDerivedBy_23;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::finalResolved
	int32_t ___finalResolved_24;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::QNameInternal
	XmlQualifiedName_t985 * ___QNameInternal_25;
};
struct XmlSchemaType_t1145_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaType::<>f__switch$map42
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map42_26;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaType::<>f__switch$map43
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map43_27;
};
