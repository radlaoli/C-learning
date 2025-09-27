#include <stdio.h>

int main(){
    int numero1, numero2,i, j;
    scanf("%d %d", &numero1, &numero2);
    for (i = numero1; i <= numero2; i++){
        for (j = numero1; j <= i; j++){
            printf("%d\n", j);
            
        };
    };
    return 0;
}