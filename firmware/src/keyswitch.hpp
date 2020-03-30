#ifndef KEYSWITCH_H
#define KEYSWITCH_H
#include "Arduino.h"

/*
 * Representation of the state of one key
 */
typedef enum {
    IDLE,
    PRESSED,
    HOLD,
    RELEASED
} KeyState;

/*
 * Representation of one key
 *
 */
class KeySwitch {
public:
	// value tracking
	char keyVal[5];
	void* keyFunc;

	// pin set
	int coords[2] = {0, 0};

	// state handling
	KeyState state = IDLE;
	bool isChanged = false;

	/*
	 * Constructor
	 *
	 * @param val
	 * @param coord
	 */
	KeySwitch(char val, int coord[2]);

	/*
	 * Constructor for array initialization
	 */
	KeySwitch();

	/*
	 * Constructor
	 *
	 * @param func
	 * @param coord
	 */
	KeySwitch(void* func, int coord[2]);
};

#endif
