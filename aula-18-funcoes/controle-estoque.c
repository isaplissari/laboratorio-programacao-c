#include <stdio.h>

int qntInicial;
// int qntFinal;
int dobro(int qntInicial);

int main() {
    printf("\n");
    printf("quantidade inicial: "); scanf("%d", &qntInicial);

    dobro(qntInicial);

    return 0;
}

int dobro(int qntInicial) {
    printf("\n");
    printf("quantidade após duplicação: %d\n", 2 * qntInicial);
}