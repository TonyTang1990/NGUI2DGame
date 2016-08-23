#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t1950;
// System.Object
struct Object_t;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Collections.IDictionary
struct IDictionary_t1060;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1952;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t1136;

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C" void DiagnosticsConfigurationHandler__ctor_m10785 (DiagnosticsConfigurationHandler_t1950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C" Object_t * DiagnosticsConfigurationHandler_Create_m10786 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___parent, Object_t * ___configContext, XmlNode_t1124 * ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddAssertNode_m10787 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSwitchesNode_m10788 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C" Object_t * DiagnosticsConfigurationHandler_GetSwitchValue_m10789 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceNode_m10790 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceAttributes_m10791 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C" TraceListenerCollection_t1952 * DiagnosticsConfigurationHandler_GetSharedListeners_m10792 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSourcesNode_m10793 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceSource_m10794 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, Hashtable_t915 * ___sources, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListeners_m10795 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___listenersNode, TraceListenerCollection_t1952 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListener_m10796 (DiagnosticsConfigurationHandler_t1950 * __this, Object_t * ___d, XmlNode_t1124 * ___child, XmlAttributeCollection_t1136 * ___attributes, TraceListenerCollection_t1952 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C" void DiagnosticsConfigurationHandler_RemoveTraceListener_m10797 (DiagnosticsConfigurationHandler_t1950 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C" String_t* DiagnosticsConfigurationHandler_GetAttribute_m10798 (DiagnosticsConfigurationHandler_t1950 * __this, XmlAttributeCollection_t1136 * ___attrs, String_t* ___attr, bool ___required, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateAttribute_m10799 (DiagnosticsConfigurationHandler_t1950 * __this, String_t* ___attribute, String_t* ___value, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m10800 (DiagnosticsConfigurationHandler_t1950 * __this, XmlAttributeCollection_t1136 * ___c, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m10801 (DiagnosticsConfigurationHandler_t1950 * __this, String_t* ___attribute, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m10802 (DiagnosticsConfigurationHandler_t1950 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m10803 (DiagnosticsConfigurationHandler_t1950 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m10804 (DiagnosticsConfigurationHandler_t1950 * __this, String_t* ___attribute, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
