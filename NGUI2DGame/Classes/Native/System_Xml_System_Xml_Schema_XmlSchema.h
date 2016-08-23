#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.Schema.XmlSchemaObject
#include "System_Xml_System_Xml_Schema_XmlSchemaObject.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchema
struct  XmlSchema_t1053  : public XmlSchemaObject_t1146
{
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_13;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_t1149 * ___attributeGroups_14;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_t1149 * ___attributes_15;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_16;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_17;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_t1149 * ___elements_18;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_19;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_t1149 * ___groups_20;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_21;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_t1141 * ___includes_22;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_t1141 * ___items_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_t1149 * ___notations_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::schemaTypes
	XmlSchemaObjectTable_t1149 * ___schemaTypes_25;
	// System.String System.Xml.Schema.XmlSchema::targetNamespace
	String_t* ___targetNamespace_26;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_27;
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::schemas
	XmlSchemaSet_t1102 * ___schemas_28;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchema::nameTable
	XmlNameTable_t1543 * ___nameTable_29;
	// System.Boolean System.Xml.Schema.XmlSchema::missedSubComponents
	bool ___missedSubComponents_30;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::compilationItems
	XmlSchemaObjectCollection_t1141 * ___compilationItems_31;
};
struct XmlSchema_t1053_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchema::<>f__switch$map41
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map41_32;
};
