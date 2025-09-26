#include <stdio.h>

int soma(int vet[], int n) {
    if (n == 1) {
        return vet[0];
    }
    return vet[n - 1] + soma(vet, n - 1);
}

float media(int vet[], int n) {
    int total = soma(vet, n);
    return (float) total / n;
}

int main() {
    int n;
    printf("digite a quantidade de elementos: ");
    scanf("%d", &n);

    int vet[n];
    for (int i = 0; i < n; i++) {
        printf("digite o elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    float resultado = media(vet, n);
    printf("media: %.2f\n", resultado);

    return 0;
}
