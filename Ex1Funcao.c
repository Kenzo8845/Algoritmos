//callculo de volume de cilindro

#include <stdio.h>

double cilindro (double raio, double altura) {
    double pi = 3.1414592;
    double volume = raio * raio * pi * altura;

    return volume;
}

int main() {
    double raio, altura;

    printf("digite o raio e a altura de seu cilindro:");
    scanf("%lf %lf", &raio, &altura);

    printf("%lf", cilindro(raio, altura));

    return 0;
}