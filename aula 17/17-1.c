#include <stdio.h>
#include <string.h>

int main(void) {
    
    char nome[50];
    char acesso[50];
    char recep[] = "Bem-vindo(a), ";
    
    
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    
    printf("Digite seu perfil: ");
    scanf("%49s", acesso);
    
    printf("\n");
    
    // exibir nome
    printf("Nome: %s\n", nome);
    
    // quantidade de caracteres no nome
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    
    // comparar perfil
    if (strcmp(acesso, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(acesso, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    }
    
    // pular linha
    printf("\n");
    
    // mensagem de boas vindas
    strcat(recep, nome);
    printf("%s!\n", recep);
    
    // mensagem final
    printf("Cadastro realizado com sucesso.");
}