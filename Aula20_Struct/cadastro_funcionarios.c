#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1, funcionario2;

    printf("Funcionario 1\n");
    printf("nome: "); scanf("%49s[^\n]", funcionario1.nome);
    printf("idade: "); scanf("%d", &funcionario1.idade);
    printf("salário: "); scanf("%f", &funcionario1.salario);
    printf("\n");

    printf("funcionario 2\n");
    printf("nome: "); scanf("%49s[^\n]", funcionario2.nome);
    printf("idade: "); scanf("%d", &funcionario2.idade);
    printf("salário: "); scanf("%f", &funcionario2.salario);
    printf("\n");

    if (funcionario1.salario > funcionario2.salario) {
        printf("o funcionário %s tem o maior salário\n", funcionario1.nome);
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("o funcionário %s tem o maior salário\n", funcionario2.nome);
    } else {
        printf("os dois funcionários recebem o mesmo salário\n");
    }
}
