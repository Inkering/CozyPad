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

// TODO: where to put design for char assignments and pins? here or main?

class Keyboard {
	int rowPins[ROWS];
	int colPins[COLS];
	char assignments [ROWS][COLS];
public:
	Keyboard();
};

#endif
