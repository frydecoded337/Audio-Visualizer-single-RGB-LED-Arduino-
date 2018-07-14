# Audio-Visualizer-single-RGB-LED-Arduino-
I made this Arduino program which takes voltages corresponding to frequencies as input and outputs a different color through one RGB LED.
The LED I've used is of the type common anode so the analogWrite() values are different from a common anode type LED (255 - *common cathode value* = *common anode value*).
I've used an Arduino Uno here.

## Hardware 
LM741 Opmap to first amplify the audio signal.

A frequency to voltage converter circuit. Link :http://mathscinotes.com/2014/03/a-simple-frequency-to-voltage-converter/

Arduino to control colors.
