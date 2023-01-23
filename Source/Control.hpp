#pragma once
#ifndef ESCAPECODE_CONTROL_HPP
#define ESCAPECODE_CONTROL_HPP

namespace EscapeCode {

enum class Cursor {
	MOVE_UP = 'A',
	MOVE_DOWN = 'B',
	MOVE_RIGHT = 'C',
	MOVE_LEFT = 'D',
	MOVE_NEXT = 'E',
	MOVE_PRIOR = 'F',
	MOVE_COLUMN = 'G',
	MOVE_POSITION = 'H',
	GET_POSITION = 'n',
	SAVE_POSITION = 's',
	RESTORE_POSITION = 'u',
	SHOW = 'h',
	HIDE = 'l',
};

enum class Erase {
	IN_DISPLAY = 'J',
	IN_LINE = 'K',
};

enum class Scroll {
	UP = 'S',
	DOWN = 'T',
};

}

#endif // ESCAPECODE_CONTROL_HPP
