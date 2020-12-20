#ifndef _UPTIME_H
#define _UPTIME_H
#endif

#include "Arduino.h"
#if defined(ESP8266)
static uint32_t _uptime_last_value = 0;
static uint32_t _uptime_rollovers = 0;
#endif
uint64_t millis64();
