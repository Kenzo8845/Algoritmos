#include <stdio.h>
#include <stdlib.h>


struct Aluno {
  int matricula;
  char nome[50];
  float notas[3];
};

int main() {
    struct Aluno Kenai;
    printf("%lld", sizeof(Kenai));

    return 0;
}