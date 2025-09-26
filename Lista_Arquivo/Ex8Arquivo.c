#include <stdio.h>

void salvarMatriz(int lin, int col, int matriz[lin][col]) {
    FILE *arquivo = fopen("matriz.txt", "w");
    
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            fprintf(arquivo, "%d\t", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}

int main() {
    int lin, col;

    printf("digite o número de linhas da sua matriz: \n");
    scanf("%d", &lin);
    printf("digite o número de colunas da sua matriz: \n");
    scanf("%d", &col);

    int mat[lin][col];

    printf("digite os números de sua matriz: \n");

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    salvarMatriz(lin, col, mat);

    return 0;
}