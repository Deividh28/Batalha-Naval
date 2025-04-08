#include <stdio.h>
#define linha 10
#define coluna 10

// Função para imprimir o tabuleiro
void imprimir(int t[linha][coluna]) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tab[linha][coluna] = {0};
    printf("Tabuleiro: \n");

    // Navios retos (3 posições com valor 3)
    tab[1][1] = 3; tab[1][2] = 3; tab[1][3] = 3;  // horizontal
    tab[4][5] = 3; tab[5][5] = 3; tab[6][5] = 3;  // vertical

    // Navios diagonais
    tab[7][0] = 3; tab[8][1] = 3; tab[9][2] = 3;  // diagonal principal
    tab[7][9] = 3; tab[8][8] = 3; tab[9][7] = 3;  // diagonal secundária

    // Habilidade Cone (forma de triângulo)
    tab[2][5] = 5;
    tab[3][4] = 5; tab[3][5] = 5; tab[3][6] = 5;
    tab[4][3] = 5; tab[4][4] = 5; tab[4][5] = 5; tab[4][6] = 5; tab[4][7] = 5;

    // Habilidade Cruz
    tab[6][3] = 5; tab[7][3] = 5; tab[8][3] = 5;
    tab[7][2] = 5; tab[7][4] = 5;

    // Habilidade Octaedro (diamante)
    tab[1][7] = 5;
    tab[2][6] = 5; tab[2][8] = 5;
    tab[3][7] = 5;
    tab[2][7] = 5;

    imprimir(tab);
    return 0;
}

