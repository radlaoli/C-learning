#include <stdio.h>

int main() {
    int Vetor[20];
    int Par[20], Impar[20];
    int i;
    int n = 0;
    int m = 0;

    for (i = 0; i < 20; i++) {
        scanf("%d", &Vetor[i]);
    }

    for (i = 0; i < 20; i++) {
        if (Vetor[i] % 2 == 0) {
            Par[n] = Vetor[i];
            n++;
        } else {
            Impar[m] = Vetor[i];
            m++;
        }
    }


printf("Pares: ");
    for (i = 0; i < n; i++) {
        if (i<=n-2){
            printf("%d,", Par[i]);
        }
        else{
            printf("%d", Par[i]);
        }
    }
printf("\n");
printf("Impares: ");
    for (i = 0; i < m; i++) {
        if (i<=m-2){
            printf("%d,", Impar[i]);
        }
        else{
            printf("%d", Impar[i]);
        }
    }


    return 0;
}