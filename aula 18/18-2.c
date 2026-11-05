#include <stdio.h>

void maiorPreco(float preco1, float preco2);

int main(void) {
 
    float preco1, preco2;

    printf("\n");

    printf("preço 1: "); scanf("%f", &preco1);
    printf("preço 2: "); scanf("%f", &preco2);

    printf("\n");

    maiorPreco(preco1, preco2);

    return 0;
}

void maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        printf("maior preço: R$ %.2f\n", preco1);
    } else if (preco2 > preco1) {
        printf("maior preço: R$ %.2f\n", preco2);
    } else {
        printf("os preços são iguais\n");
    }
}