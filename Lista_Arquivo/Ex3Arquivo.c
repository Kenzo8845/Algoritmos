/*Dado um arquivo contendo um conjunto de nomes e datas de nascimento
(dia, mês e ano, isto é, três inteiros seguidos), escrever um programa que leia
esse arquivo e a data atual e gere outro arquivo contendo o nome e a idade.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int dia, mes, ano;
    int diaHoje, mesHoje, anoHoje;

    printf("Qual a data de hoje?");
    scanf("%d %d %d", &diaHoje, &mesHoje, &anoHoje);

    FILE *NomesDatas = fopen("NomesDatas.txt", "r");
    FILE *NomesIdades = fopen("NomesIdades.txt", "w");



    while(fscanf(NomesDatas, "%s %d %d %d", nome, &dia, &mes, &ano) == 4) {
        if (mes >= mesHoje && dia >= diaHoje) {               // nao fez aniversario ainda
            fprintf(NomesIdades, "%s %d\n", nome, anoHoje - ano - 1);
        }
        else {
            fprintf(NomesIdades, "%s %d\n", nome, anoHoje - ano);
        }
    }

    fclose(NomesDatas);
    fclose(NomesIdades);

    return 0;
}