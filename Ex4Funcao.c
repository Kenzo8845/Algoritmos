//pega um numero e retorna o maior fator primo desse numero;
#include <stdio.h>

int FatorPrimo(int numero) {
    int fatores = 0;
    for (int i = numero - 1; i > 1; i--) {
        if (numero % i == 0) {
                fatores++;
        }
    }
    if (fatores == 0) {
        return numero;
    }

    for (int i = numero/2 + 1; i > 1; i--) {
        for (int z = i; z > 1; z--) {
            if (i % z == 0) {
                fatores ++;
            }
        }
        if ((fatores == 1 && numero % i == 0) ) {
            return i;
        }
        fatores = 0;
    }
    return 1;
}

int main() {
    int numero;

    scanf("%d", &numero);
    printf("%d", FatorPrimo(numero));

    return 0;
}