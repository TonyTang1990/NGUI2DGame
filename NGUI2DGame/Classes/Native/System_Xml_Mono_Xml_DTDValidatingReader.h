#pragma once
#include <stdint.h>
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t1566;
// System.Xml.XmlTextReader
struct XmlTextReader_t1121;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1567;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t1568;
// System.Collections.Stack
struct Stack_t639;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1569;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.Char[]
struct CharU5BU5D_t260;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t1570  : public XmlReader_t843
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t1566 * ___reader_3;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t1121 * ___sourceTextReader_4;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t1567 * ___validatingReader_5;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t1528 * ___dtd_6;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t1520 * ___resolver_7;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_8;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t1568* ___attributes_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_11;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t639 * ___elementStack_13;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t639 * ___automataStack_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_15;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t1530 * ___currentAutomata_17;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t1530 * ___previousAutomata_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t913 * ___idList_19;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t913 * ___missingIDReferences_20;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t1569 * ___nsmgr_21;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_22;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_26;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_27;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t639 * ___attributeValueEntityStack_28;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t294 * ___valueBuilder_29;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t260* ___whitespaceChars_30;
};
struct DTDValidatingReader_t1570_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map2A_31;
};
