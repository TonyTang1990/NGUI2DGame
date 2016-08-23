#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.Collections.Stack
struct Stack_t639;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationContext
struct  XsdValidationContext_t1505  : public Object_t
{
	// System.Object Mono.Xml.Schema.XsdValidationContext::xsi_type
	Object_t * ___xsi_type_0;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationContext::State
	XsdValidationState_t1508 * ___State_1;
	// System.Collections.Stack Mono.Xml.Schema.XsdValidationContext::element_stack
	Stack_t639 * ___element_stack_2;
};
