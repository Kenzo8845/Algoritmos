//pega um total de horas, minutos e segundos e transforma no total de segundos

#include <stdio.h>

int TotalDeSegundos(int horas, int minutos, int segundos) {
    int total = horas * 3600 + minutos * 60 + segundos;

    return total;
}

int main() {
    int horas, minutos, segundos;
    
    printf("digite a quantidade de horas, minutos e segundos respectivamente:");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("%d segundos", TotalDeSegundos(horas, minutos, segundos));

    return 0;
}