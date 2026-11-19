// criar funcao chamada dobrar()
// que recebe e altera o seu valor para o dobro
// chamar a funcao e soliciar numero pro usuario e mostra o resultado

#include <stdio.h>


int dobro(int end) {
    return end * 2;
}

int main(void) {
    int numero;
    int *ponteiro;

    ponteiro = &numero;

    printf("escolha um numero pra dobrar: "); scanf("%d", &numero);
    printf("dobrado: %d\n", dobro(*ponteiro));
}