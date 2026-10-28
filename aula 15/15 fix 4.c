#include <stdio.h> 

int main (void) {
    
    // Criar uma matriz 3×3 e identificar o maior valor armazenado.
    
    int matriz[3][3] = {
        {6, 42, 2},
        {9, 10, 8},
        {8, 9, 1}
    };
    
    int maior = matriz[0][0];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    printf("o maior valor armazenado é: %d\n", maior);
    return 0;
}