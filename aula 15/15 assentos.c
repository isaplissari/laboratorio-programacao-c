#include <stdio.h>

int main(void) {
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    
int totalD = 0;
int totalO = 0;
    
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 4; j++) {
            if (assentos[i][j] == 0) {
                totalD += assentos[i][j] + 1;
            }
            else if (assentos[i][j] == 1) {
                totalO += assentos[i][j];
            }
        }
    }
    
    printf("quantidade de assentos ocupados: %d\n", totalO);
    printf("quantidade de assentos disponiveis: %d", totalD);
}