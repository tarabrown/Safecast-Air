#ifndef OPENLOG_PARAM_H
#define OPENLOG_PARAM_H
#include <Arduino.h>

struct OpenlogParam
{
   unsigned long baudRate;
   unsigned long timeout;
   HardwareSerial *serialPtr;
};


#endif


