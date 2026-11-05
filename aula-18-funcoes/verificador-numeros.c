#include <stdio.h>

int numero;
int verificarPar(int numero);

int main(void) {
    
    printf("\n");
    printf("digite um numero: "); scanf("%d", &numero);
    printf("\n");

    verificarPar(numero);

    return 0;
}

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        printf("o número %d é par.", numero);
        return 1;
    } else {
        printf("o número %d é ímpar.", numero);
        return 0;
    }
}