#include <stdio.h>

int main(){
    int N[8], M[8];
    int i;
    for (i = 0; i < 8; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 8; i++) {
        M[i] = N[7 - i];
    }
    for (i = 0; i < 8; i++) {
        if (i < 7){
            printf("%d,", M[i]);
        }
        else{
            printf("%d", M[i]);
        }
    }

    return 0;
}
