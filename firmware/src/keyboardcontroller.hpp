/**
 * Cozypad Keyboard Project
 * Keyboard.hpp
 * Dieter Brehm, Sam Daitzman
 * Simple representation of a keyboard matrix,
 * with scanning, repeat(hold), tapping, N-key rollover, and other
 * processing.
 */

#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "Arduino.h"
#include "keymatrix.hpp"

// put this in the makefile later?
#define ROWS 5
#define COLS 2

class KeyboardController {
public:
  int rowPins[ROWS] = {21, 20, 17, 19, 18};
  int colPins[COLS] = {0,1};
  char assignments[ROWS][COLS] = {
		{'1', '2'},
		{'3', '4'},
		{'5', '6'},
		{'7', '8'},
		{'9', '0'}
	};

	KeyMatrix masterMatrix = KeyMatrix(assignments, rowPins, colPins);

	KeyboardController();

	void boardLoop();
};

#endif
