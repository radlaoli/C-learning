#include <stdio.h>

int main() {
    int a, b;
    double i, j;
    for (a = 0; a <= 10; a++) {
        i = a * 0.2;
        for (b = 1; b <= 3; b++) {
            j = b + i;
            if (a % 5 == 0) {
                printf("I=%d J=%d\n", (int)i, (int)j);
            } else {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
    }
    return 0;
}
