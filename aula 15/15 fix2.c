#include <stdio.h> 

int main (void) {
    
    // Armazenar as notas de três alunos em duas provas e calcular a média de cada aluno.
    
    int boletim[3][2] = {
        {6, 9},
        {9, 10},
        {8, 9}
    };
    
    float media1 = 0;
    float media2 = 0;
    float media3 = 0;
    
    for (int j = 0; j < 2; j++) {
        media1 += boletim[0][j];
        media2 += boletim[1][j];
        media3 += boletim[2][j];
    }
    
    media1 = media1 / 2;
    media2 = media2 / 2;
    media3 = media3 / 2;
    printf("media do aluno 1: %.1f\n", media1);
    printf("media do aluno 2: %.1f\n", media2);
    printf("media do aluno 3: %.1f", media3);
}