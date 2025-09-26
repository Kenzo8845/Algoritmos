#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", fibonacci(x));

    return 0;
}
