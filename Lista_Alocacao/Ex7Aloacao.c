#include <stdlib.h>
#include <stdio.h>

int *RetornaVetorPreenchido(int N, int Numero) {
    if (N <= 0) {
        int * Vetor;
        return Vetor;
    }
    int *Vetor = (int*) malloc (N *sizeof(int));

    for (int i = 0; i < N; i++) {
        *(Vetor + i) = Numero;
    }
    return Vetor;
}