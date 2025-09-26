#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
    char Nome[50], Endereco[100];
    int Idade;
};

struct Cadastro *RetornaVetor(int N) {
    struct Cadastro *VetorN = (struct Cadastro *) malloc(N * sizeof(struct Cadastro));

    return VetorN;
}

int main() {
    int N;
    printf("Digite um tamanho para seu vetor de cadastros:");
    scanf("%d", &N);
    setbuf(stdin, NULL);

    struct Cadastro *Vet = RetornaVetor(N);

    for (int i = 0; i < N; i++) {
        printf("Digite o nome para seu %d cadastro:", i + 1);
        fgets((Vet + i)->Nome, sizeof((Vet + i)->Nome), stdin);
        setbuf(stdin, NULL);

        printf("Digite o endereco para seu %d cadastro:", i + 1);
        fgets((Vet + i)->Endereco, sizeof((Vet + i)->Endereco), stdin);
        setbuf(stdin, NULL);

        printf("Digite a idade para ser %d cadastro:", i + 1);
        scanf("%d", &(Vet + i)->Idade);
        setbuf(stdin, NULL);
    }

    return 0;
}
