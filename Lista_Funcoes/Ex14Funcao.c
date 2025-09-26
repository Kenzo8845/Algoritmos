#include <stdio.h>

float potencia(float x, float y) {
    if (y == 0) {
        return 1;
    }
    return x * potencia(x, y - 1);
}
int main() {
    float base, expoente;
    printf("digite a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    printf("%.1f", potencia(base, expoente));

    return 0;
}

