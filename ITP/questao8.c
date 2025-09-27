#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3){
    float media;
    if (tipo=='A'){
        media = (n1+n2+n3)/3;
    }
    else if (tipo=='P'){
        media = (n1*4+n2*5+n3*6)/15;
    }
    return media;
}
int main(){
    float a,b,c;
    char type;
    scanf("%c %f %f %f", &type,&a,&b,&c);
    printf("Média %.2f\n", calculaMedia(type,a,b,c));
    return 0;
}