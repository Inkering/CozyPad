# Cozy Pad
*A cozy and wholesome macro pad for design folk*

Made by Sam Daitzman and Dieter Brehm


##  Goals

Our goal is to create and program a tiny macro-focused keyboard to make frequent tasks or
shortcuts easier to access on a computer. It will have ten keys in a 5 column, 
2 row grid, and will connect over usb to a computer. The computer will dictate
the key-binding through its operating system, but the keypad firmware will
bridge the gap between the key switches and the computer's USB keyboard spec.


## Learning Goals

### Sam
I want to learn more about USB communications and how embedded C interacts with
peripherals. I'm particularly interested in understanding the connections
between the C code scanning for keypresses, and how to optimize the hardware
(in this case, probably a diode-switch matrix) to work well with the software
(which will probably need to scan the matrix very quickly). I'm excited to think
intentionally about how to write C that performs as well as possible with the
hardware we're working with.

### Dieter

I want to learn more about C and C++ programming in embedded systems, and about
how to handle inter-peripheral communication and inter-computer communication.


## Resources

3) What resources did you find that were useful to you.  If you found any resources you think I should add to the list on the class web page, please email them to me.


## What We've Done

So far, we've manufactured the electronics and mechanics of the device, and
we've built a simple demo program which fulfills the MVP we sought to make.

![photo of the keyboard in use](../process-photos/demo1.jpg)

We've also started planning out some different, more advanced forms of input.
Before we move on, we need to improve our current matrix scanning implementation
and add some functionality. As an MVP, the keyboard is fully functional right
now and capable of typing a character or a phrase when a particular button is
pressed. This is already functionally useful, especially when programmed with
common phrases, as the firmware is already capable of interfacing with any USB
port and the keyboard can be programmed with whatever macros its user would find
most helpful.

As a product, a keyboard with a set list of commonly used phrases (or simply an
external numpad) is already a desirable object, so we've met a basic level of
use value by meeting our MVP and now have room to push the project in different
and interesting directions.

*4) What were you able to get done?  Include in the report whatever evidence is appropriate to demonstrate the outcome of the project.  Consider including snippets of code with explanation; do not paste in large chunks of unexplained code.  Consider including links to relevant files.  And do include output from the program(s) you wrote.*


## API Design
*5) Explain at least one design decision you made.  Were there several ways to do something?  Which did you choose and why?*

### n-key Rollover Keypress Data Structure



## Important Code Samples
*6) You will probably want to present a few code snippets that present the most important parts of your implementation.  You should not paste in large chunks of code or put them in the Appendix.  You can provide a link to a code file, but the report should stand alone; I should not have to read your code files to understand what you did.*

### Matrix Scanning Code

### Keypress Data Structure Implementation


## Project Outcomes
*7) Reflect on the outcome of the project in terms of your learning goals.  Between the lower and upper bounds you identified in the proposal, where did your project end up?  Did you achieve your learning goals?*



[GitHub Repository](https://github.com/Inkering/CozyPad) // 
[Trello Board](https://trello.com/b/XE28EbTX/cozypad)

