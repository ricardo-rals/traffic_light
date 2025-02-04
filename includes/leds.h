#ifndef LEDS_H
#define LEDS_H

#include "pico/stdlib.h"
#include "traffic_lights.h"

bool repeating_timer_callback(struct repeating_timer *t);

void timer_init(void);

#endif 