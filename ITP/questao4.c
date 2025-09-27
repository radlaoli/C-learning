#include <stdio.h>

int main(){
    int C, C1, C2;
    scanf("%d %d %d", &C, &C1, &C2);
    int dcc1 = C - C1;
    if (dcc1 < 0) {
        dcc1 = dcc1 * -1;
    }

    int dcc2 = C - C2;
    if (dcc2 < 0) {
        dcc2 = dcc2 * -1;
    }
    if (dcc1 > dcc2){
        printf("F");
    }
    else if (dcc1 < dcc2){
        printf("A");
    }
    else {
        printf("C");
    }
    return 0;
}