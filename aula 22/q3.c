// variavel = 15
// utilizar ponteiro que altera o valor pra 50
// apresentar valor antes e depois da alteracao

#include <stdio.h>

int main(void) {
    int valor = 15;
    int *ponteiro;

    ponteiro = &valor;

    printf("valor inicial: %d\n", *ponteiro);

    *ponteiro = 50;

    printf("valor depois da alteracao: %d\n", *ponteiro);
}