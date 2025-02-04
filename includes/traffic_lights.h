#ifndef TRAFFIC_LIGHTS_H
#define TRAFFIC_LIGHTS_H
#include "pico/stdlib.h"

#define LED_RED 11
#define LED_YELLOW 12
#define LED_GREEN 13

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLightState;

void traffic_light_init(void);
void traffic_light_set_state(TrafficLightState state);
TrafficLightState traffic_light_get_state(void);
const char* traffic_light_get_state_name(void);


#endif