#include <stdio.h>
#define Maxitens 100

typedef struct container
{
    char item[30];
    float preco;
    int quantidade;
} churrasco;

float Custos ( churrasco lista[] ,int qtdItens){
    float total = 0.0;
    for (int i = 0 ; i < qtdItens; i++){
        total += lista[i].preco * lista[i].quantidade ;
    } 
    return total;
}

int main(){
    int cont_or_stop;
    churrasco lista [Maxitens];
    churrasco item;
    int qtdItens = 0;
    do {
        scanf("%s %f %d %d", item.item, &item.preco, &item.quantidade, &cont_or_stop);
        lista[qtdItens] = item;
        qtdItens ++ ;
    } while (cont_or_stop == 1);
    int qtdPessoas;
    scanf("%d" , &qtdPessoas);
    float valorTotal = Custos(lista,qtdItens);
    float totalPorPessoa = valorTotal / qtdPessoas;
    printf("Valor: R$ %.2f \nDivisão R$ %.2f para cada participante ", valorTotal, totalPorPessoa);
    return 0;
}
