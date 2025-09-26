/*Considerando a estrutura atleta do exercício anterior, escreva um
programa que leia um arquivo binário contendo os dados de cinco atletas.
Calcule e exiba o nome do atleta mais alto e do mais velho.*/
#include <stdio.h>

struct Atleta {
    char nome[50], esporte[50];
    int idade;
    double altura;
};