#include <stdio.h>
#include <stdlib.h> // para a função abs()

int main() {
    int a, b, c;
    int maior_ab, maior;

    // Lê os três valores inteiros
    scanf("%d %d %d", &a, &b, &c);

    // Usa a fórmula para encontrar o maior entre dois números
    maior_ab = (a + b + abs(a - b)) / 2;

    // Agora compara o maior entre os dois com o terceiro número
    maior = (maior_ab + c + abs(maior_ab - c)) / 2;

    // Exibe o resultado
    printf("%d eh o maior\n", maior);

    return 0;
}
