#include "Arduino.h"
#include "keymatrix.hpp"


KeyMatrix::KeyMatrix(char assignments[ROWS][COLS], int rowPins[ROWS], int colPins[COLS]){
	// initalize the coordinate values of the keymatrix
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			int coord[2] = {rowPins[i], colPins[j]};
			KeySwitch key = KeySwitch(assignments[i][j], coord);
			matrix[i][j] = key;
		}
	}
}

void KeyMatrix::updateEntries() {
	if (( millis() - lastCheck) > debounceT) {
		for (int r=0; r < ROWS; r++) {
			// only look at first column of matrix for row pins
			// set row as pullup resistor mode
			int pin = matrix[r][0].coords[0];
			pinMode(pin, INPUT_PULLUP);
		}

		for (int c=0; c < COLS; c++) {
			int cPin = matrix[0][c].coords[1];
			pinMode(cPin, OUTPUT);
			// begin column pulse
			digitalWrite(cPin, LOW);
			// for all rows
			for (int r=0; r < ROWS; r++) {
				int rPin = matrix[r][c].coords[0];
				KeySwitch *key = &matrix[r][c];

				// if signal LOW, set key to pressed
				// if signal HIGH set key to IDLE

				// keypress is active on low, not high.
				if (!digitalRead(rPin)) {
					// update pin state
					if (key->state == IDLE) {
						key->isChanged = true;
					}
					key->state = PRESSED;
				} else {
					key->state = IDLE;
				}
			}

			//end column pulse
			digitalWrite(cPin, HIGH);
			pinMode(cPin, INPUT);
		}

		lastCheck = millis();
	}
}

void KeyMatrix::setBounce(unsigned int delay) {
	debounceT = delay;
}

void KeyMatrix::setHold(unsigned int delay) {
	holdT = delay;
}

void KeyMatrix::setRepeat(unsigned int freq) {
	repeatRate = freq;
}
