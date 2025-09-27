#include <stdio.h>
#include <string.h>

int main(){
    char frutas[8][15],fruta[15];
    int i;
    for ( i = 0; i < 8; i++){
        scanf("%s", frutas[i]);
    }
    scanf("%s", fruta);
    for ( i = 0; i < 8; i++) {
        if (strcmp(frutas[i],fruta) == 0){
            printf("enconntrei\n");
        }
        else{
            printf("não\n");
        }   
    }
    return 0;
}