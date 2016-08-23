#pragma once
#include <stdint.h>
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlNodeReaderImpl
struct  XmlNodeReaderImpl_t1611  : public XmlReader_t843
{
	// System.Xml.XmlDocument System.Xml.XmlNodeReaderImpl::document
	XmlDocument_t978 * ___document_3;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::startNode
	XmlNode_t1124 * ___startNode_4;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::current
	XmlNode_t1124 * ___current_5;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::ownerLinkedNode
	XmlNode_t1124 * ___ownerLinkedNode_6;
	// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::state
	int32_t ___state_7;
	// System.Int32 System.Xml.XmlNodeReaderImpl::depth
	int32_t ___depth_8;
	// System.Boolean System.Xml.XmlNodeReaderImpl::isEndElement
	bool ___isEndElement_9;
	// System.Boolean System.Xml.XmlNodeReaderImpl::ignoreStartNode
	bool ___ignoreStartNode_10;
};
struct XmlNodeReaderImpl_t1611_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map34
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map34_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map35
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map35_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map36
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map36_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map37
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map37_14;
};
