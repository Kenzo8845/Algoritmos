#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cedula {
    char palavra[50];
    struct cedula *proximo;
} cedula;

typedef struct pilha {
    cedula *topo;
} pilha;

pilha *CriaFrase() {
    pilha *Frase = (pilha*) malloc(sizeof(pilha));
    cedula *ponto = (cedula*) malloc(sizeof(cedula));
    ponto->palavra[0] = '.';
    ponto->palavra[1] = '\0';
    Frase->topo = ponto;

    return Frase;
}


void inserirNoTopo(pilha *Frase, char palavra[]) {
    cedula *Nova = (cedula*) malloc(sizeof(cedula));
    strcpy(Nova->palavra, palavra);
    Nova->proximo = Frase->topo;
    Frase->topo = Nova;
}

char *InvertePalavra(char Palavra[]) {
    int tamanho = strlen(Palavra);
    char *PalavraInvertida = (char*) malloc((tamanho + 1) * sizeof(char));
    for (int i = 0; i < tamanho; i++) {
        PalavraInvertida[i] = Palavra[tamanho - 1 - i];
    }
    PalavraInvertida[tamanho] = '\0';
    return PalavraInvertida;
}

    void mostraFraseInvertida(pilha *Frase) {
    cedula *Atual = Frase->topo;
    while(Atual->palavra[0] != '.') {
        char *invertida = InvertePalavra(Atual->palavra);
        printf("%s ", invertida);
        free(invertida);
        Atual = Atual->proximo;
    }
    printf(".");
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main() {
    char Palavra[50];
    pilha *FraseUser = CriaFrase();

    printf("digite palavras para a frase, e '.' para acabar:");

    while (1) {
        fgets(Palavra, sizeof(Palavra), stdin);
        Palavra[strcspn(Palavra, "\n")] = '\0';
        
        if (strcmp(Palavra, ".") == 0) {
            break;
        }

        inserirNoTopo(FraseUser, Palavra);
    }

    mostraFraseInvertida(FraseUser);
}

