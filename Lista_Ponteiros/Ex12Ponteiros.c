/*12) Faça um programa em C que receba uma frase do usuário e mostre a
frase, palavra por palavra, uma em cada linha diferente. Esse programa deve
conter ponteiros na para manusear a string. A frase deve possuir no máximo
60 caracteres.*/

#include <stdio.h>

void separarFrase(char *frase) {

    while (*frase != '\0') {
        if (*frase == ' ') {
            printf("\n"); 
        } else {
            printf("%c", *frase);
        }
        frase++;
    }

    printf("\n");
}

int main() {
    char frase[61];

    printf("digite uma frase(máx: 60 caracteres): ");
    fgets(frase, 61, stdin);

    separarFrase(frase);
}