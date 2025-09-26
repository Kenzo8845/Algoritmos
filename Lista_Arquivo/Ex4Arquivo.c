/*Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os
dois primeiros números são as dimensões da matriz (linhas e colunas),
enquanto o restante dos números são os valores de cada elemento da
matriz. Escreva uma função que receba o nome do arquivo e retorne o
ponteiro para uma matriz alocada dinamicamente contendo os valores lidos
do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int **FileMatriz(char nome[], int *linha, int *coluna) {
    int numero;
    FILE *matriztxt = fopen(nome, "r");

    fscanf(matriztxt, "%d %d", linha, coluna);
    int **matriz;

    matriz = (int **) malloc(*linha * sizeof(int *));

    for (int i = 0; i < *linha; i++) {
        matriz[i] = (int *) malloc(*coluna * sizeof(int));
    } 

    for (int i = 0; i < *linha; i++) {
        for (int j = 0; j < *coluna; j++) {
            fscanf(matriztxt, "%d", &numero);
            matriz[i][j] = numero;
        }
    }
    return matriz;
}

int main() {
    int linha, coluna;
    
    printf("digite o nome de seu arquivo:");

    char Arquivo[50];
    fgets(Arquivo, sizeof(Arquivo), stdin);
    
    for (int i = 0; Arquivo[i] != '\0'; i++) {
        if (Arquivo[i] == '\n') {
        Arquivo[i] = '\0';
        break;            
        }
    }   

    int **matriz = FileMatriz(Arquivo, &linha, &coluna);

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}