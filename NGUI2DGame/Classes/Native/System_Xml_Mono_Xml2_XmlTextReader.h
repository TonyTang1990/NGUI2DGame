﻿#pragma once
#include <stdint.h>
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t1623;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t1624;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t1628;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t1629;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1569;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t1630;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.IO.TextReader
struct TextReader_t1101;
// System.Char[]
struct CharU5BU5D_t260;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t1618;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.NameTable
struct NameTable_t1576;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t1627;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// Mono.Xml2.XmlTextReader
struct  XmlTextReader_t1622  : public XmlReader_t843
{
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t1623 * ___cursorToken_3;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t1623 * ___currentToken_4;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t1624 * ___currentAttributeToken_5;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t1623 * ___currentAttributeValueToken_6;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t1628* ___attributeTokens_7;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t1629* ___attributeValueTokens_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_9;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_10;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_11;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t1571 * ___parserContext_12;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t1543 * ___nameTable_13;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t1569 * ___nsmgr_14;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_15;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_16;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_17;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_18;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_19;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_20;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t1630* ___elementNames_21;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_22;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_23;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_24;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_25;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_26;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t294 * ___valueBuffer_27;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t1101 * ___reader_28;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t260* ___peekChars_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_30;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_31;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_32;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_33;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_34;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_36;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_37;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_39;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_40;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_41;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_42;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t1618 * ___binaryCharGetter_43;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_44;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_45;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t1520 * ___resolver_46;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_47;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_48;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_49;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_50;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_51;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t1576 * ___whitespacePool_52;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t260* ___whitespaceCache_53;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t1627 * ___stateStack_54;
};
struct XmlTextReader_t1622_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map38
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map38_55;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map39
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map39_56;
};
