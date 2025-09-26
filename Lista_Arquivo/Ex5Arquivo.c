#include <stdio.h>

void contarLetras(FILE *arquivo, int contagem[26]) {

    char c;
    while((c = fgetc(arquivo)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            contagem[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            contagem[c - 'A']++;
        }
    }
}

void imprimirContagem(int contagem[26]) {
    printf("\n--- Ocorrência de letras no arquivo ---\n");
    for (int i = 0; i < 26; i++) {
        if (contagem[i] > 0) {
            printf("%c: %d\n", 'a' + i, contagem[i]);
        }
    }
}

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagem[26];
    
    for (int i = 0; i < 26; i++) {
    contagem[i] = 0;
    }

    printf("digite um nome para seu arquivo(com o caminho): \n");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo");
        return 1;
    }
    else  {
        contarLetras(arquivo, contagem);
        fclose(arquivo);
        imprimirContagem(contagem);
    }

    return 0;
}