Numlen
==========

Arduino library that returns the number of characters required to display a number in base 10. This is useful for converting numbers to text. It works for signed or unsigned byte, int and long.

#### Installation
- Download the most recent version of Numlen: https://github.com/per1234/Numlen/archive/master.zip
- Extract the Numlen-master folder from the downloaded zip file.
- Rename the folder Numlen.
- Move the folder to your arduino sketchbook\libraries folder.
- Restart the Arduino IDE if it is open.
- See the included NumlenExample.ino for demonstration of usage.

#### Usage
`Numlen.numlen(number)` - Determine the length of a number.
- Parameter: number - The number that you want to determine the length of.
  - Type: signed or unsigned byte/int/long
- Returns: none
  - Type: byte

