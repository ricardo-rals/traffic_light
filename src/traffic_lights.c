#include "../includes/traffic_lights.h"

static TrafficLightState currentState = RED;


void traffic_light_init(void) {
    gpio_init(LED_RED);
    gpio_init(LED_YELLOW);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_set_dir(LED_YELLOW, GPIO_OUT);
    gpio_set_dir(LED_GREEN, GPIO_OUT);

    traffic_light_set_state(RED);
}

void traffic_light_set_state(TrafficLightState state) {
    gpio_put(LED_RED, 0);
    gpio_put(LED_YELLOW, 0);
    gpio_put(LED_GREEN, 0);

    switch (state) {
        case RED:
            gpio_put(LED_RED, 1);
            break;
        case YELLOW:
            gpio_put(LED_YELLOW, 1);
            break;
        case GREEN:
            gpio_put(LED_GREEN, 1);
            break;
    }

    currentState = state;
}

TrafficLightState traffic_light_get_state(void) {
    return currentState;
}