#include <stdio.h>

int arrendondar(float xOriginal) {
    int xArren;
    int x = xOriginal;

    if (x > 0) {
        if (xOriginal > x + 0.5) {
            xArren = x + 1;
        }
        else if (xOriginal < x + 0.5) {
            xArren = x;
        }
        else {
            xArren = x + 1;
        }
    }
    else if (x < 0) {
        if (xOriginal > x - 0.5) {
            xArren = x;
        }
        else if (xOriginal < x - 0.5) {
            xArren = x - 1;
        }
        else {
            xArren = x - 1;
        }
}
    else {
        if (xOriginal >= 0.5) {
            xArren = 1;
        } else if (xOriginal <= -0.5) {
            xArren = -1;
        } else {
            xArren = 0;
        }
    }
    return xArren;
}

int main(){
    float n;
    printf("digite um numero para arredondar: ");
    scanf("%f", &n);

    printf("numero arredondado: %d", arrendondar(n));

    return 0;
}
