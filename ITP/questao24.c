#include <stdio.h>
#include <stdbool.h>

bool VouF(int vetor[], int tamanho) {
    if (tamanho < 2) {
        return true;
    }
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < vetor[i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    int t,i;
    scanf("%d", &t);

    if (t > 0 && t <= 10){
        int vetor[t];
        for (i=0;i<t;i++){
            scanf("%d", &vetor[i]);
        }
        switch (VouF(vetor,t))
        {
        case true: printf("Vetor esta ordenado"); break;
        case false: printf("Vetor nao esta ordenado"); break;
        }
    }
    else{
        
    }
    return 0;
}
