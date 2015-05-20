[arduino-tsic][1]
============
This is a fork of this library:
https://github.com/Schm1tz1/arduino-tsic

This project is a library for TSIC digital temperature sensors (type 206/306/506 and similar). 
This library was only tested with the TSIC 506 sensors - however, it should also work with the 206/306 sensors.
This library was tested with an Arduino Uno and Nano.
This library needs the Tsic sensors permanently powered with 5 volts, the supply pin isn't switched on and off.

Modifications done in this fork compared to the original version:
- increased stability of read function
- removed supply pin, the sensor must be powered permanently by 5V
- removed some #defines
- added a temperature conversion function for the Tsic 506
- getTemperture returns error codes (for debugging)

For more information see original version.

Installing the library
======================
For installation just download the contents of this repository into TSIC-folder inside your arduino/libraries and restart your Arduino-IDE.
For more information check the example.

Connecting your sensor
=====================
This part is pretty easy. 
The TSIC-Sensor needs 3 pins to be connected - Vcc, GND and Signal as shown in the datasheet.
No pull-up resistors or additional components are needed, so this can be done in a plug-and-play-style, for example plugging the TO-92-Sensor to GND/D3/+5V of an Arduino UNO.
Connect your sensor and configure the corresponding pin in the TSIC-constructor as shown in the example.

[1]: https://github.com/Schm1tz1/arduino-tsic
[2]: http://playground.arduino.cc/Code/Tsic
[3]: http://playground.arduino.cc/uploads/Code/TSIC_Datasheet.zip
