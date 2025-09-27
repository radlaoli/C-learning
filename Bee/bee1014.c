#include <stdio.h>

int main(){
    int X;
    float Y, media;
    scanf("%d%f", &X,&Y);
    media = X/Y;
    printf("%.3f km/l\n", media);
    return 0;
}