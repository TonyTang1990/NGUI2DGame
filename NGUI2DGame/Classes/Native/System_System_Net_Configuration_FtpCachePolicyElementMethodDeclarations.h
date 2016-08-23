#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t1985;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;

// System.Void System.Net.Configuration.FtpCachePolicyElement::.cctor()
extern "C" void FtpCachePolicyElement__cctor_m11001 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * FtpCachePolicyElement_get_Properties_m11002 (FtpCachePolicyElement_t1985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void FtpCachePolicyElement_DeserializeElement_m11003 (FtpCachePolicyElement_t1985 * __this, XmlReader_t843 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void FtpCachePolicyElement_Reset_m11004 (FtpCachePolicyElement_t1985 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
