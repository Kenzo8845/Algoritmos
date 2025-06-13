/*3) Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é
chamada passando duas variáveis A e B por exemplo e, após a execução da
função, A conterá o valor de B e B terá o valor de A.*/

#include <stdio.h>

void inverte(int *a, int *b) {
    int aux;

    aux = *b;
    *b = *a; 
    *a = aux;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);

    inverte(pa, pb);
    printf("%d %d", a, b);

    return 0;
}