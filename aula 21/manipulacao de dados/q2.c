/*
- Solicite ao usuário 5 números inteiros.
- Grave os números em um arquivo chamado numeros.txt, armazenando um número por linha.
- Após a gravação, leia o arquivo e apresente os números armazenados na tela.
*/

#include <stdio.h>

int main(void) {
    FILE *arquivo;
    int c;

    int nmrs[5];

    printf("digite 5 numeros inteiros\n"); printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &nmrs[i]);
    }

    arquivo = fopen("numeros.txt", "a");

    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "NUMEROS ARMAZENADOS: \n");
    fprintf(arquivo, "\n");

    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d: %d\n", i + 1, nmrs[i]);
    }
    fprintf(arquivo, "\n");
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    c = fgetc(arquivo);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(arquivo);
    }

    fclose(arquivo);
    return 0;
}