The LED Cha-Cha: A Dance of Lights
Greetings, illustrious maker! Step into the spotlight of this repository, where LEDs pirouette across pins 2 through 13 like a troupe of tiny, glowing ballerinas.
This Arduino sketch is a choreographed spectacle of illumination—left to right, right to left, with a dramatic blackout between each move. 
It’s less a circuit and more a performance, and you’re the director holding the baton (or, well, the USB cable). Prepare for a show that’s equal parts mesmerizing and “why didn’t I think of that?”

What’s This Light Show About?
This code transforms your Arduino into a maestro of 12 LEDs, wired to pins 2 through 13. With a flick of its digital wrist, it lights them up one by one—first sweeping left to right,
then reversing right to left—each bulb basking in its solo moment for a glorious second before the stage goes dark.
It’s the kind of thing that’d make Edison jealous and your cat mildly confused.

The Ensemble
LEDs (Pins 2-13): Twelve twinkling stars, each waiting for their cue to shine.
Arduino: The stage manager, keeping this light parade on tempo.
The Code: A Choreography in C++

void setup() {
  for(int i = 2; i < 14; i++) { // Choose pins 2-13
    pinMode(i, OUTPUT);         // Setup pins as output 
  }
}

void allLEDsOff(void) {
  for(int i = 2; i < 14; i++) { // Choose pins 2-13
    digitalWrite(i, LOW);       // Turn off all LEDs at once
  }
} // Function to plunge the stage into darkness

void loop() {
  for(int i = 2; i < 14; i++) { // Left to right, one by one
    allLEDsOff();
    digitalWrite(i, HIGH);
    delay(1000);
  }

  for(int i = 14; i > 2; i--) { // Right to left, with flair
    allLEDsOff();
    digitalWrite(i, HIGH);
    delay(1000);
  }
}

Getting Started: Cue the Lights!
Prerequisites
An Arduino (Uno, Mega, or whatever’s not lost under your couch)
12 LEDs (the more colorful, the merrier)
12 resistors (220Ω or so, to keep your LEDs from an early retirement)
A breadboard and jumper wires (because soldering is for the overcommitted)
The Arduino IDE (because telekinesis isn’t an upload option yet)
A flair for the dramatic (highly recommended)
Hardware Setup
Wire an LED to each pin from 2 to 13, anode to pin, cathode through a resistor to ground. (Yes, all 12—count ‘em!)
Plug your Arduino into power and cross your fingers you didn’t mix up the polarity.
Dim the room lights for maximum effect—optional, but classy.
Installation
Clone this repo like it’s the last ticket to the LED ballet:

git clone https://github.com/trish004/arduino.git
Open the .ino file in the Arduino IDE.
Upload it to your board faster than an LED can say “curtain up!”
Usage: Direct Your Own Light Opera
Power it on and watch the LEDs sashay left, then cha-cha right, in a hypnotic loop.
Adjust the delay(1000) to speed up the tempo or slow it down for a more languid waltz.
Sit back and marvel as your friends assume you’re some kind of tech wizard—spoiler: you are.

Why This Exists
Because blinking one LED is for amateurs, and 12 dancing LEDs are for legends. Perfect for learning loops, showing off at a maker faire, or just proving to your roommate that your “hobby” isn’t pointless. Bonus: it doubles as a low-budget holiday decoration.

Contributing: Step Up to the Spotlight
Got a twist to make the LEDs twirl faster, blink in patterns, or sync to your favorite techno beat? Fork this repo, dazzle us with your brilliance, and send a pull request. Just don’t trip over the wires on your way to greatness.


Final Bow
This project is a testament to the magic of simple code and a handful of lights. 
So grab your Arduino, summon your inner choreographer, and let the LED Cha-Cha dazzle the world—one blink at a time. 

Happy tinkering, you luminous virtuoso!
