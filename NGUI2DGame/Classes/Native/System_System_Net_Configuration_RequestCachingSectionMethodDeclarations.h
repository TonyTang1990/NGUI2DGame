#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t1998;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Xml.XmlReader
struct XmlReader_t843;

// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C" void RequestCachingSection__cctor_m11060 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * RequestCachingSection_get_Properties_m11061 (RequestCachingSection_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C" void RequestCachingSection_PostDeserialize_m11062 (RequestCachingSection_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void RequestCachingSection_DeserializeElement_m11063 (RequestCachingSection_t1998 * __this, XmlReader_t843 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
