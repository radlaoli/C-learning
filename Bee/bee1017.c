#include <stdio.h>

int main(){
    int tempo,velomedia, kml = 12;
    float conta;
    scanf("%d%d",&tempo,&velomedia);
    conta = (float)(tempo*velomedia)/kml;
    printf("%.3f\n",conta) ;
    return 0;
}