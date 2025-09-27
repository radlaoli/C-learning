#include <stdio.h>

int main(){
    double sfixo,vendas,SALARIO;
    char nome;
    scanf("%s%lf%lf", &nome,&sfixo,&vendas);
    SALARIO = (0.15*vendas)+sfixo;
    printf("TOTAL = R$ %.2lf\n", SALARIO);
    return 0;
}