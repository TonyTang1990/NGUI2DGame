#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t1986;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C" void HttpCachePolicyElement__cctor_m11005 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * HttpCachePolicyElement_get_Properties_m11006 (HttpCachePolicyElement_t1986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void HttpCachePolicyElement_DeserializeElement_m11007 (HttpCachePolicyElement_t1986 * __this, XmlReader_t843 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void HttpCachePolicyElement_Reset_m11008 (HttpCachePolicyElement_t1986 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
