#ifndef KEYMATRIX_H
#define KEYMATRIX_H

#include "Arduino.h"
#include "keyswitch.hpp"

#define ROWS 5
#define COLS 2
/*
 * Representation of a keyboard matrix.
 * Handles USB-char sending, debouncing, and electronic
 * matrix value collection.
 */
class KeyMatrix {
public:
	// data storage of key object
  KeySwitch matrix[ROWS][COLS];

  // Timing variables
  unsigned int debounceT = 10; // ms
  unsigned long lastCheck = 0;
  unsigned int holdT = 500; // ms
  unsigned int repeatRate ; //?

  /*
   * Constructor supporting arbitrary keyboard layers
   */
  KeyMatrix(char assignments[ROWS][COLS], int rowPins[ROWS], int colPins[COLS]);

  /*
   * Update DS entries
   * Does not send key presses over USB HID
   */
  void updateEntries();

  /*
   * Send keypresses to an attached computer over USB HID
   * DOES NOT update KeyMatrix before sending
   */
  void sendEntries();

  /**
   * Run matrix routine, including updateEntries() and sendEntries()
   * Literally sends things over USB (!)
   */
  void operate();

  /*
   *
   * @param time the time to debounce for (ms)
   */
  void setBounce(unsigned int delay);

  /*
   * @param time to hold down key before repeating (ms)
   */
  void setHold(unsigned int delay);

  /*
   * @param frequency of keypresses (ms between keypresses)
   */
  void setRepeat(unsigned int freq);

private:

};

#endif
