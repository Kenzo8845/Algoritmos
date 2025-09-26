#include <stdio.h>

int inverter(int n, int a) {
    if (n == 0) {
        return a;
    }
    return inverter (n / 10, a * 10 + n % 10);
}

int main() {
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    int resultado = inverter(num, 0);
    printf("numero invertido: %d\n", resultado);

    return 0;
}