#include <stdio.h>

int maior( int t, int vetor[]){
    int maior = vetor[0], i;
    for (i=0; i<t; i++){
        if (vetor[i]> maior){
            maior = vetor[i];
        }
    }
    return maior;
};

int main(){
    int t,i;
    scanf("%d", &t);
    int N[t];
    for (i=0; i<t; i++){
        scanf("%d", &N[i]);
    }
    printf("O maior é: %d", maior(t,N));
    return 0;
}