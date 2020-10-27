# USEV-Microcontrollers-Workshop
Repository containing files and links associated with the USEV microcontrollers workshop

Following the session on Wednesday 28<sup>th</sup> the recordings of the three sessions will be uploaded to USEV's YouTube channel. Links will be posted below when the videos are up!

## Presentation
[Presentation Slides]() (awaiting upload)

## Coding Demo
This is a link to the coding demo I went through during the Wednesday session. 
The demo was performed using an NUCLEO-L432KC connected to a VL53L1X time of flight sensor, however, this should work with any Arduino device, with only minimal modifications required in some cases.

[Time of Flight Sensor Demo Code](../main/Arduino_Workshop_Demo_REF.ino)

## Getting Started with Arduino for STM32
This document walks you through getting the board support packages installed for using STM32 in the Arduino IDE and getting a blink sketch running.

[Getting Started Guide](../main/Getting%20Started%20with%20Arduino%20on%20STM32.pdf)

## Getting Started with Arduino for TinkerCAD
This document guides you through getting a blink sketch running in Autodesk TinkerCAD.

[Getting Started Guide](../main/Getting%20Started%20with%20Arduino%20on%20TinkerCAD.pdf)

## Supported Tutorials
This time will give you the oppertunity to try out coding for Arduino either using your own board, or through an online simulator. Myself, Ross McTeir and James Macleod will be available during the Wednesday session to help. 

We've selected a range of tutorials that you might like to try and sorted them into three levels: Beginner, Intermediate and Advanced.

### Beginner
GPIO
ADC
Serial Monitor

### Intermediate
PWM

### Advanced
**Underneath Arduino Functions**
The following are links to the source code for many of the common Arduino functions including `digitalWrite()` and `analogRead()`. This will help show you why Arduino functions are not ideal for timing critical tasks. Note, these examples are for the AVR microcontrollers on boards such as the Arduino Uno.
- [Digital I/O](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/wiring_digital.c)
- [Analog Input](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/wiring_analog.c)
- [Serial Console](https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/HardwareSerial.cpp)
