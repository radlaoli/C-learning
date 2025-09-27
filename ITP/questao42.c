#include <stdio.h>

int main() {
    int C,C1,C2,distancia1,distancia2;
    scanf("%d %d %d",&C,&C1,&C2);
    if (C1 < C && C2 > C) {
        distancia1 = C - C1;
        distancia2 = C2 - C;
        if (distancia1 < distancia2) {
            printf("A");
        } else if (distancia2 < distancia1) {
            printf("F");
        } else {
            printf("C");
        }
    }
    else if (C2 < C && C1 > C) {
        distancia1 = C - C2;
        distancia2 = C1 - C;
        if (distancia1 < distancia2) {
            printf("A");
        } else if (distancia2 < distancia1) {
            printf("F");
        } else {
            printf("C");
        }
    }
    else {
        printf("C");
    }
    return 0;
}