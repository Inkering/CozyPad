/**
 * Cozypad Keyboard Project
 * keyswitch.cpp
 * Dieter Brehm, Sam Daitzman
 * Simple representation of a keyboard key
 */

#include "keyswitch.hpp"
#include "Arduino.h"

KeySwitch::KeySwitch(char val, int coord[2]) {
	// for single char key assigment
	keyVal[0] = val;

	// can't do direct passing ;(
	coords[0] = coord[0];
	coords[1] = coord[1];
}


KeySwitch::KeySwitch(void* func, int coord[2]) {
		// for single char key assigment
	keyFunc = func;

	// can't do direct passing ;(
	coords[0] = coord[0];
	coords[1] = coord[1];
}


KeySwitch::KeySwitch() {
	keyVal[0] = '0';
}
