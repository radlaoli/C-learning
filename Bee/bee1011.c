#include <stdio.h>

int main(){
    double pi = 3.14159, R, VOLUME;
    scanf("%lf",&R);
    VOLUME = R*R*R*pi*4/3;
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}