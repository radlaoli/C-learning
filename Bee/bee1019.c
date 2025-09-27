#include <stdio.h>

int main(){
    int segundagem, horas, minutos, segundos;
    scanf("%d",&segundagem);
    horas = segundagem/3600;
    segundagem = segundagem % 3600;
    minutos = segundagem/60;
    segundos = segundagem %60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}