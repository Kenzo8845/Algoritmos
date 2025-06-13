/*7) Elabore uma função que receba duas strings como parâmetros e verifique
se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros
para acessar os caracteres das strings.*/

#include <stdio.h>

void completarVetor(int *vetor, int a) {
    int *p;

    for (p = vetor; p < vetor + 10; p++) {
        *p = a;
    }

    printf("vetor:\n");
    for (p = vetor; p < vetor + 10; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

int main() {
    int vet[10], x;
    printf("digite um número: ");
    scanf("%d", &x);

    completarVetor(vet, x);

    return 0;
}