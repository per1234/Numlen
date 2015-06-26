// Returns the number of characters required to display a number in base 10. This is useful for converting numbers to text. It works for signed or unsigned byte, int and long. http://github.com/per1234/Numlen
#include "Arduino.h"
#include "Numlen.h"

byte NumlenClass::numlen(int8_t input) {
  byte isNegative = 0;
  if (input < 0) {
    isNegative = 1;
  }
  input = abs(input);
  if (input > 99) {
    return 3 + isNegative;
  }
  else if (input > 9) {
    return 2 + isNegative;
  }
  return 1 + isNegative;
}

byte NumlenClass::numlen(uint8_t input) {
  if (input > 99) {
    return 3;
  }
  else if (input > 9) {
    return 2;
  }
  return 1;
}

byte NumlenClass::numlen(int16_t input) {
  byte isNegative = 0;
  if (input < 0) {
    isNegative = 1;
  }
  input = abs(input);
  if (input > 9999) {
    return 5 + isNegative;
  }
  else if (input > 999) {
    return 4 + isNegative;
  }
  else if (input > 99) {
    return 3 + isNegative;
  }
  else if (input > 9) {
    return 2 + isNegative;
  }
  return 1 + isNegative;
}

byte NumlenClass::numlen(uint16_t input) {
  if (input > 9999) {
    return 5;
  }
  else if (input > 999) {
    return 4;
  }
  else if (input > 99) {
    return 3;
  }
  else if (input > 9) {
    return 2;
  }
  return 1;
}

byte NumlenClass::numlen(int32_t input) {
  byte isNegative = 0;
  if (input < 0) {
    isNegative = 1;
  }
  input = abs(input);
  if (input > 999999999) {
    return 10 + isNegative;
  }
  else if (input > 99999999) {
    return 9 + isNegative;
  }
  else if (input > 9999999) {
    return 8 + isNegative;
  }
  else if (input > 999999) {
    return 7 + isNegative;
  }
  else if (input > 99999) {
    return 6 + isNegative;
  }
  else if (input > 9999) {
    return 5 + isNegative;
  }
  else if (input > 999) {
    return 4 + isNegative;
  }
  else if (input > 99) {
    return 3 + isNegative;
  }
  else if (input > 9) {
    return 2 + isNegative;
  }
  return 1 + isNegative;
}

byte NumlenClass::numlen(uint32_t input) {
  if (input > 999999999) {
    return 10;
  }
  else if (input > 99999999) {
    return 9;
  }
  else if (input > 9999999) {
    return 8;
  }
  else if (input > 999999) {
    return 7;
  }
  else if (input > 99999) {
    return 6;
  }
  else if (input > 9999) {
    return 5;
  }
  else if (input > 999) {
    return 4;
  }
  else if (input > 99) {
    return 3;
  }
  else if (input > 9) {
    return 2;
  }
  return 1;
}

NumlenClass Numlen;

