#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementInformation
struct ElementInformation_t1414;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t1447;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C" void ElementInformation__ctor_m6744 (ElementInformation_t1414 * __this, ConfigurationElement_t1416 * ___owner, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C" PropertyInformationCollection_t1447 * ElementInformation_get_Properties_m6745 (ElementInformation_t1414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C" void ElementInformation_Reset_m6746 (ElementInformation_t1414 * __this, ElementInformation_t1414 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
