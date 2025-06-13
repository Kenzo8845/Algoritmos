/*11) Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os
endereços de duas variáveis inteiras, digamos min e max, e deposite nessas
variáveis o valor de um elemento mínimo e o valor de um elemento máximo
do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mm(int v[], int tamanho, int *me, int *ma) {
    int menor = *v, maior = *v;
    *me = menor;
    *ma = maior;
    
    for (int i = 0; i < tamanho; i++) {
        if (*(v + i) < menor) {
            menor = *(v + i);
            *me = menor;
        }
        if (*(v + i) > maior) {
            maior = *(v + i);
            *ma = maior;
        }
    }
}

int main() {
    int *vet, *pmenor, *pmaior;
    int tamanho, menor, maior;

    pmenor = &menor;
    pmaior = &maior;

    printf("digite um tamanho para seu vetor:");
    scanf("%d", &tamanho);


    vet = (int *) malloc(tamanho * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        *(vet + i) = rand() % 101;
    }

    printf("vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", *(vet + i));
    }

    mm(vet, tamanho, pmenor, pmaior);

    printf("maior = %d\nmenor = %d", *pmaior, *pmenor);


}