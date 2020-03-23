
// /*
//  * Cozy Pad Macropad
//  * By Sam Daitzman, Dieter Brehm
//  */
#include "Arduino.h"
#include <Keypad.h>

const byte ROWS = 5; //four rows
const byte COLS = 2; //three columns
char keys[ROWS][COLS] = {{'0', '5'}, {'1', '6'}, {'2','7'}, {'3','8'}, {'4','9'}};
byte rowPins[ROWS] = {21, 20, 17, 19, 18}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {0,1}; // connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
}

void loop(){
  char key = keypad.getKey();

	if (key){
		switch (key) {
		case '0':
			Keyboard.write("//");
			break;
		case '1':
			Keyboard.write("~");
			break;
		case '2':
			Keyboard.write("I’m a little fried, will get back to you later");
			break;
		case '3':
			Keyboard.write("Everything is designed");
			break;
		case '4':
			Keyboard.write("Omg wait, what if we");
			break;
		case '5':
			Keyboard.write("Basic is Bold. New is Now.");
			break;
		case '6':
			Keyboard.write("Well, as a designer,");
			break;
		case '7':
			Keyboard.write("Hmmm that makes sense. On the other hand,");
			break;
		case '8':
			Keyboard.write("Are you looking for critique at this stage in your process?");
			break;
		case '9':
			Keyboard.write("Want to grab salad and walk and talk?");
			break;
		}
	}
}
