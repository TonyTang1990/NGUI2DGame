#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1706;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaContentModel
struct XmlSchemaContentModel_t1713;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaType
#include "System_Xml_System_Xml_Schema_XmlSchemaType.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaContentType
#include "System_Xml_System_Xml_Schema_XmlSchemaContentType.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaComplexType
struct  XmlSchemaComplexType_t1052  : public XmlSchemaType_t1145
{
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::anyAttribute
	XmlSchemaAnyAttribute_t1706 * ___anyAttribute_28;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexType::attributes
	XmlSchemaObjectCollection_t1141 * ___attributes_29;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaComplexType::attributeUses
	XmlSchemaObjectTable_t1149 * ___attributeUses_30;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::attributeWildcard
	XmlSchemaAnyAttribute_t1706 * ___attributeWildcard_31;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::block
	int32_t ___block_32;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::blockResolved
	int32_t ___blockResolved_33;
	// System.Xml.Schema.XmlSchemaContentModel System.Xml.Schema.XmlSchemaComplexType::contentModel
	XmlSchemaContentModel_t1713 * ___contentModel_34;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::validatableParticle
	XmlSchemaParticle_t1105 * ___validatableParticle_35;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::contentTypeParticle
	XmlSchemaParticle_t1105 * ___contentTypeParticle_36;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isAbstract
	bool ___isAbstract_37;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isMixed
	bool ___isMixed_38;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::particle
	XmlSchemaParticle_t1105 * ___particle_39;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaComplexType::resolvedContentType
	int32_t ___resolvedContentType_40;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::ValidatedIsAbstract
	bool ___ValidatedIsAbstract_41;
	// System.Guid System.Xml.Schema.XmlSchemaComplexType::CollectProcessId
	Guid_t713  ___CollectProcessId_44;
};
struct XmlSchemaComplexType_t1052_StaticFields{
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::anyType
	XmlSchemaComplexType_t1052 * ___anyType_42;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexType::AnyTypeName
	XmlQualifiedName_t985 * ___AnyTypeName_43;
};
