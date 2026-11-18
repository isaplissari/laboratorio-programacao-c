/*
- Permita cadastrar até 5 funcionários, solicitando o nome e a matrícula de cada um.
- Armazene os dados dos funcionários em um arquivo de texto chamado funcionarios.txt.
- Apresente uma mensagem confirmando que os dados foram gravados com sucesso.
*/

#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
} funcionario;


int main(void) {
    FILE *arquivo;   
    funcionario fnc[5]; 
    
    int qntFuncionarios = 0;
    printf("quantidade de cadastros: ");
    scanf("%d", &qntFuncionarios);
    printf("\n");

    if (qntFuncionarios > 5) {
        printf("quantidade inválida! digite um número menor que 5: ");
        printf("\n");
        scanf("%d", &qntFuncionarios);
    }

    for (int i = 0; i < qntFuncionarios; i++) {
        printf("nome: "); scanf("%49s[^\n]", &fnc[i].nome);
        printf("matricula: "); scanf("%d", &fnc[i].matricula);
        printf("\n");
    }

    arquivo = fopen("funcionarios.txt", "a");

    fprintf(arquivo, "\n=======================================\n");
    fprintf(arquivo, "       funcionarios cadastrados\n");
    fprintf(arquivo, "=======================================\n");

    for (int i = 0; i < qntFuncionarios; i++) {
        fprintf(arquivo, "\nfuncionario: %s\n", fnc[i].nome);
        fprintf(arquivo, "matricula: %d", fnc[i].matricula);
        fprintf(arquivo, "\n");
    }

    fprintf(arquivo, "\ndados gravados com sucesso!");

    return 0;
}