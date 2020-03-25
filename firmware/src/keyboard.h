/**
 * Cozypad Keyboard Project
 * Keyboard.h
 * Dieter Brehm, Sam Daitzman
 * Simple representation of a keyboard matrix,
 * with scanning, repeat(hold), tapping, N-key rollover, and other
 * processing.
 */

#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "Arduino.h"

// put this in the makefile later?
#define ROWS 5
#define COLS 2

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
class Key {
public:
    // value tracking
    char keyVal[5];
    void* keyFunc;

    // pin set
    int coords[2];

    // state handling
    KeyState state;
    bool isChanged;

    /* 
     * Constructor
     * 
     * @param val
     * @param coord
     */
    Key(char val, int coord[2]);

    /* 
     * Constructor
     * 
     * @param func
     * @param coord
     */
    Key(void* func, int coord[2]);
};

/*
 * Representation of a keyboard matrix.
 * Handles USB-char sending, debouncing, and electronic
 * matrix value collection.
 */ 
class KeyMatrix {
public:
    // data storage of key object
    Key matrix[ROWS][COLS];

    // Timing variables
    unsigned int debounceT;
    unsigned long lastCheck;
    unsigned int holdT;
    unsigned int repeatRate;


    /*
    * Constructor supporting arbitrary keyboard layers
    */
    KeyMatrix(char [][ROWS][COLS]);

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

class Keyboard {
public:
    Keyboard();
    
};

#endif