#include "pico/stdlib.h"

#define LED_PIN 15

int main()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true)
    {
        gpio_put(LED_PIN, 1); // LED on
        sleep_ms(500);
        gpio_put(LED_PIN, 0); // LED off
        sleep_ms(500);
    }
}