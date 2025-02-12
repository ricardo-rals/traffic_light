
# Traffic Light Simulation on BitDogLab RP2040

This project simulates a traffic light system using the BitDogLab board with the RP2040 microcontroller. It controls three LEDs to represent a traffic light (red, yellow, and green) and uses a timer to cycle through the states automatically. Additionally, it prints the current traffic light state to the serial output every second.

## Features
- The traffic light starts in the RED state.
- The state transitions follow the order: RED -> YELLOW -> GREEN -> RED.
- A timer is set for 3 seconds to change the state of the traffic light.
- The `repeating_timer_callback()` function handles the LED state transitions.
- The main loop prints the current traffic light state to the serial output every second.
- The BitDogLab educational tool is used to experiment with the code using the RGB LED (GPIOs 11, 12, and 13).

## Hardware Requirements
- BitDogLab development board (RP2040-based)
- Three individual LEDs (RED, YELLOW, GREEN) connected to appropriate GPIO pins
- RGB LED connected to GPIOs 11, 12, and 13

## Software Requirements
- Raspberry Pi Pico SDK
- CMake
- GCC ARM Toolchain
- Visual Studio Code (optional, for development)

## Code Structure
```
project_root/
├── src/
│   ├── leds.c
│   ├── traffic_lights.c
│
├── includes/
│   ├── leds.h
│   ├── traffic_lights.h
├── traffic_light.c
└── CMakeLists.txt
```

## Setup and Simulation in Wokwi or Visual Studio Code
### Wokwi
1. Open [Wokwi](https://wokwi.com/) in your browser.
2. Create a new RP2040 project.
3. Upload the source files (`main.c`, `leds.c`, `traffic_lights.c`, and headers) to the Wokwi environment.
4. Configure the circuit with three LEDs connected to appropriate GPIO pins.
5. Use the built-in serial monitor to observe the traffic light state changes.
6. Click "Start Simulation" to run the experiment.

### Visual Studio Code
1. Install the necessary extensions for Pico development.
2. Clone this repository and open it in VS Code.
3. Configure and build the project using CMake and the GCC ARM Toolchain.
4. Flash the compiled binary onto the RP2040 board.
5. Use a serial monitor in VS Code to observe the traffic light state changes.

## Running the Experiment
- Power up the BitDogLab board.
- Observe the LED transitions every 3 seconds.
- Monitor the serial output to view the traffic light state changes.
- Use the RGB LED connected to GPIOs 11, 12, and 13 to experiment with additional visual effects.


