#include <stdio.h> 

int main (void) {
    
    // Criar uma matriz 3×3 e contar quantos valores são pares.
    
    int matriz[3][3] = {
        {6, 9, 2},
        {9, 10, 8},
        {8, 9, 1}
    };
    
    int somaPares = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                somaPares++;
            }
        }
    }
    
    printf("quantidade de valores pares: %d", somaPares);
    return 0;
}