#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main()
{
    stdio_init_all();

    // Initialize the CYW43 driver (needed to control the onboard LED)
    if (cyw43_arch_init())
    {
        printf("CYW43 init failed\n");
        return -1;
    }

    while (true)
    {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1); // LED on
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0); // LED off
        sleep_ms(500);
    }
}