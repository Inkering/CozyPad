
// /*
//  * Cozy Pad Macropad
//  * By Sam Daitzman, Dieter Brehm
//  */
#include "Arduino.h"
#include "Keyboard.h"

// store desired characters to send to computer upon press in 2D array
// char keyset[ROWS][COLS] = {{'0', '5'}, {'1', '6'}, {'2','7'}, {'3','8'}, {'4','9'}};
// char* keymap = (char *)keyset; // TODO Why do this?pl

// define the pins rows+columns are connected to on the MCU
// byte rowPins[ROWS] = {21, 20, 17, 19, 18};
// byte colPins[COLS] = {0,1};

// Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
	// example array
	// char aMatrix[2][ROWS][COLS] = {
	// 	{
	// 		{'a', 'b'}, {'c', 'd'}
	// 	},
	// 	{
	// 		{'1', '2'}, {'3', '4'}
	// 	}
	// };
}

void loop(){
  // char key = keypad.getKey();
	// Keyboard.write(key);
}
