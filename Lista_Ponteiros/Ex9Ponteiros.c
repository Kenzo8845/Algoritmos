/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void printavet(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", *(vet + i));
    }
}

int main() {
    int *vet = (int *) malloc(10 * sizeof(int));
    
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        *(vet + i) = rand() % 101;
    }

    printavet(vet, 10);

}