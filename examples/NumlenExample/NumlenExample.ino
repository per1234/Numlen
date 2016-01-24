//Demonstrates the use of the Numlen library to determine the number of characters required to display a number.
#include <Numlen.h>
const int8_t unsignedByteNumber = -15; //signed byte
const byte byteNumber = 0;
const int16_t intNumber = -20000;
const uint16_t unsignedIntNumber = 40000;
const long longNumber = -100000;
const unsigned long unsignedLongNumber = 200000;

void setup() {
  Serial.begin(9600);
  Serial.print(F("unsignedByteNumber: "));
  Serial.println(unsignedByteNumber);
  Serial.print(F("length of unsignedByteNumber: "));
  Serial.println(Numlen.numlen(unsignedByteNumber));
  Serial.print(F("byteNumber: "));
  Serial.println(byteNumber);
  Serial.print(F("length of byteNumber: "));
  Serial.println(Numlen.numlen(byteNumber));
  Serial.print(F("intNumber: "));
  Serial.println(intNumber);
  Serial.print(F("length of intNumber: "));
  Serial.println(Numlen.numlen(intNumber));
  Serial.print(F("unsignedIntNumber: "));
  Serial.println(unsignedIntNumber);
  Serial.print(F("length of unsignedIntNumber: "));
  Serial.println(Numlen.numlen(unsignedIntNumber));
  Serial.print(F("longNumber: "));
  Serial.println(longNumber);
  Serial.print(F("length of longNumber: "));
  Serial.println(Numlen.numlen(longNumber));
  Serial.print(F("unsignedLongNumber: "));
  Serial.println(unsignedLongNumber);
  Serial.print(F("length of unsignedLongNumber: "));
  Serial.println(Numlen.numlen(unsignedLongNumber));
}

void loop() {
}


