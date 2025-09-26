/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o
nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que
leia os dados de cinco atletas e os armazene em um arquivo.*/
#include <stdio.h>

struct Atleta {
    char nome[50], esporte[50];
    int idade;
    double altura;
};

int main() {
    struct Atleta Atletas[5];

    FILE *Atletastxt = fopen("atletas.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("digite o nome, esporte, idade e altura de seu atleta:");
        
        fgets(Atletas[i].nome, sizeof(Atletas[i].nome), stdin);
          for (int j = 0; Atletas[i].nome[j] != '\0'; j++) {
            if (Atletas[i].nome[j] == '\n') {
                Atletas[i].nome[j] = '\0';
                break;
            }
        }
        
        fgets(Atletas[i].esporte, sizeof(Atletas[i].esporte), stdin);
          for (int j = 0; Atletas[i].esporte[j] != '\0'; j++) {
            if (Atletas[i].esporte[j] == '\n') {
                Atletas[i].esporte[j] = '\0';
                break;
            }
        }
        
        scanf("%d", &Atletas[i].idade);
        
        scanf("%lf", &Atletas[i].altura);

        while (getchar() != '\n');
    }

    for (int i = 0; i < 5; i++) {
        fprintf(Atletastxt, "Nome: %s\n", Atletas[i].nome);
        fprintf(Atletastxt, "Esporte: %s\n", Atletas[i].esporte);
        fprintf(Atletastxt, "Idade: %d\n", Atletas[i].idade);
        fprintf(Atletastxt, "Altura: %.2lf\n\n", Atletas[i].altura);
    }

    fclose(Atletastxt);
    return 0;
}