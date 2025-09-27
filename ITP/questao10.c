#include <stdio.h>

void alcancar(int X, int V1, int V2) {
    if (V1 <= V2) {
        printf("impossivel\n");
    } else {
        int seg = X / (V1 - V2);
        printf("%ds\n", seg);
    }
}

int main() {
    int x, v1, v2;
    scanf("%d %d %d", &x, &v1, &v2);
    alcancar(x, v1, v2);
    return 0;
}