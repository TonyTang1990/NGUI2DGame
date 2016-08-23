#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Xml.Schema.XmlSchemaParticle
struct  XmlSchemaParticle_t1105  : public XmlSchemaAnnotated_t1108
{
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minOccurs
	Decimal_t698  ___minOccurs_16;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::maxOccurs
	Decimal_t698  ___maxOccurs_17;
	// System.String System.Xml.Schema.XmlSchemaParticle::minstr
	String_t* ___minstr_18;
	// System.String System.Xml.Schema.XmlSchemaParticle::maxstr
	String_t* ___maxstr_19;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::validatedMinOccurs
	Decimal_t698  ___validatedMinOccurs_21;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::validatedMaxOccurs
	Decimal_t698  ___validatedMaxOccurs_22;
	// System.Int32 System.Xml.Schema.XmlSchemaParticle::recursionDepth
	int32_t ___recursionDepth_23;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minEffectiveTotalRange
	Decimal_t698  ___minEffectiveTotalRange_24;
	// System.Boolean System.Xml.Schema.XmlSchemaParticle::parentIsGroupDefinition
	bool ___parentIsGroupDefinition_25;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::OptimizedParticle
	XmlSchemaParticle_t1105 * ___OptimizedParticle_26;
};
struct XmlSchemaParticle_t1105_StaticFields{
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::empty
	XmlSchemaParticle_t1105 * ___empty_20;
};
