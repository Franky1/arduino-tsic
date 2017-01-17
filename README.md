[arduino-tsic][1]
============
This is a fork of this library:
https://github.com/Schm1tz1/arduino-tsic

This project is a library for TSIC digital temperature sensors (type 206/306/506 and similar). <br>
This library was only tested with the TSIC 506 sensors! <br>
However, it should also work with the 206/306 sensors. <br>
This library was tested with an Arduino Uno and Nano. <br>
This library needs the Tsic sensors permanently powered with 5 volts, the supply pin isn't switched on and off. <br>
I compared my library version (permanently powered) with the original version (temporarily powered) and ran both versions for several hours parallel on two arduino boards with three Tsic506 connected to each board. All sensors were taped together with an calibrated temperature sensor. I could not observe any deviations between both versions in the temperature results, there was no "self-heating" in my version.

Modifications done in this fork compared to the original version:
- increased stability of read function
- removed supply pin, the sensor must be powered permanently by 5V
- removed some #defines
- added a temperature conversion function for the Tsic 506
- getTemperture returns error codes (for debugging)

For more information see original version.

Remark
======
_**17.01.2017 <br>
Since i don't maintain this repo anymore and the original repo from Schm1tz1 added some of my modifications, i recommend to use the original repo from Schm1tz1. <br>
He added the TSIC506 sensor and made some improvements, therefore use his repo!**_

Installing the library
======================
For installation just download the contents of this repository into TSIC-folder inside your arduino/libraries and restart your Arduino-IDE. <br>
For more information check the example.

Connecting your sensor
=====================
This part is pretty easy. <br>
The TSIC-Sensor needs 3 pins to be connected - Vcc, GND and Signal as shown in the datasheet.
No pull-up resistors or additional components are needed, so this can be done in a plug-and-play-style, for example plugging the TO-92-Sensor to GND/D3/+5V of an Arduino UNO.
Connect your sensor and configure the corresponding pin in the TSIC-constructor as shown in the example.

[1]: https://github.com/Schm1tz1/arduino-tsic
[2]: http://playground.arduino.cc/Code/Tsic
[3]: http://playground.arduino.cc/uploads/Code/TSIC_Datasheet.zip
