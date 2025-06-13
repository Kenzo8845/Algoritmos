/*1) Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros.
Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e apo ́s a modificação.*/

#include <stdio.h>

int main() {
    int numero = 10;
    double real = 3.1415;
    char c = 'a';

    int *num = &numero;
    double *r = &real;
    char *C= &c;
    printf("inteiro antes: %d\nreal antes: %lf\nchar antes: %c\n", numero, real, c);
    
    *num += 10;
    *r *= 3;
    *C = 'B';
    printf("inteiro depois: %d\nreal depois: %lf\nchar depois: %c", numero, real, c);



}