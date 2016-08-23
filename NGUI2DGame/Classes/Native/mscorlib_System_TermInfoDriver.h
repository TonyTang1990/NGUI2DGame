#pragma once
#include <stdint.h>
// System.String[]
struct StringU5BU5D_t258;
// System.TermInfoReader
struct TermInfoReader_t2485;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t2033;
// System.IO.CStreamWriter
struct CStreamWriter_t2424;
// System.Char[]
struct CharU5BU5D_t260;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.ByteMatcher
struct ByteMatcher_t2486;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.TermInfoStrings[]
struct TermInfoStringsU5BU5D_t2487;
// System.Object
#include "mscorlib_System_Object.h"
// System.ConsoleColor
#include "mscorlib_System_ConsoleColor.h"
// System.TermInfoDriver
struct  TermInfoDriver_t2422  : public Object_t
{
	// System.TermInfoReader System.TermInfoDriver::reader
	TermInfoReader_t2485 * ___reader_3;
	// System.Int32 System.TermInfoDriver::cursorLeft
	int32_t ___cursorLeft_4;
	// System.Int32 System.TermInfoDriver::cursorTop
	int32_t ___cursorTop_5;
	// System.String System.TermInfoDriver::title
	String_t* ___title_6;
	// System.String System.TermInfoDriver::titleFormat
	String_t* ___titleFormat_7;
	// System.Boolean System.TermInfoDriver::cursorVisible
	bool ___cursorVisible_8;
	// System.String System.TermInfoDriver::csrVisible
	String_t* ___csrVisible_9;
	// System.String System.TermInfoDriver::csrInvisible
	String_t* ___csrInvisible_10;
	// System.String System.TermInfoDriver::clear
	String_t* ___clear_11;
	// System.String System.TermInfoDriver::bell
	String_t* ___bell_12;
	// System.String System.TermInfoDriver::term
	String_t* ___term_13;
	// System.IO.StreamReader System.TermInfoDriver::stdin
	StreamReader_t2033 * ___stdin_14;
	// System.IO.CStreamWriter System.TermInfoDriver::stdout
	CStreamWriter_t2424 * ___stdout_15;
	// System.Int32 System.TermInfoDriver::windowWidth
	int32_t ___windowWidth_16;
	// System.Int32 System.TermInfoDriver::windowHeight
	int32_t ___windowHeight_17;
	// System.Int32 System.TermInfoDriver::bufferHeight
	int32_t ___bufferHeight_18;
	// System.Int32 System.TermInfoDriver::bufferWidth
	int32_t ___bufferWidth_19;
	// System.Char[] System.TermInfoDriver::buffer
	CharU5BU5D_t260* ___buffer_20;
	// System.Int32 System.TermInfoDriver::readpos
	int32_t ___readpos_21;
	// System.Int32 System.TermInfoDriver::writepos
	int32_t ___writepos_22;
	// System.String System.TermInfoDriver::keypadXmit
	String_t* ___keypadXmit_23;
	// System.String System.TermInfoDriver::keypadLocal
	String_t* ___keypadLocal_24;
	// System.Boolean System.TermInfoDriver::inited
	bool ___inited_25;
	// System.Object System.TermInfoDriver::initLock
	Object_t * ___initLock_26;
	// System.Boolean System.TermInfoDriver::initKeys
	bool ___initKeys_27;
	// System.String System.TermInfoDriver::origPair
	String_t* ___origPair_28;
	// System.String System.TermInfoDriver::origColors
	String_t* ___origColors_29;
	// System.String System.TermInfoDriver::cursorAddress
	String_t* ___cursorAddress_30;
	// System.ConsoleColor System.TermInfoDriver::fgcolor
	int32_t ___fgcolor_31;
	// System.Boolean System.TermInfoDriver::color16
	bool ___color16_32;
	// System.String System.TermInfoDriver::setlfgcolor
	String_t* ___setlfgcolor_33;
	// System.String System.TermInfoDriver::setlbgcolor
	String_t* ___setlbgcolor_34;
	// System.String System.TermInfoDriver::setfgcolor
	String_t* ___setfgcolor_35;
	// System.String System.TermInfoDriver::setbgcolor
	String_t* ___setbgcolor_36;
	// System.Boolean System.TermInfoDriver::noGetPosition
	bool ___noGetPosition_37;
	// System.Collections.Hashtable System.TermInfoDriver::keymap
	Hashtable_t915 * ___keymap_38;
	// System.ByteMatcher System.TermInfoDriver::rootmap
	ByteMatcher_t2486 * ___rootmap_39;
	// System.Boolean System.TermInfoDriver::home_1_1
	bool ___home_1_1_40;
	// System.Int32 System.TermInfoDriver::rl_startx
	int32_t ___rl_startx_41;
	// System.Int32 System.TermInfoDriver::rl_starty
	int32_t ___rl_starty_42;
	// System.Byte[] System.TermInfoDriver::control_characters
	ByteU5BU5D_t159* ___control_characters_43;
	// System.Char[] System.TermInfoDriver::echobuf
	CharU5BU5D_t260* ___echobuf_44;
	// System.Int32 System.TermInfoDriver::echon
	int32_t ___echon_45;
};
struct TermInfoDriver_t2422_StaticFields{
	// System.Int32* System.TermInfoDriver::native_terminal_size
	int32_t* ___native_terminal_size_0;
	// System.Int32 System.TermInfoDriver::terminal_size
	int32_t ___terminal_size_1;
	// System.String[] System.TermInfoDriver::locations
	StringU5BU5D_t258* ___locations_2;
	// System.TermInfoStrings[] System.TermInfoDriver::UsedKeys
	TermInfoStringsU5BU5D_t2487* ___UsedKeys_46;
};
