// declarar uma variavel inteira
// solicitar um numero ao usuario
// apresentar o valor E o endereço de memoria

#include <stdio.h>

int main(void) {
    int numero;
    int *ponteiro;

    ponteiro = &numero;

    printf("digite um numero: "); scanf("%d", &numero);
    printf("\n");
    printf("valor da variavel: : %d\n", numero);
    printf("endereco: %p\n", (void *)&numero);
}