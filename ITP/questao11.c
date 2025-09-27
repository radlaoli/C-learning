#include <stdio.h>

int level(int V){
    int nivel;
    if(V>=20){
        nivel = 3;
    }
    else if(V>=10){
        nivel = 2;
    }
    else{
        nivel =1;
    }
    return nivel;
}
int main(){
    int i, vezes,maior=0, n;
    scanf("%d",&vezes);
    for ( i = 1; i <= vezes; i++)
    {
        scanf("%d", &n);
        if (n>maior){
            maior = n;
        }
        else{
            continue;
        }
    }
    printf("Level %d", level(maior));
    return 0;
}