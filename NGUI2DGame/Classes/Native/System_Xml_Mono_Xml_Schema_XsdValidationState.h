#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t1507;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationState
struct  XsdValidationState_t1508  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdValidationState::occured
	int32_t ___occured_1;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::manager
	XsdParticleStateManager_t1506 * ___manager_2;
};
struct XsdValidationState_t1508_StaticFields{
	// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::invalid
	XsdInvalidValidationState_t1507 * ___invalid_0;
};
