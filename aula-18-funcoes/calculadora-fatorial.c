#include <stdio.h>

int n, i, fatorial;

int calcularFatorial(int n, int fatorial) {
    for (fatorial = 1; n > 1; n = n - 1) {
        fatorial = fatorial * n;
    }
    return fatorial;
}

int main() {

    printf("\n");
    printf("digite um numero: "); scanf("%d", &n);
    printf("\n");

    if (n <= 12 && n >= 0) {
        printf("fatorial de %d = %d\n", n, calcularFatorial(n, fatorial));
    } else {
        printf("números inválidos! rode de novo");
    }
}

