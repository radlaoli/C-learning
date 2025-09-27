#include <stdio.h>

int main() {
    int i, tam1, tam2;
    
    scanf("%d", &tam1);
    int t1[tam1];
    for (i = 0; i < tam1; i++) {
        scanf("%d", &t1[i]);
    }
    
    scanf("%d", &tam2);
    int t2[tam2];
    for (i = 0; i < tam2; i++) {
        scanf("%d", &t2[i]);
    }

    int t[tam1 + tam2];

    for (i = 0; i < tam1; i++) {
        t[i] = t1[i];
    }
    
    for (i = tam1; i < (tam1 + tam2); i++) {
        t[i] = t2[i - tam1];
    }
    for (i = 0; i < (tam1 + tam2); i++) {
        printf("%d ", t[i]);
    }
    return 0;
}