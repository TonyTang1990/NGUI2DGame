#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Coord
#include "mscorlib_System_Coord.h"
// System.SmallRect
#include "mscorlib_System_SmallRect.h"
// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t2504 
{
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t2502  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t2502  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2503  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t2502  ___MaxWindowSize_4;
};
