﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t294;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo.h"
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct  XmlAttributeTokenInfo_t1624  : public XmlTokenInfo_t1623
{
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenStartIndex
	int32_t ___ValueTokenStartIndex_13;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenEndIndex
	int32_t ___ValueTokenEndIndex_14;
	// System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::valueCache
	String_t* ___valueCache_15;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::tmpBuilder
	StringBuilder_t294 * ___tmpBuilder_16;
};
