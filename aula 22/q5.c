#include <stdio.h>

int main(void) {
    int numeros[5] = {127, 6, 38, 90, 1};
    int *ponteiro = &numeros;

    for (int i = 0; i < 5; i++) {
        printf("%dº numero: %d\n", i + 1, *(ponteiro + i));
    }
}