#include <stdio.h>
#include <string.h>

typedef enum {
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS
} TipoChocolates;

typedef struct {
    char nome[51];
    float peso;
    float preco;
    TipoChocolates tipo;
} Chocolate;

int main() {
    int qtd;
    scanf("%d", &qtd);

    Chocolate chocolates[qtd];
    int cont_branco = 0, cont_amargo = 0, cont_ao_leite = 0, cont_castanhas = 0;

    for (int i = 0; i < qtd; i++) {
        char tipoStr[20];
        scanf("%s", chocolates[i].nome);
        scanf("%f", &chocolates[i].peso);
        scanf("%f", &chocolates[i].preco);
        scanf("%s", tipoStr);

        if (strcmp(tipoStr, "BRANCO") == 0) {
            chocolates[i].tipo = BRANCO;
            cont_branco++;
        } else if (strcmp(tipoStr, "AMARGO") == 0) {
            chocolates[i].tipo = AMARGO;
            cont_amargo++;
        } else if (strcmp(tipoStr, "AO_LEITE") == 0) {
            chocolates[i].tipo = AO_LEITE;
            cont_ao_leite++;
        } else if (strcmp(tipoStr, "COM_CASTANHAS") == 0) {
            chocolates[i].tipo = COM_CASTANHAS;
            cont_castanhas++;
        }
    }

    int maisCaro = 0, maisBarato = 0;
    for (int i = 1; i < qtd; i++) {
        if (chocolates[i].preco > chocolates[maisCaro].preco) {
            maisCaro = i;
        }
        if (chocolates[i].preco < chocolates[maisBarato].preco) {
            maisBarato = i;
        }
    }

    printf("Total de chocolates BRANCO: %d\n", cont_branco);
    printf("Total de chocolates AMARGO: %d\n", cont_amargo);
    printf("Total de chocolates AO_LEITE: %d\n", cont_ao_leite);
    printf("Total de chocolates COM_CASTANHAS: %d\n", cont_castanhas);
    printf("Chocolate mais caro: %s - R$%.2f\n", chocolates[maisCaro].nome, chocolates[maisCaro].preco);
    printf("Chocolate mais barato: %s - R$%.2f\n", chocolates[maisBarato].nome, chocolates[maisBarato].preco);

    return 0;
}
