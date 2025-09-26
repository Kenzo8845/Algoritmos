#include <stdio.h>

int CondicaoDeVitoria(char jogo[3][3]) {
    for (int linha = 0; linha < 3; linha++) {
        if (jogo[linha][0] != ' ' && jogo[linha][0] == jogo[linha][1] && jogo[linha][1] == jogo[linha][2]) {
            return 1;
        }
    }
    for (int coluna = 0; coluna < 3; coluna++) {
        if (jogo[0][coluna] != ' ' && jogo[0][coluna] == jogo[1][coluna] && jogo[1][coluna] == jogo[2][coluna]) {
            return 1;
        }
    }
    if (jogo[0][0] != ' ' && jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]) {
        return 1;
    }
    if (jogo[0][2] != ' ' && jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0]) {
        return 1;
    }
    return 0;
}

void imprimejogo(char jogo[3][3]) {
    printf("\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf(" %c ", jogo[linha][coluna]);
            if (coluna < 2) printf("|");
        }
        printf("\n");
        if (linha < 2) printf("---+---+---\n");
    }
    printf("\n");
}

int main() {
    char jogo[3][3];
    int linhaescolhida, colunaescolhida;
    
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            jogo[linha][coluna] = ' ';
        }
    }

    int rodada = 0;
    while (rodada < 9 && CondicaoDeVitoria(jogo) == 0) {
        imprimejogo(jogo);

        if (rodada % 2 == 0) {
            printf("Vez do O (linha coluna): ");
        } else {
            printf("Vez do X (linha coluna): ");
        }

        scanf("%d %d", &linhaescolhida, &colunaescolhida);

        if (linhaescolhida < 0 || linhaescolhida > 2 || colunaescolhida < 0 || colunaescolhida > 2) {
            printf("Posição inválida! Tente novamente.\n");
            continue;
        }

        if (jogo[linhaescolhida][colunaescolhida] != ' ') {
            printf("Essa posição já está ocupada. Tente novamente.\n");
            continue;
        }

        jogo[linhaescolhida][colunaescolhida] = (rodada % 2 == 0) ? 'O' : 'X';
        rodada++;
    }

    imprimejogo(jogo);

    if (CondicaoDeVitoria(jogo)) {
        printf("Jogador %c venceu!\n", (rodada - 1) % 2 == 0 ? 'O' : 'X');
    } else {
        printf("Empate!\n");
    }

    return 0;
}
