---
numbersections: true
---

# Cozy Pad
*A cozy and wholesome macro pad for design folk*

Made by Sam Daitzman and Dieter Brehm

##  Goals
Our goal is to create and program a tiny keyboard to make frequent tasks or
shortcuts easier to access on a computer. It will have eight keys in a 4 column,
2 row grid, and will connect over usb to a computer. The computer will dictate
the key-binding through it's operating system, but the keypad firmware will
bridge the gap between the key switches and the computer's USB keyboard spec.

## Minimum Interesting Results
* A physical keypad that connects over usb and allows the user to press buttons
  to type characters on a computer.
* should work on windows, mac, and linux

## Maximum Interesting Results
* fancy case or rotary encoders on the macro pad
* Multiple control layers with a switch that activates them
* robust ability to support different physical mechanism grid sizes (i.e. number of keys)
* WiFi or Bluetooth pairing ability

## Learning Goals
### Sam

### Dieter
I want to learn more about c and c++ programming in embedded systems, and about
how to handle inter-peripheral communication and inter-computer communication.

## What's first
* Construct and wire up mvp macropad (1st week of project)
* Identify microcontroller of choice and locate documentation
* Sketch out an architecture for what control layers and functionality we want
* Research usb-keyboard protocols and communication
* get a single button to write a single letter character on the computer
