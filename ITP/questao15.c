#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5],soma[5];
    int i;
    for (i = 0; i < 5; i++){
        scanf("%d", &vetor1[i]);
    }
        for (i = 0; i < 5; i++){
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }
    for (i = 0; i < 5; i++){
        printf("%d ", soma[i]);
    }
    return 0;
}