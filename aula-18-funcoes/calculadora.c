/*
1. Criar uma função exibirMenu() para apresentar as operações. ✅
2. Criar as funções somar(), subtrair(), multiplicar() e dividir(). ✅
3. Cada função matemática deverá receber dois números e retornar o resultado. ✅
4. Utilizar switch para selecionar a operação. ✅
5. Impedir a divisão por zero. ✅
6. Permitir novas operações até que o usuário escolha sair. ✅
*/

#include <stdio.h>

void exibirMenu(void);
void escolhaNumero(double * n1, double * n2);
double somar(double n1, double n2);
double subtrair(double n1, double n2);
double multiplicar(double n1, double n2);
double dividir(double n1, double n2);


int main() {

    int rodando = 1;
    int operacao;
    double n1, n2;

    do {

    exibirMenu();
    printf("escolha uma opcao: ");
    scanf("%d", &operacao);
    printf("\n");

    printf("\n");
    // escolhaNumero(&n1, &n2);
    // printf("\n");

    if (operacao == 0) {
        printf("Você encerrou a calculadora!\n");
        break;
    }

    if (operacao > 0 && operacao <= 4) {

    escolhaNumero(&n1, &n2);
    printf("\n");

    
        switch (operacao) {
        case 1:
            printf("Resultado: %.2f\n", somar(n1, n2)); printf("\n");
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(n1, n2)); printf("\n");
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(n1, n2)); printf("\n");
            break;
        case 4:
            if (n2 == 0) {
                double n3;
                printf("Erro: divisao por zero!\n"); printf("\n");
                printf("escolha outro número: "); scanf("%lf", &n3); printf("\n");
                printf("Resultado: %.2f\n", dividir(n1, n3));
                printf("\n");
            } else {
                printf("Resultado: %.2f\n", dividir(n1, n2));
            }
            break;
        case 0: 
            rodando = 0;
            break;
        }

    } else if (operacao != 0) {
        printf("operacao invalida\n"); printf("\n");
    } 
    
    } while (operacao != 0);

    return 0;
}


void exibirMenu() {
    printf("==CALCULADORA==");
    printf("\n");
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - multiplicar\n");
    printf("4 - dividir\n");
    printf("0 - sair\n");
    printf("\n");
}


void escolhaNumero(double *n1, double *n2) {
    printf("Primeiro numero: ");
    scanf("%lf", n1);

    printf("Segundo numero: ");
    scanf("%lf", n2);
}

double somar(double n1, double n2) {
    return n1 + n2;
}

double subtrair(double n1, double n2) {
    return n1 - n2;
}

double multiplicar(double n1, double n2) {
    return n1 * n2;
}

double dividir(double n1, double n2) {
    return n1 / n2;
}
