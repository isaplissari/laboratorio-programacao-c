#include <stdio.h>

int main() {
    
    char palavra[100];
    int contador = 0;
    
    printf("digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    for (int i=0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("o numero de caracteres: %d", contador - 1); // para strings menores que o tamanho do char
        

}