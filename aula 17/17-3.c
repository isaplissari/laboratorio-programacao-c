#include <stdio.h>
#include <string.h>

int main(void) {
    
    char nome[50];
    char codCurso[50];
    char estudante[50];
    char greeting[] = "Olá, ";
    
    
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    
    printf("Código do curso: ");
    scanf("%49s", codCurso);
    
    printf("\n");
    
    printf("Estudante\n", nome);
    
    if (strcmp(codCurso, "CC") == 0) {
        printf("Curso: Ciências da Computação\n");
    } else if (strcmp(codCurso, "SI") == 0) {
        printf("Curso: Sistemas de Informação\n");
    }
    
    printf("Caracteres no nome: %zu\n", strlen(nome));
    
    printf("\n");
    
    strcpy(estudante, nome);
    
    strcat(greeting, estudante);
    printf("%s!", greeting);
    
    return 0;
}