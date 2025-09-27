#include <stdio.h>

int main(){
    int produto1, unidades1, produto2, unidades2;
    float preco1,preco2,valor1,valor2, valort;
    scanf("%d%d%f", &produto1, &unidades1,&preco1);
    scanf("%d%d%f",&produto2,&unidades2,&preco2);
    valor1 = unidades1*preco1;
    valor2 = unidades2*preco2;
    valort = valor1+valor2;
    printf("VALOR A PAGAR: R$ %.2f\n",valort);
    return 0;
}