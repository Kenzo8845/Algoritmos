/*Faça um programa que leia números positivos e os converta em binário.
Cada número binário deverá ser salvo em uma linha de um arquivo texto. O
programa termina quando o usuário digitar um número negativo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ConverteBinario (int Numero) {
    int Binario = 0;
    double i = 0;
    while (1) {
        Binario = Binario + ((Numero % 2) * pow(10, i));
        Numero /= 2;
        i++;
        
        if (Numero == 1) {
            Binario += pow(10, i);
            break;
        }
    }
    return Binario;
}

int main() {
    int NumeroUser;
    printf("Digite numeros para serem convertidos para binarios:\n(Digite um negativo para sair)");
    FILE *Binarios = fopen("Binarios.txt", "w");
    
    while(1) {
    scanf("%d", &NumeroUser);
     if(NumeroUser < 0) {
        fclose(Binarios);
        return 0;
     }

     fprintf(Binarios, "%d\n", ConverteBinario(NumeroUser));
    }

}
