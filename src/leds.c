#include "hardware/timer.h"
#include "../includes/traffic_lights.h"

bool repeating_timer_callback(struct repeating_timer *t) {
    TrafficLightState currentState = traffic_light_get_state();

    switch (currentState) {
        case RED:
            traffic_light_set_state(YELLOW);
            break;
        case YELLOW:
            traffic_light_set_state(GREEN);
            break;
        case GREEN:
            traffic_light_set_state(RED);
            break;
    }

    return true;
}

void timer_init(void) {
    static struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);
}