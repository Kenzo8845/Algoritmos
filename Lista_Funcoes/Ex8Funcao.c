//pega um horario de inicio e um de termino e calcula o tempo entre eles

#include <stdio.h>

int tempodejogo(int hora1, int minuto1, int hora2, int minuto2) {
    int minutototal;

    if (hora2 >= hora1) {
        if (minuto2 >= minuto1) {
            minutototal = (hora2 - hora1) * 60 + minuto2 - minuto1;
        }
        else 
        minutototal = (hora2 - hora1 - 1) * 60 + 60 - minuto1 + minuto2;
    }
    else
    if (minuto2 >= minuto1) {
        minutototal = (24 - hora1 + hora2) * 60 + minuto2 - minuto1;
    }
        else 
        minutototal = (24 - hora1 + hora2) * 60 + 60 - minuto1 + minuto2;

    return minutototal;
}

int main() {
    int hora1, hora2, minuto1, minuto2;
    
    printf("digite o horario de inicio do jogo, primeiro as horas, entao os minutos:");
    scanf("%d %d", &hora1, &minuto1);

    printf("digite o horario de termino do jogo, primeiro as horas, entao os minutos:");
    scanf("%d %d", &hora2, &minuto2);

    printf("total de minutos decorrido no jogo: %d", tempodejogo(hora1, minuto1, hora2, minuto2));

    return 0;
}