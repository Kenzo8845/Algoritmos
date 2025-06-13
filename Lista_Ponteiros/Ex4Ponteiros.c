/*4) Elaborar um programa que leia dois valores inteiros (A e B). Em seguida
faça uma função que retorne a soma do dobro dos dois números lidos. A
função devera ́armazenar o dobro de A na própria variável A e o dobro de B
na própria variável B.*/

#include <stdio.h>

int SomaDoDobro (int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}

int main() {
    int a, b, *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    
    int resultado = SomaDoDobro(pa, pb);
    printf("o dobro do primeiro: %d\no dobro do segundo: %d\na soma dos dobros: %d", a, b, resultado);

    return 0;
}
