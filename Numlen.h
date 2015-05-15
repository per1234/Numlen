#ifndef Numlen_h
#define Numlen_h
#include "Arduino.h"

class NumlenClass {
  public:
    byte numlen(int8_t numlenInput);
    byte numlen(uint8_t numlenInput);
    byte numlen(int16_t numlenInput);
    byte numlen(uint16_t numlenInput);
    byte numlen(int32_t numlenInput);
    byte numlen(uint32_t numlenInput);
  private:
};
extern NumlenClass Numlen;
#endif
