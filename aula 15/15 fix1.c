#include <stdio.h> 

int main (void) {
    
    int matriz[2][3] = {
        {3, 2, 1},
        {6, 5, 4}
    };
    
    intsoma = 0;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    
    printf("a soma total dos elementos é: %d", soma);
    return 0;
}