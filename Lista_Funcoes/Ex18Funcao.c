//pega um vetor e por meio de uma funcao recursiva imprime o menor digito

#include <stdio.h>

int menorvetor(int vet[], int i, int menor) {
    if (i == 10) {
        return menor;
    }
    if (vet[i] < menor) {
        menor = vet[i];
    }
    return menorvetor(vet, i + 1, menor);
}

int main() {
    int vet[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    int menor = menorvetor(vet, 0, vet[0]);
    printf("%d", menor);
    
    return 0;
}
