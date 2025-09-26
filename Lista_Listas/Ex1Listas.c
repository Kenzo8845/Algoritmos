#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int valor;
    struct elemento *proximo;
} elemento;

typedef struct Lista {
    elemento *Inicio;
} Lista;

Lista *CriarLista() {
    Lista *Nova = (Lista*) malloc(sizeof(Lista));
    Nova->Inicio = NULL;

    return Nova;
}

void ExibirLista(Lista *lista) {
    elemento *atual = lista->Inicio;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
};

int TamanhoLista(Lista *lista) {
    int tamanho = 0;
    elemento *atual = lista->Inicio;
    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }
    return tamanho;
}

void inserirNoInicio(Lista *lista, int valor) {
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    novo->valor = valor;
    novo->proximo = lista->Inicio;
    lista->Inicio = novo;
}

int buscarOrdenado(Lista *lista, int numero) {
    elemento *atual = lista->Inicio;
    while (atual != NULL) {
        if (atual->valor == numero) {
            return 1;
        }
        if (atual->valor > numero) {
            return 0;
        }
        else {
            atual = atual->proximo;
        }
    }
    return 0;
}

int buscar(Lista *lista, int numero) {
    elemento *atual = lista->Inicio;
    while (atual != NULL) {
        if (atual->valor == numero) {
            return 1;
        }
        else {
            atual = atual->proximo;
        }
    }
    return 0;
}

void inserirNoFim(Lista *lista, int numero) {
    elemento *atual = lista->Inicio;
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    novo->valor = numero;
    novo->proximo = NULL;
    
    if (lista->Inicio == NULL) {
        lista->Inicio = novo;
        return;
    }
    
    while(atual->proximo != NULL) {
        atual = atual->proximo;
    }

    atual->proximo = novo;
} 

void inserirOrdenado(Lista *lista, int numero) {
    elemento *novo = (elemento*) malloc(sizeof(elemento));
    novo->valor = numero;

    if (lista->Inicio == NULL) {
        lista->Inicio = novo;
        novo->proximo = NULL;
        return;
    }

    else if (lista->Inicio->valor > numero) {
        novo->proximo = lista->Inicio;
        lista->Inicio = novo;
        return;
    }

    elemento *anterior = lista->Inicio;
    elemento *atual = anterior->proximo;
    
    while (atual != NULL && atual->proximo->valor < numero) {
        anterior = atual;
        atual = atual->proximo;
    }

    novo->proximo = atual;
    anterior->proximo = novo;
}

void  excluirElemento(Lista *lista, int numero) {
    if (!buscar(lista, numero)) {
        return;
    }
    if(lista->Inicio == NULL) {
        return;
    }
    if (lista->Inicio->valor == numero && lista->Inicio->proximo == NULL) {
        lista->Inicio == NULL;
        return;
    }
    else if(lista->Inicio->valor == numero) {
        lista->Inicio = lista->Inicio->proximo;
        return;
    }

    elemento *anterior = lista->Inicio;
    elemento *atual = anterior->proximo;
    
    while(atual->proximo != NULL && anterior->proximo->valor != numero) {
        anterior = anterior->proximo;
        atual = atual->proximo;
    }

    if (atual->proximo == NULL && atual->valor != numero) {
        return;
    }

    else {
        anterior->proximo = atual->proximo;
        printf("%d removido!");
        free(atual);
    }
}

void reinicializarLista(Lista *lista) {
    elemento *atual = lista->Inicio;
    elemento *proximo;

    while(atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    lista->Inicio = NULL;
}

void inserirApos(Lista *lista, int valor, int casa) {
    if(casa > TamanhoLista(lista)) {
        printf("Nao existem esse tanto de elementos na lista");
        return;
    }
    if(casa == 0) {
        inserirNoInicio(lista, valor);
        return;
    }
    if(casa == TamanhoLista(lista)) {
        inserirNoFim(lista, valor);
        return;
    }

    elemento *novo = (elemento*) malloc(sizeof(elemento));
    novo->valor = valor;
    novo->proximo = NULL;

    elemento *anterior = lista->Inicio;

    for (int i = 1; i < casa; i++) { 
        anterior = anterior->proximo;
    }
    
    novo->proximo = anterior->proximo;
    anterior->proximo = novo;
}

void ordenarLista(Lista *lista) {
    if(lista->Inicio == NULL || lista->Inicio->proximo == NULL) {
        return;
    }

    elemento *atual;
    int contador = 0; int tamanho = TamanhoLista(lista), aux;
    
    while(1) {
        atual = lista->Inicio;
        contador = 0;
        
        while (atual->proximo != NULL) {
            if(atual->valor > atual->proximo->valor) {
                aux = atual->proximo->valor;
                atual->proximo->valor = atual->valor;
                atual->valor = aux;
                contador++;
            }
            atual = atual->proximo;
        }
        
        if(contador == 0) {
            return;
        }
    }
}

void inverteLista(Lista *lista) {
    if (lista->Inicio == NULL || lista->Inicio->proximo == NULL) {
        return;
    }

    elemento *anterior = NULL;
    elemento *atual = lista->Inicio;
    elemento *proximo = NULL;

    while(atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    lista->Inicio = anterior;
}
