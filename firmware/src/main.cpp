
// /*
//  * Cozy Pad Macropad
//  * By Sam Daitzman, Dieter Brehm
//  */
#include "Arduino.h"
#include "keyboardcontroller.hpp"

KeyboardController cozyPad = KeyboardController();

void setup(){
}

void loop(){
	cozyPad.boardLoop();
}
