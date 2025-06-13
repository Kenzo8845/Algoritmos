/*7) Elabore uma função que receba duas strings como parâmetros e verifique
se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros
para acessar os caracteres das strings.*/

#include <stdio.h>
#include <stdlib.h>

int estadentro(char *a, char *b) {
    char *p1, *p2, *aux;
    
    for (p1 = a; *p1 != '\0'; p1++) {
        aux = p1;
        p2 = b;
        while (*aux != '\0' && *p2 != '\0' && *aux == *p2) {
            aux ++;
            p2++;
        }
        if (*p2 == '\0') {
            return 1;
        }
    }
    return 0;
}
int main() {
    char palavra1[100];
    char palavra2[100];

    fgets(palavra1, sizeof(palavra1), stdin);
    setbuf(stdin, NULL);
    fgets(palavra2, sizeof(palavra2), stdin);
    setbuf(stdin, NULL);

    int retorno = estadentro(palavra1, palavra2);

    if (retorno) {
        printf("a segunda palavra esta dentro da primeira!!");
    }
    else {
        printf("a segunda palavra nao esta dentro da primeira!!");
    }
    return 0;
}