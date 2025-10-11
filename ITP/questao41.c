#include <stdio.h>
#include <math.h>

typedef struct tCoordenada
{
    float x;
    float y;
}tCoordenada;

float dist(tCoordenada p1,tCoordenada p2){
    float d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return d;

}

int main(){
    tCoordenada p1;
    tCoordenada p2;
    scanf("%f %f %f %f", &p1.x,&p1.y,&p2.x,&p2.y);
    printf("Distância: %.2f", dist(p1,p2));
    return 0 ;
}