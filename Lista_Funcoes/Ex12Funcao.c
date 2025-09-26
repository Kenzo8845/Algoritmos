#include <stdio.h>
#include <math.h>

int soma (int n) {
    if (n == 1) {
        return 1;
    }
    return pow(n, 3) + soma(n - 1);
}

int main(void) {
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("soma dos primeiros cubos ate %d: %d", n, soma(n));

    return 0;
}

