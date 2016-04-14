Numlen
==========

[Arduino](http://arduino.cc) library that returns the number of characters required to display a number in base 10. This is useful for converting numbers to text. It works for signed or unsigned byte, int and long.

#### Installation
- Download the most recent version of Numlen: https://github.com/per1234/Numlen/archive/master.zip
- Using Arduino IDE 1.0.x:
  - **Sketch > Import Library... > Add Library... >** select the downloaded file **> Open**
- Using Arduino IDE 1.5+:
  - **Sketch > Include Library > Add ZIP Library... >** select the downloaded file **> Open**


#### Usage
See **File > Examples > Numlen > NumlenExample** for demonstration of usage.

###### `Numlen.numlen(number)`
Determine the number of characters required to display a number in base 10.
- Parameter: **number** - The number that you want to determine the length of.
  - Type: signed or unsigned byte/int/long
- Returns: none
  - Type: byte

