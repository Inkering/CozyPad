/**
 * Cozypad Keyboard Project
 * Keyboard.cpp
 * Dieter Brehm, Sam Daitzman
 * Simple representation of a keyboard matrix,
 * with scanning, repeat(hold), tapping, N-key rollover, and other
 * processing.
 */

#include "Arduino.h"
#include "keyboardcontroller.hpp"

KeyboardController::KeyboardController() {}

void KeyboardController::boardLoop() {
	// run the matrix loop, sending pressed
	masterMatrix.operate();
}
