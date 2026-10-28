#include <stdio.h> 

int main (void) {
    
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int total = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            total += matriz[i][j];
        }
    }
    
    printf("a soma total de elementos da matriz é: %d", total);
    return 0;
}