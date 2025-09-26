#include <stdlib.h>
#include <stdio.h>

int *SomaDasColunasVet (int Matriz[3][3], int N) {
    int *SomaColunas = (int *) malloc(N *sizeof(int));

    for (int i = 0; i < N; i++) {
        SomaColunas[i] = 0;
    }

    for (int i = 0; i < N; i++) {
         for (int z = 0; z < N; z++) {
            *(SomaColunas + i) += Matriz[z][i];
         }
    }
    return SomaColunas;
}

int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int z = 0; z < 3; z++) {
            matriz[i][z] = (i + 1) * (z + 1);
        }
    }

    int *vet = SomaDasColunasVet(matriz, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}


