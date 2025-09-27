#include <stdio.h>

int main() {
    int n, i, divisor;
    float v, media, soma = 0.0;
    
    scanf("%d", &n);
    divisor = n;
    
    if (n <= 0) {
        printf("A competicao nao possui dados historicos!");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        scanf("%f", &v);
        if (v < 0) {
            divisor -= 1;
            continue;
        } else {
            soma += v;
        }
    }
    
    if (divisor == 0) {
        media = 0;
        printf("A competicao nao possui dados historicos!");
    } else {
        media = soma / divisor;
        printf("%.2f", media);
    }
    
    return 0;
}