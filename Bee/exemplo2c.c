#include <stdio.h>

int main(){
    int n;
    printf("Digite o número de pétalas:\n");
    scanf("%d",&n);
    if(n%2 != 0){
        printf("Bem me quer! #xatiado");
    }// Não coloca ; porque faz parte do mesmo bloco
    else{
        printf("Mau me quer! Estalo!");
    };
    return 0;
}