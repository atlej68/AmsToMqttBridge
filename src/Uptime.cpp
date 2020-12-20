
#include "Uptime.h"
#if defined(ESP8266)
uint64_t millis64() {
    uint32_t new_low32 = millis();
    if (new_low32 < _uptime_last_value) _uptime_rollovers++;
    _uptime_last_value = new_low32;
    return (uint64_t) _uptime_rollovers << 32 | _uptime_last_value;
}
#elif defined(ESP32)
uint64_t millis64() {
    return (uint64_t) esp_timer_get_time()/1000.0;
}
#endif   



