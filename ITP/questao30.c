#include <stdio.h>

int main(){
    int n,m;
    int i,j;
    scanf("%d %d", &n,&m);
    int matriz[n][m];
    if (n <30 && m<30){
        for(i=0; i<n; i++){
            for (j=0;j<m;j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        int num,validacao=0;
        scanf("%d", &num);
        for(i=0; i<n; i++){
            for (j=0;j<m;j++){
                if(num==matriz[i][j]){
                    validacao = 1;    
                }
            }
        }
        if(validacao == 1){
            printf("Matriz tem elemento %d",num);
        }
        else{
            printf("Matriz nao tem elemento %d", num);
        }
    }
    return 0;
}