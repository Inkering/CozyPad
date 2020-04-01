# Cozy Pad
*A cozy and wholesome macro pad for design folk*

Made by Sam Daitzman and Dieter Brehm


##  Goals

Our goal is to create and program a tiny macro-focused keyboard to make frequent
tasks or shortcuts easier to access on a computer. It will have ten keys in a 5
column, 2 row grid, and will connect over usb to a computer. The computer will
dictate the key-binding through its operating system, but the keypad firmware
will bridge the gap between the key switches and the computer's USB keyboard
spec.


## Learning Goals

### Sam
I want to learn more about USB communications and how embedded C interacts with
d peripherals. I'm particularly interested in understanding the connections
between the C code scanning for keypresses, and how to optimize the hardware (in
this case, probably a diode-switch matrix) to work well with the software (which
will probably need to scan the matrix very quickly). I'm excited to think
intentionally about how to write C that performs as well as possible with the
hardware we're working with. Over the course of the project, I also became more
interested in learning about good API design for C code, especially data
structures and polymorphism.

### Dieter

I want to learn more about C and C++ programming in embedded systems, and about
how to handle inter-peripheral communication and inter-computer communication.


## Resources

For our implementation, we learned a significant amount from the `Keypad.h`
macropad/keypad library, authored by Mark Stanley and Alexander Brevig. The
Keypad library provides a simple way to declare and track state in a keypad, and
we significantly based our initial implementation on this library. Over the
course of building out that implementation, we noted where we could improve over
that library in API design and ease of use. One weakness of the `Keypad.h`
library is that it relies on many different datastructures and methods, some of
which have to be called correctly. This introduces a high degree of coupling
between the code a developer implements with the library and the function
bindings. We tried to improve on that by limiting ourselves to a few clearly
defined and well-scoped API functions, and one core datastructure for tracking
all aspects of the keypad's state. By combining multiple datastructures, we
think we made our code much more clear.


## What We've Done

So far, we've manufactured the electronics and mechanics of the device, and
we've built a simple demo program which fulfills the MVP we sought to make.

![photo of the keyboard in use](../process-photos/demo1.jpg)

We've also started planning out some different, more advanced forms of
input. Before we move on, we need to improve our current matrix scanning
implementation and add some functionality. As an MVP, we used a USB
communication library to program the keyboard to send a character or a phrase
when a particular button is pressed. This was already functionally useful,
especially when programmed with common phrases, as the firmware is already
capable of interfacing with any USB port and the keyboard can be programmed with
whatever macros its user would find most helpful.

Beyond that basic implementation, we were able to write a well-scoped keypad
implementation that scans the diode matrix for changes and tracks them in a
well-specified data structure. We also include code that allows for specific
methods (functional "event handlers") to be attached to different keypresses,
and allow for simple traditional handling with one character assigned to each
key. We support key-repeat properly, and implemented *n-key rollover*, which
means that the keyboard can track an arbitrary number of keypresses (limited
only by its memory) and send them as desired from a buffer. This is useful
because it means that the code we implemented can be scaled to more complex,
full keyboards or arbitrary dimensions, combining basic functionality like a
normal keyboard with more advanced macropad operations.

TODO: add code samples here!

*4) What were you able to get done?  Include in the report whatever evidence is
appropriate to demonstrate the outcome of the project.  Consider including
snippets of code with explanation; do not paste in large chunks of unexplained
code.  Consider including links to relevant files.  And do include output from
the program(s) you wrote.*


## API Design
*5) Explain at least one design decision you made.  Were there several ways to
do something?  Which did you choose and why?*

### n-key Rollover Keypress Data Structure
In the keypad implementations we examined, we found that most relied on a shared
fixed coordinate system for all data, often using a collection of many
two-dimensional arrays. These structures necessitate passing keyboard dimensions
all around, and make it very difficult to program dynamic functionality like
changes of layer without functionally reimplementing the entire keypad
datastructure and update code (which defeats the purpose of those libraries).

To avoid these pitfalls, we chose to rely on a single standard datastructure
that embeds multiple smaller proto-structures that each represent the state and
settings for each individual key. This approach enables a more flexible approach
to building software that relies on our code, because there's only one
datastructure to parse and only a few functions built in. It simplifies the most
common assignment for a key (a single character) while preserving the ability to
add custom implementations for a subset of keys.

TODO: add a dict outline with the datastructure
```json

```

## Important Code Samples
*6) You will probably want to present a few code snippets that present the most
important parts of your implementation.  You should not paste in large chunks of
code or put them in the Appendix.  You can provide a link to a code file, but
the report should stand alone; I should not have to read your code files to
understand what you did.*

### Matrix Scanning Code

### Keypress Data Structure Implementation


## Project Outcomes
*7) Reflect on the outcome of the project in terms of your learning goals.
Between the lower and upper bounds you identified in the proposal, where did
your project end up?  Did you achieve your learning goals?*



[GitHub Repository](https://github.com/Inkering/CozyPad) // 
[Trello Board](https://trello.com/b/XE28EbTX/cozypad)

