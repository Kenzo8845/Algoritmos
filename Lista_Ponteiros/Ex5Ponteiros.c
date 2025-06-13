/*5) Crie um programa que contenha uma matriz de float com três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>

int main() {
    float matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int z = 0; z < 3; z++) {
            printf("%p\t", &matriz[i][z]);
        }
        printf("\n");
    }
}