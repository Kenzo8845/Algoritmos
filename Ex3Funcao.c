//calcula a media de 3 notas, "a" para normal, "p" para ponderada peso 5, 3, e 2.
#include <stdio.h>

float media(char tipo, float nota1, float nota2, float nota3) {
    float media;
    
    switch (tipo) {
        case 'a': {
            media = (nota1 + nota2 + nota3) / 3;
            break;
        }
        case 'p': {
            media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
            break;
        }
        default: {
            printf("invalido!");
            break;
        }
    }
    return media;
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    printf("voce deseja media comum (a) ou media ponderada(p)?");
    scanf("%c", &tipo);

    printf("agora digite as notas:");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("media: %.2f", media(tipo, nota1, nota2, nota3));

    return 0;
}