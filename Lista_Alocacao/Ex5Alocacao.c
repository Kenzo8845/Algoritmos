#include <stdlib.h>
#include <stdio.h>

int *RetornaVetor(int N) {
    if (N <= 0) {
        int * Vetor;
        return Vetor;
    }
    int *Vetor = (int*) malloc (N *sizeof(int));
    return Vetor;
}

int main() {
    int N;
    printf("digite um tamanho para seu vetor:");
    scanf("%d", &N);
    int* Vetor = RetornaVetor(N);
}