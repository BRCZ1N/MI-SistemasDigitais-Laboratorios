#include <stdio.h>
#include <stdint.h>  // Para uint32_t

#define LEDR_BASE 0xFF200000
#define LEDR (*(volatile uint32_t *)LEDR_BASE)

#define SW_BASE 0xFF200040
#define SW (*(volatile uint32_t *)SW_BASE)

int buscaMaior(int v[], int tamanho) {
    int maior = v[0];
    int pos = 0;

    for (int i = 1; i < tamanho; i++) {
        if (v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }

    return pos;
}

void delay(int count) {
    volatile int i;
    for (i = 0; i < count; i++);
}


int main() {
    int numeros[] = {4, 5, 3, 6, 1, 8, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int pos = buscaMaior(numeros, tamanho);

    while (1) {

        static int chaveSW = 0;

        if (chaveSW) {
            LEDR = (1 << pos);
        } else {
            LEDR = 0;
        }

        delay(500000);


        chaveSW = !chaveSW;
    }

    return 0;
}
