#include "Arduino.h"
#include "keymatrix.hpp"


KeyMatrix::KeyMatrix(char assignments[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			int coord[2] = {i, j};
			KeySwitch key = KeySwitch(assignments[i][j], coord);
			matrix[i][j] = key;
		}
	}
}
