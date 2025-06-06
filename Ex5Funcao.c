//pega um numero n e gera um triangulo lateral com a maior linha tendo n asteristicos
#include <stdio.h>

void triangulo(int n) {
    for (int i = 1; i <= n ; i++) {
        for (int z = 0; z < i; z++) {
            printf("*");
        } 
        printf("\n");
    }
    for (int i = n; i > 0; i--) {
        for (int z = i; z > 1; z--) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    
    scanf("%d", &n);
    triangulo(n);
}