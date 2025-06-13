/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/

#include <stdio.h>

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    
    if (pa > pb) {
        printf("o maior endereco entre os dois numeros e: %p\n", pa);
    }
    else {
        printf("o maior endereco entre os dois numeros e: %p\n", pb);
    }
    
    return 0;
}
