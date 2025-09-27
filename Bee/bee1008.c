#include <stdio.h>

int main(){
    int empregados, horas;
    float salariohora, salariototal;
    scanf("%d %d %f", &empregados,&horas,&salariohora);
    salariototal = horas*salariohora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", empregados, salariototal);
    return 0;
}