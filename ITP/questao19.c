#include <stdio.h>

int valores(int vetor[], int n){
    int i,j;

    for (i=0; i<n; i++){
        int repetido = 0;
        for(j=0; j<i; j++){
            if (vetor[i] == vetor[j]){
                repetido = 1;
                break;
            }
        }
        if (repetido == 0){
            printf("%d ", vetor[i]);
        }
    }
    return 0; 
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int Vetor[tamanho], i;
    for(i=0;i<tamanho;i++){
        scanf("%d", &Vetor[i]);
    }

    valores(Vetor,tamanho);
    return 0;
}