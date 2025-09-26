/*Faça um programa que leia um arquivo texto contendo uma lista de
compras. Cada linha do arquivo possui nome, quantidade e valor unitário do
produto. O programa então exibe o total da compra.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int quantidade;
    double v_unitario, v_total = 0;

    FILE *compras = fopen("compras.txt", "r");
    
    while(fscanf(compras, "%s %d %lf", nome, &quantidade, &v_unitario) == 3) {
        v_total += (quantidade * v_unitario);
    }

    fclose(compras);

    printf("Valor total: %.2lf", v_total);

    return 0;
}
