//pega um numero (ou dois) e conta quantos digitos tem nele, ou diz se eles sao permutacoes
#include <stdio.h> 

int contadigitos(int n, int d) {
    int i = 0, cont = 0, digitos[20];
    
    while (n > 0) {
        digitos[i] = n % 10;
        n = n / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (digitos[j] == d) {
            cont++;
        }
    }

    return cont;
}

void comparacao(int n1, int n2) {
    int quantos1[9], quantos2[9], cont = 0;
    
    for (int i = 1; i <= 9; i++) {
        quantos1[i - 1] = contadigitos(n1, i);
        quantos2[i - 1] = contadigitos(n2, i);
    }
    for (int i = 0; i < 9; i++) {
        if (quantos1[i] == quantos2[i]) {
            cont++;
        }
    }
    if (cont == 9) {
        printf("os numeros sao permutacoes!");
    }
    else {
        printf("os numeros nao sao permutacoes :(");
    }
}

int main() {
    int n, d, a, n2;

    printf("digite 1 para digitar um numero e um digito, e saber quantas vezes esse digito aparece no numero:\ndigite 2 para digitar 2 numeros e saber se eles sao permutacoes:");
    scanf("%d", &a);
    
    switch (a) {
        case 1:
            scanf("%d %d", &n, &d);

            printf("%d aparece %d vezes", d, contadigitos(n, d));
            break;

        case 2:
            scanf("%d %d", &n, &n2);
            comparacao(n, n2);
            break;

        
        default:
            printf("invalido!");
    }
    return 0;
}