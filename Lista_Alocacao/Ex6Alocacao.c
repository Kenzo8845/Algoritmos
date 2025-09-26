#include <stdio.h>
#include <stdlib.h>

char *StringInversa(char String[]) {
    int cont = 0, aux = 0;
    while (*(String + cont) != '\0') {
        cont++;

    }
    char *PalavraInvertida = (char *) malloc((cont + 1) * sizeof(char));
    for (int i = cont - 1; i >= 0; i--) {
        *(PalavraInvertida + aux) = String[i];
        aux++;
        cont--;
    }
    return PalavraInvertida;
}

int main() {
    char palavra[50] = "macaco";

    char* Inversa = StringInversa(palavra);

    printf("%s", Inversa);
}