//pede um numero 'n' e printa o numero neperiano one 1/n! é o ultimo numero da somatoria

#include <stdio.h>
double neperiano (int n) {
    double somatorio = 1, fatorial = 1, vet[n];
    int cont = 0;
    for (int j = n; j >= 1; j--) {
        fatorial = 1;
        for (int i = j; i >=  1; i--) {
            fatorial = fatorial * i;
        }
        vet[cont] = fatorial;
        cont++;
    }
    for (int z = 0; z < n; z++) {
        somatorio = somatorio + 1/vet[z];
    }
    
    return somatorio;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lf", neperiano(n));
}