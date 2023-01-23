#pragma once
#ifndef ESCAPECODE_STYLE_HPP
#define ESCAPECODE_STYLE_HPP

#include <stdio.h>

namespace EscapeCode {

enum class Attribute {
	RESET = 0,
	BOLD = 1,
	FAINT = 2,
	ITALIC = 3,
	UNDERLINE = 4,
	BLINK = 5,
	RAPID_BLINK = 6,
	INVERT = 7,
	HIDE = 8,
	STRIKE = 9,
	NOT_BOLD = 21,
	NORMAL_INTENSITY = 22,
	NOT_ITALIC = 23,
	NOT_UNDERLINED = 24,
	NOT_BLINKING = 25,
	NOT_REVERSED = 27,
	NOT_HIDDEN = 28,
	NOT_STRIKED = 29,
};

enum class Foreground {
	BLACK = 30,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE,
	BRIGHT_BLACK = 90,
	BRIGHT_RED,
	BRIGHT_GREEN,
	BRIGHT_YELLOW,
	BRIGHT_BLUE,
	BRIGHT_MAGENTA,
	BRIGHT_CYAN,
	BRIGHT_WHITE,
};

enum class Background {
	BLACK = 40,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE,
	BRIGHT_BLACK = 100,
	BRIGHT_RED,
	BRIGHT_GREEN,
	BRIGHT_YELLOW,
	BRIGHT_BLUE,
	BRIGHT_MAGENTA,
	BRIGHT_CYAN,
	BRIGHT_WHITE,
};

}

#endif // ESCAPECODE_STYLE_HPP
