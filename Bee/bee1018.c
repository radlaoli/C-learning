#include <stdio.h>

int main() {
    int dinheiro, valor_original, cem, cinquenta, vinte, dez, cinco, dois, uum;

    scanf("%d", &dinheiro);
    
    valor_original = dinheiro;

    printf("%d\n", valor_original);

    cem = dinheiro / 100;
    dinheiro = dinheiro % 100;

    cinquenta = dinheiro / 50;
    dinheiro = dinheiro % 50;

    vinte = dinheiro / 20;
    dinheiro = dinheiro % 20;

    dez = dinheiro / 10;
    dinheiro = dinheiro % 10;

    cinco = dinheiro / 5;
    dinheiro = dinheiro % 5;

    dois = dinheiro / 2;
    dinheiro = dinheiro % 2;

    uum = dinheiro / 1;

    printf("%d nota(s) de R$ 100,00\n"
           "%d nota(s) de R$ 50,00\n"
           "%d nota(s) de R$ 20,00\n"
           "%d nota(s) de R$ 10,00\n"
           "%d nota(s) de R$ 5,00\n"
           "%d nota(s) de R$ 2,00\n"
           "%d nota(s) de R$ 1,00\n",
           cem, cinquenta, vinte, dez, cinco, dois, uum);

    return 0;
}