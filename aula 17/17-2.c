#include <stdio.h>
#include <string.h>

int main(void) {
    
    // solicitar nome do produto
    // solicitar categoria
    // quantidade de caracteres do nome
    // identificar a categoria do produto
    // copiar o nome do produto pra outra variavel
    // gerar descricao Produto: nome
    // exibir resumo de cadastro
    
    char nome[50];
    char categoria[50];
    char produto[50];
    char desc[] = "Produto: ";
    
    printf("Nome do produto: ");
    scanf("%49s", nome);
    
    printf("Categoria: ");
    scanf("%49s", categoria);
    
    printf("\n");
    
    strcpy(produto, nome);
    printf("Produto: %s\n", produto);
    
    printf("Caracteres: %zu\n", strlen(nome));
    
    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periférico\n");
    }
    
    printf("\n");
    
    strcat(desc, produto);
    printf("Descrição: %s\n", desc);
    
    printf("Cadastro concluído!");
    
    return 0;
    
}