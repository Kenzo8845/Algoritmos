/*6) Crie um programa que contenha um array de inteiros com cinco
elementos. Utilizando apenas aritmética de ponteiros, leia esse array do
teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        scanf("%d", vetor + i);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(vetor + i));
    }
    return 0;
}