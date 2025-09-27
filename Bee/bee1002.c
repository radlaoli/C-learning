#include <stdio.h>

int main() {
    double pi = 3.14159, R, A;
    scanf("%lf", &R);
    A = (R*R)*pi;
    printf("A=%.4lf\n", A);
    return 0;
}