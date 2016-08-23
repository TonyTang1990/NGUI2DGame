#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// Mono.Xml.DTDAutomata
#include "System_Xml_Mono_Xml_DTDAutomata.h"
// Mono.Xml.DTDChoiceAutomata
struct  DTDChoiceAutomata_t1532  : public DTDAutomata_t1530
{
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::left
	DTDAutomata_t1530 * ___left_1;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::right
	DTDAutomata_t1530 * ___right_2;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable_3;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::cachedEmptiable
	bool ___cachedEmptiable_4;
};
