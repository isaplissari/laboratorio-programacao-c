/*
- Permitir o cadastro de até 5 funcionários.
- Gravar as informações em um arquivo chamado funcionarios.txt.
- Ler o arquivo e apresentar os dados dos funcionários cadastrados.
- Permitir que novos registros sejam acrescentados sem apagar os anteriores.
*/

#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;


int main(void) {
    FILE *arquivo;
    Funcionario fnc[5];
    int qnt = 0;
    int c;

    printf("\nquantos funcionarios voce quer cadastrar? ");
    scanf("%d", &qnt);
    printf("\n");
    if (qnt > 5) {
        printf("erro! digite um número menor que 5: ");
        scanf("%d", &qnt);
        printf("\n");
    };

    for (int i = 0; i < qnt; i++) {
        printf("nome: "); scanf("%49s", fnc[i].nome);
        printf("salário: "); scanf("%f", &fnc[i].salario);
        printf("horas extras: "); scanf("%d", &fnc[i].horasExtras);
        printf("\n");
    }

    arquivo = fopen("funcionarios2.txt", "a");

    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "FUNCIONARIOS CADASTRADOS: ");
    fprintf(arquivo, "\n");

    for (int i = 0; i < qnt; i++) {
        fprintf(arquivo, "nome: %s\n", fnc[i].nome);
        fprintf(arquivo, "salario: %.2f\n", fnc[i].salario);
        fprintf(arquivo, "horas extras: %d\n", fnc[i].horasExtras);
        fprintf(arquivo, "\n");
    }
    fprintf(arquivo, "\n");
    fclose(arquivo);

    arquivo = fopen("funcionarios2.txt", "r");

    c = fgetc(arquivo);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(arquivo);
    }
    
    fclose(arquivo);
    return 0;

}