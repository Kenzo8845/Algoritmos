/*13) Faça um programa em C que receba uma frase qualquer fornecida pelo
usuário, que calcule e mostre quantos caracteres essa frase possui. Esse
programa deve conter ponteiros para manusear a string. A frase deve possuir
no máximo 50 caracteres.*/

#include <stdio.h>
#include <stdlib.h>

int contador(char *palavra) {
    int contador = 0;
    for (int i = 0; *(palavra + i) != '\n'; i++) {  //'\n' por causa do fgets :)
        if(*(palavra + i) != ' ') {
        contador++;
        }
    }
    return contador;
}
int main() {
    char palavra[50];

    fgets(palavra, sizeof(palavra), stdin);
    int tamanho = contador(palavra);

    printf("tamanho da sua palavra: %d", tamanho);

    return 0;
}