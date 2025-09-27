#include <stdio.h>

int main(){
    int codigo, dinheiro, valor;
    scanf("%d %d", &codigo,&dinheiro);
    switch (codigo)
    {case 1: valor = 12; break;
    case 2: valor = 23; break;
    case 3: valor = 31; break;
    case 4: valor = 28; break;
    case 5: valor =15; break;
    default: break;}
    if(dinheiro>valor){
        printf("Troco = %d reais", dinheiro-valor);
    }
    else if (valor>dinheiro){
        printf("Saldo insuficiente! Falta %d reais", valor-dinheiro);
    }
    else{
        printf("Deu certim!");
    }
    return 0;
}