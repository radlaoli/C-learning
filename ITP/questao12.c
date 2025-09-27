#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    if (eh_primo(n) && eh_primo(n + 2)) {
        printf("Numero forma par de gemeos\n");
    } else {
        printf("Numero nao forma par de gemeos\n");
    }

    return 0;
}