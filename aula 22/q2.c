// variavel com valor inicial igual a 20
// ponteiro que armazena o endereco
// apresentar valor da variavel, o endereco e o valor acessado pelo ponteiro

#include <stdio.h>

int main(void) {
    int valor = 20;
    int *ponteiro; 

    ponteiro = &valor;

    printf("valor da variavel: %d\n", valor);
    printf("endereco acessado pelo ponteiro: %p\n", (void *)ponteiro);
    printf("valor acessado pelo ponteiro: %d\n", *ponteiro);
}