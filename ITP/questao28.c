#include <stdio.h>

int diagonais(int d, int matriz[d][d]){
    int soma=0, i, j;
    for (i=0;i<d;i++){
        for (j=0;j<d;j++){
            if (i==j){
                soma+= matriz[i][j];
            }
        }
    }
    for (i=0;i<d;i++){
        for (j=0;j<d;j++){
            if (i+j==d-1){
                soma+= matriz[i][j];
            }
        }
    }
    return soma;
}

int main (){
    int dimensao, i,j;
    scanf("%d", &dimensao);
    int matriz[dimensao][dimensao];
    for (i=0;i<dimensao;i++){
        for (j=0;j<dimensao;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("%d", diagonais(dimensao, matriz));
    return 0;
}