#include <stdio.h>

int main(){
    int thor, starlord, spider;
    printf("Escolham 0 ou 1: \n");
    scanf("%d%d%d",&thor,&starlord,&spider);
    if(thor == starlord && thor == spider){
        printf("Empate\n");
    }
    else if (thor!= starlord && starlord==spider){
        printf("Thor");
    }
    else if (thor==spider && spider!=starlord){
        printf("Star Lord");
    }
    else{
        printf("Homem-Aranha");
    };
    return 0;
}