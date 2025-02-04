#include <stdio.h>
#include "pico/stdlib.h"
#include "./includes/traffic_lights.h"
#include "./includes/leds.h"

int main() {
    // Inicializa a stdio para usar a porta serial
    stdio_init_all();

    // Inicializa o semáforo
    traffic_light_init();

    // Inicializa o temporizador
    timer_init();

    // Loop principal
    while (true) {
        // Imprime o estado atual do semáforo a cada segundo
        printf("Estado atual do semáforo: %s\n", traffic_light_get_state_name());
        sleep_ms(1000);
    }

    return 0;
}