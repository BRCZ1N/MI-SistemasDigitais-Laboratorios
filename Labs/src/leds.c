#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define LEDR_BASE 0xFF200000
#define LEDR (*(volatile uint32_t *)LEDR_BASE)

void delay(int count) {
    volatile int i;
    for (i = 0; i < count; i++);
}

int main(void) {
    int led_position = 0;
    bool direction = true;

    while (1) {
        LEDR = (1 << led_position);

        delay(500000);

        if (direction) {
            led_position++;
            if (led_position == 9) {
                direction = false;
            }
        } else {
            led_position--;
            if (led_position == 0) {
                direction = true;
            }
        }
    }

    return 0;
}
